/*
 * XREFs of ??1CCaptureControllerMarshaler@DirectComposition@@UEAA@XZ @ 0x1402249C0
 * Callers:
 *     ??_ECCaptureControllerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140127100 (--_ECCaptureControllerMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_G?$CSharedResourceMarshaler@VCCaptureControllerMarshaler@DirectComposition@@$01@DirectComposition@@UEAAPEAXI@Z @ 0x14022CC90 (--_G-$CSharedResourceMarshaler@VCCaptureControllerMarshaler@DirectComposition@@$01@DirectComposi.c)
 * Callees:
 *     ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ @ 0x14001A314 (-Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ.c)
 */

void __fastcall DirectComposition::CCaptureControllerMarshaler::~CCaptureControllerMarshaler(
        DirectComposition::CCaptureControllerMarshaler *this)
{
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CCaptureControllerMarshaler *)((char *)this + 104));
}
