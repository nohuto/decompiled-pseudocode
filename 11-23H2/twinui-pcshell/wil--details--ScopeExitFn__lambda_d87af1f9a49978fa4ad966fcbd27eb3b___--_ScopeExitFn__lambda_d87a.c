/*
 * XREFs of wil::details::ScopeExitFn__lambda_d87af1f9a49978fa4ad966fcbd27eb3b___::_ScopeExitFn__lambda_d87af1f9a49978fa4ad966fcbd27eb3b___ @ 0x1803DDA10
 * Callers:
 *     _IsGameManager::LoadKGLFromGameDVRFolder_::_1_::dtor$2 @ 0x1802B89CA (_IsGameManager--LoadKGLFromGameDVRFolder_--_1_--dtor$2.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VBroadcastDVRTraceProvider@@@details@wil@@QEAAPEAVBroadcastDVRTraceProvider@@P6AXXZ@Z @ 0x180112474 (-get@-$static_lazy@VBroadcastDVRTraceProvider@@@details@wil@@QEAAPEAVBroadcastDVRTraceProvider@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1801127B4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_d87af1f9a49978fa4ad966fcbd27eb3b___::_ScopeExitFn__lambda_d87af1f9a49978fa4ad966fcbd27eb3b___(
        __int64 a1)
{
  int *v1; // rdi
  __int64 v2; // rbx
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r9
  int v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    v1 = *(int **)(a1 + 8);
    v2 = *(_QWORD *)a1;
    v3 = (_DWORD *)wil::details::static_lazy<BroadcastDVRTraceProvider>::get(
                     a1,
                     (void (__cdecl *)())_lambda_834c0077cad59c9dc0a3a987d1005045_::_lambda_invoker_cdecl_)[1];
    if ( *v3 > 5u )
    {
      if ( tlgKeywordOn((__int64)v3, 0x400000000000LL) )
      {
        v6 = *v1;
        v7 = *(_DWORD *)(v2 + 44);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v4,
          byte_180847CED,
          0LL,
          v5,
          (__int64)&v7,
          (__int64)&v6);
      }
    }
  }
}
