/*
 * XREFs of FsRtlTruncateSmallMcb @ 0x140695170
 * Callers:
 *     KiInterruptThunk @ 0x1406B5AE0 (KiInterruptThunk.c)
 *     $$1 @ 0x1406B5AF0 ($$1.c)
 *     $$2 @ 0x1406B5B00 ($$2.c)
 *     $$3 @ 0x1406B5B10 ($$3.c)
 *     $$4 @ 0x1406B5B20 ($$4.c)
 *     $$5 @ 0x1406B5B30 ($$5.c)
 *     $$6 @ 0x1406B5B40 ($$6.c)
 *     $$7 @ 0x1406B5B50 ($$7.c)
 *     $$8 @ 0x1406B5B60 ($$8.c)
 *     $$9 @ 0x1406B5B70 ($$9.c)
 *     $$a @ 0x1406B5B80 ($$a.c)
 *     $$b @ 0x1406B5B90 ($$b.c)
 *     $$c @ 0x1406B5BA0 ($$c.c)
 *     $$d @ 0x1406B5BB0 ($$d.c)
 *     $$e @ 0x1406B5BC0 ($$e.c)
 *     $$f @ 0x1406B5BD0 ($$f.c)
 * Callees:
 *     KeExitRetpoline @ 0x14046029C (KeExitRetpoline.c)
 *     RtlpComputeEpilogueOffset @ 0x14051AB4C (RtlpComputeEpilogueOffset.c)
 *     KiCustomAccessRoutine0 @ 0x1406B58A0 (KiCustomAccessRoutine0.c)
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
