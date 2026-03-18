/*
 * XREFs of KiGetIdealNodeProcessByGroup @ 0x14048B770
 * Callers:
 *     KeInitThread @ 0x140B69230 (KeInitThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetIdealNodeProcessByGroup(__int64 a1, unsigned __int16 a2)
{
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 184) + 2LL * a2 + 144);
}
