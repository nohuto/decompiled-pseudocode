/*
 * XREFs of ?GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x140367D9C
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1402929F8 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

struct _DXGKARG_SETPOINTERSHAPE *__fastcall DISPLAY_SOURCE::GetSavedCursor(DISPLAY_SOURCE *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned __int64 v7; // rax

  v4 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v4 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v4 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5543;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"m_DisplayCore->IsCoreResourceSharedOwner()",
      5543LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v5 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( !*((_QWORD *)this + 106) && a2 )
  {
    v7 = 4LL * (unsigned int)(*(_DWORD *)(v5 + 2424) * *(_DWORD *)(v5 + 2428));
    if ( !is_mul_ok((unsigned int)(*(_DWORD *)(v5 + 2424) * *(_DWORD *)(v5 + 2428)), 4uLL) )
      v7 = -1LL;
    *((_QWORD *)this + 106) = operator new[](v7, 0x4B677844u, 256LL);
  }
  return (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 824);
}
