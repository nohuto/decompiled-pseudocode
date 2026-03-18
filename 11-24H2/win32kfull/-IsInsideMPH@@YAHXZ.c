/*
 * XREFs of ?IsInsideMPH@@YAHXZ @ 0x140153DA0
 * Callers:
 *     xxxMNLoop @ 0x14009B5E0 (xxxMNLoop.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14024AF80 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     NtUserRealWaitMessageEx @ 0x14029A6B0 (NtUserRealWaitMessageEx.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

bool __fastcall IsInsideMPH(__int64 a1, __int64 a2)
{
  __int64 *CurrentThreadNonPaged; // rcx
  __int64 v3; // rcx

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v3 = *CurrentThreadNonPaged;
  else
    v3 = 0LL;
  return *(_DWORD *)(*(_QWORD *)(v3 + 488) + 28LL) > 0;
}
