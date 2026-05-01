/*
 * XREFs of ?SetImportanceValues@CSingleViewShellExperience@@AEAAJW4ImportanceVectorOptions@1@@Z @ 0x1800ADB70
 * Callers:
 *     ?BoostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x18003D1E4 (-BoostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z @ 0x1800AD7F0 (-SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z.c)
 *     ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x1800B243C (-UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSingleViewShellExperience::SetImportanceValues(__int64 a1, char a2)
{
  char v4; // al
  __int16 v5; // ax
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  int v12; // eax
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  unsigned int v15; // [rsp+30h] [rbp+10h] BYREF
  __int64 v16; // [rsp+40h] [rbp+20h] BYREF

  if ( *(_QWORD *)(a1 + 24) )
  {
    v15 = 0;
    RmActivityImportanceInitialize(&v15);
    v4 = HIBYTE(v15);
    if ( (a2 & 1) != 0 )
      v4 = -16;
    HIBYTE(v15) = v4;
    v5 = v15;
    if ( (a2 & 2) != 0 )
      v5 = v15 | 0x400;
    LOWORD(v15) = v5 | 0x101;
    v16 = 0LL;
    v6 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 24);
    v7 = **v6;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    v8 = v7(v6, &GUID_35f1648c_265f_402c_b575_c9a325451df5, &v16);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x510,
        (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v8);
      v10 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      return v9;
    }
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 64LL))(v16, v15);
    v9 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x511,
        (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v12);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
      return v9;
    }
    v13 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  return 0LL;
}
