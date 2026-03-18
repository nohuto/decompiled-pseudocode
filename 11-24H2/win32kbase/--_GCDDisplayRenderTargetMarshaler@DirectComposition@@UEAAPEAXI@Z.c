/*
 * XREFs of ??_GCDDisplayRenderTargetMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140224B00
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

DirectComposition::CDDisplayRenderTargetMarshaler *__fastcall DirectComposition::CDDisplayRenderTargetMarshaler::`scalar deleting destructor'(
        DirectComposition::CDDisplayRenderTargetMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CDDisplayRenderTargetMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)this);
  return this;
}
