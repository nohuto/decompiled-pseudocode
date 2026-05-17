/*
 * XREFs of RtlpHpLfhBucketAddSubsegment @ 0x180033290
 * Callers:
 *     RtlpHpLfhBucketGetSubsegment @ 0x180032EB0 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x1800334C4 (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x1800B8200 (RtlpHpLfhContextSlotStandbyProcess.c)
 * Callees:
 *     RtlpHpLfhSubsegmentReformatAsMulti @ 0x18000A090 (RtlpHpLfhSubsegmentReformatAsMulti.c)
 *     RtlpHpLfhSubsegmentFree @ 0x18000AF44 (RtlpHpLfhSubsegmentFree.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x180033000 (RtlpHpLfhOwnerMoveSubsegment.c)
 */

char __fastcall RtlpHpLfhBucketAddSubsegment(unsigned __int64 a1, __int64 a2, __int64 **a3, char a4)
{
  __int64 *v4; // rsi
  char v5; // di
  __int16 v6; // ax
  __int64 *v10; // r8
  __int64 v11; // rax
  int v12; // ebp
  unsigned __int64 v13; // rdx
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
      v13 = (unsigned __int64)v4;
      v4 = (__int64 *)*v4;
      if ( v12 || (v6 = *(_WORD *)(v13 + 34), *(_WORD *)(v13 + 32) != v6) )
      {
        if ( (*(_BYTE *)(v13 + 51) & 1) != 0 )
        {
          LOBYTE(v6) = *(_BYTE *)(v13 + 51) & 0xFE;
          *(_BYTE *)(v13 + 51) = v6;
          if ( (v5 & 8) == 0 )
            LOBYTE(v6) = RtlpHpLfhSubsegmentReformatAsMulti(a1, v13, 1);
        }
      }
      else
      {
        if ( v4[1] != v13 || (v14 = *(__int64 ***)(v13 + 8), *v14 != (__int64 *)v13) )
LABEL_16:
          __fastfail(3u);
        *v14 = v4;
        v4[1] = (__int64)v14;
        LOBYTE(v6) = RtlpHpLfhSubsegmentFree(a1, v13, a2);
      }
    }
    while ( v4 != (__int64 *)a3 );
  }
  if ( *a3 != (__int64 *)a3 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a2 + 16));
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
      RtlpHpLfhOwnerMoveSubsegment(a1, (char *)a2, v10, 0, 0);
      v10 = *a3;
    }
    while ( *a3 != (__int64 *)a3 );
    LOBYTE(v6) = RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 16));
  }
  return v6;
}
