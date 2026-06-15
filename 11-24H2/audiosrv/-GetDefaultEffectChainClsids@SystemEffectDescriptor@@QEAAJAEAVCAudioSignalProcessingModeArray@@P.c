/*
 * XREFs of ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x18003ADB4
 * Callers:
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x18003A92C (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEff.c)
 *     ?AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005C46C (-AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     _lambda_8ba24c4cf53db699b74a350d628b126d_::operator() @ 0x180131684 (_lambda_8ba24c4cf53db699b74a350d628b126d_--operator().c)
 *     _lambda_8dedf90f1f70af288e66d072af95fd4f_::operator() @ 0x180131CB4 (_lambda_8dedf90f1f70af288e66d072af95fd4f_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180032B00 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x180032B38 (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Allocate@CComAllocator@ATL@@SAPEAX_K@Z @ 0x18003B0EC (-Allocate@CComAllocator@ATL@@SAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800A7F28 (memcpy_0.c)
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
