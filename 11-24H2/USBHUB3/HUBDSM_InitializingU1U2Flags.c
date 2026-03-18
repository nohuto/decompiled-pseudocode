/*
 * XREFs of HUBDSM_InitializingU1U2Flags @ 0x140023230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_InitializingU1U2Flags(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 960);
  _InterlockedAnd((volatile signed __int32 *)(v1 + 2224), 0xFFFFFFBF);
  _InterlockedAnd((volatile signed __int32 *)(v1 + 2224), 0xFFFFFF7F);
  _InterlockedAnd((volatile signed __int32 *)(v1 + 2224), 0xFFFFFEFF);
  *(_BYTE *)(v1 + 2214) = 0;
  return 4077LL;
}
