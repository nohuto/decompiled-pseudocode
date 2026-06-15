/*
 * XREFs of ?GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x18004B824
 * Callers:
 *     ?AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004CF24 (-AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x18004BA9C (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800A6DDC (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemEffectDescriptor::GetChainDescriptorForMode(__int64 a1, _OWORD *i, int a3)
{
  _QWORD *v3; // r14
  __int64 v5; // rbx
  int v6; // ebp
  __int64 v7; // r11
  __int64 v8; // r9
  __int64 v9; // r10
  int v10; // ecx
  __int64 v11; // r10
  __int64 k; // r8
  __int64 v13; // r11
  int m; // eax
  _QWORD *v15; // r9
  __int64 v16; // r8
  int n; // eax
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  int j; // eax
  _QWORD *v22; // r8
  __int64 v23; // rcx
  unsigned int v24; // edx
  __int64 v25; // rbp
  __int64 v26; // rax
  SystemEffectChainDescriptor *v27; // rcx
  std::_Ref_count_base *v28; // rbp
  __int128 v29; // [rsp+20h] [rbp-48h]

  v3 = i;
  v29 = *i;
  v5 = 0LL;
  if ( a3 )
    goto LABEL_8;
  v6 = 0;
  v7 = *(int *)(a1 + 40);
  v8 = 0LL;
  for ( i = 0LL; ; ++i )
  {
    if ( v8 >= v7 )
      goto LABEL_8;
    if ( (__int64)i < 0 || v6 >= *(_DWORD *)(a1 + 40) )
    {
      ATL::_AtlRaiseException(0xC000008C, (unsigned int)i);
      __debugbreak();
    }
    v9 = *(_QWORD *)((char *)i + *(_QWORD *)(a1 + 32));
    if ( *(_BYTE *)(v9 + 20) )
    {
      for ( j = 0; ; ++j )
      {
        if ( j >= *(_DWORD *)(v9 + 8) )
          goto LABEL_7;
        v22 = (_QWORD *)(*(_QWORD *)v9 + 16LL * j);
        v23 = *v22 - v29;
        if ( *v22 == (_QWORD)v29 )
          v23 = v22[1] - *((_QWORD *)&v29 + 1);
        if ( !v23 )
          break;
      }
      if ( j != -1 )
        break;
    }
LABEL_7:
    ++v6;
    ++v8;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  if ( v6 < 0 || v6 >= *(_DWORD *)(a1 + 40) )
    goto LABEL_57;
  v25 = *(_QWORD *)(a1 + 32) + 16LL * v6;
  v26 = *(_QWORD *)(v25 + 8);
  if ( v26 )
    _InterlockedIncrement((volatile signed __int32 *)(v26 + 8));
  v27 = *(SystemEffectChainDescriptor **)v25;
  v28 = *(std::_Ref_count_base **)(v25 + 8);
  if ( (int)SystemEffectChainDescriptor::Resolve(v27, (struct SystemEffectDescriptor *)a1) >= 0 )
  {
    if ( v28 )
      std::_Ref_count_base::_Decref(v28);
    if ( a1 != -56 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
LABEL_8:
    v10 = 0;
    v11 = 0LL;
    for ( k = 0LL; ; k += 16LL )
    {
      if ( v11 >= *(int *)(a1 + 40) )
        goto LABEL_20;
      if ( k < 0 || v10 >= *(_DWORD *)(a1 + 40) )
      {
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)i);
        __debugbreak();
      }
      v13 = *(_QWORD *)(k + *(_QWORD *)(a1 + 32));
      for ( m = 0; ; ++m )
      {
        if ( m >= *(_DWORD *)(v13 + 8) )
          goto LABEL_30;
        v15 = (_QWORD *)(*(_QWORD *)v13 + 16LL * m);
        i = (_OWORD *)(*v15 - v29);
        if ( *v15 == (_QWORD)v29 )
          i = (_OWORD *)(v15[1] - *((_QWORD *)&v29 + 1));
        if ( !i )
          break;
      }
      if ( m != -1 )
        break;
LABEL_30:
      ++v10;
      ++v11;
    }
    if ( v10 == -1 )
      goto LABEL_20;
    if ( v10 >= 0 && v10 < *(_DWORD *)(a1 + 40) )
      return *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL * v10);
    ATL::_AtlRaiseException(0xC000008C, 0);
LABEL_57:
    ATL::_AtlRaiseException(0xC000008C, v24);
    JUMPOUT(0x18004BA92LL);
  }
  if ( v28 )
    std::_Ref_count_base::_Decref(v28);
  if ( a1 != -56 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
LABEL_20:
  v16 = *(_QWORD *)(a1 + 16);
  if ( v16 )
  {
    for ( n = 0; n < *(_DWORD *)(v16 + 8); ++n )
    {
      v18 = (_QWORD *)(*(_QWORD *)v16 + 16LL * n);
      v19 = *v18 - *v3;
      if ( *v18 == *v3 )
        v19 = v18[1] - v3[1];
      if ( !v19 )
      {
        if ( n != -1 )
          return *(_QWORD *)(a1 + 16);
        return v5;
      }
    }
  }
  return v5;
}
