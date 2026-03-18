/*
 * XREFs of ?ReleaseResourceAndOwnership@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400FEE54
 * Callers:
 *     ?ReleaseAllReferences@CVisualTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1400FED50 (-ReleaseAllReferences@CVisualTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@.c)
 *     ?ReleaseAllReferences@CDesktopTreeMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x140229AF0 (-ReleaseAllReferences@CDesktopTreeMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400803E0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall DirectComposition::CApplicationChannel::ReleaseResourceAndOwnership(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2)
{
  if ( a2 )
    (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *))(*(_QWORD *)a2 + 16LL))(
      a2,
      this);
  return DirectComposition::CApplicationChannel::ReleaseResource(this, a2);
}
