/*
 * XREFs of ??_GCTableTransferEffectMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140224CA0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1CTableTransferEffectMarshaler@DirectComposition@@UEAA@XZ @ 0x14022F544 (--1CTableTransferEffectMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CTableTransferEffectMarshaler *__fastcall DirectComposition::CTableTransferEffectMarshaler::`scalar deleting destructor'(
        DirectComposition::CTableTransferEffectMarshaler *Buffer,
        char a2)
{
  DirectComposition::CTableTransferEffectMarshaler::~CTableTransferEffectMarshaler(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
