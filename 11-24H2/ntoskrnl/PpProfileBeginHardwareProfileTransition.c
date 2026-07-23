/*
 * XREFs of PpProfileBeginHardwareProfileTransition @ 0x14072B5C8
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1409BBF7C (PnpProcessQueryRemoveAndEject.c)
 *     PipProcessStartPhase1 @ 0x1409BE300 (PipProcessStartPhase1.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall PpProfileBeginHardwareProfileTransition(char a1)
{
  NTSTATUS result; // eax

  if ( !a1 )
    return KeWaitForSingleObject(&PiProfileChangeSemaphore, Executive, 0, 0, 0LL);
  return result;
}
