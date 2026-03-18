/*
 * XREFs of ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x14039E694
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1402929F8 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x140297470 (-SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPO.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031B58 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

struct _DXGKARG_SETPOINTERSHAPE *__fastcall DISPLAY_SOURCE::GetClippedCursor(ADAPTER_DISPLAY **this, char a2)
{
  ADAPTER_DISPLAY *v4; // rcx
  __int64 v5; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rax

  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(this[1]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5568;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"m_DisplayCore->IsCoreResourceSharedOwner()",
      5568LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = this[111];
  v5 = *((_QWORD *)this[1] + 2);
  if ( v4 )
    goto LABEL_4;
  if ( a2 )
  {
    v7 = 4LL * (unsigned int)(*(_DWORD *)(v5 + 2424) * *(_DWORD *)(v5 + 2428));
    if ( !is_mul_ok((unsigned int)(*(_DWORD *)(v5 + 2424) * *(_DWORD *)(v5 + 2428)), 4uLL) )
      v7 = -1LL;
    v8 = operator new[](v7, 0x4B677844u, 256LL);
    this[111] = (ADAPTER_DISPLAY *)v8;
    v4 = (ADAPTER_DISPLAY *)v8;
    if ( v8 )
LABEL_4:
      memset(v4, 0, 4 * *(unsigned int *)(v5 + 2428) * (unsigned __int64)*(unsigned int *)(v5 + 2424));
  }
  return (struct _DXGKARG_SETPOINTERSHAPE *)(this + 108);
}
