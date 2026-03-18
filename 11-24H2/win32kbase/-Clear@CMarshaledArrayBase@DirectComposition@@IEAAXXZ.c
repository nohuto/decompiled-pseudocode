/*
 * XREFs of ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ @ 0x14001A314
 * Callers:
 *     ?ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1400816B0 (-ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?Clear@CResourceMarshalerArrayBase@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1400819FC (-Clear@CResourceMarshalerArrayBase@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?Set@CResourceMarshalerArrayBase@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_KW4MIL_RESOURCE_TYPE@@@Z @ 0x1400F6278 (-Set@CResourceMarshalerArrayBase@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAVCResou.c)
 *     ??1?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0LI@$0CA@$0CJD@$0CJE@@DirectComposition@@QEAA@XZ @ 0x1402249A8 (--1-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$0LI@$0CA@$0CJD@$0CJE@@Direc.c)
 *     ??1CCaptureControllerMarshaler@DirectComposition@@UEAA@XZ @ 0x1402249C0 (--1CCaptureControllerMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ?ReleaseAllReferences@CCaptureControllerMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140229A30 (-ReleaseAllReferences@CCaptureControllerMarshaler@DirectComposition@@UEAAXPEAVCApplicationChanne.c)
 *     ?ReleaseAllReferences@CCompositionDynamicTextureMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140229AA0 (-ReleaseAllReferences@CCompositionDynamicTextureMarshaler@DirectComposition@@UEAAXPEAVCApplicati.c)
 *     ??_G?$CSharedResourceMarshaler@VCVisualGroupMarshaler@DirectComposition@@$01@DirectComposition@@UEAAPEAXI@Z @ 0x14022CDC0 (--_G-$CSharedResourceMarshaler@VCVisualGroupMarshaler@DirectComposition@@$01@DirectComposition@@.c)
 *     ??_ECCompositionDynamicTextureMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14022CEC0 (--_ECCompositionDynamicTextureMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

void __fastcall DirectComposition::CMarshaledArrayBase::Clear(DirectComposition::CMarshaledArrayBase *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    GreDeleteFastMutex(v2);
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
    *(_QWORD *)this = 0LL;
  }
}
