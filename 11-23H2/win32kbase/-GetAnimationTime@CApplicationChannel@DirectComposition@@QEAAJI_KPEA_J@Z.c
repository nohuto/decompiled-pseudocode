/*
 * XREFs of ?GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z @ 0x1C020C4A0
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C002D930 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C0027EBC (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002EB40 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     ?GetAnimationTime@CAnimationMarshaler@DirectComposition@@IEAAX_KPEA_J@Z @ 0x1C020E548 (-GetAnimationTime@CAnimationMarshaler@DirectComposition@@IEAAX_KPEA_J@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::GetAnimationTime(
        DirectComposition::CApplicationChannel *this,
        int a2,
        unsigned __int64 a3,
        __int64 *a4)
{
  unsigned int v7; // ebx
  struct DirectComposition::CResourceMarshaler *v8; // rax
  DirectComposition::CAnimationMarshaler *v9; // rdi

  v7 = 0;
  v8 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a2);
  if ( v8
    && (v9 = (DirectComposition::CAnimationMarshaler *)(*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v8 + 80LL))(v8)) != 0LL )
  {
    DirectComposition::CApplicationChannel::ProcessReturnedBatches((union _SLIST_HEADER *)this);
    DirectComposition::CAnimationMarshaler::GetAnimationTime(v9, a3, a4);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v7;
}
