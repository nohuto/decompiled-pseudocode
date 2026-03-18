/*
 * XREFs of KeGuardDispatchICall @ 0x140BDAA60
 * Callers:
 *     KiDecodeMcaFault @ 0x1405080F0 (KiDecodeMcaFault.c)
 *     KiSwInterruptDispatch @ 0x1405088F0 (KiSwInterruptDispatch.c)
 *     sub_14050A410 @ 0x14050A410 (sub_14050A410.c)
 *     sub_140519060 @ 0x140519060 (sub_140519060.c)
 *     sub_14051927C @ 0x14051927C (sub_14051927C.c)
 *     sub_1405192E0 @ 0x1405192E0 (sub_1405192E0.c)
 *     sub_140519364 @ 0x140519364 (sub_140519364.c)
 *     sub_14051A468 @ 0x14051A468 (sub_14051A468.c)
 *     RtlpComputeEpilogueOffset @ 0x14051AB4C (RtlpComputeEpilogueOffset.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140BC1010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140BD3A04 @ 0x140BD3A04 (sub_140BD3A04.c)
 *     sub_140BD60B0 @ 0x140BD60B0 (sub_140BD60B0.c)
 *     sub_140BD7AF8 @ 0x140BD7AF8 (sub_140BD7AF8.c)
 *     sub_140BD8DF0 @ 0x140BD8DF0 (sub_140BD8DF0.c)
 *     sub_140BD9DF0 @ 0x140BD9DF0 (sub_140BD9DF0.c)
 *     sub_140BDF96C @ 0x140BDF96C (sub_140BDF96C.c)
 *     sub_140BE10B0 @ 0x140BE10B0 (sub_140BE10B0.c)
 *     sub_140C086B4 @ 0x140C086B4 (sub_140C086B4.c)
 *     sub_140C08E44 @ 0x140C08E44 (sub_140C08E44.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall KeGuardDispatchICall()
{
  __int64 (__fastcall *v0)(); // rax

  return v0();
}
