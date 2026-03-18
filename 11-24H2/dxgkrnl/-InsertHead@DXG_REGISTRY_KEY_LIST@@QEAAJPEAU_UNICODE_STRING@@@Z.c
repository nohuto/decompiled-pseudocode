/*
 * XREFs of ?InsertHead@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1401CE0E8
 * Callers:
 *     ?DeleteRegistryKey@DXGADAPTER@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x14018DEE4 (-DeleteRegistryKey@DXGADAPTER@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140223950 (-VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x14006B1F0 (-RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DXG_REGISTRY_KEY_LIST::InsertHead(DXG_REGISTRY_KEY_LIST *this, struct _UNICODE_STRING *a2)
{
  __int64 v4; // rax
  __int64 v6; // rcx

  v4 = operator new[](0x218uLL, 0x4B677844u, 256LL);
  if ( v4 )
  {
    v6 = *(_QWORD *)this;
    if ( *(DXG_REGISTRY_KEY_LIST **)(*(_QWORD *)this + 8LL) != this )
      __fastfail(3u);
    *(_QWORD *)v4 = v6;
    *(_QWORD *)(v4 + 8) = this;
    *(_QWORD *)(v6 + 8) = v4;
    *(_QWORD *)this = v4;
    return RtlStringCbCopyUnicodeString((char *)(v4 + 16), 0x208uLL, a2);
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2179;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Cannot allocate memory for DXG_REGISTRY_KEY_ENTRY",
      2179LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
