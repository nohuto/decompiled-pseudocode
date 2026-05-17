/*
 * XREFs of RtlpHpLfhBucketAddSubsegment @ 0x18004E6E0
 * Callers:
 *     RtlpHpLfhPrivateSlotShutdown @ 0x18004AEFC (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x18004B3D8 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x18004B540 (RtlpHpLfhBucketGetSubsegment.c)
 * Callees:
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x18004E450 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhSubsegmentReformatAsMulti @ 0x18004E800 (RtlpHpLfhSubsegmentReformatAsMulti.c)
 *     RtlpHpLfhSubsegmentFree @ 0x18004F304 (RtlpHpLfhSubsegmentFree.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

char __fastcall RtlpHpLfhBucketAddSubsegment(__int64 a1, char *a2, __int64 **a3, __int64 a4)
{
  __int64 *v4; // rsi
  char v5; // di
  __int16 v6; // ax
  __int64 *v10; // r8
  __int64 v11; // rax
  int v12; // ebp
  __int64 *v13; // rdx
  __int64 **v14; // rax

  v4 = *a3;
  v5 = a4 & 0xC;
  LOBYTE(v6) = 8;
  if ( (a4 & 0xC) == 0 )
    v5 = 8;
  if ( v4 != (__int64 *)a3 )
  {
    v12 = a4 & 2;
    do
    {
      v13 = v4;
      v4 = (__int64 *)*v4;
      if ( v12 || (v6 = *((_WORD *)v13 + 17), *((_WORD *)v13 + 16) != v6) )
      {
        if ( (*((_BYTE *)v13 + 51) & 1) != 0 )
        {
          LOBYTE(v6) = *((_BYTE *)v13 + 51) & 0xFE;
          *((_BYTE *)v13 + 51) = v6;
          if ( (v5 & 8) == 0 )
            LOBYTE(v6) = RtlpHpLfhSubsegmentReformatAsMulti(a1, v13, 1LL);
        }
      }
      else
      {
        if ( (__int64 *)v4[1] != v13 || (v14 = (__int64 **)v13[1], *v14 != v13) )
LABEL_16:
          __fastfail(3u);
        *v14 = v4;
        v4[1] = (__int64)v14;
        LOBYTE(v6) = RtlpHpLfhSubsegmentFree(a1, v13, a2, a4);
      }
    }
    while ( v4 != (__int64 *)a3 );
  }
  if ( *a3 != (__int64 *)a3 )
  {
    RtlAcquireSRWLockExclusive(a2 + 16);
    v10 = *a3;
    do
    {
      if ( (__int64 **)v10[1] != a3 )
        goto LABEL_16;
      v11 = *v10;
      if ( *(__int64 **)(*v10 + 8) != v10 )
        goto LABEL_16;
      *a3 = (__int64 *)v11;
      *(_QWORD *)(v11 + 8) = a3;
      RtlpHpLfhOwnerMoveSubsegment(a1, a2, v10, 0, 0);
      v10 = *a3;
    }
    while ( *a3 != (__int64 *)a3 );
    LOBYTE(v6) = RtlReleaseSRWLockExclusive(a2 + 16);
  }
  return v6;
}
