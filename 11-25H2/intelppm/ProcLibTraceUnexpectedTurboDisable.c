/*
 * XREFs of ProcLibTraceUnexpectedTurboDisable @ 0x1400088F4
 * Callers:
 *     SetGV3PerfStateAndTurbo @ 0x140003010 (SetGV3PerfStateAndTurbo.c)
 *     SetGV3PerfState @ 0x140003370 (SetGV3PerfState.c)
 *     SetTurboDisablePolicy @ 0x1400053E0 (SetTurboDisablePolicy.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140001008 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140001034 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
 */

void ProcLibTraceUnexpectedTurboDisable()
{
  __int64 v0; // r8
  __int64 v1; // r9
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_140018C60 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140018C60, 0x200000000000LL) )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140018C60,
        (unsigned __int8 *)dword_140014E5C,
        v0,
        v1,
        (ULONG)2,
        &v2);
  }
}
