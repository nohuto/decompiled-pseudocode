/*
 * XREFs of HUBDSM_InitializingEnumRetryCountInEnum @ 0x140023160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_InitializingEnumRetryCountInEnum(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 960);
  _InterlockedAnd((volatile signed __int32 *)(v1 + 1644), 0xFFFFDFFF);
  *(_DWORD *)(v1 + 2440) = 0;
  *(_DWORD *)(v1 + 32) = 0;
  *(_WORD *)(v1 + 2220) = 0;
  *(_WORD *)(v1 + 2216) = 0;
  _InterlockedAnd((volatile signed __int32 *)(v1 + 2476), 0xFFFFFFFD);
  _InterlockedAnd((volatile signed __int32 *)(v1 + 2476), 0xFFFFFFFE);
  _InterlockedAnd((volatile signed __int32 *)(v1 + 2224), 0xFFFFFFFB);
  _InterlockedAnd((volatile signed __int32 *)(v1 + 2224), 0xFFFFFFF7);
  return 4077LL;
}
