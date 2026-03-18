/*
 * XREFs of ?Initialize@DXGBLACKBOX@@QEAAJXZ @ 0x1401CB7A0
 * Callers:
 *     ?Initialize@DisplayDiagnostics@@QEAAXXZ @ 0x14006EE70 (-Initialize@DisplayDiagnostics@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall DXGBLACKBOX::Initialize(DXGBLACKBOX *this)
{
  _DWORD *v2; // rax

  v2 = (_DWORD *)operator new[](0x1000uLL, 0x4B677844u, 64LL);
  *((_QWORD *)this + 7) = v2;
  if ( v2 )
  {
    *v2 = 2;
    *(_DWORD *)(*((_QWORD *)this + 7) + 4LL) = 8;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 42;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"DXGBLACKBOX::Initialize() couldn't allocate data buffer.",
      42LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
