/*
 * XREFs of KeGuardDispatchICall @ 0x140BC9A60
 * Callers:
 *     KiDecodeMcaFault @ 0x140505970 (KiDecodeMcaFault.c)
 *     KiSwInterruptDispatch @ 0x140506170 (KiSwInterruptDispatch.c)
 *     sub_140507C90 @ 0x140507C90 (sub_140507C90.c)
 *     sub_1405168E0 @ 0x1405168E0 (sub_1405168E0.c)
 *     sub_140516AFC @ 0x140516AFC (sub_140516AFC.c)
 *     sub_140516B60 @ 0x140516B60 (sub_140516B60.c)
 *     sub_140516BE4 @ 0x140516BE4 (sub_140516BE4.c)
 *     sub_140517CE8 @ 0x140517CE8 (sub_140517CE8.c)
 *     RtlpComputeEpilogueOffset @ 0x1405183CC (RtlpComputeEpilogueOffset.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140BB0010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140BC2A04 @ 0x140BC2A04 (sub_140BC2A04.c)
 *     sub_140BC50B0 @ 0x140BC50B0 (sub_140BC50B0.c)
 *     sub_140BC6AF8 @ 0x140BC6AF8 (sub_140BC6AF8.c)
 *     sub_140BC7DF0 @ 0x140BC7DF0 (sub_140BC7DF0.c)
 *     sub_140BC8DF0 @ 0x140BC8DF0 (sub_140BC8DF0.c)
 *     sub_140BCE96C @ 0x140BCE96C (sub_140BCE96C.c)
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
 *     sub_140BF76B4 @ 0x140BF76B4 (sub_140BF76B4.c)
 *     sub_140BF7E44 @ 0x140BF7E44 (sub_140BF7E44.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall KeGuardDispatchICall()
{
  __int64 (__fastcall *v0)(); // rax

  return v0();
}
