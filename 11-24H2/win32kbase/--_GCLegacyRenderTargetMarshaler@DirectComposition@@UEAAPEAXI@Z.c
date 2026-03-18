/*
 * XREFs of ??_GCLegacyRenderTargetMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140154630
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

DirectComposition::CLegacyRenderTargetMarshaler *__fastcall DirectComposition::CLegacyRenderTargetMarshaler::`scalar deleting destructor'(
        DirectComposition::CLegacyRenderTargetMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CLegacyRenderTargetMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)this);
  return this;
}
