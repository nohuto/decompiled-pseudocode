/*
 * XREFs of ??_G?$CSharedResourceMarshaler@VCVisualGroupMarshaler@DirectComposition@@$01@DirectComposition@@UEAAPEAXI@Z @ 0x14022CDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ @ 0x14001A314 (-Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

char *__fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualGroupMarshaler,2>::`scalar deleting destructor'(
        char *Buffer,
        char a2)
{
  *(_QWORD *)Buffer = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualGroupMarshaler,2>::`vftable';
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CMarshaledArrayBase *)(Buffer + 56));
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex(Buffer);
  return Buffer;
}
