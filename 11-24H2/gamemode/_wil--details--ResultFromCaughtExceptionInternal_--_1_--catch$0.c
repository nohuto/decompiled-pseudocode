/*
 * XREFs of _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$0 @ 0x180010ACF
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z @ 0x180004C24 (-GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtExceptionInternal_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const struct wil::FailureInfo *a4)
{
  wil *v5; // rcx
  __int64 v6; // rbx

  **(_BYTE **)(a2 + 168) = 1;
  v5 = *(wil **)(a2 + 152);
  v6 = *(_QWORD *)(a2 + 32);
  if ( v5 )
    wil::GetFailureLogString(v5, *(wchar_t **)(a2 + 160), v6 + 24, a4);
  *(_DWORD *)(a2 + 72) = *(_DWORD *)(v6 + 32);
  *(_DWORD *)(a2 + 76) = *(_DWORD *)(v6 + 36);
  *(_DWORD *)(a2 + 80) = (unsigned __int8)(*(_BYTE *)(v6 + 28) & 8) >> 3;
  return 0LL;
}
