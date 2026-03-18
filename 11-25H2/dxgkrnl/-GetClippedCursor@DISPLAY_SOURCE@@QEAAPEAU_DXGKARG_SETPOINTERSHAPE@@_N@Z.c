/*
 * XREFs of ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1403AC6F4
 * Callers:
 *     ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x14028AEA0 (-SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPO.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1402CC238 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031C38 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

struct _DXGKARG_SETPOINTERSHAPE *__fastcall DISPLAY_SOURCE::GetClippedCursor(ADAPTER_DISPLAY **this, char a2)
{
  __int64 v4; // r9
  ADAPTER_DISPLAY *v5; // rcx
  __int64 v6; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // rax

  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(this[1]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5570;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_DisplayCore->IsCoreResourceSharedOwner()",
      5570LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v5 = this[111];
  v6 = *((_QWORD *)this[1] + 2);
  if ( v5 )
    goto LABEL_4;
  if ( a2 )
  {
    v8 = 4LL * (unsigned int)(*(_DWORD *)(v6 + 2424) * *(_DWORD *)(v6 + 2428));
    if ( !is_mul_ok((unsigned int)(*(_DWORD *)(v6 + 2424) * *(_DWORD *)(v6 + 2428)), 4uLL) )
      v8 = -1LL;
    v9 = operator new[](v8, 0x4B677844u, 256LL, v4);
    this[111] = (ADAPTER_DISPLAY *)v9;
    v5 = (ADAPTER_DISPLAY *)v9;
    if ( v9 )
LABEL_4:
      memset(v5, 0, 4 * *(unsigned int *)(v6 + 2428) * (unsigned __int64)*(unsigned int *)(v6 + 2424));
  }
  return (struct _DXGKARG_SETPOINTERSHAPE *)(this + 108);
}
