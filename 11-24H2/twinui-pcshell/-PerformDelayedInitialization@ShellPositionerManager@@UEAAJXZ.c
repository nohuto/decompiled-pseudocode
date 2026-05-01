/*
 * XREFs of ?PerformDelayedInitialization@ShellPositionerManager@@UEAAJXZ @ 0x180230A70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ShellPositionerManager::PerformDelayedInitialization(ShellPositionerManager *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  int v7; // eax
  unsigned int i; // esi
  __int64 v9; // rbx
  int (__fastcall *v10)(__int64, _QWORD, GUID *, __int64 *); // rdi
  __int64 *v11; // rax
  int (__fastcall *v12)(char *, __int64, GUID *, __int64 *); // rbx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  unsigned int v15; // [rsp+60h] [rbp+30h] BYREF
  __int64 v16; // [rsp+68h] [rbp+38h] BYREF
  __int64 v17; // [rsp+70h] [rbp+40h] BYREF
  __int64 v18; // [rsp+78h] [rbp+48h] BYREF

  v16 = 0LL;
  v2 = *((_QWORD *)this + 17);
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  v4 = v3(v2, &v16);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v15 = 0;
    v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v16 + 24LL))(v16, &v15);
    v5 = v7;
    if ( v7 >= 0 )
    {
      for ( i = 0; i < v15; ++i )
      {
        v18 = 0LL;
        v9 = v16;
        v10 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v16 + 32LL);
        v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v18);
        if ( v10(v9, i, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v11) >= 0 )
        {
          v17 = 0LL;
          v12 = *(int (__fastcall **)(char *, __int64, GUID *, __int64 *))(*((_QWORD *)this + 8) + 56LL);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
          if ( v12((char *)this + 64, v18, &GUID_ee010e17_919a_4068_868b_675acf787303, &v17) >= 0 )
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 104LL))(v17, v18);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
      }
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x126,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v7);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x123,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v4);
    v6 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return v5;
}
