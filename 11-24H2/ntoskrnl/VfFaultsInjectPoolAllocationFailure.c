/*
 * XREFs of VfFaultsInjectPoolAllocationFailure @ 0x140B98490
 * Callers:
 *     VerifierExAllocatePool @ 0x140B93070 (VerifierExAllocatePool.c)
 *     VerifierExAllocatePool2 @ 0x140B93190 (VerifierExAllocatePool2.c)
 *     VerifierExAllocatePool3 @ 0x140B932E0 (VerifierExAllocatePool3.c)
 *     VerifierExAllocatePoolWithTag @ 0x140B935C0 (VerifierExAllocatePoolWithTag.c)
 *     VerifierExAllocatePoolWithTagPriority @ 0x140B936E0 (VerifierExAllocatePoolWithTagPriority.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExCheckSingleFilter @ 0x1403FBEF8 (ExCheckSingleFilter.c)
 *     VfFaultsInjectResourceFailure @ 0x140B98568 (VfFaultsInjectResourceFailure.c)
 *     ViFaultsIsTagPresentInList @ 0x140B98DF4 (ViFaultsIsTagPresentInList.c)
 */

__int64 __fastcall VfFaultsInjectPoolAllocationFailure(unsigned int a1)
{
  KIRQL v3; // r11
  unsigned int IsTagPresentInList; // ebx

  if ( (MmVerifierData & 4) == 0 )
    return 0LL;
  if ( !ViFaultsInitialized )
  {
    ++dword_140FFEF84;
    return 0LL;
  }
  if ( ViFaultsDisabled )
  {
    ++dword_140FFEFAC;
    return 0LL;
  }
  KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
  if ( (unsigned int)ExCheckSingleFilter(a1, 1786137926) || (unsigned int)ExCheckSingleFilter(a1, 1819692358) )
  {
    IsTagPresentInList = 0;
  }
  else
  {
    IsTagPresentInList = ViFaultTagsList == &ViFaultTagsList;
    if ( ViFaultTagsList != &ViFaultTagsList )
    {
      IsTagPresentInList = ViFaultsIsTagPresentInList(a1);
      if ( IsTagPresentInList )
        ++dword_140FFEFA8;
      else
        ++dword_140FFEFA4;
    }
  }
  KeReleaseSpinLock(&ViFaultInjectionLock, v3);
  if ( IsTagPresentInList )
    return (unsigned int)VfFaultsInjectResourceFailure(1LL);
  return IsTagPresentInList;
}
