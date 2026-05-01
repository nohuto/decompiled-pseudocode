/*
 * XREFs of ??R_lambda_ed42f4eeaf68fb958003b003b23892ea_@@QEAA@XZ @ 0x18045D380
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_ed42f4eeaf68fb958003b003b23892ea_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x180460F10 (-Run@-$CTaskWrapper@V_lambda_ed42f4eeaf68fb958003b003b23892ea_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Unmarshal@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@CMarshaledInterface@@QEAAJV?$ComPtrRef@V?$ComPtr@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180459E2C (--$Unmarshal@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@CMarshaledInterface@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _lambda_ed42f4eeaf68fb958003b003b23892ea_::operator()(__int64 (**this)(void))
{
  HWND WindowW; // rax
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( !WindowW || GetPropW(WindowW, L"IsExplorerShuttingDown") )
    return this[1]();
  v6 = 0LL;
  v3 = CMarshaledInterface::Unmarshal<Windows::Internal::Shell::Experience::ICortanaExperienceManager>(
         (CMarshaledInterface *)this,
         &v6);
  if ( v3 >= 0 )
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v6 + 48LL))(v6, 0LL);
  else
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xCF,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v3);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v6);
}
