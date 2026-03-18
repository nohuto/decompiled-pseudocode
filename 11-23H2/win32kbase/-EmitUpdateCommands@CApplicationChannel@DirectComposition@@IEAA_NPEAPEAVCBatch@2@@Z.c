/*
 * XREFs of ?EmitUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0028270
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x1C00275C0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C002FD60 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C003019C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DirectComposition::CApplicationChannel::EmitUpdateCommands(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2)
{
  __int64 i; // rbx

  for ( i = *((_QWORD *)this + 52); ; i = *((_QWORD *)this + 52) )
  {
    if ( !i )
      return 1;
    *((_QWORD *)this + 52) = *(_QWORD *)(i + 8);
    *(_QWORD *)(i + 8) = 0LL;
    DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)i);
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, struct DirectComposition::CBatch **))(*(_QWORD *)i + 40LL))(i, a2) )
      break;
    *(_DWORD *)(i + 16) &= ~2u;
    DirectComposition::CApplicationChannel::ReleaseResource(this, (struct DirectComposition::CResourceMarshaler *)i);
  }
  *(_QWORD *)(i + 8) = *((_QWORD *)this + 52);
  *((_QWORD *)this + 52) = i;
  DirectComposition::CApplicationChannel::ReleaseResource(this, (struct DirectComposition::CResourceMarshaler *)i);
  return 0;
}
