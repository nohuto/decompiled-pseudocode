/*
 * XREFs of ??_E?$CSharedResourceMarshaler@VCCompositionDistantLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAAPEAXI@Z @ 0x140152770
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

char *__fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CCompositionDistantLightMarshaler,2>::`vector deleting destructor'(
        char *a1,
        char a2)
{
  *(_QWORD *)a1 = &DirectComposition::CCompositionLightMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex(a1);
  return a1;
}
