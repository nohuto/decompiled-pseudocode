/*
 * XREFs of RtlpHpLfhBucketAddSubsegment @ 0x1800642C0
 * Callers:
 *     RtlpHpLfhPrivateSlotShutdown @ 0x180060ADC (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x180060FB8 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x180061120 (RtlpHpLfhBucketGetSubsegment.c)
 * Callees:
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x180064030 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhSubsegmentReformatAsMulti @ 0x1800643E0 (RtlpHpLfhSubsegmentReformatAsMulti.c)
 *     RtlpHpLfhSubsegmentFree @ 0x180064EE4 (RtlpHpLfhSubsegmentFree.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall RtlpHpLfhBucketAddSubsegment(__int64 a1, __int64 a2, __int64 **a3, char a4)
{
  __int64 *v4; // rsi
  char v5; // di
  __int64 *v9; // r8
  __int64 v10; // rax
  int v11; // ebp
  __int64 *v12; // rdx
  __int64 **v13; // rax

  v4 = *a3;
  v5 = a4 & 0xC;
  if ( (a4 & 0xC) == 0 )
    v5 = 8;
  if ( v4 != (__int64 *)a3 )
  {
    v11 = a4 & 2;
    do
    {
      v12 = v4;
      v4 = (__int64 *)*v4;
      if ( v11 || *((_WORD *)v12 + 16) != *((_WORD *)v12 + 17) )
      {
        if ( (*((_BYTE *)v12 + 51) & 1) != 0 )
        {
          *((_BYTE *)v12 + 51) &= ~1u;
          if ( (v5 & 8) == 0 )
            RtlpHpLfhSubsegmentReformatAsMulti(a1, v12, 1LL);
        }
      }
      else
      {
        if ( (__int64 *)v4[1] != v12 || (v13 = (__int64 **)v12[1], *v13 != v12) )
LABEL_16:
          __fastfail(3u);
        *v13 = v4;
        v4[1] = (__int64)v13;
        RtlpHpLfhSubsegmentFree(a1, v12, a2);
      }
    }
    while ( v4 != (__int64 *)a3 );
  }
  if ( *a3 != (__int64 *)a3 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a2 + 16));
    v9 = *a3;
    do
    {
      if ( (__int64 **)v9[1] != a3 )
        goto LABEL_16;
      v10 = *v9;
      if ( *(__int64 **)(*v9 + 8) != v9 )
        goto LABEL_16;
      *a3 = (__int64 *)v10;
      *(_QWORD *)(v10 + 8) = a3;
      RtlpHpLfhOwnerMoveSubsegment(a1, (char *)a2, v9, 0, 0);
      v9 = *a3;
    }
    while ( *a3 != (__int64 *)a3 );
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 16));
  }
}
