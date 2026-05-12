/*
 * XREFs of ExtensionSendStorportData @ 0x14006DD1C
 * Callers:
 *     RaidAdapterStorageGetInternalDataIoctl @ 0x1401831FC (RaidAdapterStorageGetInternalDataIoctl.c)
 *     RaUnitStorageGetInternalDataIoctl @ 0x1401891D4 (RaUnitStorageGetInternalDataIoctl.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExtensionSendStorportData(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d

  v2 = -1073741822;
  if ( !DisableExtensionDriver && EnableExtensionCalls )
  {
    _InterlockedIncrement(&ExtRefCount);
    v2 = ((__int64 (__fastcall *)(__int64, __int64, int *))ExtSendStorportData)(a1, a2, &dword_1401701B0);
    _InterlockedDecrement(&ExtRefCount);
  }
  return v2;
}
