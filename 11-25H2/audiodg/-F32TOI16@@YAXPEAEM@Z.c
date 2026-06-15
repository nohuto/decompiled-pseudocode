/*
 * XREFs of ?F32TOI16@@YAXPEAEM@Z @ 0x140038380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall F32TOI16(unsigned __int8 *a1, float a2)
{
  *(_WORD *)a1 = (int)(a2 * 32768.0);
}
