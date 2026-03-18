/*
 * XREFs of ?ReleaseAllReferences@CCompositionMipmapSurfaceMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x140238D20
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400803E0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CCompositionMipmapSurfaceMarshaler::ReleaseAllReferences(
        DirectComposition::CCompositionMipmapSurfaceMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 i; // rdi
  struct DirectComposition::CResourceMarshaler *v5; // rdx

  if ( *((_QWORD *)this + 7) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 19); i = (unsigned int)(i + 1) )
    {
      v5 = *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 7) + 24 * i);
      if ( v5 )
      {
        DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
        *(_QWORD *)(*((_QWORD *)this + 7) + 24 * i) = 0LL;
      }
    }
  }
}
