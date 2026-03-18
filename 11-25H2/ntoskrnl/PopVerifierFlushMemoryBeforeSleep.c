/*
 * XREFs of PopVerifierFlushMemoryBeforeSleep @ 0x140B4F674
 * Callers:
 *     PoBroadcastSystemState @ 0x140B54B5C (PoBroadcastSystemState.c)
 * Callees:
 *     MmPerformMemoryListCommand @ 0x140B5EAC0 (MmPerformMemoryListCommand.c)
 */

__int64 PopVerifierFlushMemoryBeforeSleep()
{
  __int64 result; // rax
  __int64 v1; // rbx

  result = (unsigned int)PopSimulate;
  if ( (PopSimulate & 0x80u) != 0 || MmVerifierTrimAtPowerTransition )
  {
    v1 = 2LL;
    do
    {
      MmPerformMemoryListCommand(2LL, -1LL);
      MmPerformMemoryListCommand(3LL, -1LL);
      MmPerformMemoryListCommand(3LL, -1LL);
      --v1;
    }
    while ( v1 );
    return MmPerformMemoryListCommand(4LL, -1LL);
  }
  return result;
}
