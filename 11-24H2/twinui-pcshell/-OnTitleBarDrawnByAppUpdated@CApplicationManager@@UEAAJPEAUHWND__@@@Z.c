/*
 * XREFs of ?OnTitleBarDrawnByAppUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x1801E4F90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x18009B754 (-_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::OnTitleBarDrawnByAppUpdated(CApplicationManager *this, HWND a2)
{
  CApplicationManager *v3; // rbx
  int FrameByHwnd; // ebx
  struct IApplicationFrameProxy *v5; // rcx
  struct IApplicationFrameProxy *v7; // rbx
  __int64 (__fastcall *v8)(struct IApplicationFrameProxy *, __int64 *); // rdi
  int v9; // eax
  __int64 v10; // rcx
  struct IApplicationFrameProxy *v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  struct IApplicationFrameProxy *v14; // [rsp+30h] [rbp+10h] BYREF
  __int64 v15; // [rsp+40h] [rbp+20h] BYREF

  v14 = 0LL;
  v3 = (CApplicationManager *)((char *)this - 344);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
  FrameByHwnd = CApplicationManager::_GetFrameByHwnd(v3, a2, &v14);
  if ( FrameByHwnd >= 0 )
  {
    v15 = 0LL;
    v7 = v14;
    v8 = *(__int64 (__fastcall **)(struct IApplicationFrameProxy *, __int64 *))(*(_QWORD *)v14 + 144LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
    v9 = v8(v7, &v15);
    FrameByHwnd = v9;
    if ( v9 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 72LL))(v15);
      FrameByHwnd = v12;
      if ( v12 >= 0 )
        FrameByHwnd = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x209C,
          (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v12);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x209B,
        (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v9);
      v10 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      v11 = v14;
      if ( v14 )
      {
        v14 = 0LL;
        (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
  }
  else
  {
    v5 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  return (unsigned int)FrameByHwnd;
}
