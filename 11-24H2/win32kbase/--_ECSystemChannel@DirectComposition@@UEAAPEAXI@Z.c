/*
 * XREFs of ??_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z @ 0x1400700B0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1400700E8 (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 */

DirectComposition::CApplicationChannel *__fastcall DirectComposition::CSystemChannel::`vector deleting destructor'(
        DirectComposition::CApplicationChannel *Buffer,
        char a2)
{
  DirectComposition::CApplicationChannel::~CApplicationChannel(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
