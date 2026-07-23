/*
 * XREFs of RtlPcToFileHeader @ 0x14025DBF0
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x1405E4858 (RtlGuardCheckLongJumpTarget.c)
 *     EtwTimLogControlProtectionKernelModeReturnMismatch @ 0x140643A68 (EtwTimLogControlProtectionKernelModeReturnMismatch.c)
 *     MiIssueDllInitializeCall @ 0x1407D77CC (MiIssueDllInitializeCall.c)
 *     MiUnloadApproved @ 0x1407D79F4 (MiUnloadApproved.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x140898054 (EtwpLocateDbgIdForRegEntry.c)
 *     IoCreateDriver @ 0x140AACA20 (IoCreateDriver.c)
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
 *     VslpRecordBootRanges @ 0x140C5548C (VslpRecordBootRanges.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x14025BE40 (RtlpxLookupFunctionTable.c)
 */

PVOID __cdecl RtlPcToFileHeader(PVOID PcValue, PVOID *BaseOfImage)
{
  PVOID result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v4 = 0LL;
  if ( (unsigned __int64)PcValue < *((_QWORD *)&xmmword_141200030 + 1)
    || (unsigned __int64)PcValue >= *((_QWORD *)&xmmword_141200030 + 1)
                                  + (unsigned __int64)(unsigned int)qword_141200040 )
  {
    RtlpxLookupFunctionTable((unsigned __int64)PcValue, (__int64)&v4);
  }
  else
  {
    v4 = xmmword_141200030;
  }
  result = (PVOID)*((_QWORD *)&v4 + 1);
  *BaseOfImage = (PVOID)*((_QWORD *)&v4 + 1);
  return result;
}
