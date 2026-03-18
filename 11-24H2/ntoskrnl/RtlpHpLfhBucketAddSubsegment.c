/*
 * XREFs of RtlpHpLfhBucketAddSubsegment @ 0x14045CC3C
 * Callers:
 *     RtlpHpLfhOwnerCompact @ 0x1402B461C (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x1402B55B8 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1402B6D78 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x14049CB38 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhContextSlotAllocate @ 0x1404B9584 (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x140606D74 (RtlpHpLfhPrivateSlotShutdown.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14020D790 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpLfhSubsegmentFree @ 0x1402B4ED8 (RtlpHpLfhSubsegmentFree.c)
 *     RtlpHpLfhSubsegmentReformatAsMulti @ 0x1402B64D8 (RtlpHpLfhSubsegmentReformatAsMulti.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x1402B6864 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpReleaseLockExclusive @ 0x1402B9650 (RtlpHpReleaseLockExclusive.c)
 */

void __fastcall RtlpHpLfhBucketAddSubsegment(__int64 a1, __int64 a2, __int64 **a3, char a4)
{
  __int64 *v4; // rdi
  char v5; // r15
  char v9; // al
  __int64 *v10; // r8
  unsigned __int8 v11; // di
  __int64 v12; // rcx
  int v13; // ebp
  unsigned __int64 v14; // rdx
  __int64 **v15; // rax

  v4 = *a3;
  v5 = a4 & 0xC;
  if ( (a4 & 0xC) == 0 )
    v5 = 8;
  if ( v4 != (__int64 *)a3 )
  {
    v13 = a4 & 2;
    do
    {
      v14 = (unsigned __int64)v4;
      v4 = (__int64 *)*v4;
      if ( v13 || *(_WORD *)(v14 + 32) != *(_WORD *)(v14 + 34) )
      {
        if ( (*(_BYTE *)(v14 + 51) & 1) != 0 )
        {
          *(_BYTE *)(v14 + 51) &= ~1u;
          if ( (v5 & 8) == 0 )
            RtlpHpLfhSubsegmentReformatAsMulti(a1, v14);
        }
      }
      else
      {
        if ( v4[1] != v14 || (v15 = *(__int64 ***)(v14 + 8), *v15 != (__int64 *)v14) )
LABEL_16:
          __fastfail(3u);
        *v15 = v4;
        v4[1] = (__int64)v15;
        RtlpHpLfhSubsegmentFree((__int64 *)a1, v14, a2);
      }
    }
    while ( v4 != (__int64 *)a3 );
  }
  if ( *a3 != (__int64 *)a3 )
  {
    v9 = RtlpHpAcquireLockExclusive((int *)(a2 + 16), *(unsigned __int8 *)(a1 + 65), (__int64)a3);
    v10 = *a3;
    v11 = v9;
    do
    {
      if ( (__int64 **)v10[1] != a3 )
        goto LABEL_16;
      v12 = *v10;
      if ( *(__int64 **)(*v10 + 8) != v10 )
        goto LABEL_16;
      *a3 = (__int64 *)v12;
      *(_QWORD *)(v12 + 8) = a3;
      RtlpHpLfhOwnerMoveSubsegment(a1, (char *)a2, v10, 0, 0);
      v10 = *a3;
    }
    while ( *a3 != (__int64 *)a3 );
    RtlpHpReleaseLockExclusive(a2 + 16, *(unsigned __int8 *)(a1 + 65), v11);
  }
}
