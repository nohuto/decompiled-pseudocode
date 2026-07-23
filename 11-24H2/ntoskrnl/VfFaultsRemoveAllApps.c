/*
 * XREFs of VfFaultsRemoveAllApps @ 0x140B986BC
 * Callers:
 *     VfRlrsVolatileConfigUpdate @ 0x140613A74 (VfRlrsVolatileConfigUpdate.c)
 *     ViRlrsUnload @ 0x140613B40 (ViRlrsUnload.c)
 *     VfFaultsSetParameters @ 0x140B987F4 (VfFaultsSetParameters.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void VfFaultsRemoveAllApps()
{
  KIRQL v0; // al
  PVOID **v1; // rcx
  KIRQL v2; // di
  PVOID *v3; // rbx

  if ( !ViFaultApplicationsList || ViFaultApplicationsList == &ViFaultApplicationsList )
  {
    qword_140F04418 = (__int64)&ViFaultApplicationsList;
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
    qword_140F04418 = (__int64)&ViFaultApplicationsList;
    ViFaultApplicationsList = &ViFaultApplicationsList;
    KeReleaseSpinLock(&ViFaultInjectionLock, v2);
  }
}
