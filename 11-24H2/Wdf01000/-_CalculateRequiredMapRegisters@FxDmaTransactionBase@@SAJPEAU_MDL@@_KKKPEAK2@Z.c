/*
 * XREFs of ?_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z @ 0x140060BDC
 * Callers:
 *     ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x14008766C (-ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxDmaTransactionBase::_CalculateRequiredMapRegisters(
        _MDL *Mdl,
        unsigned __int64 CurrentOffset,
        unsigned int Length,
        unsigned int AvailableMapRegisters,
        unsigned int *PossibleTransferLength,
        unsigned int *MapRegistersRequired)
{
  unsigned int v8; // ebx
  unsigned int ByteOffset; // r10d
  unsigned int v10; // edx
  unsigned int ByteCount; // r11d
  unsigned int i; // r8d
  unsigned int v13; // edx
  unsigned int v15; // r9d
  unsigned int v16; // eax
  unsigned int v17; // eax

  v8 = Mdl->ByteCount - CurrentOffset;
  ByteOffset = ((_WORD)CurrentOffset + LOWORD(Mdl->StartVa) + LOWORD(Mdl->ByteOffset)) & 0xFFF;
  v10 = 0;
  ByteCount = v8;
  for ( i = 0; v8 < Length; i = v15 )
  {
    Mdl = Mdl->Next;
    v15 = v8;
    if ( !Mdl )
      break;
    v16 = ByteCount + 4095;
    ByteCount = Mdl->ByteCount;
    v17 = ByteOffset + v16;
    v8 += ByteCount;
    ByteOffset = Mdl->ByteOffset;
    v10 += v17 >> 12;
    if ( v10 > AvailableMapRegisters )
      v15 = i;
  }
  if ( v8 + 4096 < ByteOffset + Length )
    return 3221225507LL;
  v13 = ((Length + ByteCount + ByteOffset - v8 + 4095) >> 12) + v10;
  if ( v13 <= AvailableMapRegisters )
    i += Length + ByteCount - v8;
  if ( PossibleTransferLength )
    *PossibleTransferLength = i;
  *MapRegistersRequired = v13;
  return 0LL;
}
