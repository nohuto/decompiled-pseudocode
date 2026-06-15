/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperArray@$0BA@@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperArray@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18000305C
 * Callers:
 *     ?ActivateMulticastSession@BluetoothBroadcastProvider@@UEAAJAEAV?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEBU_GUID@@@Z @ 0x1800E06A0 (-ActivateMulticastSession@BluetoothBroadcastProvider@@UEAAJAEAV-$vector@V-$com_ptr_t@VCEndpointC.c)
 *     ?ActivateMulticastSession@DummyBroadcastProvider@@UEAAJAEAV?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEBU_GUID@@@Z @ 0x1800F7100 (-ActivateMulticastSession@DummyBroadcastProvider@@UEAAJAEAV-$vector@V-$com_ptr_t@VCEndpointChara.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18004C6C0 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperArray<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 *a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // r8
  _BYTE v11[32]; // [rsp+30h] [rbp-61h] BYREF
  __int64 v12; // [rsp+50h] [rbp-41h]
  __int64 v13; // [rsp+58h] [rbp-39h]
  __int64 v14; // [rsp+60h] [rbp-31h]
  __int64 v15; // [rsp+68h] [rbp-29h]
  __int64 *v16; // [rsp+70h] [rbp-21h]
  __int64 v17; // [rsp+78h] [rbp-19h]
  __int64 v18; // [rsp+80h] [rbp-11h]
  int v19; // [rsp+88h] [rbp-9h]
  int v20; // [rsp+8Ch] [rbp-5h]
  __int64 v21; // [rsp+90h] [rbp-1h]
  __int64 v22; // [rsp+98h] [rbp+7h]
  __int64 v23; // [rsp+A0h] [rbp+Fh]
  __int64 v24; // [rsp+A8h] [rbp+17h]

  v23 = a9;
  v21 = a8;
  v24 = 8LL;
  v22 = 4LL;
  v17 = 2LL;
  v20 = 0;
  v18 = *a7;
  v19 = 16 * *((unsigned __int16 *)a7 + 4);
  v16 = a7 + 1;
  v15 = 16LL;
  v13 = 8LL;
  v9 = *a6;
  v12 = a5;
  v14 = v9;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, 0, 0, 8, (__int64)v11);
}
