/*
 * XREFs of KeGuardCheckICall @ 0x140BDCA70
 * Callers:
 *     KiSwInterruptDispatch @ 0x1405061B0 (KiSwInterruptDispatch.c)
 *     sub_140507CD0 @ 0x140507CD0 (sub_140507CD0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140BC3010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140BDA680 @ 0x140BDA680 (sub_140BDA680.c)
 *     sub_140BDADF0 @ 0x140BDADF0 (sub_140BDADF0.c)
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall KeGuardCheckICall(ULONG_PTR a1)
{
  guard_check_icall_no_overrides(a1);
}
