/*
 * XREFs of ViFaultsIsCurrentAppTarget @ 0x140B98D64
 * Callers:
 *     VfFaultsInjectResourceFailure @ 0x140B98568 (VfFaultsInjectResourceFailure.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

_BOOL8 ViFaultsIsCurrentAppTarget()
{
  KIRQL v0; // al
  PVOID *v1; // rbx
  BOOL v2; // edi

  v0 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
  v1 = (PVOID *)ViFaultApplicationsList;
  v2 = ViFaultApplicationsList == &ViFaultApplicationsList;
  KeReleaseSpinLock(&ViFaultInjectionLock, v0);
  if ( v1 != &ViFaultApplicationsList )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x10000) != 0 )
    {
      ++dword_140FFEF94;
      return 1;
    }
    else
    {
      v2 = 0;
      ++dword_140FFEF90;
    }
  }
  return v2;
}
