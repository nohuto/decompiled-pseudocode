/*
 * XREFs of ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x140380B64
 * Callers:
 *     ?CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z @ 0x140197F94 (-CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1401989C8 (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 *     ?UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z @ 0x14019B2E0 (-UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1403809D8 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1403EAFE4 (-PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031B58 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x140380C3C (-DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_C.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetCopyProtection(ADAPTER_DISPLAY *this, unsigned int a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // r9d
  _DWORD *i; // rcx
  void *v7; // rcx

  v4 = 0;
  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5977;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"IsCoreResourceSharedOwner()", 5977LL, 0LL, 0LL, 0LL, 0LL);
  }
  v5 = 0;
  for ( i = (_DWORD *)*((_QWORD *)this + 10); i != (_DWORD *)((char *)this + 80) && i; i = *(_DWORD **)i )
  {
    if ( i[13] == a2 && i[14] > v5 )
      v5 = i[14];
  }
  v7 = (void *)*((_QWORD *)this + 2);
  if ( v5 )
    return (unsigned int)DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource(
                           v7,
                           a2,
                           D3DKMDT_VPPMT_MACROVISION_APSTRIGGER,
                           v5);
  else
    DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource(v7, a2, D3DKMDT_VPPMT_NOPROTECTION, 0);
  return v4;
}
