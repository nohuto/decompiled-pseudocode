/*
 * XREFs of FsRtlTruncateSmallMcb @ 0x140696240
 * Callers:
 *     KiInterruptThunk @ 0x1406B6A80 (KiInterruptThunk.c)
 *     $$1 @ 0x1406B6A90 ($$1.c)
 *     $$2 @ 0x1406B6AA0 ($$2.c)
 *     $$3 @ 0x1406B6AB0 ($$3.c)
 *     $$4 @ 0x1406B6AC0 ($$4.c)
 *     $$5 @ 0x1406B6AD0 ($$5.c)
 *     $$6 @ 0x1406B6AE0 ($$6.c)
 *     $$7 @ 0x1406B6AF0 ($$7.c)
 *     $$8 @ 0x1406B6B00 ($$8.c)
 *     $$9 @ 0x1406B6B10 ($$9.c)
 *     $$a @ 0x1406B6B20 ($$a.c)
 *     $$b @ 0x1406B6B30 ($$b.c)
 *     $$c @ 0x1406B6B40 ($$c.c)
 *     $$d @ 0x1406B6B50 ($$d.c)
 *     $$e @ 0x1406B6B60 ($$e.c)
 *     $$f @ 0x1406B6B70 ($$f.c)
 * Callees:
 *     KeExitRetpoline @ 0x14045517C (KeExitRetpoline.c)
 *     RtlpComputeEpilogueOffset @ 0x14051840C (RtlpComputeEpilogueOffset.c)
 *     KiCustomAccessRoutine0 @ 0x1406B6840 (KiCustomAccessRoutine0.c)
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
