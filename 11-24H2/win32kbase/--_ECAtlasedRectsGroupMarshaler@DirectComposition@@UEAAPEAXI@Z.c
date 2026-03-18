/*
 * XREFs of ??_ECAtlasedRectsGroupMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14022CE40
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0LI@$0CA@$0CJD@$0CJE@@DirectComposition@@QEAA@XZ @ 0x1402249A8 (--1-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0LI@$0CA@$0CJD@$0CJE@@Direc.c)
 */

char *__fastcall DirectComposition::CAtlasedRectsGroupMarshaler::`vector deleting destructor'(char *Buffer, char a2)
{
  DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,184,32,659,660>::~CResourceMarshalerArray<DirectComposition::CResourceMarshaler,184,32,659,660>((DirectComposition::CMarshaledArrayBase *)(Buffer + 64));
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex(Buffer);
  return Buffer;
}
