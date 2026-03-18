/*
 * XREFs of ?InitPagesHistory@VIDMM_SEGMENT@@IEAAJXZ @ 0x14009E5EC
 * Callers:
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX0@ZPEAT_LARGE_INTEGER@@@Z @ 0x14010AA20 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX0@ZPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036BA0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::InitPagesHistory(VIDMM_SEGMENT *this)
{
  unsigned int v2; // eax
  __int64 v3; // rax
  unsigned __int64 v4; // kr00_8
  __int64 v5; // rax
  __int64 v6; // rcx

  *((_DWORD *)this + 70) = dword_140081324;
  v2 = dword_140081324;
  *((_DWORD *)this + 71) = 0;
  if ( !v2 )
    return 0LL;
  v4 = v2;
  v3 = 16LL * v2;
  if ( !is_mul_ok(v4, 0x10uLL) )
    v3 = -1LL;
  v5 = operator new[](v3, 0x36336956u, 64LL);
  *((_QWORD *)this + 36) = v5;
  if ( v5 )
    return 0LL;
  *((_DWORD *)this + 70) = 0;
  _InterlockedIncrement(dword_1400817A0);
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 1092;
  DxgkLogInternalTriageEvent(v6, 262145LL);
  return 3221225495LL;
}
