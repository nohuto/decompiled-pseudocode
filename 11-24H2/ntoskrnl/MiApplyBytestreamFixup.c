/*
 * XREFs of MiApplyBytestreamFixup @ 0x14049DA7C
 * Callers:
 *     MiSwitchBaseAddress @ 0x140A45C38 (MiSwitchBaseAddress.c)
 * Callees:
 *     <none>
 */

void __fastcall MiApplyBytestreamFixup(__int64 a1, _QWORD *a2, __int64 a3)
{
  *a2 += a3;
}
