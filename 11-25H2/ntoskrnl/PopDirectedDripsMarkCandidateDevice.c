/*
 * XREFs of PopDirectedDripsMarkCandidateDevice @ 0x1406F04D0
 * Callers:
 *     PopDripsWatchdogCallbackHandler @ 0x140752EE0 (PopDripsWatchdogCallbackHandler.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x140AB2BEC (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     PopDirectedDripsDiagTraceMarkDevice @ 0x140A7D834 (PopDirectedDripsDiagTraceMarkDevice.c)
 */

__int64 __fastcall PopDirectedDripsMarkCandidateDevice(__int64 a1)
{
  __int64 result; // rax

  _m_prefetchw((const void *)(a1 + 864));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(a1 + 864), 0x40u);
  if ( (result & 0x40) == 0 )
  {
    ++dword_140F0D674;
    ++dword_140F0D870;
    return PopDirectedDripsDiagTraceMarkDevice(*(_QWORD *)(a1 + 48));
  }
  return result;
}
