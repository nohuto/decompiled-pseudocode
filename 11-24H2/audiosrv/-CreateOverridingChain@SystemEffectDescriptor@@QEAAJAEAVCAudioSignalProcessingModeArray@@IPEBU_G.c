/*
 * XREFs of ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x180039C00
 * Callers:
 *     ?FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180038F98 (-FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x180039630 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ?AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005C46C (-AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011640 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z @ 0x180027D1C (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x1800313A0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180032B00 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x180032B38 (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?MarkAsUnresolved@SystemEffectChainDescriptor@@IEAAJV?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x180038E8C (-MarkAsUnresolved@SystemEffectChainDescriptor@@IEAAJV-$function@$$A6AJPEAVSystemEffectDescriptor.c)
 *     ?RemoveModesFromOverridingChains@SystemEffectDescriptor@@AEAAXAEAVCAudioSignalProcessingModeArray@@@Z @ 0x18003A35C (-RemoveModesFromOverridingChains@SystemEffectDescriptor@@AEAAXAEAVCAudioSignalProcessingModeArra.c)
 *     ?CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@I1AEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x18003A494 (-CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GU.c)
 *     ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x18003A5C0 (-Add@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18003A750 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18003A868 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800A318C (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall SystemEffectDescriptor::CreateOverridingChain(
        SystemEffectDescriptor *a1,
        struct CAudioSignalProcessingModeArray *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        __int64 *a7)
{
  unsigned int v9; // edx
  char *v10; // r12
  int v11; // ecx
  unsigned int v12; // edi
  __int64 v13; // rsi
  __int64 v14; // r15
  _QWORD *v15; // rax
  __int64 v16; // rax
  unsigned __int64 j; // rdi
  __int64 v18; // rdx
  unsigned __int64 v19; // r14
  unsigned int i; // edi
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 **v23; // rsi
  __int64 *v24; // rcx
  int v26; // eax
  __int64 v27; // rax
  int v28; // eax
  unsigned int v29; // r15d
  __int64 v30; // r15
  __int64 v31; // rax
  char *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 *v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 *v38; // rcx
  __int64 **v39; // rdi
  __int64 v40; // rdx
  __int64 *v41; // rcx
  void (__fastcall *v42)(__int64 *, __int64); // rax
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // [rsp+38h] [rbp-81h] BYREF
  int v47; // [rsp+40h] [rbp-79h]
  unsigned int v48; // [rsp+44h] [rbp-75h]
  std::_Ref_count_base *v49[2]; // [rsp+48h] [rbp-71h] BYREF
  void *Block; // [rsp+58h] [rbp-61h] BYREF
  __int64 v51; // [rsp+60h] [rbp-59h]
  void *v52; // [rsp+68h] [rbp-51h] BYREF
  __int64 v53; // [rsp+70h] [rbp-49h]
  void *v54; // [rsp+78h] [rbp-41h] BYREF
  __int64 v55; // [rsp+80h] [rbp-39h]
  _BYTE v56[112]; // [rsp+88h] [rbp-31h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+47h]
  __int64 v58; // [rsp+110h] [rbp+57h]

  SystemEffectDescriptor::RemoveModesFromOverridingChains(a1, a2);
  v54 = 0LL;
  v55 = 0LL;
  v10 = 0LL;
  v46 = 0LL;
  v11 = 0;
  v47 = 0;
  v12 = 0;
  v48 = 0;
  LODWORD(v13) = 0;
  v58 = 0LL;
  while ( (int)v13 < *((_DWORD *)a2 + 2) )
  {
    v14 = *((_QWORD *)a1 + 2);
    if ( v14 )
    {
      v15 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](a2, (unsigned int)v13);
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v14, v15) != -1 )
      {
        v16 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](a2, (unsigned int)v13);
        if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(&v54, v16) )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xFA,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL);
          break;
        }
        v11 = v47;
        goto LABEL_56;
      }
      v11 = v47;
    }
    if ( (int)v13 < 0 || (int)v13 >= *((_DWORD *)a2 + 2) )
    {
      ATL::_AtlRaiseException(0xC000008C, v9);
      __debugbreak();
    }
    v30 = *(_QWORD *)a2;
    if ( v11 == v12 )
    {
      if ( v12 )
      {
        v12 = 2 * v11;
        if ( (v11 & 0x40000000) != 0 )
          goto LABEL_58;
      }
      else
      {
        v12 = 1;
      }
      if ( v12 > 0x7FFFFFFuLL || (v31 = _o__recalloc(v10, v12, 16LL)) == 0 )
      {
LABEL_58:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xFF,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)0x8007000ELL);
        break;
      }
      v48 = v12;
      v10 = (char *)v31;
      v46 = v31;
      v11 = v47;
    }
    v32 = &v10[16 * v11];
    if ( v32 )
    {
      v9 = v58;
      *(_OWORD *)v32 = *(_OWORD *)(v58 + v30);
    }
    v47 = ++v11;
LABEL_56:
    LODWORD(v13) = v13 + 1;
    v58 += 16LL;
  }
  j = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  Block = 0LL;
  v51 = 0LL;
  v18 = *((_QWORD *)a1 + 2);
  v19 = a5;
  if ( !v18
    || a5
    || (ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(&Block, (__int64 *)(v18 + 40)),
        (_DWORD)v51 == *(_DWORD *)(*((_QWORD *)a1 + 2) + 48LL)) )
  {
    for ( i = 0; i < a3; ++i )
    {
      v13 = a4 + 16LL * i;
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(&v52, v13) )
      {
        v36 = 280LL;
        goto LABEL_85;
      }
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(&Block, v13) )
      {
        v36 = 281LL;
LABEL_85:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v36,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)0x8007000ELL);
        goto LABEL_14;
      }
    }
    if ( *((_QWORD *)a1 + 2) && a5 == 1 )
    {
      for ( j = 0LL; ; j = (unsigned int)(j + 1) )
      {
        v33 = *((_QWORD *)a1 + 2);
        if ( (int)j >= *(_DWORD *)(v33 + 48) )
          break;
        if ( (j & 0x80000000) != 0LL || (int)j >= *(_DWORD *)(v33 + 48) )
        {
          ATL::_AtlRaiseException(0xC000008C, v18);
          goto LABEL_68;
        }
        if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                              &Block,
                              *(_QWORD *)(v33 + 40) + 16LL * (int)j) )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x121,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL);
          break;
        }
      }
    }
LABEL_14:
    j = (unsigned __int64)v52;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x113,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL);
  }
  v19 = (unsigned __int64)Block;
  if ( (int)v55 > 0 )
  {
    *(_OWORD *)v49 = 0LL;
    v26 = SystemEffectChainDescriptor::CreateEffectChain(&v54, (unsigned int)v51, Block, 0LL, 0LL, v49);
    LODWORD(v13) = v26;
    if ( v26 >= 0 )
    {
      v23 = (__int64 **)(a7 + 7);
      if ( a7[7] )
      {
        v27 = std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>((__int64)v56, (__int64)a7);
        v28 = SystemEffectChainDescriptor::MarkAsUnresolved((__int64)v49[0], v27);
        v29 = v28;
        if ( v28 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x159,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v28);
LABEL_92:
          if ( v49[1] )
            std::_Ref_count_base::_Decref(v49[1]);
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&Block);
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v52);
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v46);
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v54);
          v38 = *v23;
          if ( *v23 )
          {
            LOBYTE(v37) = v38 != a7;
            (*(void (__fastcall **)(__int64 *, __int64))(*v38 + 32))(v38, v37);
            a7[7] = 0LL;
          }
          return v29;
        }
        v23 = (__int64 **)(a7 + 7);
      }
      if ( (unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                           (char *)a1 + 32,
                           v49) )
      {
        if ( v49[1] )
          std::_Ref_count_base::_Decref(v49[1]);
        goto LABEL_16;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15A,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)0x8007000ELL);
      v39 = v23;
      if ( v49[1] )
      {
        std::_Ref_count_base::_Decref(v49[1]);
        v39 = (__int64 **)(a7 + 7);
      }
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&Block);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v52);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v46);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v54);
      v41 = *v23;
      if ( !*v23 )
        return 2147942414LL;
      v42 = *(void (__fastcall **)(__int64 *, __int64))(*v41 + 32);
      goto LABEL_109;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x158,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v26);
    if ( v49[1] )
      std::_Ref_count_base::_Decref(v49[1]);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&Block);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v52);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v46);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v54);
LABEL_78:
    v35 = (__int64 *)a7[7];
    if ( v35 )
    {
      LOBYTE(v34) = v35 != a7;
      (*(void (__fastcall **)(__int64 *, __int64))(*v35 + 32))(v35, v34);
      a7[7] = 0LL;
    }
    return (unsigned int)v13;
  }
LABEL_16:
  if ( v47 <= 0 )
    goto LABEL_24;
  *(_OWORD *)v49 = 0LL;
  if ( a6 == 1 && (v43 = *((_QWORD *)a1 + 2)) != 0 )
  {
    v21 = *(_QWORD *)(v43 + 56);
    v22 = *(unsigned int *)(v43 + 64);
  }
  else
  {
    v21 = 0LL;
    v22 = 0LL;
  }
  LODWORD(v13) = SystemEffectChainDescriptor::CreateEffectChain(&v46, (unsigned int)v53, j, v22, v21, v49);
  if ( (int)v13 < 0 )
  {
LABEL_68:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x165,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v13);
    if ( v49[1] )
      std::_Ref_count_base::_Decref(v49[1]);
    if ( v19 )
      free((void *)v19);
    if ( j )
      free((void *)j);
    if ( v10 )
      free(v10);
    if ( v54 )
      free(v54);
    goto LABEL_78;
  }
  v23 = (__int64 **)(a7 + 7);
  if ( !a7[7] )
    goto LABEL_21;
  v44 = std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>((__int64)v56, (__int64)a7);
  v45 = SystemEffectChainDescriptor::MarkAsUnresolved((__int64)v49[0], v44);
  v29 = v45;
  if ( v45 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x166,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v45);
    goto LABEL_92;
  }
  v23 = (__int64 **)(a7 + 7);
LABEL_21:
  if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                        (char *)a1 + 32,
                        v49) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x167,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL);
    v39 = v23;
    if ( v49[1] )
    {
      std::_Ref_count_base::_Decref(v49[1]);
      v39 = (__int64 **)(a7 + 7);
    }
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&Block);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v52);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v46);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v54);
    v41 = *v23;
    if ( !*v23 )
      return 2147942414LL;
    v40 = *v41;
    v42 = *(void (__fastcall **)(__int64 *, __int64))(*v41 + 32);
LABEL_109:
    LOBYTE(v40) = v41 != a7;
    v42(v41, v40);
    *v39 = 0LL;
    return 2147942414LL;
  }
  if ( v49[1] )
    std::_Ref_count_base::_Decref(v49[1]);
LABEL_24:
  if ( v19 )
    free((void *)v19);
  if ( j )
    free((void *)j);
  if ( v10 )
    free(v10);
  if ( v54 )
    free(v54);
  v24 = (__int64 *)a7[7];
  if ( v24 )
  {
    LOBYTE(v18) = v24 != a7;
    (*(void (__fastcall **)(__int64 *, __int64))(*v24 + 32))(v24, v18);
    a7[7] = 0LL;
  }
  return 0LL;
}
