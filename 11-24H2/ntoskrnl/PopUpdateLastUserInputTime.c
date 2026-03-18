/*
 * XREFs of PopUpdateLastUserInputTime @ 0x140A27A24
 * Callers:
 *     PopUpdateConsoleDisplayState @ 0x140A26E9C (PopUpdateConsoleDisplayState.c)
 *     PopSystemIdleWorker @ 0x140A27660 (PopSystemIdleWorker.c)
 * Callees:
 *     PopPulseSystemIdleEvent @ 0x140A2778C (PopPulseSystemIdleEvent.c)
 */

__int64 PopUpdateLastUserInputTime()
{
  unsigned int v0; // ecx
  __int64 result; // rax
  int v2; // edx
  int *v3; // r8

  v0 = 0;
  result = MEMORY[0xFFFFF780000002E4];
  if ( dword_140E0B674 )
  {
    v2 = dword_140E0B670;
    v3 = &dword_140E0B670;
    v0 = 1;
  }
  else
  {
    v2 = dword_140E0B66C;
    v3 = &dword_140E0B66C;
  }
  if ( v2 != MEMORY[0xFFFFF780000002E4] )
  {
    *v3 = MEMORY[0xFFFFF780000002E4];
    return PopPulseSystemIdleEvent(v0);
  }
  return result;
}
