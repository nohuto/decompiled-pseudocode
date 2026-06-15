/*
 * XREFs of ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x18004E050
 * Callers:
 *     ?AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004CF24 (-AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x18004DBC8 (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEff.c)
 *     _lambda_c4b06e3056b944e8c68b4f3e8aaba954_::operator() @ 0x180129C8C (_lambda_c4b06e3056b944e8c68b4f3e8aaba954_--operator().c)
 *     _lambda_f318f87950837fa021a8ed1b2df6ff30_::operator() @ 0x18012A524 (_lambda_f318f87950837fa021a8ed1b2df6ff30_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x1800378C0 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800378F8 (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Allocate@CComAllocator@ATL@@SAPEAX_K@Z @ 0x18004E38C (-Allocate@CComAllocator@ATL@@SAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 */

__int64 __fastcall SystemEffectDescriptor::GetDefaultEffectChainClsids(
        SystemEffectDescriptor *this,
        struct CAudioSignalProcessingModeArray *a2,
        unsigned int *a3,
        struct _GUID **a4)
{
  __int64 *v8; // rdx
  __int64 v9; // rax
  int v10; // ecx
  __int64 v12; // rsi
  const void **v13; // rsi
  unsigned int *v14; // rdi
  unsigned __int64 v15; // rcx
  struct _GUID *v16; // rbx
  struct _GUID *v17; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(a2);
  *a3 = 0;
  v8 = (__int64 *)*((_QWORD *)this + 2);
  if ( !v8 )
    return 0LL;
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(a2, v8);
  v9 = *((_QWORD *)this + 2);
  v10 = *(_DWORD *)(v9 + 8);
  if ( *((_DWORD *)a2 + 2) != v10 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBA,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  v12 = 40LL;
  if ( v10 <= 0 )
    v12 = 56LL;
  v13 = (const void **)(v9 + v12);
  v14 = (unsigned int *)(v13 + 1);
  if ( a4 )
  {
    v15 = (int)*v14;
    v16 = 0LL;
    if ( *v14 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v15 < 0x10 )
        goto LABEL_15;
      v15 *= 16LL;
    }
    v17 = (struct _GUID *)ATL::CComAllocator::Allocate(v15);
    v16 = v17;
    if ( v17 )
    {
      memcpy_0(v17, *v13, 16LL * (int)*v14);
      *a4 = v16;
      CoTaskMemFree(0LL);
      goto LABEL_13;
    }
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC0,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL);
    CoTaskMemFree(v16);
    return 2147942414LL;
  }
LABEL_13:
  *a3 = *v14;
  return 0LL;
}
