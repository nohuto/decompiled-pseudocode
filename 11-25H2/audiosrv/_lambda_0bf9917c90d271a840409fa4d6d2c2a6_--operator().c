/*
 * XREFs of _lambda_0bf9917c90d271a840409fa4d6d2c2a6_::operator() @ 0x180128AB0
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x18004A1A0 (-AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     _lambda_401f33ed1035a8d15a958bb8e80586a7_::operator() @ 0x18012906C (_lambda_401f33ed1035a8d15a958bb8e80586a7_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180036160 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x1800378C0 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18003E5F8 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18004E258 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ??A?$span@H$0?0@gsl@@QEBAAEAH_K@Z @ 0x18004E3B0 (--A-$span@H$0-0@gsl@@QEBAAEAH_K@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeMap@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z @ 0x18006206C (--A-$span@VCAudioSignalProcessingModeMap@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z.c)
 *     ?Remove@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800818F8 (-Remove@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Add@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z @ 0x18012A95C (-Add@-$CSimpleMap@U_GUID@@U1@V-$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall lambda_0bf9917c90d271a840409fa4d6d2c2a6_::operator()(int *a1)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v4; // rax
  int v5; // r14d
  _DWORD *v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 *v8; // rcx
  _DWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // ebx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)gsl::span<int,-1>::operator[]((unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1616LL), *a1) )
  {
    if ( *a1
      && (v15 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                  (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1712LL),
                  *a1),
          (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                          v15,
                          &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) == -1) )
    {
      if ( *a1 != 3 )
      {
        v13 = -2147418113;
        v12 = 3206LL;
        goto LABEL_7;
      }
      v16 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
              (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1712LL),
              3uLL);
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(v16, a1 + 1) )
      {
        v13 = -2147418113;
        v12 = 3199LL;
        goto LABEL_7;
      }
      v17 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](
              (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1888LL),
              *a1);
      if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(v17, v18, a1 + 1) )
      {
        v12 = 3201LL;
        goto LABEL_6;
      }
    }
    else
    {
      v19 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
              (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1712LL),
              *a1);
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(
                            v19,
                            &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
      {
        v13 = -2147418113;
        v12 = 3191LL;
        goto LABEL_7;
      }
      v20 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](
              (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1888LL),
              *a1);
      if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                            v20,
                            v21,
                            &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
      {
        v12 = 3193LL;
        goto LABEL_6;
      }
    }
  }
  else
  {
    v2 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
           (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1712LL),
           *a1);
    v3 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
           v2,
           &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf);
    v4 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
           (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1712LL),
           *a1);
    v5 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
           v4,
           &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
    v6 = (_DWORD *)gsl::span<int,-1>::operator[]((unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1616LL), *a1);
    v7 = *a1;
    v8 = (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1712LL);
    *v6 = 1;
    v9 = (_DWORD *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v8, v7);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v9);
    if ( v3 == -1 )
    {
      v11 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](
              (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1888LL),
              *a1);
      if ( v5 == -1 )
      {
        if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                              v11,
                              v10,
                              &GUID_00000000_0000_0000_0000_000000000000) )
        {
          v12 = 3183LL;
          goto LABEL_6;
        }
      }
      else if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                                 v11,
                                 v10,
                                 &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
      {
        v12 = 3179LL;
LABEL_6:
        v13 = -2147024882;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)v13);
        return v13;
      }
    }
  }
  v22 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
          (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1712LL),
          *a1);
  if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                        v22,
                        &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) )
  {
    v12 = 3210LL;
    goto LABEL_6;
  }
  *(_DWORD *)gsl::span<int,-1>::operator[]((unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1752LL), *a1) = 1;
  return 0LL;
}
