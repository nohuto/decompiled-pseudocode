/*
 * XREFs of NtUserfnGETDBCSTEXTLENGTHS @ 0x1C0016750
 * Callers:
 *     NtUserfnOUTCBOXSTRING @ 0x1C01E1EF0 (NtUserfnOUTCBOXSTRING.c)
 *     NtUserfnOUTLBOXSTRING @ 0x1C01E2180 (NtUserfnOUTLBOXSTRING.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnGETDBCSTEXTLENGTHS(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        int a7)
{
  PtiCurrentShared();
  return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
          + ((a6 + 6) & 0x1F)))(
           a1,
           a2,
           a3,
           a7,
           a5);
}
