/*
 * XREFs of ?SetZBand@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180246B04
 * Callers:
 *     ?OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180244E70 (-OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shel.c)
 *     ?PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1802458B4 (-PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UINtUserViewWrapper@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UINtUserViewWrapper@@@WRL@Microsoft@@@Details@12@@Z @ 0x180035150 (--$As@UINtUserViewWrapper@@@-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@W.c)
 *     ?UndockedSearchAppExperienceManager_SetZBand@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x18022A2E0 (-UndockedSearchAppExperienceManager_SetZBand@SearchAppExperienceManagerTelemetry@@SAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::SetZBand(UndockedSearchAppExperienceManager *this)
{
  unsigned int v3; // ebp
  float v4; // xmm0_4
  float v5; // xmm1_4
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v11[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetZBand((__int64)this);
  if ( !*((_QWORD *)this + 7) )
    return 0LL;
  v3 = 13;
  v4 = *((float *)this + 32);
  v5 = *((float *)this + 33);
  v11[0] = (int)v4;
  v11[1] = (int)v5;
  v11[2] = (int)(float)(v4 + *((float *)this + 34));
  v11[3] = (int)(float)(v5 + *((float *)this + 35));
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 12) + 40LL))(
          *((_QWORD *)this + 12),
          v11)
    || *((_BYTE *)this + 896) )
  {
    v3 = 6;
  }
  v10 = 0LL;
  v6 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<INtUserViewWrapper>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 7,
         &v10);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 40LL))(v10, v3);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xCD4,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 11) + 88LL))(
           *((_QWORD *)this + 11),
           *((_QWORD *)this + 7));
    v7 = v6;
    if ( v6 >= 0 )
    {
      v7 = 0;
      goto LABEL_14;
    }
    v8 = 3287LL;
  }
  else
  {
    v8 = 3283LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
LABEL_14:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
  return v7;
}
