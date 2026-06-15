/*
 * XREFs of ?GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEAPEAU2@W4SED_RESOLVEOPT@@@Z @ 0x18004AE8C
 * Callers:
 *     ?AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004CF24 (-AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x18004BA9C (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800A6DDC (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemEffectDescriptor::GetSystemEffectClsidsForMode(
        __int64 a1,
        __int128 *i,
        int a3,
        _DWORD *a4,
        _QWORD *a5,
        int a6)
{
  int v9; // esi
  __int64 v10; // r11
  __int64 v11; // r9
  __int64 v12; // r10
  int v13; // ecx
  __int64 v14; // r10
  __int64 k; // r8
  __int64 v16; // r11
  int m; // eax
  _QWORD *v18; // r9
  __int64 v19; // r8
  int n; // eax
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdi
  void *v25; // rbx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  void *v28; // rax
  int j; // eax
  _QWORD *v31; // r8
  __int64 v32; // rcx
  unsigned int v33; // edx
  __int64 v34; // rsi
  __int64 v35; // rax
  SystemEffectChainDescriptor *v36; // rcx
  std::_Ref_count_base *v37; // rsi
  __int128 v38; // [rsp+20h] [rbp-48h]
  __int128 v39; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v39 = *i;
  v38 = *i;
  if ( a6 )
    goto LABEL_8;
  v9 = 0;
  v10 = *(int *)(a1 + 40);
  v11 = 0LL;
  for ( i = 0LL; ; ++i )
  {
    if ( v11 >= v10 )
      goto LABEL_8;
    if ( (__int64)i < 0 || v9 >= *(_DWORD *)(a1 + 40) )
    {
      ATL::_AtlRaiseException(0xC000008C, (unsigned int)i);
      __debugbreak();
    }
    v12 = *(_QWORD *)((char *)i + *(_QWORD *)(a1 + 32));
    if ( *(_BYTE *)(v12 + 20) )
    {
      for ( j = 0; ; ++j )
      {
        if ( j >= *(_DWORD *)(v12 + 8) )
          goto LABEL_7;
        v31 = (_QWORD *)(*(_QWORD *)v12 + 16LL * j);
        v32 = *v31 - v38;
        if ( *v31 == (_QWORD)v38 )
          v32 = v31[1] - *((_QWORD *)&v38 + 1);
        if ( !v32 )
          break;
      }
      if ( j != -1 )
        break;
    }
LABEL_7:
    ++v9;
    ++v11;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  if ( v9 < 0 || v9 >= *(_DWORD *)(a1 + 40) )
    goto LABEL_73;
  v34 = *(_QWORD *)(a1 + 32) + 16LL * v9;
  v35 = *(_QWORD *)(v34 + 8);
  if ( v35 )
    _InterlockedIncrement((volatile signed __int32 *)(v35 + 8));
  v36 = *(SystemEffectChainDescriptor **)v34;
  v37 = *(std::_Ref_count_base **)(v34 + 8);
  if ( (int)SystemEffectChainDescriptor::Resolve(v36, (struct SystemEffectDescriptor *)a1) >= 0 )
  {
    if ( v37 )
      std::_Ref_count_base::_Decref(v37);
    if ( a1 != -56 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
LABEL_8:
    v13 = 0;
    v14 = 0LL;
    for ( k = 0LL; ; k += 16LL )
    {
      if ( v14 >= *(int *)(a1 + 40) )
        goto LABEL_20;
      if ( k < 0 || v13 >= *(_DWORD *)(a1 + 40) )
      {
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)i);
        __debugbreak();
      }
      v16 = *(_QWORD *)(k + *(_QWORD *)(a1 + 32));
      for ( m = 0; ; ++m )
      {
        if ( m >= *(_DWORD *)(v16 + 8) )
          goto LABEL_27;
        v18 = (_QWORD *)(*(_QWORD *)v16 + 16LL * m);
        i = (__int128 *)(*v18 - v38);
        if ( *v18 == (_QWORD)v38 )
          i = (__int128 *)(v18[1] - *((_QWORD *)&v38 + 1));
        if ( !i )
          break;
      }
      if ( m != -1 )
        break;
LABEL_27:
      ++v13;
      ++v14;
    }
    if ( v13 == -1 )
      goto LABEL_20;
    if ( v13 >= 0 && v13 < *(_DWORD *)(a1 + 40) )
    {
      v23 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL * v13);
      if ( v23 )
        goto LABEL_31;
      goto LABEL_45;
    }
    ATL::_AtlRaiseException(0xC000008C, 0);
LABEL_73:
    ATL::_AtlRaiseException(0xC000008C, v33);
    JUMPOUT(0x18004B1F8LL);
  }
  if ( v37 )
    std::_Ref_count_base::_Decref(v37);
  if ( a1 != -56 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
LABEL_20:
  v19 = *(_QWORD *)(a1 + 16);
  if ( v19 )
  {
    for ( n = 0; n < *(_DWORD *)(v19 + 8); ++n )
    {
      v21 = (_QWORD *)(*(_QWORD *)v19 + 16LL * n);
      v22 = *v21 - v39;
      if ( *v21 == (_QWORD)v39 )
        v22 = v21[1] - *((_QWORD *)&v39 + 1);
      if ( !v22 )
      {
        if ( n == -1 )
          break;
        v23 = *(_QWORD *)(a1 + 16);
        goto LABEL_31;
      }
    }
  }
  v23 = 0LL;
LABEL_45:
  if ( a3 == 1 )
    v23 = *(_QWORD *)(a1 + 16);
LABEL_31:
  *a4 = 0;
  if ( a5 )
    *a5 = 0LL;
  if ( !v23 )
    return 0LL;
  v24 = v23 + 56;
  if ( a3 != 1 )
    v24 = v23 + 40;
  if ( !a5 || *(int *)(v24 + 8) <= 0 )
  {
LABEL_42:
    *a4 = *(_DWORD *)(v24 + 8);
    return 0LL;
  }
  v25 = 0LL;
  v26 = *(int *)(v24 + 8);
  if ( 0xFFFFFFFFFFFFFFFFuLL / v26 >= 0x10 )
  {
    v27 = 16 * v26;
    if ( v27 <= 0x7FFFFFFF )
    {
      v28 = CoTaskMemAlloc((unsigned int)v27);
      v25 = v28;
      if ( v28 )
      {
        memcpy_0(v28, *(const void **)v24, 16LL * *(int *)(v24 + 8));
        *a5 = v25;
        CoTaskMemFree(0LL);
        goto LABEL_42;
      }
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x270,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL);
  CoTaskMemFree(v25);
  return 2147942414LL;
}
