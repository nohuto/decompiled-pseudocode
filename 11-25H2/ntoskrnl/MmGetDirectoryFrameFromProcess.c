/*
 * XREFs of MmGetDirectoryFrameFromProcess @ 0x140A9971C
 * Callers:
 *     PfpLogApplicationEvent @ 0x1403BE670 (PfpLogApplicationEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetDirectoryFrameFromProcess(__int64 a1)
{
  return *(_QWORD *)(a1 + 40) >> 12;
}
