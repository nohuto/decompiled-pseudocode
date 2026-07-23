/*
 * XREFs of PopDirectedDripsMarkCandidateDevice @ 0x1406F9E54
 * Callers:
 *     PopDripsWatchdogCallbackHandler @ 0x14075EAE0 (PopDripsWatchdogCallbackHandler.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x140AB1B4C (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     PopDirectedDripsDiagTraceMarkDevice @ 0x140A7B90C (PopDirectedDripsDiagTraceMarkDevice.c)
 */

__int64 __fastcall PopDirectedDripsMarkCandidateDevice(__int64 a1)
{
  __int64 result; // rax

  _m_prefetchw((const void *)(a1 + 864));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(a1 + 864), 0x40u);
  if ( (result & 0x40) == 0 )
  {
    ++dword_140F0DFF4;
    ++dword_140F0E1F0;
    return PopDirectedDripsDiagTraceMarkDevice(*(_QWORD *)(a1 + 48));
  }
  return result;
}
