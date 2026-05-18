/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@54@Z @ 0x18000114C
 * Callers:
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x18000AC58 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?FallBackToBDD@@YA_NXZ @ 0x18000B618 (-FallBackToBDD@@YA_NXZ.c)
 *     DwmpCreateSessionProcess @ 0x18000DDB0 (DwmpCreateSessionProcess.c)
 *     DwmpTerminateSessionProcess @ 0x18000E730 (DwmpTerminateSessionProcess.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000133C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800021B0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        __int64 *a9)
{
  __int64 v9; // rcx
  __int64 v10; // rcx
  _BYTE v12[32]; // [rsp+30h] [rbp-51h] BYREF
  __int64 v13; // [rsp+50h] [rbp-31h]
  __int64 v14; // [rsp+58h] [rbp-29h]
  __int64 v15; // [rsp+60h] [rbp-21h]
  __int64 v16; // [rsp+68h] [rbp-19h]
  __int64 v17; // [rsp+70h] [rbp-11h]
  __int64 v18; // [rsp+78h] [rbp-9h]
  __int64 v19; // [rsp+80h] [rbp-1h]
  __int64 v20; // [rsp+88h] [rbp+7h]
  __int64 v21; // [rsp+90h] [rbp+Fh]
  __int64 v22; // [rsp+98h] [rbp+17h]

  v22 = 16LL;
  v20 = 4LL;
  v18 = 4LL;
  v9 = *a9;
  v19 = a8;
  v17 = a7;
  v21 = v9;
  v16 = 16LL;
  v14 = 8LL;
  v10 = *a6;
  v13 = a5;
  v15 = v10;
  return tlgWriteTransfer_EventWriteTransfer(&dword_18001A000, a2, 0LL, 0LL, 7, v12);
}
