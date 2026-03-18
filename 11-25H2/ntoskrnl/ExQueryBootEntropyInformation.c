/*
 * XREFs of ExQueryBootEntropyInformation @ 0x1406EDAA8
 * Callers:
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 *     Phase1InitializationIoReady @ 0x140C4E7F4 (Phase1InitializationIoReady.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x140825180 (RtlRunOnceExecuteOnce.c)
 */

NTSTATUS __fastcall ExQueryBootEntropyInformation(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 Parameter; // [rsp+30h] [rbp+8h] BYREF

  Parameter = a1;
  result = RtlRunOnceExecuteOnce(&ExpBootEntropyInit, ExpInitBootEntropyInformation, &Parameter, 0LL);
  if ( result >= 0 && Parameter != -1 )
    return -1073741823;
  return result;
}
