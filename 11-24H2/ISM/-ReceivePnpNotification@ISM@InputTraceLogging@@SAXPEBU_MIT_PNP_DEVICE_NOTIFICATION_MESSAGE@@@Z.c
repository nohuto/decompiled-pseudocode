/*
 * XREFs of ?ReceivePnpNotification@ISM@InputTraceLogging@@SAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x18007E844
 * Callers:
 *     ?ProcessPnpNotification@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x1800767A0 (-ProcessPnpNotification@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapSz@G@@@Z @ 0x180004D28 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001AFF0 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?RimDeviceKindToString@InputTraceLogging@@CAPEBDW4_KnownRIMDeviceKind@@@Z @ 0x1800F2008 (-RimDeviceKindToString@InputTraceLogging@@CAPEBDW4_KnownRIMDeviceKind@@@Z.c)
 */

void __fastcall InputTraceLogging::ISM::ReceivePnpNotification(const struct _MIT_PNP_DEVICE_NOTIFICATION_MESSAGE *a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  const WCHAR *v6; // [rsp+50h] [rbp-18h] BYREF
  const unsigned __int16 *v7; // [rsp+58h] [rbp-10h] BYREF
  int v8; // [rsp+78h] [rbp+10h] BYREF
  int v9; // [rsp+80h] [rbp+18h] BYREF
  int v10; // [rsp+88h] [rbp+20h] BYREF

  v2 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v2 > 4u
    && (*((_DWORD *)v2 + 4) & 0x200LL) != 0
    && (*((_QWORD *)v2 + 3) & 0x200LL) == *((_QWORD *)v2 + 3) )
  {
    v3 = *(unsigned int *)a1;
    v6 = (const WCHAR *)((char *)a1 + 52);
    v8 = *((_DWORD *)a1 + 3);
    v9 = *((_DWORD *)a1 + 2);
    v10 = *((_DWORD *)a1 + 1);
    v7 = (const unsigned __int16 *)InputTraceLogging::RimDeviceKindToString(v3);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v4,
      (__int64)&unk_1802142D4,
      v4,
      v5,
      &v7,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      &v6);
  }
}
