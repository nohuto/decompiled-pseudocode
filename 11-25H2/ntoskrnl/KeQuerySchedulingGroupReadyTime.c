/*
 * XREFs of KeQuerySchedulingGroupReadyTime @ 0x140470F9C
 * Callers:
 *     PspQueryJobHierarchyAccountingInformation @ 0x1408DC284 (PspQueryJobHierarchyAccountingInformation.c)
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeQuerySchedulingGroupReadyTime(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 *v5; // r15
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rbp
  int v9; // r14d

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  v3 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  v4 = 0LL;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v5 = KiProcessorBlock;
    v6 = v1 + 128;
    v7 = (unsigned int)KeNumberProcessors_0;
    do
    {
      v8 = *v5;
      v9 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 48), 0LL) )
      {
        do
        {
          if ( (++v9 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait();
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v8 + 48) );
      }
      v4 += *(_QWORD *)(v6 + 56);
      if ( (*(_BYTE *)(v6 + 112) & 1) != 0 )
        v4 += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(v6 + 64);
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 48), 0LL);
      ++v5;
      v6 += 440LL;
      --v7;
    }
    while ( v7 );
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
  }
  __writecr8(CurrentIrql);
  return v4;
}
