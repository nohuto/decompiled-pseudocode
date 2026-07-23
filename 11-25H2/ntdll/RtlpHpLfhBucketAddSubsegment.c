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

void __fastcall RtlpHpLfhBucketAddSubsegment(unsigned __int64 a1, __int64 a2, __int64 **a3, char a4)
{
  __int64 *v4; // rsi
  char v5; // di
  __int64 *v9; // r8
  __int64 v10; // rax
  int v11; // ebp
  unsigned __int64 v12; // rdx
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
      v12 = (unsigned __int64)v4;
      v4 = (__int64 *)*v4;
      if ( v11 || *(_WORD *)(v12 + 32) != *(_WORD *)(v12 + 34) )
      {
        if ( (*(_BYTE *)(v12 + 51) & 1) != 0 )
        {
          *(_BYTE *)(v12 + 51) &= ~1u;
          if ( (v5 & 8) == 0 )
            RtlpHpLfhSubsegmentReformatAsMulti(a1, v12, 1);
        }
      }
      else
      {
        if ( v4[1] != v12 || (v13 = *(__int64 ***)(v12 + 8), *v13 != (__int64 *)v12) )
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
