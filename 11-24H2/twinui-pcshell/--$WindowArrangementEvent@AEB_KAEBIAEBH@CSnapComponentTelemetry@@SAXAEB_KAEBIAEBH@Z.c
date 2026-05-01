/*
 * XREFs of ??$WindowArrangementEvent@AEB_KAEBIAEBH@CSnapComponentTelemetry@@SAXAEB_KAEBIAEBH@Z @ 0x1801EB2C8
 * Callers:
 *     ?OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x18059F860 (-OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B8D54 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@43@Z @ 0x1801EB380 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

__int64 __fastcall CSnapComponentTelemetry::WindowArrangementEvent<unsigned __int64 const &,unsigned int const &,int const &>(
        _QWORD *a1,
        int *a2,
        int *a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  int v8; // [rsp+40h] [rbp-28h] BYREF
  __int64 v9; // [rsp+48h] [rbp-20h] BYREF
  _QWORD v10[3]; // [rsp+50h] [rbp-18h] BYREF
  int v11; // [rsp+88h] [rbp+20h] BYREF

  result = (__int64)WindowManagementLogging::Provider();
  v7 = result;
  if ( *(_DWORD *)result > 5u )
  {
    result = 0x200000000000LL;
    if ( (*(_QWORD *)(v7 + 16) & 0x200000000000LL) != 0
      && (*(_QWORD *)(v7 + 24) & 0x200000000000LL) == *(_QWORD *)(v7 + 24) )
    {
      v11 = *a3;
      v8 = *a2;
      v10[0] = *a1;
      v9 = 0x1000000LL;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
               v7,
               (unsigned int)&unk_180813083,
               0,
               0,
               (__int64)v10,
               (__int64)&v8,
               (__int64)&v11,
               (__int64)&v9);
    }
  }
  return result;
}
