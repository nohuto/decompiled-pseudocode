/*
 * XREFs of PopDirectedDripsMarkCandidateDevice @ 0x1406FC214
 * Callers:
 *     PopDripsWatchdogCallbackHandler @ 0x14075FAE0 (PopDripsWatchdogCallbackHandler.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x140AB7798 (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     PopDirectedDripsDiagTraceMarkDevice @ 0x140A80EAC (PopDirectedDripsDiagTraceMarkDevice.c)
 */

__int64 __fastcall PopDirectedDripsMarkCandidateDevice(__int64 a1)
{
  __int64 result; // rax

  _m_prefetchw((const void *)(a1 + 864));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(a1 + 864), 0x40u);
  if ( (result & 0x40) == 0 )
  {
    ++dword_140F0DD54;
    ++dword_140F0DF50;
    return PopDirectedDripsDiagTraceMarkDevice(*(_QWORD *)(a1 + 48));
  }
  return result;
}
