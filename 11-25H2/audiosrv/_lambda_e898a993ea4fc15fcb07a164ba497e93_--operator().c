/*
 * XREFs of _lambda_e898a993ea4fc15fcb07a164ba497e93_::operator() @ 0x18012A3B4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_e898a993ea4fc15fcb07a164ba497e93__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Do_call @ 0x180130850 (std--_Func_impl_no_alloc__lambda_e898a993ea4fc15fcb07a164ba497e93__long_SystemEffec_ea_180130850.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x180031680 (-IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180036160 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180036734 (-GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x18003D5F4 (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18004E258 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_e898a993ea4fc15fcb07a164ba497e93_::operator()(
        __int64 a1,
        __int64 a2,
        SystemEffectChainDescriptor *a3)
{
  int DeviceFormat; // eax
  unsigned int v7; // edi
  void *v8; // rbx
  __int64 v9; // rdx
  BOOL v10; // edi
  __int64 v11; // rax
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPVOID pv; // [rsp+50h] [rbp+8h] BYREF

  pv = 0LL;
  DeviceFormat = EffectPack::GetDeviceFormat(
                   *(EffectPack **)a1,
                   0LL,
                   0LL,
                   *(_DWORD *)(a2 + 48),
                   (struct tWAVEFORMATEX **)&pv);
  v7 = DeviceFormat;
  v8 = pv;
  if ( DeviceFormat >= 0 )
  {
    v10 = *(_WORD *)pv != 0xFFFE || !IsCompressedSpatialFormat((const struct tWAVEFORMATEX *)pv);
    v11 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
            (unsigned __int64 *)(*(_QWORD *)a1 + 1712LL),
            *(int *)(a1 + 24));
    v12 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
            v11,
            &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
    DeviceFormat = SystemEffectDescriptor::UpdateEffectsInOverridingChain(a2, a3, 1u, a1 + 8, v10, v12 != -1);
    v7 = DeviceFormat;
    if ( DeviceFormat >= 0 )
    {
      *((_DWORD *)a3 + 4) = 2;
      v7 = 0;
      goto LABEL_11;
    }
    v9 = 2517LL;
  }
  else
  {
    v9 = 2511LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)DeviceFormat);
LABEL_11:
  CoTaskMemFree(v8);
  return v7;
}
