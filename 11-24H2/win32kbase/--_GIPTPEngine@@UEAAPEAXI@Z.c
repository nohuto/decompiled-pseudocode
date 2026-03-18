/*
 * XREFs of ??_GIPTPEngine@@UEAAPEAXI@Z @ 0x140221820
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

IPTPEngine *__fastcall IPTPEngine::`scalar deleting destructor'(IPTPEngine *this, char a2)
{
  *(_QWORD *)this = &IPTPEngine::`vftable';
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)this);
  return this;
}
