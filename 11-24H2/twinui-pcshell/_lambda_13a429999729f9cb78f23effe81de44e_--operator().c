/*
 * XREFs of _lambda_13a429999729f9cb78f23effe81de44e_::operator() @ 0x18034936C
 * Callers:
 *     ?QueryGameBarMajorMinorVersion@GamingOverlayExperienceManager@@AEAA?AU?$pair@GG@std@@XZ @ 0x180357F50 (-QueryGameBarMajorMinorVersion@GamingOverlayExperienceManager@@AEAA-AU-$pair@GG@std@@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIPackageStatics@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageStatics@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800564AC (--$GetActivationFactory@V-$ComPtr@UIPackageStatics@StateRepository@Internal@Windows@@@WRL@Micros.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180122480 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_13a429999729f9cb78f23effe81de44e_::operator()(_WORD **a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, _QWORD, PVOID, __int64, int *); // rdi
  unsigned int v6; // r8d
  HSTRING_HEADER *v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64 *); // rdi
  int v13; // eax
  __int64 v14; // rdx
  __int16 v15; // rdx^4
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-1h] BYREF
  __int64 v18; // [rsp+58h] [rbp+17h]
  int v19[2]; // [rsp+60h] [rbp+1Fh] BYREF
  __int64 v20; // [rsp+68h] [rbp+27h] BYREF
  int v21; // [rsp+70h] [rbp+2Fh] BYREF
  __int64 v22; // [rsp+78h] [rbp+37h] BYREF
  __int64 v23; // [rsp+80h] [rbp+3Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  v22 = 0LL;
  v18 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.StateRepository.Package",
    0x29u,
    0x28u);
  v2 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackageStatics>>(
         v18,
         &v22);
  v3 = v2;
  if ( v2 >= 0 )
  {
    *(_QWORD *)v19 = 0LL;
    v4 = v22;
    v5 = *(__int64 (__fastcall **)(__int64, _QWORD, PVOID, __int64, int *))(*(_QWORD *)v22 + 424LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v19);
    v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
           &hstringHeader,
           (const WCHAR **)&c_GamingOverlayPfn,
           v6);
    v8 = v5(v4, 0LL, v7[1].Reserved.Reserved1, 1LL, v19);
    v3 = v8;
    if ( v8 >= 0 )
    {
      v21 = 0;
      v8 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v19 + 56LL))(*(_QWORD *)v19, &v21);
      v3 = v8;
      if ( v8 >= 0 )
      {
        if ( v21 == 1 )
        {
          v20 = 0LL;
          v11 = *(_QWORD *)v19;
          v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(**(_QWORD **)v19 + 48LL);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
          v13 = v12(v11, 0LL, &v20);
          v3 = v13;
          if ( v13 >= 0 )
          {
            v23 = 0LL;
            v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 104LL))(v20, &v23);
            v3 = v13;
            if ( v13 >= 0 )
            {
              v15 = WORD2(v23);
              **a1 = HIWORD(v23);
              *a1[1] = v15;
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v19);
              v3 = 0;
              goto LABEL_18;
            }
            v14 = 1827LL;
          }
          else
          {
            v14 = 1824LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v14,
            (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
            (const char *)(unsigned int)v13);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
          goto LABEL_7;
        }
        v3 = -2147418113;
        v10 = 2147549183LL;
        v9 = 1821LL;
LABEL_6:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
          (const char *)v10);
LABEL_7:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v19);
        goto LABEL_18;
      }
      v9 = 1820LL;
    }
    else
    {
      v9 = 1817LL;
    }
    v10 = (unsigned int)v8;
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x712,
    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
    (const char *)(unsigned int)v2);
LABEL_18:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
  return v3;
}
