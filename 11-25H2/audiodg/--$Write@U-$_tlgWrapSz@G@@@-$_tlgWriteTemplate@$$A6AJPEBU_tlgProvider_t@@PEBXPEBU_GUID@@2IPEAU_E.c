/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x140015F48
 * Callers:
 *     ?ApoLog@CAPOServiceProvider@@UEAAXW4APO_LOG_LEVEL@@PEBGZZ @ 0x14003DC90 (-ApoLog@CAPOServiceProvider@@UEAAXW4APO_LOG_LEVEL@@PEBGZZ.c)
 *     DoLoadedModulesContainBlockedListAPO @ 0x140074868 (DoLoadedModulesContainBlockedListAPO.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x140016394 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        void **a5)
{
  _WORD *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  _BYTE v10[32]; // [rsp+30h] [rbp-48h] BYREF
  _WORD *v11; // [rsp+50h] [rbp-28h]
  int v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+5Ch] [rbp-1Ch]

  v6 = *a5;
  if ( *a5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( v6[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v6 = &unk_1400A8518;
    v8 = 2;
  }
  v12 = v8;
  v11 = v6;
  v13 = 0;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, 0, 0, 3, (__int64)v10);
}
