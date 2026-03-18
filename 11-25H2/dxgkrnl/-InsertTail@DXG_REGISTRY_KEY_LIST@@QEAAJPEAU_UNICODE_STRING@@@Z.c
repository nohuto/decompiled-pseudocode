/*
 * XREFs of ?InsertTail@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1401C8F18
 * Callers:
 *     ?AppendSubKeys@DXG_REGISTRY_KEY_LIST@@QEAAJPEAXPEAU_KEY_FULL_INFORMATION@@PEAU_UNICODE_STRING@@@Z @ 0x1401C7298 (-AppendSubKeys@DXG_REGISTRY_KEY_LIST@@QEAAJPEAXPEAU_KEY_FULL_INFORMATION@@PEAU_UNICODE_STRING@@@.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x14006B5D0 (-RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DXG_REGISTRY_KEY_LIST::InsertTail(
        DXG_REGISTRY_KEY_LIST *this,
        struct _UNICODE_STRING *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  DXG_REGISTRY_KEY_LIST **v8; // rcx

  v6 = operator new[](0x218uLL, 0x4B677844u, 256LL, a4);
  if ( v6 )
  {
    v8 = (DXG_REGISTRY_KEY_LIST **)*((_QWORD *)this + 1);
    if ( *v8 != this )
      __fastfail(3u);
    *(_QWORD *)(v6 + 8) = v8;
    *(_QWORD *)v6 = this;
    *v8 = (DXG_REGISTRY_KEY_LIST *)v6;
    *((_QWORD *)this + 1) = v6;
    return RtlStringCbCopyUnicodeString((char *)(v6 + 16), 0x208uLL, a2);
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2203;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Cannot allocate memory for DXG_REGISTRY_KEY_ENTRY",
      2203LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
