/*
 * XREFs of ??$Write@U_tlgWrapperPtrSize@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU_tlgWrapperPtrSize@@3@Z @ 0x14000208C
 * Callers:
 *     ?GetControllableSystemEffectsListRemote@CAPOWrapperSrv@@UEAAJPEAPEAUAudioEffectInternal@@PEAIPEAX@Z @ 0x140048A10 (-GetControllableSystemEffectsListRemote@CAPOWrapperSrv@@UEAAJPEAPEAUAudioEffectInternal@@PEAIPEA.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x140016224 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6)
{
  int v6; // eax
  int v7; // eax
  _QWORD v9[5]; // [rsp+30h] [rbp-58h] BYREF
  int v10; // [rsp+58h] [rbp-30h]
  int v11; // [rsp+5Ch] [rbp-2Ch]
  __int64 v12; // [rsp+60h] [rbp-28h]
  int v13; // [rsp+68h] [rbp-20h]
  int v14; // [rsp+6Ch] [rbp-1Ch]

  v12 = *a6;
  v6 = *((_DWORD *)a6 + 2);
  v14 = 0;
  v13 = v6;
  v9[4] = *(_QWORD *)a5;
  v7 = *(_DWORD *)(a5 + 8);
  v11 = 0;
  v10 = v7;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, 0, 0, 4, (__int64)v9);
}
