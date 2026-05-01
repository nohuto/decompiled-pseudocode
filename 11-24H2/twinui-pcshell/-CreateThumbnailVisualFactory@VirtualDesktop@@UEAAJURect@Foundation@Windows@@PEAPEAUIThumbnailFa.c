/*
 * XREFs of ?CreateThumbnailVisualFactory@VirtualDesktop@@UEAAJURect@Foundation@Windows@@PEAPEAUIThumbnailFactory@Multitasking@ComposableShell@Internal@4@@Z @ 0x180201CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1802C1D38 (--4-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??$As@UIInspectable@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802C33FC (--$As@UIInspectable@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInsp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall VirtualDesktop::CreateThumbnailVisualFactory(__int64 a1, __int128 *a2, _QWORD *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  const char *v12; // r9
  __int64 (__fastcall *v13)(_QWORD *); // rax
  int v14; // eax
  __int64 v16[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v17; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+80h] [rbp+18h] BYREF
  _QWORD *v21; // [rsp+88h] [rbp+20h] BYREF

  *a3 = 0LL;
  v20 = 0LL;
  v5 = Microsoft::WRL::ComPtr<IInspectable>::As<IInspectable>(a1 + 120, &v20);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v16[0] = 0LL;
    v8 = Microsoft::WRL::ComPtr<IInspectable>::As<IInspectable>(a1 + 112, v16);
    v6 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x85,
        (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
        (const char *)(unsigned int)v8);
LABEL_11:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v16);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
      return v6;
    }
    v21 = 0LL;
    try
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 136) + 32LL))(*(_QWORD *)(a1 + 136));
      Microsoft::WRL::ComPtr<IClassicWindow>::operator=(&v21, v9);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
      v10 = v21;
      v11 = *v21;
      v17 = *a2;
      v12 = (const char *)v16[0];
      v13 = *(__int64 (__fastcall **)(_QWORD *))(v11 + 72);
    }
    catch ( ... )
    {
      LODWORD(v19) = wil::details::in1diag3::Return_CaughtException(
                       retaddr,
                       (void *)0x8C,
                       (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
                       v12);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
      v6 = v19;
      goto LABEL_11;
    }
    v14 = v13(v10);
    v6 = v14;
    if ( v14 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8E,
        (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
        (const char *)(unsigned int)v14);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x82,
    (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
    (const char *)(unsigned int)v5);
  v7 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v6;
}
