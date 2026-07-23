/*
 * XREFs of RtlpHpLfhOwnerFreeListProcess @ 0x1403D8924
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x14035EE00 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x1403D8700 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x1404977E0 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhContextSlotAllocate @ 0x1404B4424 (RtlpHpLfhContextSlotAllocate.c)
 * Callees:
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x1403D8A60 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x1403D9464 (RtlpHpLfhOwnerMoveSubsegment.c)
 */

void __fastcall RtlpHpLfhOwnerFreeListProcess(__int64 a1, __int64 a2, unsigned __int64 *a3, char a4)
{
  unsigned __int64 v5; // rdi
  int v6; // ebp
  int v8; // r14d
  unsigned __int64 v9; // rbx
  int v10; // edx
  int v11; // r8d
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // r8

  v5 = _InterlockedExchange64((volatile __int64 *)(a2 + 8), 0LL);
  v6 = a2;
  if ( v5 )
  {
    v8 = a4 & 1;
    do
    {
      v9 = v5;
      v5 = *(_QWORD *)(v5 + 24) & 0xFFFFFFFFFFFFF000uLL;
      if ( v8 && *(_WORD *)(v9 + 18)
        || (v10 = *(unsigned __int16 *)(v9 + 18), v10 + *(unsigned __int16 *)(v9 + 32) == *(unsigned __int16 *)(v9 + 34))
        && (_WORD)v10 )
      {
        RtlpHpLfhSubsegmentDelayFreeListProcess(
          a1,
          v9,
          (unsigned int)_InterlockedExchange((volatile __int32 *)(v9 + 16), 0));
      }
      if ( *(_WORD *)(v9 + 32) == *(_WORD *)(v9 + 34) )
      {
        RtlpHpLfhOwnerMoveSubsegment(a1, v6, v9, 3, 2);
        v13 = *a3;
        if ( *(unsigned __int64 **)(*a3 + 8) != a3 )
LABEL_9:
          __fastfail(3u);
        *(_QWORD *)v9 = v13;
        *(_QWORD *)(v9 + 8) = a3;
        *(_QWORD *)(v13 + 8) = v9;
        *a3 = v9;
      }
      else if ( !(unsigned int)RtlpHpLfhOwnerMoveSubsegment(a1, v6, v9, 0, 2) )
      {
        RtlpHpLfhOwnerMoveSubsegment(a1, v6, v11, 3, 2);
        v12 = (unsigned __int64 *)a3[1];
        if ( (unsigned __int64 *)*v12 != a3 )
          goto LABEL_9;
        *(_QWORD *)v9 = a3;
        *(_QWORD *)(v9 + 8) = v12;
        *v12 = v9;
        a3[1] = v9;
      }
    }
    while ( v5 );
  }
}
