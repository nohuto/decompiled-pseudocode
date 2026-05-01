/*
 * XREFs of ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x1800AF9CC
 * Callers:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x1800AF724 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1801A4340 (-OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChang.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$OnPriorityBoostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NHAEA_N@SingleViewExperienceTelemetry@@SAX$$QEAPEBG0AEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_N$$QEAH2@Z @ 0x18003CFF0 (--$OnPriorityBoostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NHA.c)
 *     ?BoostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x18003D1E4 (-BoostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ @ 0x18008645C (-CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800AE130 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ?StashPendingShow@CSingleViewShellExperience@@AEAAXW4ShowOptions@1@@Z @ 0x1800AE194 (-StashPendingShow@CSingleViewShellExperience@@AEAAXW4ShowOptions@1@@Z.c)
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x1800AFB9C (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x1800B2158 (-ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSingleViewShellExperience::ShowViewAsync(__int64 a1, unsigned int a2)
{
  int v4; // eax
  __int64 result; // rax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // [rsp+30h] [rbp-20h] BYREF
  PCWSTR StringRawBuffer; // [rsp+38h] [rbp-18h] BYREF
  PCWSTR v10; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  char v12; // [rsp+70h] [rbp+20h] BYREF
  int v13; // [rsp+80h] [rbp+30h] BYREF
  int v14; // [rsp+88h] [rbp+38h] BYREF

  CSingleViewShellExperience::BoostDiskIo((CSingleViewShellExperience *)a1);
  v14 = 1;
  if ( (*(_BYTE *)(a1 + 132) & 0x20) == 0 && !*(_BYTE *)(a1 + 140) )
  {
    *(_BYTE *)(a1 + 140) = 1;
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 120LL))(*(_QWORD *)(a1 + 88), a1);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4B2,
        (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v4);
  }
  v13 = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
  v10 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 8), 0LL);
  SingleViewExperienceTelemetry::OnPriorityBoostRequested<unsigned short const *,unsigned short const *,enum CSingleViewShellExperience::PriorityBoostReason &,bool &,int,bool &>(
    &v10,
    &StringRawBuffer,
    &v14,
    (char *)(a1 + 141),
    &v13,
    (char *)(a1 + 140));
  result = CSingleViewShellExperience::WaitForWindowReadyForPresentation(a1, a2);
  if ( (int)result >= 0 )
  {
    CSingleViewShellExperience::StashPendingShow(a1, a2);
    if ( *(_QWORD *)(a1 + 24) )
    {
      v8 = 0LL;
      v12 = 1;
      if ( (int)Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 24),
                  &v8) >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 72LL))(v8, &v12);
        if ( v7 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x2B3,
            (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
            (const char *)(unsigned int)v7);
      }
      if ( v12 )
      {
        CSingleViewShellExperience::CancelWaitForWindowReadyForPresentation((HSTRING *)a1);
        CSingleViewShellExperience::ShowView(a1, a2);
      }
      v6 = v8;
      if ( v8 )
      {
        v8 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2AD,
        (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)0x8000FFFFLL);
      return 2147549183LL;
    }
  }
  return result;
}
