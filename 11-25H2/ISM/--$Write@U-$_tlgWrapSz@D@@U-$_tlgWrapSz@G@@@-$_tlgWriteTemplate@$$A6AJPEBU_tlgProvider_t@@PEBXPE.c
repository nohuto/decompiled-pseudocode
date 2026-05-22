/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800648FC
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18006084C (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ?SendLampMultiUpdateReport@HidLampArrayDevice@@QEAAJPEBULampMultiUpdateDeviceReport@@@Z @ 0x180077FD8 (-SendLampMultiUpdateReport@HidLampArrayDevice@@QEAAJPEBULampMultiUpdateDeviceReport@@@Z.c)
 *     ?SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z @ 0x18008268C (-SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z.c)
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x180086910 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 *     ??1HidLampArrayDevice@@UEAA@XZ @ 0x180096294 (--1HidLampArrayDevice@@UEAA@XZ.c)
 *     ?UpdateDeviceAmbientProcess@LampArrayRawInputProvider@@AEAAXXZ @ 0x1800E1270 (-UpdateDeviceAmbientProcess@LampArrayRawInputProvider@@AEAAXXZ.c)
 *     ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x1800E2D90 (-StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z.c)
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800E8A00 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?ReceiveVendorReport@HidLampArrayDevice@@QEAAJEPEAE0@Z @ 0x1800E9CC4 (-ReceiveVendorReport@HidLampArrayDevice@@QEAAJEPEAE0@Z.c)
 *     ?SendLampArrayControlReport@HidLampArrayDevice@@AEAAJPEBULampArrayControlDeviceReport@@@Z @ 0x1800E9F64 (-SendLampArrayControlReport@HidLampArrayDevice@@AEAAJPEBULampArrayControlDeviceReport@@@Z.c)
 *     ?SendVendorReport@HidLampArrayDevice@@QEAAJEEPEBE@Z @ 0x1800EA0D4 (-SendVendorReport@HidLampArrayDevice@@QEAAJEEPEBE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const unsigned __int16 **a5,
        const WCHAR **a6)
{
  __int64 v6; // rcx
  const WCHAR *v8; // r8
  __int64 v9; // rax
  int v10; // eax
  const unsigned __int16 *v11; // rdx
  int v12; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  unsigned __int8 *v16; // [rsp+60h] [rbp+7h]
  int v17; // [rsp+68h] [rbp+Fh]
  int v18; // [rsp+6Ch] [rbp+13h]
  const unsigned __int16 *v19; // [rsp+70h] [rbp+17h]
  int v20; // [rsp+78h] [rbp+1Fh]
  int v21; // [rsp+7Ch] [rbp+23h]
  const WCHAR *v22; // [rsp+80h] [rbp+27h]
  int v23; // [rsp+88h] [rbp+2Fh]
  int v24; // [rsp+8Ch] [rbp+33h]

  v6 = -1LL;
  v8 = *a6;
  if ( *a6 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v8[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v8 = &WindowName;
    v10 = 2;
  }
  v23 = v10;
  v22 = v8;
  v24 = 0;
  v11 = *a5;
  if ( *a5 )
  {
    do
      ++v6;
    while ( *((_BYTE *)v11 + v6) );
    v12 = v6 + 1;
  }
  else
  {
    v11 = &word_1801F55A8;
    v12 = 1;
  }
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  v20 = v12;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData.Ptr = (ULONGLONG)off_180244250;
  v19 = v11;
  v21 = 0;
  UserData.Size = *(unsigned __int16 *)off_180244250;
  v17 = *(unsigned __int16 *)(a2 + 11);
  v16 = a2 + 11;
  v18 = 1;
  UserData.Reserved = 2;
  return EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
}
