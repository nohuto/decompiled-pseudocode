/*
 * XREFs of ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x1800327CC
 * Callers:
 *     ?CanBuildProcessingModesOnRawConnector@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@@Z @ 0x1800324E8 (-CanBuildProcessingModesOnRawConnector@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_.c)
 *     ?GetAPOSupportedProcessingModes@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@AEAVCAudioSignalProcessingModeArray@@@Z @ 0x180032C58 (-GetAPOSupportedProcessingModes@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800357B0 (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ @ 0x180134DB4 (-InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180031550 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180032B00 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18003A868 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?RemoveAt@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z @ 0x1800A2FC4 (-RemoveAt@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800A318C (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall SystemEffectDescriptor::GetSupportedProcessingModes(__int64 *a1, __int64 *a2, int a3)
{
  __int64 *v3; // rbx
  int v5; // esi
  void *v6; // rax
  int v7; // eax
  int v8; // r14d
  __int64 v9; // r15
  int v10; // esi
  __int64 v11; // r12
  unsigned int v12; // esi
  __int64 v13; // rax
  _OWORD *v14; // rax
  _QWORD *v16; // rdx
  int v17; // r15d
  __int64 v18; // r14
  int v19; // r14d
  __int64 v20; // r15
  __int64 v21; // rax
  int i; // eax
  _QWORD *v23; // r8
  __int64 v24; // rcx
  int v25; // esi
  __int64 v26; // r12
  unsigned int v27; // esi
  __int64 v28; // rax
  _OWORD *v29; // rax
  int v30; // esi
  __int64 v31; // rcx
  bool v32; // sf
  __int64 v33; // rdx
  int j; // eax
  _QWORD *v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = a2;
  if ( !a3 )
  {
    v5 = *((_DWORD *)a2 + 2);
    if ( v5 == *((_DWORD *)a1 + 2) )
    {
      while ( v5 > 0 )
        ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAt(v3, (unsigned int)--v5);
    }
    else
    {
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(a2);
      v6 = calloc(*((int *)a1 + 2), 0x10uLL);
      *v3 = (__int64)v6;
      if ( v6 )
        *((_DWORD *)v3 + 3) = *((_DWORD *)a1 + 2);
    }
    v7 = *((_DWORD *)a1 + 2);
    v8 = 0;
    if ( v7 > 0 )
    {
      v9 = 0LL;
      do
      {
        if ( v9 < 0 || v8 >= v7 )
        {
          ATL::_AtlRaiseException(0xC000008C, (unsigned int)a2);
          __debugbreak();
        }
        v10 = *((_DWORD *)v3 + 2);
        v11 = *a1;
        if ( v10 != *((_DWORD *)v3 + 3) )
          goto LABEL_15;
        if ( *((_DWORD *)v3 + 3) )
        {
          v32 = (v10 & 0x40000000) != 0;
          v12 = 2 * v10;
          if ( v32 )
            goto LABEL_18;
        }
        else
        {
          v12 = 1;
        }
        LODWORD(a2) = v12;
        if ( v12 <= 0x7FFFFFFuLL )
        {
          v13 = _o__recalloc(*v3, v12, 16LL);
          if ( v13 )
          {
            *((_DWORD *)v3 + 3) = v12;
            *v3 = v13;
LABEL_15:
            v14 = (_OWORD *)(*v3 + 16LL * *((int *)v3 + 2));
            if ( v14 )
              *v14 = *(_OWORD *)(v9 + v11);
            ++*((_DWORD *)v3 + 2);
          }
        }
LABEL_18:
        v7 = *((_DWORD *)a1 + 2);
        ++v8;
        v9 += 16LL;
      }
      while ( v8 < v7 );
    }
    if ( *((_DWORD *)v3 + 2) != v7 )
    {
      v33 = 568LL;
      goto LABEL_50;
    }
    return 0LL;
  }
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)a1);
  v17 = 0;
  v18 = 0LL;
LABEL_22:
  if ( v17 >= *((_DWORD *)a1 + 10) )
  {
    if ( !a1[2] )
      return 0LL;
    v19 = 0;
    v20 = 0LL;
    while ( 2 )
    {
      v21 = a1[2];
      if ( v19 >= *(_DWORD *)(v21 + 8) )
        return 0LL;
      if ( v19 < 0 )
      {
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)v16);
        JUMPOUT(0x180032AF0LL);
      }
      v16 = (_QWORD *)(*(_QWORD *)v21 + 16LL * v19);
      for ( i = 0; ; ++i )
      {
        if ( i >= *((_DWORD *)v3 + 2) )
          goto LABEL_34;
        v23 = (_QWORD *)(*v3 + 16LL * i);
        v24 = *v23 - *v16;
        if ( *v23 == *v16 )
          v24 = v23[1] - v16[1];
        if ( !v24 )
          break;
      }
      if ( i != -1 )
      {
LABEL_43:
        ++v19;
        v20 += 16LL;
        continue;
      }
      break;
    }
LABEL_34:
    v25 = *((_DWORD *)v3 + 2);
    v26 = *(_QWORD *)a1[2];
    if ( v25 != *((_DWORD *)v3 + 3) )
    {
LABEL_40:
      v29 = (_OWORD *)(*v3 + 16LL * *((int *)v3 + 2));
      if ( v29 )
        *v29 = *(_OWORD *)(v20 + v26);
      ++*((_DWORD *)v3 + 2);
      goto LABEL_43;
    }
    if ( *((_DWORD *)v3 + 3) )
    {
      v32 = (v25 & 0x40000000) != 0;
      v27 = 2 * v25;
      if ( v32 )
        goto LABEL_49;
    }
    else
    {
      v27 = 1;
    }
    if ( v27 <= 0x7FFFFFFuLL )
    {
      v28 = _o__recalloc(*v3, v27, 16LL);
      if ( v28 )
      {
        *((_DWORD *)v3 + 3) = v27;
        *v3 = v28;
        goto LABEL_40;
      }
    }
LABEL_49:
    v33 = 594LL;
    goto LABEL_50;
  }
  v30 = 0;
  if ( v18 < 0 )
  {
LABEL_67:
    ATL::_AtlRaiseException(0xC000008C, (unsigned int)v16);
    __debugbreak();
  }
  while ( 1 )
  {
    if ( v17 >= *((_DWORD *)a1 + 10) )
      goto LABEL_67;
    v31 = *(_QWORD *)(v18 + a1[4]);
    if ( v30 >= *(_DWORD *)(v31 + 8) )
    {
      ++v17;
      v18 += 16LL;
      goto LABEL_22;
    }
    if ( v30 < 0 )
    {
      ATL::_AtlRaiseException(0xC000008C, (unsigned int)v16);
      __debugbreak();
    }
    v16 = (_QWORD *)(*(_QWORD *)v31 + 16LL * v30);
    for ( j = 0; ; ++j )
    {
      if ( j >= *((_DWORD *)v3 + 2) )
        goto LABEL_59;
      v35 = (_QWORD *)(*v3 + 16LL * j);
      v36 = *v35 - *v16;
      if ( *v35 == *v16 )
        v36 = v35[1] - v16[1];
      if ( !v36 )
        break;
    }
    if ( j == -1 )
      break;
LABEL_64:
    ++v30;
  }
LABEL_59:
  v37 = *(_QWORD *)(v18 + a1[4]);
  if ( v30 >= *(_DWORD *)(v37 + 8) )
  {
    ATL::_AtlRaiseException(0xC000008C, (unsigned int)v16);
    __debugbreak();
  }
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(v3, *(_QWORD *)v37 + 16LL * v30) )
    goto LABEL_64;
  v33 = 582LL;
LABEL_50:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v33,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}
