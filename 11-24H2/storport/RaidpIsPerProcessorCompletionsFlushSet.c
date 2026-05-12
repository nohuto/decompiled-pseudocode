/*
 * XREFs of RaidpIsPerProcessorCompletionsFlushSet @ 0x140025590
 * Callers:
 *     RaidAdapterRequestComplete @ 0x140025020 (RaidAdapterRequestComplete.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidpIsPerProcessorCompletionsFlushSet(unsigned __int16 *a1)
{
  return *((_DWORD *)g_RaidPerProcessorState + 2048 * (unsigned __int64)*a1 + 32 * *((unsigned __int8 *)a1 + 2) + 24) == 2;
}
