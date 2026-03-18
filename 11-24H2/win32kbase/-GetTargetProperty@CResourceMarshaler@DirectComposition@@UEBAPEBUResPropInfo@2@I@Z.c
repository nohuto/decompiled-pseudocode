/*
 * XREFs of ?GetTargetProperty@CResourceMarshaler@DirectComposition@@UEBAPEBUResPropInfo@2@I@Z @ 0x14022C940
 * Callers:
 *     ?GetTargetProperty@?$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$0A@@DirectComposition@@UEBAPEBUResPropInfo@2@I@Z @ 0x140224E60 (-GetTargetProperty@-$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$0A@@Direct.c)
 *     ?GetTargetProperty@?$CSharedResourceMarshaler@VCCaptureControllerMarshaler@DirectComposition@@$01@DirectComposition@@UEBAPEBUResPropInfo@2@I@Z @ 0x140224EA0 (-GetTargetProperty@-$CSharedResourceMarshaler@VCCaptureControllerMarshaler@DirectComposition@@$0.c)
 * Callees:
 *     <none>
 */

const struct DirectComposition::ResPropInfo *__fastcall DirectComposition::CResourceMarshaler::GetTargetProperty(
        DirectComposition::CResourceMarshaler *this,
        int a2)
{
  int i; // ecx
  const struct DirectComposition::ResPropInfo *result; // rax

  for ( i = *((_DWORD *)&DirectComposition::ResourceInformation::s_resourceTypeInformation + *((unsigned int *)this + 9));
        i != 186;
        i = *((_DWORD *)result + 1) )
  {
    result = (const struct DirectComposition::ResPropInfo *)((char *)&DirectComposition::ResourceInformation::s_resourcePropertyInformation
                                                           + 24 * i);
    if ( *(_DWORD *)result == a2 )
      return result;
  }
  return 0LL;
}
