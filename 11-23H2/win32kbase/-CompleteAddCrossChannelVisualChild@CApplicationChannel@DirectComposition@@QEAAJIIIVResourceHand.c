/*
 * XREFs of ?CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHandle@@HI0@Z @ 0x1C00085E0
 * Callers:
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0008440 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 * Callees:
 *     ?Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@VResourceHandle@@I@Z @ 0x1C00087C8 (-Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2.c)
 *     ?GetCrossChannelVisualChildNoRef@CVisualMarshaler@DirectComposition@@QEAAPEAVCCrossChannelParentVisualMarshaler@2@VResourceHandle@@@Z @ 0x1C0008AB8 (-GetCrossChannelVisualChildNoRef@CVisualMarshaler@DirectComposition@@QEAAPEAVCCrossChannelParent.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002EB40 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FB14 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C002FD60 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C003019C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00302B4 (--0CVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C0031650 (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C00935A0 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CompleteAddCrossChannelVisualChild(
        DirectComposition::CApplicationChannel *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  __int64 v11; // rbp
  struct DirectComposition::CResourceMarshaler *v12; // rdi
  struct DirectComposition::CResourceMarshaler *v13; // rax
  __int64 v14; // rax
  NSInstrumentation::CLeakTrackingAllocator *v15; // rcx
  struct DirectComposition::CResourceMarshaler *v16; // r15
  unsigned __int64 v17; // rdx
  __int64 CrossChannelVisualChildNoRef; // rax
  struct DirectComposition::CResourceMarshaler *v19; // rax
  DirectComposition::CVisualMarshaler *QuotaZInit; // rax
  struct DirectComposition::CResourceMarshaler *v21; // r14
  int v22; // ebx
  __int64 v23; // rax
  struct DirectComposition::CResourceMarshaler *v25; // rax
  DirectComposition::CResourceMarshaler *v26; // rax
  _BYTE v27[16]; // [rsp+40h] [rbp-28h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  v13 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(a1, a2);
  if ( !v13 )
  {
    v22 = -1073741790;
    goto LABEL_19;
  }
  v14 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v13 + 168LL))(v13);
  v16 = (struct DirectComposition::CResourceMarshaler *)v14;
  if ( !v14 )
    goto LABEL_23;
  if ( a7 )
  {
    v19 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(a1, a7);
    if ( !v19 )
      goto LABEL_23;
    CrossChannelVisualChildNoRef = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v19 + 168LL))(v19);
  }
  else
  {
    v17 = a8;
    if ( !a8 )
      goto LABEL_9;
    CrossChannelVisualChildNoRef = DirectComposition::CVisualMarshaler::GetCrossChannelVisualChildNoRef(v14);
  }
  v11 = CrossChannelVisualChildNoRef;
  if ( !CrossChannelVisualChildNoRef )
    goto LABEL_23;
LABEL_9:
  if ( a4 )
  {
    v25 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(a1, a4);
    if ( v25 )
    {
      v26 = (DirectComposition::CResourceMarshaler *)(*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v25 + 168LL))(v25);
      v12 = v26;
      if ( v26 )
      {
        DirectComposition::CResourceMarshaler::AddRef(v26);
LABEL_16:
        v23 = *(_QWORD *)v16;
        v27[0] = 0;
        v22 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, struct DirectComposition::CResourceMarshaler *, _QWORD, __int64, _BYTE *))(v23 + 288))(
                v16,
                a1,
                v12,
                a6,
                v11,
                v27);
        if ( v22 >= 0 && v27[0] )
          DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(a1, v16);
        goto LABEL_19;
      }
    }
LABEL_23:
    v22 = -1073741811;
    goto LABEL_19;
  }
  if ( !a5 )
    goto LABEL_23;
  QuotaZInit = (DirectComposition::CVisualMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                        v15,
                                                        v17,
                                                        0x180uLL,
                                                        0x70784344u);
  v21 = QuotaZInit;
  if ( !QuotaZInit )
  {
    v22 = -1073741801;
    goto LABEL_19;
  }
  DirectComposition::CVisualMarshaler::CVisualMarshaler(QuotaZInit);
  *(_QWORD *)v21 = &DirectComposition::CCrossChannelParentVisualMarshaler::`vftable';
  v22 = DirectComposition::CCrossChannelParentVisualMarshaler::Initialize(v21, a1, a5, a3);
  if ( v22 < 0 || (v22 = DirectComposition::CApplicationChannel::RegisterResource(a1, v21), v22 < 0) )
  {
    (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *))(*(_QWORD *)v21 + 192LL))(
      v21,
      a1);
    (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v21 + 72LL))(v21, 1LL);
  }
  else
  {
    v12 = v21;
  }
  if ( v22 >= 0 )
    goto LABEL_16;
LABEL_19:
  DirectComposition::CApplicationChannel::ReleaseResource(a1, v12);
  return (unsigned int)v22;
}
