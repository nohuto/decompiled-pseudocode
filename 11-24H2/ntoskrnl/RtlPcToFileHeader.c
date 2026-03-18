/*
 * XREFs of RtlPcToFileHeader @ 0x140452CF0
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x1405F0BAC (RtlGuardCheckLongJumpTarget.c)
 *     EtwTimLogControlProtectionKernelModeReturnMismatch @ 0x14064FA08 (EtwTimLogControlProtectionKernelModeReturnMismatch.c)
 *     MiIssueDllInitializeCall @ 0x1407E7684 (MiIssueDllInitializeCall.c)
 *     MiUnloadApproved @ 0x1407E78AC (MiUnloadApproved.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x1408375D4 (EtwpLocateDbgIdForRegEntry.c)
 *     IoCreateDriver @ 0x140AB1C90 (IoCreateDriver.c)
 *     sub_140BE10B0 @ 0x140BE10B0 (sub_140BE10B0.c)
 *     VslpRecordBootRanges @ 0x140C67114 (VslpRecordBootRanges.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x14027DCB0 (RtlpxLookupFunctionTable.c)
 */

__int64 __fastcall RtlPcToFileHeader(unsigned __int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v4 = 0LL;
  if ( a1 < *((_QWORD *)&xmmword_141200030 + 1)
    || a1 >= *((_QWORD *)&xmmword_141200030 + 1) + (unsigned __int64)(unsigned int)qword_141200040 )
  {
    RtlpxLookupFunctionTable(a1, (__int64)&v4);
  }
  else
  {
    v4 = xmmword_141200030;
  }
  result = *((_QWORD *)&v4 + 1);
  *a2 = *((_QWORD *)&v4 + 1);
  return result;
}
