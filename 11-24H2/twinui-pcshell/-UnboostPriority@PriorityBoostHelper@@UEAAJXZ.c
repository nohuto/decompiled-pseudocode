/*
 * XREFs of ?UnboostPriority@PriorityBoostHelper@@UEAAJXZ @ 0x1800ACC20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$OnPriorityUnboostProcessed@AEAJAEAI@ExperienceHostLoggingTelemetry@@SAXAEAJAEAI@Z @ 0x1800ACD64 (--$OnPriorityUnboostProcessed@AEAJAEAI@ExperienceHostLoggingTelemetry@@SAXAEAJAEAI@Z.c)
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800ADD54 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029730C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PriorityBoostHelper::UnboostPriority(PriorityBoostHelper *this)
{
  const char *v2; // r9
  _DWORD *v3; // rsi
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  _QWORD *v7; // rcx
  int v8; // eax
  int v9; // eax
  int v10; // edi
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v14; // [rsp+30h] [rbp+8h] BYREF
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF

  if ( GetCurrentThreadId() != *((_DWORD *)this + 22) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x68,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
      v2);
  v14 = 0;
  v3 = (_DWORD *)((char *)this + 92);
  v4 = *((_DWORD *)this + 23);
  v5 = 0;
  if ( v4 )
  {
    v6 = v4 - 1;
    *v3 = v6;
    if ( !v6 )
    {
      v7 = (_QWORD *)(*((_QWORD *)this + 6) + 24LL);
      if ( *v7 )
      {
        v15 = 0LL;
        v8 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
               v7,
               &v15);
        v5 = v8;
        if ( v8 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x72,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
            (const char *)(unsigned int)v8);
          v10 = v5;
        }
        else
        {
          v14 = v8;
          v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 56LL))(v15);
          v5 = v9;
          v10 = v9;
          if ( v9 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x75,
              (int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
              (const char *)(unsigned int)v9);
        }
        v14 = v10;
        v11 = v15;
        if ( v15 )
        {
          v15 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
    }
  }
  ExperienceHostLoggingTelemetry::OnPriorityUnboostProcessed<long &,unsigned int &>(&v14, v3);
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7B,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
