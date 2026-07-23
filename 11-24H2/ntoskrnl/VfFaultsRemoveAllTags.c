/*
 * XREFs of VfFaultsRemoveAllTags @ 0x140B98754
 * Callers:
 *     VfRlrsVolatileConfigUpdate @ 0x140613A74 (VfRlrsVolatileConfigUpdate.c)
 *     ViRlrsUnload @ 0x140613B40 (ViRlrsUnload.c)
 *     VfFaultsSetParameters @ 0x140B987F4 (VfFaultsSetParameters.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void VfFaultsRemoveAllTags()
{
  KIRQL v0; // al
  PVOID **v1; // rcx
  KIRQL v2; // di
  PVOID *v3; // rbx

  if ( !ViFaultTagsList || ViFaultTagsList == &ViFaultTagsList )
  {
    qword_140F04438 = (__int64)&ViFaultTagsList;
    ViFaultTagsList = &ViFaultTagsList;
  }
  else
  {
    v0 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
    v1 = (PVOID **)ViFaultTagsList;
    v2 = v0;
    if ( ViFaultTagsList != &ViFaultTagsList )
    {
      do
      {
        v3 = *v1;
        ExFreePoolWithTag(v1, 0);
        v1 = (PVOID **)v3;
      }
      while ( v3 != &ViFaultTagsList );
    }
    ViHaveFaultTags = 0;
    qword_140F04438 = (__int64)&ViFaultTagsList;
    ViFaultTagsList = &ViFaultTagsList;
    KeReleaseSpinLock(&ViFaultInjectionLock, v2);
  }
}
