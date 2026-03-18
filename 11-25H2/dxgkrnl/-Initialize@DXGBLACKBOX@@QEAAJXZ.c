/*
 * XREFs of ?Initialize@DXGBLACKBOX@@QEAAJXZ @ 0x1401C6550
 * Callers:
 *     ?Initialize@DisplayDiagnostics@@QEAAXXZ @ 0x14006E3EC (-Initialize@DisplayDiagnostics@@QEAAXXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGBLACKBOX::Initialize(DXGBLACKBOX *this, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rax

  v5 = (_DWORD *)operator new[](0x1000uLL, 0x4B677844u, 64LL, a4);
  *((_QWORD *)this + 7) = v5;
  if ( v5 )
  {
    *v5 = 2;
    *(_DWORD *)(*((_QWORD *)this + 7) + 4LL) = 8;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 42;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
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
