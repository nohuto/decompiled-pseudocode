/*
 * XREFs of ?_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIImmersiveApplication@@W4ApplicationDisappearReason@@@Z @ 0x1802FDFA0
 * Callers:
 *     ?_TransferAllWindowsToNextGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplication@@0W4ApplicationDisappearReason@@@Z @ 0x1802A9858 (-_TransferAllWindowsToNextGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplication@@0W4ApplicationDi.c)
 *     ?DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x1802F7484 (-DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 *     ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x1802FC350 (-_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??I@YA?AW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0003@@W40@0@Z @ 0x1802F60D4 (--I@YA-AW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0003@@W40@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppViewManager::_TransferAllWindowsToNextGlomWorker(
        __int64 a1,
        GUID *a2,
        int (__fastcall ***a3)(_QWORD, GUID *, __int64 *),
        int a4)
{
  int (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rdi
  int (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rbx
  GUID *v9; // rdx
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  __int128 v17; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  unsigned int v19; // [rsp+80h] [rbp+30h] BYREF

  v5 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))a3;
  v16 = 0LL;
  if ( a3 )
  {
    v8 = **a3;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    v9 = &GUID_c9301630_27da_428e_a432_0a5e49c0ffee;
  }
  else
  {
    v5 = *(int (__fastcall ****)(_QWORD, _QWORD, _QWORD))(a1 + 120);
    v8 = (int (__fastcall *)(_QWORD, GUID *, __int64 *))(*v5)[14];
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    v9 = a2;
  }
  if ( v8(v5, v9, &v16) < 0 )
    goto LABEL_11;
  v19 = 0;
  if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v16 + 232LL))(v16, &v19) < 0 )
    goto LABEL_11;
  v10 = operator&(v19, 1);
  if ( v10 == v11 )
    goto LABEL_11;
  v17 = 0LL;
  v12 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
  if ( a4 == v11 )
    v12 = v11;
  DWORD2(v17) = v12;
  v13 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64, __int128 *))(**(_QWORD **)(a1 + 120) + 104LL))(
          *(_QWORD *)(a1 + 120),
          a2,
          v16,
          &v17);
  v14 = v13;
  if ( v13 >= 0 )
LABEL_11:
    v14 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB65,
      (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v13);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  return v14;
}
