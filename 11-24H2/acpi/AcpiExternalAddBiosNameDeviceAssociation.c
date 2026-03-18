/*
 * XREFs of AcpiExternalAddBiosNameDeviceAssociation @ 0x14009D204
 * Callers:
 *     ExternalRequestBiosNameDeviceAssociation @ 0x14009D610 (ExternalRequestBiosNameDeviceAssociation.c)
 *     ACPIInternalNotifyAvailableDeviceObject @ 0x1400BDE58 (ACPIInternalNotifyAvailableDeviceObject.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall AcpiExternalAddBiosNameDeviceAssociation(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v4)(_QWORD, __int64, __int64); // rax
  unsigned int v5; // ebx

  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(&ExternalTranslatorInterfaceLock, 1u);
  if ( ExternalTranslationInterface
    && (v4 = (__int64 (__fastcall *)(_QWORD, __int64, __int64))*((_QWORD *)ExternalTranslationInterface + 8)) != 0LL )
  {
    v5 = v4(*((_QWORD *)ExternalTranslationInterface + 5), a1, a2);
  }
  else
  {
    v5 = -1073741822;
  }
  ExReleaseResourceLite(&ExternalTranslatorInterfaceLock);
  KeLeaveCriticalRegion();
  return v5;
}
