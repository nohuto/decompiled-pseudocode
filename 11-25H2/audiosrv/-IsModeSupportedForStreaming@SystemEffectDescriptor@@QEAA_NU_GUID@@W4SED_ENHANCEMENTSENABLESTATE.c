/*
 * XREFs of ?IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x180037E04
 * Callers:
 *     ?GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180037BF8 (-GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 *     ?GetRawModePostMixEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800810AC (-GetRawModePostMixEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x18004BA9C (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800A6DDC (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall SystemEffectDescriptor::IsModeSupportedForStreaming(__int64 a1, _OWORD *i, int a3)
{
  _QWORD *v3; // r9
  int v5; // esi
  __int64 v6; // r11
  __int64 v7; // r9
  __int64 v8; // r10
  int v9; // ecx
  __int64 v10; // r10
  __int64 m; // r8
  __int64 v12; // r11
  int n; // eax
  _QWORD *v14; // r9
  __int64 v15; // r8
  int k; // eax
  _QWORD *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  bool v20; // zf
  int ii; // eax
  _QWORD *v23; // rdx
  __int64 v24; // rcx
  int j; // eax
  _QWORD *v26; // r8
  __int64 v27; // rcx
  unsigned int v28; // edx
  __int64 v29; // rsi
  __int64 v30; // rax
  SystemEffectChainDescriptor *v31; // rcx
  std::_Ref_count_base *v32; // rsi
  __int128 v33; // [rsp+20h] [rbp-48h]
  __int128 v34; // [rsp+30h] [rbp-38h]

  v3 = i;
  if ( a3 )
  {
    v34 = *i;
    v33 = *i;
    if ( *(_BYTE *)(a1 + 52) )
    {
      v5 = 0;
      v6 = *(int *)(a1 + 40);
      v7 = 0LL;
      for ( i = 0LL; ; ++i )
      {
        if ( v7 >= v6 )
          goto LABEL_9;
        if ( (__int64)i < 0 || v5 >= *(_DWORD *)(a1 + 40) )
        {
          ATL::_AtlRaiseException(0xC000008C, (unsigned int)i);
          __debugbreak();
        }
        v8 = *(_QWORD *)((char *)i + *(_QWORD *)(a1 + 32));
        if ( *(_BYTE *)(v8 + 20) )
        {
          for ( j = 0; ; ++j )
          {
            if ( j >= *(_DWORD *)(v8 + 8) )
              goto LABEL_8;
            v26 = (_QWORD *)(*(_QWORD *)v8 + 16LL * j);
            v27 = *v26 - v33;
            if ( *v26 == (_QWORD)v33 )
              v27 = v26[1] - *((_QWORD *)&v33 + 1);
            if ( !v27 )
              break;
          }
          if ( j != -1 )
            break;
        }
LABEL_8:
        ++v5;
        ++v7;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
      if ( v5 < 0 || v5 >= *(_DWORD *)(a1 + 40) )
        goto LABEL_68;
      v29 = *(_QWORD *)(a1 + 32) + 16LL * v5;
      v30 = *(_QWORD *)(v29 + 8);
      if ( v30 )
        _InterlockedIncrement((volatile signed __int32 *)(v30 + 8));
      v31 = *(SystemEffectChainDescriptor **)v29;
      v32 = *(std::_Ref_count_base **)(v29 + 8);
      if ( (int)SystemEffectChainDescriptor::Resolve(v31, (struct SystemEffectDescriptor *)a1) < 0 )
      {
        if ( v32 )
          std::_Ref_count_base::_Decref(v32);
        if ( a1 != -56 )
          LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
LABEL_21:
        v15 = *(_QWORD *)(a1 + 16);
        if ( v15 )
        {
          for ( k = 0; k < *(_DWORD *)(v15 + 8); ++k )
          {
            v17 = (_QWORD *)(*(_QWORD *)v15 + 16LL * k);
            v18 = *v17 - v34;
            if ( *v17 == (_QWORD)v34 )
              v18 = v17[1] - *((_QWORD *)&v34 + 1);
            if ( !v18 )
            {
              if ( k == -1 )
                break;
              v19 = *(_QWORD *)(a1 + 16);
              goto LABEL_34;
            }
          }
        }
        v19 = 0LL;
        goto LABEL_34;
      }
      if ( v32 )
        std::_Ref_count_base::_Decref(v32);
      if ( a1 != -56 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
    }
LABEL_9:
    v9 = 0;
    v10 = 0LL;
    for ( m = 0LL; ; m += 16LL )
    {
      if ( v10 >= *(int *)(a1 + 40) )
        goto LABEL_21;
      if ( m < 0 || v9 >= *(_DWORD *)(a1 + 40) )
      {
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)i);
        __debugbreak();
      }
      v12 = *(_QWORD *)(m + *(_QWORD *)(a1 + 32));
      for ( n = 0; ; ++n )
      {
        if ( n >= *(_DWORD *)(v12 + 8) )
          goto LABEL_28;
        v14 = (_QWORD *)(*(_QWORD *)v12 + 16LL * n);
        i = (_OWORD *)(*v14 - v33);
        if ( *v14 == (_QWORD)v33 )
          i = (_OWORD *)(v14[1] - *((_QWORD *)&v33 + 1));
        if ( !i )
          break;
      }
      if ( n != -1 )
        break;
LABEL_28:
      ++v9;
      ++v10;
    }
    if ( v9 == -1 )
      goto LABEL_21;
    if ( v9 >= 0 && v9 < *(_DWORD *)(a1 + 40) )
    {
      v19 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL * v9);
LABEL_34:
      v20 = v19 == 0;
      return !v20;
    }
    ATL::_AtlRaiseException(0xC000008C, 0);
LABEL_68:
    ATL::_AtlRaiseException(0xC000008C, v28);
    JUMPOUT(0x1800380B1LL);
  }
  for ( ii = 0; ii < *(_DWORD *)(a1 + 8); ++ii )
  {
    v23 = (_QWORD *)(*(_QWORD *)a1 + 16LL * ii);
    v24 = *v23 - *v3;
    if ( *v23 == *v3 )
      v24 = v23[1] - v3[1];
    if ( !v24 )
      goto LABEL_44;
  }
  ii = -1;
LABEL_44:
  v20 = ii == -1;
  return !v20;
}
