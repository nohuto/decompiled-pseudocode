/*
 * XREFs of ?EnableNeverDehydratePolicy@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800AD738
 * Callers:
 *     ?OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180244E70 (-OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shel.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UndockedSearchAppExperienceManager::EnableNeverDehydratePolicy(
        UndockedSearchAppExperienceManager *this)
{
  __int64 (__fastcall ***v1)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v2)(_QWORD, GUID *, __int64 *); // rbx
  int v3; // eax
  wil::details::in1diag3 *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 7);
  if ( v1 )
  {
    v8 = 0LL;
    v2 = **v1;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
    v3 = v2(v1, &GUID_35f1648c_265f_402c_b575_c9a325451df5, &v8);
    v4 = retaddr;
    if ( v3 < 0 )
    {
      v6 = 4397LL;
    }
    else
    {
      v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 80LL))(v8, 2LL);
      v4 = retaddr;
      if ( v3 >= 0 )
        goto LABEL_4;
      v6 = 4399LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v4,
      (void *)v6,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
LABEL_4:
    v5 = v8;
    if ( v8 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
}
