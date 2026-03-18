/*
 * XREFs of NtGdiEnableEudc @ 0x14030D360
 * Callers:
 *     <none>
 * Callees:
 *     GreEnableEUDC @ 0x140152440 (GreEnableEUDC.c)
 */

__int64 __fastcall NtGdiEnableEudc(__int64 a1, __int64 a2, __int64 a3)
{
  return GreEnableEUDC(a1, a2, a3);
}
