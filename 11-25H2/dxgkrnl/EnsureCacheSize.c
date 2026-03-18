/*
 * XREFs of EnsureCacheSize @ 0x1402818B0
 * Callers:
 *     ?DxgkCreateFeatureDatabase@@YAJPEBU_UNICODE_STRING@@PEBU_DXGKDDI_FEATURE_INTERFACE@@_N2PEAPEAUDXGK_FEATURE_DATABASE@@@Z @ 0x140280FF4 (-DxgkCreateFeatureDatabase@@YAJPEBU_UNICODE_STRING@@PEBU_DXGKDDI_FEATURE_INTERFACE@@_N2PEAPEAUDX.c)
 *     RecordCachedFeatureState @ 0x140282008 (RecordCachedFeatureState.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 */

char __fastcall EnsureCacheSize(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int64 v7; // rax
  void *v8; // rsi
  char result; // al
  __int64 v10; // rbx
  __int64 v11; // rax

  v4 = a2;
  v7 = 6LL * a3;
  if ( !is_mul_ok(a3, 6uLL) )
    v7 = -1LL;
  v8 = (void *)operator new[](v7, 0x44786746u, 256LL, a4);
  if ( v8 )
  {
    v10 = 2 * v4;
    v11 = *(unsigned int *)(a1 + 8 * v10 + 16);
    if ( (_DWORD)v11 )
      memmove(v8, *(const void **)(a1 + 8 * v10 + 8), 6 * v11);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)(a1 + 8 * v10 + 8));
    result = 1;
    *(_QWORD *)(a1 + 8 * v10 + 8) = v8;
    *(_DWORD *)(a1 + 8 * v10 + 16) = a3;
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 1019;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate feature database cached feature array.",
      1019LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0;
  }
  return result;
}
