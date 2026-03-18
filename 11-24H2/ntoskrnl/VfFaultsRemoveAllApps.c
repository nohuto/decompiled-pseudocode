/*
 * XREFs of VfFaultsRemoveAllApps @ 0x140B966BC
 * Callers:
 *     VfRlrsVolatileConfigUpdate @ 0x1406154B4 (VfRlrsVolatileConfigUpdate.c)
 *     ViRlrsUnload @ 0x140615580 (ViRlrsUnload.c)
 *     VfFaultsSetParameters @ 0x140B967F4 (VfFaultsSetParameters.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void VfFaultsRemoveAllApps()
{
  KIRQL v0; // al
  PVOID **v1; // rcx
  KIRQL v2; // di
  PVOID *v3; // rbx

  if ( !ViFaultApplicationsList || ViFaultApplicationsList == &ViFaultApplicationsList )
  {
    qword_140F04098 = (__int64)&ViFaultApplicationsList;
    ViFaultApplicationsList = &ViFaultApplicationsList;
  }
  else
  {
    v0 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
    v1 = (PVOID **)ViFaultApplicationsList;
    v2 = v0;
    if ( ViFaultApplicationsList != &ViFaultApplicationsList )
    {
      do
      {
        v3 = *v1;
        ExFreePoolWithTag(v1, 0);
        v1 = (PVOID **)v3;
      }
      while ( v3 != &ViFaultApplicationsList );
    }
    qword_140F04098 = (__int64)&ViFaultApplicationsList;
    ViFaultApplicationsList = &ViFaultApplicationsList;
    KeReleaseSpinLock(&ViFaultInjectionLock, v2);
  }
}
