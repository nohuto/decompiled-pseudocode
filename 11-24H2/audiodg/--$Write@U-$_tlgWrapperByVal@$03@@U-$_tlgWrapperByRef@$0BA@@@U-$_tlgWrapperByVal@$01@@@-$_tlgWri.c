/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$01@@@Z @ 0x140002428
 * Callers:
 *     ?TrackAPOFailureUnhandled@CSystemEffectWrapper@@UEAAJM@Z @ 0x1400736E0 (-TrackAPOFailureUnhandled@CSystemEffectWrapper@@UEAAJM@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x140016224 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7)
{
  __int64 v7; // r8
  _QWORD v9[10]; // [rsp+30h] [rbp-68h] BYREF

  v9[8] = a7;
  v9[9] = 2LL;
  v9[7] = 16LL;
  v9[5] = 4LL;
  v7 = *a6;
  v9[4] = a5;
  v9[6] = v7;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, 0, 0, 5, (__int64)v9);
}
