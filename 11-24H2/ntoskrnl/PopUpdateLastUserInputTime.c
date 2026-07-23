/*
 * XREFs of PopUpdateLastUserInputTime @ 0x140A1C4A4
 * Callers:
 *     PopUpdateConsoleDisplayState @ 0x140A1B91C (PopUpdateConsoleDisplayState.c)
 *     PopSystemIdleWorker @ 0x140A1C0E0 (PopSystemIdleWorker.c)
 * Callees:
 *     PopPulseSystemIdleEvent @ 0x140A1C20C (PopPulseSystemIdleEvent.c)
 */

__int64 PopUpdateLastUserInputTime()
{
  unsigned int v0; // ecx
  __int64 result; // rax
  int v2; // edx
  int *v3; // r8

  v0 = 0;
  result = MEMORY[0xFFFFF780000002E4];
  if ( dword_140E0B6F4 )
  {
    v2 = dword_140E0B6F0;
    v3 = &dword_140E0B6F0;
    v0 = 1;
  }
  else
  {
    v2 = dword_140E0B6EC;
    v3 = &dword_140E0B6EC;
  }
  if ( v2 != MEMORY[0xFFFFF780000002E4] )
  {
    *v3 = MEMORY[0xFFFFF780000002E4];
    return PopPulseSystemIdleEvent(v0);
  }
  return result;
}
