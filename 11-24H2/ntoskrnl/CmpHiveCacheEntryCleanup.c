/*
 * XREFs of CmpHiveCacheEntryCleanup @ 0x1407E54D8
 * Callers:
 *     CmpLoadHiveThread @ 0x1407CB060 (CmpLoadHiveThread.c)
 *     CmpMachineHiveCacheClaimEntry @ 0x1407D8F1C (CmpMachineHiveCacheClaimEntry.c)
 *     CmpMachineHiveCachePopulateEntry @ 0x1407D8FA8 (CmpMachineHiveCachePopulateEntry.c)
 *     CmpHiveCachePnpNotificationCallback @ 0x1407E5720 (CmpHiveCachePnpNotificationCallback.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x1407E5970 (CmpHiveCachePopulateHiveEntryThread.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14046F240 (PnpUnregisterPlugPlayNotification.c)
 *     CmSiEventTupleCleanup @ 0x14047DA8C (CmSiEventTupleCleanup.c)
 *     CmSiWaitForSingleEvent @ 0x140493968 (CmSiWaitForSingleEvent.c)
 *     CmSiSetEvent @ 0x140668BAC (CmSiSetEvent.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwSetInformationObject @ 0x1406A6F90 (ZwSetInformationObject.c)
 *     NtClose @ 0x14084AA00 (NtClose.c)
 *     CmpDestroyHive @ 0x14097C14C (CmpDestroyHive.c)
 */

void __fastcall CmpHiveCacheEntryCleanup(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  void *v8; // rcx
  _OWORD *v9; // rdi
  struct _PRIVILEGE_SET *v10; // rcx
  void *v11; // rcx

  v2 = 6LL;
  if ( a2 == 6 )
  {
    CmSiWaitForSingleEvent(a1 + 288);
    v9 = (_OWORD *)(a1 + 208);
    do
    {
      CmSiEventTupleCleanup((__int64)v9);
      *v9++ = 0LL;
      --v2;
    }
    while ( v2 );
    v10 = *(struct _PRIVILEGE_SET **)(a1 + 320);
    if ( v10 )
    {
      CmSiFreeMemory(v10);
      *(_QWORD *)(a1 + 320) = 0LL;
      *(_DWORD *)(a1 + 312) = 0;
    }
    v11 = *(void **)(a1 + 360);
    if ( v11 )
      NtClose(v11);
    *(_DWORD *)(a1 + 168) = 5;
  }
  else if ( *(_DWORD *)(a1 + 168) != 4 )
  {
    *(_DWORD *)(a1 + 172) = a2;
    v4 = *(_QWORD *)(a1 + 368);
    if ( v4 )
    {
      CmpDestroyHive(v4);
      *(_QWORD *)(a1 + 368) = 0LL;
    }
    v5 = *(_QWORD *)(a1 + 176);
    if ( v5 )
    {
      ZwSetInformationObject(v5, 4LL);
      ZwClose(*(HANDLE *)(a1 + 176));
      *(_QWORD *)(a1 + 176) = 0LL;
    }
    v6 = *(_QWORD *)(a1 + 184);
    if ( v6 )
    {
      ZwSetInformationObject(v6, 4LL);
      ZwClose(*(HANDLE *)(a1 + 184));
      *(_QWORD *)(a1 + 184) = 0LL;
    }
    v7 = *(_QWORD *)(a1 + 192);
    if ( v7 )
    {
      ZwSetInformationObject(v7, 4LL);
      ZwClose(*(HANDLE *)(a1 + 192));
      *(_QWORD *)(a1 + 192) = 0LL;
    }
    v8 = *(void **)(a1 + 344);
    if ( v8 )
    {
      PnpUnregisterPlugPlayNotification(v8, 1);
      *(_QWORD *)(a1 + 344) = 0LL;
    }
    CmSiSetEvent(a1 + 256);
    *(_DWORD *)(a1 + 168) = 4;
  }
}
