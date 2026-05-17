/*
 * XREFs of LdrpUpdateStatistics @ 0x180022B6C
 * Callers:
 *     LdrpDrainWorkQueue @ 0x180003E20 (LdrpDrainWorkQueue.c)
 *     TppWorkpExecuteCallback @ 0x180022BB0 (TppWorkpExecuteCallback.c)
 *     LdrpWorkCallback @ 0x1800EAD70 (LdrpWorkCallback.c)
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
    ++dword_1801D2664;
  else
    ++dword_1801D2668;
  return result;
}
