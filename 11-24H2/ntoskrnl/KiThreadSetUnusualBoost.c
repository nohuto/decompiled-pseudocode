/*
 * XREFs of KiThreadSetUnusualBoost @ 0x1402E0094
 * Callers:
 *     KiSetPriorityBoost @ 0x1402DFE70 (KiSetPriorityBoost.c)
 *     KiDirectSwitchThread @ 0x14041E720 (KiDirectSwitchThread.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall KiThreadSetUnusualBoost(__int64 a1, int a2)
{
  int v2; // eax

  v2 = (unsigned __int8)(*(unsigned __int16 *)(a1 + 518) >> 4);
  if ( v2 < a2 )
  {
    LOWORD(v2) = *(_WORD *)(a1 + 518) ^ (*(_WORD *)(a1 + 518) ^ (16 * (char)a2)) & 0xFF0;
    *(_WORD *)(a1 + 518) = v2;
  }
  return v2;
}
