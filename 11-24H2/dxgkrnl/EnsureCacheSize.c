/*
 * XREFs of EnsureCacheSize @ 0x140288D5C
 * Callers:
 *     ?DxgkCreateFeatureDatabase@@YAJPEBU_UNICODE_STRING@@PEBU_DXGKDDI_FEATURE_INTERFACE@@_N2PEAPEAUDXGK_FEATURE_DATABASE@@@Z @ 0x1402884A0 (-DxgkCreateFeatureDatabase@@YAJPEBU_UNICODE_STRING@@PEBU_DXGKDDI_FEATURE_INTERFACE@@_N2PEAPEAUDX.c)
 *     RecordCachedFeatureState @ 0x1402894B4 (RecordCachedFeatureState.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

char __fastcall EnsureCacheSize(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rbx
  unsigned __int64 v6; // rax
  void *v7; // rsi
  char result; // al
  __int64 v9; // rbx
  __int64 v10; // rax

  v3 = a2;
  v6 = 6LL * a3;
  if ( !is_mul_ok(a3, 6uLL) )
    v6 = -1LL;
  v7 = (void *)operator new[](v6, 0x44786746u, 256LL);
  if ( v7 )
  {
    v9 = 2 * v3;
    v10 = *(unsigned int *)(a1 + 8 * v9 + 16);
    if ( (_DWORD)v10 )
      memmove(v7, *(const void **)(a1 + 8 * v9 + 8), 6 * v10);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)(a1 + 8 * v9 + 8));
    result = 1;
    *(_QWORD *)(a1 + 8 * v9 + 8) = v7;
    *(_DWORD *)(a1 + 8 * v9 + 16) = a3;
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 1034;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate feature database cached feature array.",
      1034LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0;
  }
  return result;
}
