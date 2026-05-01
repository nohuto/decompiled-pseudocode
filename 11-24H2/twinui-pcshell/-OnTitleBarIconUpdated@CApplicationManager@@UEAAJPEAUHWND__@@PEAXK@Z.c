/*
 * XREFs of ?OnTitleBarIconUpdated@CApplicationManager@@UEAAJPEAUHWND__@@PEAXK@Z @ 0x1802E9B10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x18009B754 (-_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::OnTitleBarIconUpdated(
        CApplicationManager *this,
        HWND a2,
        void *a3,
        unsigned int a4)
{
  CApplicationManager *v7; // rbx
  int FrameByHwnd; // ebx
  struct IApplicationFrameProxy *v9; // rbx
  __int64 (__fastcall *v10)(struct IApplicationFrameProxy *, __int64 *); // rdi
  int v11; // eax
  __int64 v12; // rdx
  struct IApplicationFrameProxy *v14[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v16; // [rsp+50h] [rbp+20h] BYREF

  v14[0] = 0LL;
  v7 = (CApplicationManager *)((char *)this - 344);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v14);
  FrameByHwnd = CApplicationManager::_GetFrameByHwnd(v7, a2, v14);
  if ( FrameByHwnd >= 0 )
  {
    v16 = 0LL;
    v9 = v14[0];
    v10 = *(__int64 (__fastcall **)(struct IApplicationFrameProxy *, __int64 *))(*(_QWORD *)v14[0] + 144LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    v11 = v10(v9, &v16);
    FrameByHwnd = v11;
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v16 + 152LL))(v16, a3, a4);
      FrameByHwnd = v11;
      if ( v11 >= 0 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
        FrameByHwnd = 0;
        goto LABEL_8;
      }
      v12 = 8387LL;
    }
    else
    {
      v12 = 8386LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v11);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  }
LABEL_8:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v14);
  return (unsigned int)FrameByHwnd;
}
