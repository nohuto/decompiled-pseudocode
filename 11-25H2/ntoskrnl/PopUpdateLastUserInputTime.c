/*
 * XREFs of PopUpdateLastUserInputTime @ 0x140A1EA84
 * Callers:
 *     PopUpdateConsoleDisplayState @ 0x140A1DEFC (PopUpdateConsoleDisplayState.c)
 *     PopSystemIdleWorker @ 0x140A1E6C0 (PopSystemIdleWorker.c)
 * Callees:
 *     PopPulseSystemIdleEvent @ 0x140A1E7EC (PopPulseSystemIdleEvent.c)
 */

__int64 PopUpdateLastUserInputTime()
{
  unsigned int v0; // ecx
  __int64 result; // rax
  int v2; // edx
  int *v3; // r8

  v0 = 0;
  result = MEMORY[0xFFFFF780000002E4];
  if ( dword_140E0B514 )
  {
    v2 = dword_140E0B510;
    v3 = &dword_140E0B510;
    v0 = 1;
  }
  else
  {
    v2 = dword_140E0B50C;
    v3 = &dword_140E0B50C;
  }
  if ( v2 != MEMORY[0xFFFFF780000002E4] )
  {
    *v3 = MEMORY[0xFFFFF780000002E4];
    return PopPulseSystemIdleEvent(v0);
  }
  return result;
}
