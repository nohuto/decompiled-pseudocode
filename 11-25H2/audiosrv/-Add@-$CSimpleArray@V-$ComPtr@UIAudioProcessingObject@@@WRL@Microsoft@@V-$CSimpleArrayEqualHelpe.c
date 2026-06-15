/*
 * XREFs of ?Add@?$CSimpleArray@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V?$CSimpleArrayEqualHelper@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@@ATL@@@ATL@@QEAAHAEBV?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@@Z @ 0x18005F3D8
 * Callers:
 *     ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800911E0 (-Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::Add(
        __int64 a1,
        __int64 *a2)
{
  int *v4; // rsi
  int v5; // ebx
  unsigned int v6; // ebx
  __int64 v7; // rax
  _DWORD *v8; // rbx
  __int64 *v9; // rdx
  __int64 v10; // rcx
  bool v12; // sf

  v4 = (int *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 8);
  if ( v5 != *(_DWORD *)(a1 + 12) )
  {
    v8 = (_DWORD *)(a1 + 8);
    goto LABEL_7;
  }
  if ( *(_DWORD *)(a1 + 12) )
  {
    v12 = (v5 & 0x40000000) != 0;
    v6 = 2 * v5;
    if ( v12 )
      return 0LL;
  }
  else
  {
    v6 = 1;
  }
  if ( v6 > 0xFFFFFFFuLL )
    return 0LL;
  v7 = _o__recalloc(*(_QWORD *)a1, v6, 8LL);
  if ( !v7 )
    return 0LL;
  *(_DWORD *)(a1 + 12) = v6;
  *(_QWORD *)a1 = v7;
  v8 = (_DWORD *)(a1 + 8);
LABEL_7:
  v9 = (__int64 *)(*(_QWORD *)a1 + 8LL * *v4);
  if ( v9 )
  {
    v10 = *a2;
    *v9 = *a2;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  }
  ++*v8;
  return 1LL;
}
