/*
 * XREFs of ??_GCProjectedShadowReceiverMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140224C10
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

DirectComposition::CProjectedShadowReceiverMarshaler *__fastcall DirectComposition::CProjectedShadowReceiverMarshaler::`scalar deleting destructor'(
        DirectComposition::CProjectedShadowReceiverMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CProjectedShadowReceiverMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)this);
  return this;
}
