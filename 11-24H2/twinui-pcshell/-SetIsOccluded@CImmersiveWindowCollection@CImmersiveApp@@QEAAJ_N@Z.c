/*
 * XREFs of ?SetIsOccluded@CImmersiveWindowCollection@CImmersiveApp@@QEAAJ_N@Z @ 0x18030527C
 * Callers:
 *     ?SetIsOccluded@CImmersiveApp@@UEAAJH@Z @ 0x180305220 (-SetIsOccluded@CImmersiveApp@@UEAAJH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::SetIsOccluded(
        CImmersiveApp::CImmersiveWindowCollection *this,
        char a2)
{
  __int64 *v3; // rsi
  __int64 *v4; // rbp
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, GUID *, __int64 *); // rbx
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  *((_BYTE *)this + 194) = a2;
  v3 = (__int64 *)*((_QWORD *)this + 20);
  v4 = &v3[*((_QWORD *)this + 21)];
  while ( v3 != v4 )
  {
    v12 = 0LL;
    v5 = *v3;
    v6 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)*v3 + 40LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    v7 = v6(v5, &GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5, &v12);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1EFB,
        (int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
        (const char *)(unsigned int)v7);
    if ( v12 )
    {
      LOBYTE(v8) = a2;
      v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 592LL))(v12, v8);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1EFF,
          (int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
          (const char *)(unsigned int)v9);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    ++v3;
  }
  return 0LL;
}
