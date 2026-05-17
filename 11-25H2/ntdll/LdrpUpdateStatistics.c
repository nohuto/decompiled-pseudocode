/*
 * XREFs of LdrpUpdateStatistics @ 0x18006F9F4
 * Callers:
 *     LdrpWorkCallback @ 0x18006F910 (LdrpWorkCallback.c)
 *     LdrpDrainWorkQueue @ 0x18006FAA0 (LdrpDrainWorkQueue.c)
 *     TppWorkpExecuteCallback @ 0x18007CF90 (TppWorkpExecuteCallback.c)
 * Callees:
 *     <none>
 */

struct _TEB *LdrpUpdateStatistics()
{
  struct _TEB *result; // rax

  if ( LdrpStatistics < (unsigned int)LdrpWorkInProgress )
    LdrpStatistics = LdrpWorkInProgress;
  result = NtCurrentTeb();
  if ( (result->SameTebFlags & 0x2000) != 0 )
    ++dword_1801D46B4;
  else
    ++dword_1801D46B8;
  return result;
}
