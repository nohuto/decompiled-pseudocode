/*
 * XREFs of ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x140015D90
 * Callers:
 *     ?EventHandlerBufferComplete@CAudioPump@@AEAAXPEA_K@Z @ 0x140021220 (-EventHandlerBufferComplete@CAudioPump@@AEAAXPEA_K@Z.c)
 *     ?Resume@CAudioPump@@UEAAJXZ @ 0x14002BD10 (-Resume@CAudioPump@@UEAAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x140016224 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        int a1,
        int a2,
        int a3)
{
  _BYTE v4[32]; // [rsp+30h] [rbp-38h] BYREF

  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, a3, 0, 2, (__int64)v4);
}
