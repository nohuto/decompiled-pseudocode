/*
 * XREFs of MiApplyBytestreamFixup @ 0x1404A2AEC
 * Callers:
 *     MiSwitchBaseAddress @ 0x1408F6D04 (MiSwitchBaseAddress.c)
 * Callees:
 *     <none>
 */

void __fastcall MiApplyBytestreamFixup(__int64 a1, _QWORD *a2, __int64 a3)
{
  *a2 += a3;
}
