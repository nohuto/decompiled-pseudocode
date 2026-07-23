/*
 * XREFs of KeGuardDispatchICall @ 0x140BDCA60
 * Callers:
 *     KiDecodeMcaFault @ 0x1405059B0 (KiDecodeMcaFault.c)
 *     KiSwInterruptDispatch @ 0x1405061B0 (KiSwInterruptDispatch.c)
 *     sub_140507CD0 @ 0x140507CD0 (sub_140507CD0.c)
 *     sub_140516920 @ 0x140516920 (sub_140516920.c)
 *     sub_140516B3C @ 0x140516B3C (sub_140516B3C.c)
 *     sub_140516BA0 @ 0x140516BA0 (sub_140516BA0.c)
 *     sub_140516C24 @ 0x140516C24 (sub_140516C24.c)
 *     sub_140517D28 @ 0x140517D28 (sub_140517D28.c)
 *     RtlpComputeEpilogueOffset @ 0x14051840C (RtlpComputeEpilogueOffset.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140BC3010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140BD5A04 @ 0x140BD5A04 (sub_140BD5A04.c)
 *     sub_140BD80B0 @ 0x140BD80B0 (sub_140BD80B0.c)
 *     sub_140BD9AF8 @ 0x140BD9AF8 (sub_140BD9AF8.c)
 *     sub_140BDADF0 @ 0x140BDADF0 (sub_140BDADF0.c)
 *     sub_140BDBDF0 @ 0x140BDBDF0 (sub_140BDBDF0.c)
 *     sub_140BE196C @ 0x140BE196C (sub_140BE196C.c)
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 *     sub_140C0A6B4 @ 0x140C0A6B4 (sub_140C0A6B4.c)
 *     sub_140C0AE44 @ 0x140C0AE44 (sub_140C0AE44.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall KeGuardDispatchICall()
{
  __int64 (__fastcall *v0)(); // rax

  return v0();
}
