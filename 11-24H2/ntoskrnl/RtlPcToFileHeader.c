/*
 * XREFs of RtlPcToFileHeader @ 0x140447DA0
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x1405EE1EC (RtlGuardCheckLongJumpTarget.c)
 *     EtwTimLogControlProtectionKernelModeReturnMismatch @ 0x14064E0B4 (EtwTimLogControlProtectionKernelModeReturnMismatch.c)
 *     MiIssueDllInitializeCall @ 0x1407E7C54 (MiIssueDllInitializeCall.c)
 *     MiUnloadApproved @ 0x1407E7E7C (MiUnloadApproved.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x1409F91A0 (EtwpLocateDbgIdForRegEntry.c)
 *     IoCreateDriver @ 0x140AACC00 (IoCreateDriver.c)
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 *     VslpRecordBootRanges @ 0x140C69290 (VslpRecordBootRanges.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x140233240 (RtlpxLookupFunctionTable.c)
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
