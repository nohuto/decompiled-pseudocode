/*
 * XREFs of ?Add@?$CSimpleArray@V?$ComPtr@UIAudioSystemEffects2@@@WRL@Microsoft@@V?$CSimpleArrayEqualHelper@V?$ComPtr@UIAudioSystemEffects2@@@WRL@Microsoft@@@ATL@@@ATL@@QEAAHAEBV?$ComPtr@UIAudioSystemEffects2@@@WRL@Microsoft@@@Z @ 0x180056800
 * Callers:
 *     ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18008D9D0 (-Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x1800568AC (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioSystemEffects2>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioSystemEffects2>>>::Add(
        __int64 a1,
        _QWORD *a2)
{
  int *v2; // rsi
  int v4; // ebx
  unsigned int v6; // ebx
  __int64 v7; // rax
  _DWORD *v8; // rbx
  _QWORD *v9; // rcx
  bool v11; // sf

  v2 = (int *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 8);
  if ( v4 != *(_DWORD *)(a1 + 12) )
  {
    v8 = (_DWORD *)(a1 + 8);
    goto LABEL_7;
  }
  if ( *(_DWORD *)(a1 + 12) )
  {
    v11 = (v4 & 0x40000000) != 0;
    v6 = 2 * v4;
    if ( v11 )
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
  v8 = (_DWORD *)(a1 + 8);
  *(_QWORD *)a1 = v7;
LABEL_7:
  v9 = (_QWORD *)(*(_QWORD *)a1 + 8LL * *v2);
  if ( v9 )
  {
    *v9 = *a2;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v9);
  }
  ++*v8;
  return 1LL;
}
