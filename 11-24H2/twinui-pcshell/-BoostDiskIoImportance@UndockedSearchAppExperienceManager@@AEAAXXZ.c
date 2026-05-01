/*
 * XREFs of ?BoostDiskIoImportance@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800AD52C
 * Callers:
 *     ?BoostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800AD348 (-BoostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800ADD54 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UndockedSearchAppExperienceManager::BoostDiskIoImportance(UndockedSearchAppExperienceManager *this)
{
  char *v1; // rbx
  int v2; // eax
  wil::details::in1diag3 *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = (char *)this + 56;
  if ( *((_QWORD *)this + 7) )
  {
    v7 = 0;
    RmActivityImportanceInitialize(&v7);
    LOWORD(v7) = v7 | 0x501;
    v8 = 0LL;
    v2 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
           v1,
           &v8);
    v3 = retaddr;
    if ( v2 < 0 )
    {
      v5 = 4424LL;
    }
    else
    {
      v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v8 + 72LL))(v8, v7, 161LL);
      v3 = retaddr;
      if ( v2 >= 0 )
        goto LABEL_4;
      v5 = 4426LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v3,
      (void *)v5,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
LABEL_4:
    v4 = v8;
    if ( v8 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
}
