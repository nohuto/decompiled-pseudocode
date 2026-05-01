/*
 * XREFs of ?SetBorder@CortanaStoreAppExperienceManager@@AEAAJW4EDGEUI_TRAYSTUCKPLACE@@_N@Z @ 0x1801AE37C
 * Callers:
 *     ?PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801ADD74 (-PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaStoreAppExperienceManager::SetBorder(__int64 a1, int a2, char a3)
{
  int v3; // edx
  int v4; // edx
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64 *); // rbx
  int v7; // eax
  unsigned int LastError; // ebx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  const char *v13; // r9
  __int64 v15; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v17[3]; // [rsp+30h] [rbp-30h] BYREF
  int v18; // [rsp+48h] [rbp-18h] BYREF
  int v19; // [rsp+4Ch] [rbp-14h]
  int v20; // [rsp+50h] [rbp-10h]
  int v21; // [rsp+54h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v21 = 0;
  v18 = 4;
  v20 = 0x10000;
  v19 = 1024;
  if ( a2 && (v3 = a2 - 1) != 0 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        v19 = 1216;
        if ( a3 )
          v19 = 1248;
      }
    }
    else
    {
      v19 = 1312;
    }
  }
  else
  {
    v19 = 1408;
  }
  v17[0] = 19LL;
  v17[1] = &v18;
  v17[2] = 16LL;
  v15 = 0LL;
  v5 = *(_QWORD *)(a1 + 240);
  v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 32LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  v7 = v6(v5, &v15);
  LastError = v7;
  if ( v7 >= 0 )
  {
    v16 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 24LL))(v15, &v16);
    LastError = v10;
    if ( v10 >= 0 )
    {
      if ( (unsigned int)SetWindowCompositionAttribute(v16, v17, v11, v12) )
        LastError = 0;
      else
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x481,
                      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
                      v13);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x480,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x47E,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
    v9 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  return LastError;
}
