/*
 * XREFs of VfFaultsInjectPoolAllocationFailure @ 0x140B96490
 * Callers:
 *     VerifierExAllocatePool @ 0x140B91070 (VerifierExAllocatePool.c)
 *     VerifierExAllocatePool2 @ 0x140B91190 (VerifierExAllocatePool2.c)
 *     VerifierExAllocatePool3 @ 0x140B912E0 (VerifierExAllocatePool3.c)
 *     VerifierExAllocatePoolWithTag @ 0x140B915C0 (VerifierExAllocatePoolWithTag.c)
 *     VerifierExAllocatePoolWithTagPriority @ 0x140B916E0 (VerifierExAllocatePoolWithTagPriority.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExCheckSingleFilter @ 0x140401588 (ExCheckSingleFilter.c)
 *     VfFaultsInjectResourceFailure @ 0x140B96568 (VfFaultsInjectResourceFailure.c)
 *     ViFaultsIsTagPresentInList @ 0x140B96DF4 (ViFaultsIsTagPresentInList.c)
 */

__int64 __fastcall VfFaultsInjectPoolAllocationFailure(unsigned int a1)
{
  KIRQL v3; // r11
  unsigned int IsTagPresentInList; // ebx

  if ( (MmVerifierData & 4) == 0 )
    return 0LL;
  if ( !ViFaultsInitialized )
  {
    ++dword_140FFDF84;
    return 0LL;
  }
  if ( ViFaultsDisabled )
  {
    ++dword_140FFDFAC;
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
        ++dword_140FFDFA8;
      else
        ++dword_140FFDFA4;
    }
  }
  KeReleaseSpinLock(&ViFaultInjectionLock, v3);
  if ( IsTagPresentInList )
    return (unsigned int)VfFaultsInjectResourceFailure(1LL);
  return IsTagPresentInList;
}
