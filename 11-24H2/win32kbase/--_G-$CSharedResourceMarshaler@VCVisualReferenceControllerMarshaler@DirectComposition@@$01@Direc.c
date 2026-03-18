/*
 * XREFs of ??_G?$CSharedResourceMarshaler@VCVisualReferenceControllerMarshaler@DirectComposition@@$01@DirectComposition@@UEAAPEAXI@Z @ 0x14022CE10
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

char *__fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualReferenceControllerMarshaler,2>::`scalar deleting destructor'(
        char *a1,
        char a2)
{
  *(_QWORD *)a1 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CVisualReferenceControllerMarshaler,2>::`vftable';
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex(a1);
  return a1;
}
