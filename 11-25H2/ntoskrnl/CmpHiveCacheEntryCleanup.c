/*
 * XREFs of CmpHiveCacheEntryCleanup @ 0x1407D5668
 * Callers:
 *     CmpLoadHiveThread @ 0x1407BB850 (CmpLoadHiveThread.c)
 *     CmpMachineHiveCacheClaimEntry @ 0x1407C9724 (CmpMachineHiveCacheClaimEntry.c)
 *     CmpMachineHiveCachePopulateEntry @ 0x1407C97B0 (CmpMachineHiveCachePopulateEntry.c)
 *     CmpHiveCachePnpNotificationCallback @ 0x1407D58B0 (CmpHiveCachePnpNotificationCallback.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x1407D5AF0 (CmpHiveCachePopulateHiveEntryThread.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x140205238 (PnpUnregisterPlugPlayNotification.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     CmSiEventTupleCleanup @ 0x14047CE48 (CmSiEventTupleCleanup.c)
 *     CmSiWaitForSingleEvent @ 0x140494A1C (CmSiWaitForSingleEvent.c)
 *     CmSiSetEvent @ 0x14065D0DC (CmSiSetEvent.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwSetInformationObject @ 0x14069BCC0 (ZwSetInformationObject.c)
 *     NtClose @ 0x14084EC50 (NtClose.c)
 *     CmpDestroyHive @ 0x1409F4BE0 (CmpDestroyHive.c)
 */

void __fastcall CmpHiveCacheEntryCleanup(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  _OWORD *v9; // rdi
  struct _PRIVILEGE_SET *v10; // rcx
  void *v11; // rcx
  __int16 ObjectInformation; // [rsp+38h] [rbp+10h] BYREF

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
    v5 = *(void **)(a1 + 176);
    if ( v5 )
    {
      ObjectInformation = 0;
      ZwSetInformationObject(v5, ObjectHandleFlagInformation, &ObjectInformation, 2u);
      ZwClose(*(HANDLE *)(a1 + 176));
      *(_QWORD *)(a1 + 176) = 0LL;
    }
    v6 = *(void **)(a1 + 184);
    if ( v6 )
    {
      ObjectInformation = 0;
      ZwSetInformationObject(v6, ObjectHandleFlagInformation, &ObjectInformation, 2u);
      ZwClose(*(HANDLE *)(a1 + 184));
      *(_QWORD *)(a1 + 184) = 0LL;
    }
    v7 = *(void **)(a1 + 192);
    if ( v7 )
    {
      ObjectInformation = 0;
      ZwSetInformationObject(v7, ObjectHandleFlagInformation, &ObjectInformation, 2u);
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
