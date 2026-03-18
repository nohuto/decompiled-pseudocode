/*
 * XREFs of ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x140001008
 * Callers:
 *     ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1400EF8C8 (-LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F230 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 **a5)
{
  int v5; // ecx
  _QWORD v7[5]; // [rsp+30h] [rbp-58h] BYREF
  int v8; // [rsp+58h] [rbp-30h]
  int v9; // [rsp+5Ch] [rbp-2Ch]
  __int64 v10; // [rsp+60h] [rbp-28h]
  _DWORD v11[2]; // [rsp+68h] [rbp-20h] BYREF

  v7[4] = v11;
  v9 = 0;
  v8 = 2;
  v5 = **a5;
  v10 = *((_QWORD *)*a5 + 1);
  v11[1] = 0;
  v11[0] = v5;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_140081048, a2, a3, 0LL, 4, v7);
}
