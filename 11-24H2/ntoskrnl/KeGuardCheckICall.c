/*
 * XREFs of KeGuardCheckICall @ 0x140BDAA70
 * Callers:
 *     KiSwInterruptDispatch @ 0x1405088F0 (KiSwInterruptDispatch.c)
 *     sub_14050A410 @ 0x14050A410 (sub_14050A410.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140BC1010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140BD8680 @ 0x140BD8680 (sub_140BD8680.c)
 *     sub_140BD8DF0 @ 0x140BD8DF0 (sub_140BD8DF0.c)
 *     sub_140BE10B0 @ 0x140BE10B0 (sub_140BE10B0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall KeGuardCheckICall(ULONG_PTR a1)
{
  guard_check_icall_no_overrides(a1);
}
