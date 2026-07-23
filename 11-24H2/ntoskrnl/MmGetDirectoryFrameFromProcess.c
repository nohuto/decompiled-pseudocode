/*
 * XREFs of MmGetDirectoryFrameFromProcess @ 0x140A99AD0
 * Callers:
 *     PfpLogApplicationEvent @ 0x1402627C0 (PfpLogApplicationEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetDirectoryFrameFromProcess(__int64 a1)
{
  return *(_QWORD *)(a1 + 40) >> 12;
}
