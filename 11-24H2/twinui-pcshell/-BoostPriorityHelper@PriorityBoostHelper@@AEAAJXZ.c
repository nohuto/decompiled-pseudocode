/*
 * XREFs of ?BoostPriorityHelper@PriorityBoostHelper@@AEAAJXZ @ 0x1800AB160
 * Callers:
 *     ?OnViewCreated@PriorityBoostHelper@@QEAAJXZ @ 0x1800632FC (-OnViewCreated@PriorityBoostHelper@@QEAAJXZ.c)
 *     ?BoostPriority@PriorityBoostHelper@@UEAAJXZ @ 0x1800AB0F0 (-BoostPriority@PriorityBoostHelper@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$OnPriorityBoostProcessed@AEAJAEAI@ExperienceHostLoggingTelemetry@@SAXAEAJAEAI@Z @ 0x1800AB4E8 (--$OnPriorityBoostProcessed@AEAJAEAI@ExperienceHostLoggingTelemetry@@SAXAEAJAEAI@Z.c)
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800ADD54 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PriorityBoostHelper::BoostPriorityHelper(PriorityBoostHelper *this)
{
  char *v1; // rdi
  int v2; // ebx
  __int64 v3; // rdx
  _QWORD *v5; // rcx
  int v6; // eax
  int v7; // esi
  int v8; // eax
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v1 = (char *)this + 108;
  if ( !*((_DWORD *)this + 27) )
  {
    v2 = -2147024875;
    v3 = 76LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v11 = 0;
  v5 = (_QWORD *)(*((_QWORD *)this + 8) + 24LL);
  if ( *v5 )
  {
    v12 = 0LL;
    v6 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
           v5,
           &v12);
    v2 = v6;
    if ( v6 >= 0 )
    {
      v11 = v6;
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 48LL))(v12);
      v2 = v8;
      v7 = v8;
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x55,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
          (const char *)(unsigned int)v8);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x52,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
        (const char *)(unsigned int)v6);
      v7 = v2;
    }
    v11 = v7;
    v9 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  else
  {
    v2 = 0;
  }
  ExperienceHostLoggingTelemetry::OnPriorityBoostProcessed<long &,unsigned int &>(&v11, v1);
  if ( v2 < 0 )
  {
    v3 = 90LL;
    goto LABEL_3;
  }
  return 0LL;
}
