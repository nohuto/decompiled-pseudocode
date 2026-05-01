/*
 * XREFs of ?CreateBackgroundThumbnailVisualFactory@VirtualDesktop@@UEAAJURect@Foundation@Windows@@PEAPEAUIThumbnailFactory@Multitasking@ComposableShell@Internal@4@@Z @ 0x18020D590
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIInspectable@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802C33FC (--$As@UIInspectable@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInsp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall VirtualDesktop::CreateBackgroundThumbnailVisualFactory(__int64 a1, __int128 *a2, _QWORD *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  char *v8; // rax
  const char *v9; // r9
  __int64 *v10; // rbx
  __int64 v11; // rax
  __int64 *v12; // rcx
  __int64 (__fastcall *v13)(__int64 *); // rax
  int v14; // eax
  unsigned int v15; // edi
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v19[2]; // [rsp+20h] [rbp-38h] BYREF
  char v20; // [rsp+28h] [rbp-30h] BYREF
  __int128 v21; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v23; // [rsp+60h] [rbp+8h]
  unsigned int v24; // [rsp+60h] [rbp+8h]
  __int64 v25; // [rsp+70h] [rbp+18h] BYREF
  __int64 v26; // [rsp+78h] [rbp+20h] BYREF

  *a3 = 0LL;
  v26 = 0LL;
  v5 = Microsoft::WRL::ComPtr<IInspectable>::As<IInspectable>(a1 + 120, &v26);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x98,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v5);
LABEL_20:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
    return v6;
  }
  v25 = 0LL;
  v7 = Microsoft::WRL::ComPtr<IInspectable>::As<IInspectable>(a1 + 112, &v25);
  v6 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9B,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
    goto LABEL_20;
  }
  *(_QWORD *)v19 = 0LL;
  try
  {
    v8 = (char *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 136) + 32LL))(*(_QWORD *)(a1 + 136));
    v10 = 0LL;
    if ( &v20 != v8 )
    {
      v10 = *(__int64 **)v8;
      *(_QWORD *)v8 = 0LL;
    }
    *(_QWORD *)v19 = v10;
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    v11 = *v10;
    v21 = *a2;
    v12 = v10;
    v13 = *(__int64 (__fastcall **)(__int64 *))(v11 + 56);
  }
  catch ( ... )
  {
    v24 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0xA2,
            (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
            v9);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v19);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
    v6 = v24;
    goto LABEL_20;
  }
  v14 = v13(v12);
  v15 = v14;
  if ( v14 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA4,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v14);
  if ( v10 )
    (*(void (__fastcall **)(__int64 *))(*v10 + 16))(v10);
  v16 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return v15;
}
