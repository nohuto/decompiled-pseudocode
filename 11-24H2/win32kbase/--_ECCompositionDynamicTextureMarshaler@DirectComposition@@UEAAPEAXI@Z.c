/*
 * XREFs of ??_ECCompositionDynamicTextureMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14022CEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ @ 0x14001A314 (-Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

char *__fastcall DirectComposition::CCompositionDynamicTextureMarshaler::`vector deleting destructor'(
        char *Buffer,
        char a2)
{
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CMarshaledArrayBase *)(Buffer + 56));
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex(Buffer);
  return Buffer;
}
