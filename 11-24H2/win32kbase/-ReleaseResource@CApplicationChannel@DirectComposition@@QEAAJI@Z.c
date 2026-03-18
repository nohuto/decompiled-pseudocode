/*
 * XREFs of ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z @ 0x1400802CC
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x14007E0B8 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x14009C810 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x14008039C (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400803E0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ReleaseResource(size_t *this, unsigned int a2)
{
  unsigned int v4; // ebx
  struct DirectComposition::CResourceMarshaler *v5; // rax
  struct DirectComposition::CResourceMarshaler *v6; // r14
  __int64 v7; // rax
  size_t v8; // rdx
  size_t v9; // r8
  struct DirectComposition::CResourceMarshaler *v11; // rsi
  __int64 Src; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  v5 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(
         (DirectComposition::CApplicationChannel *)this,
         a2);
  v6 = v5;
  if ( v5 )
  {
    v7 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v5 + 192LL))(v5);
    if ( v7 )
    {
      v11 = *(struct DirectComposition::CResourceMarshaler **)(v7 + 192);
      if ( v11 )
      {
        if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 128LL))(*(_QWORD *)(v7 + 192)) )
          DirectComposition::CApplicationChannel::ReleaseResource((DirectComposition::CApplicationChannel *)this, v11);
      }
    }
    v8 = a2 - 1;
    if ( a2 && v8 < this[11] )
    {
      v9 = this[12];
      Src = 0LL;
      memmove((void *)(this[8] + v8 * v9), &Src, v9);
      --this[13];
    }
    DirectComposition::CApplicationChannel::ReleaseResource((DirectComposition::CApplicationChannel *)this, v6);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v4;
}
