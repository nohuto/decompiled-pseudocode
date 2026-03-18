/*
 * XREFs of KeGuardCheckICall @ 0x140BC9A70
 * Callers:
 *     KiSwInterruptDispatch @ 0x140506170 (KiSwInterruptDispatch.c)
 *     sub_140507C90 @ 0x140507C90 (sub_140507C90.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140BB0010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140BC7680 @ 0x140BC7680 (sub_140BC7680.c)
 *     sub_140BC7DF0 @ 0x140BC7DF0 (sub_140BC7DF0.c)
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall KeGuardCheckICall(ULONG_PTR a1)
{
  guard_check_icall_no_overrides(a1);
}
