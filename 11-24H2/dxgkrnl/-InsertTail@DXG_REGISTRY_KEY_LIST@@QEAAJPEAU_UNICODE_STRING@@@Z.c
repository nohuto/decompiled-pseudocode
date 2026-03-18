/*
 * XREFs of ?InsertTail@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1401CE1A8
 * Callers:
 *     ?AppendSubKeys@DXG_REGISTRY_KEY_LIST@@QEAAJPEAXPEAU_KEY_FULL_INFORMATION@@PEAU_UNICODE_STRING@@@Z @ 0x1401CC528 (-AppendSubKeys@DXG_REGISTRY_KEY_LIST@@QEAAJPEAXPEAU_KEY_FULL_INFORMATION@@PEAU_UNICODE_STRING@@@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x14006B1F0 (-RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DXG_REGISTRY_KEY_LIST::InsertTail(DXG_REGISTRY_KEY_LIST *this, struct _UNICODE_STRING *a2)
{
  __int64 v4; // rax
  DXG_REGISTRY_KEY_LIST **v6; // rcx

  v4 = operator new[](0x218uLL, 0x4B677844u, 256LL);
  if ( v4 )
  {
    v6 = (DXG_REGISTRY_KEY_LIST **)*((_QWORD *)this + 1);
    if ( *v6 != this )
      __fastfail(3u);
    *(_QWORD *)(v4 + 8) = v6;
    *(_QWORD *)v4 = this;
    *v6 = (DXG_REGISTRY_KEY_LIST *)v4;
    *((_QWORD *)this + 1) = v4;
    return RtlStringCbCopyUnicodeString((char *)(v4 + 16), 0x208uLL, a2);
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2203;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
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
