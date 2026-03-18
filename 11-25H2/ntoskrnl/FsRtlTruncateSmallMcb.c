/*
 * XREFs of FsRtlTruncateSmallMcb @ 0x140689D20
 * Callers:
 *     KiInterruptThunk @ 0x1406AA810 (KiInterruptThunk.c)
 *     $$1 @ 0x1406AA820 ($$1.c)
 *     $$2 @ 0x1406AA830 ($$2.c)
 *     $$3 @ 0x1406AA840 ($$3.c)
 *     $$4 @ 0x1406AA850 ($$4.c)
 *     $$5 @ 0x1406AA860 ($$5.c)
 *     $$6 @ 0x1406AA870 ($$6.c)
 *     $$7 @ 0x1406AA880 ($$7.c)
 *     $$8 @ 0x1406AA890 ($$8.c)
 *     $$9 @ 0x1406AA8A0 ($$9.c)
 *     $$a @ 0x1406AA8B0 ($$a.c)
 *     $$b @ 0x1406AA8C0 ($$b.c)
 *     $$c @ 0x1406AA8D0 ($$c.c)
 *     $$d @ 0x1406AA8E0 ($$d.c)
 *     $$e @ 0x1406AA8F0 ($$e.c)
 *     $$f @ 0x1406AA900 ($$f.c)
 * Callees:
 *     KeExitRetpoline @ 0x14046112C (KeExitRetpoline.c)
 *     RtlpComputeEpilogueOffset @ 0x1405183CC (RtlpComputeEpilogueOffset.c)
 *     KiCustomAccessRoutine0 @ 0x1406AA5D0 (KiCustomAccessRoutine0.c)
 */

__int64 __fastcall FsRtlTruncateSmallMcb(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax

  KeExitRetpoline(a1, a2);
  result = (a2 >> 47) + 1;
  if ( a2 >> 47 != -1 && result != 1 )
  {
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    return KiCustomAccessRoutine0(a2);
  }
  return result;
}
