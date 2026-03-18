/*
 * XREFs of ??_GCInputQueue@@UEAAPEAXI@Z @ 0x14010BD10
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?MarkInvalid@CInputQueue@@UEAAXXZ @ 0x14010BD50 (-MarkInvalid@CInputQueue@@UEAAXXZ.c)
 */

CInputQueue *__fastcall CInputQueue::`scalar deleting destructor'(CInputQueue *Buffer, char a2)
{
  *(_QWORD *)Buffer = &CInputQueue::`vftable';
  CInputQueue::MarkInvalid(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
