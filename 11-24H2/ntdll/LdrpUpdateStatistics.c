/*
 * XREFs of LdrpUpdateStatistics @ 0x18004F56C
 * Callers:
 *     TppWorkpExecuteCallback @ 0x18004F5B0 (TppWorkpExecuteCallback.c)
 *     LdrpDrainWorkQueue @ 0x1800AB680 (LdrpDrainWorkQueue.c)
 *     LdrpWorkCallback @ 0x1800E6AB0 (LdrpWorkCallback.c)
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
    ++dword_1801D1654;
  else
    ++dword_1801D1658;
  return result;
}
