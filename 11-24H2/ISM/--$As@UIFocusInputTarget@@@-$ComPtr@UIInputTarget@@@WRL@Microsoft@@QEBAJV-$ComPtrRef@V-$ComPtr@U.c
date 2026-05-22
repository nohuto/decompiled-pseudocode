/*
 * XREFs of ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x180024DC0
 * Callers:
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180013700 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x18003B4C0 (-RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z.c)
 *     ?OnInput@InputServiceProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180089EC0 (-OnInput@InputServiceProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRes.c)
 *     ?GetDVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x1800FCB8C (-GetDVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x1800FD0A0 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     ?GetVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x1800FD320 (-GetVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     ?GetWIDOfTarget@ISMTracing@@SA_KPEAUIInputTarget@@@Z @ 0x1800FD3A0 (-GetWIDOfTarget@ISMTracing@@SA_KPEAUIInputTarget@@@Z.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800FD7A0 (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x1800FE340 (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 *     ?GetDelegateInputMode@ContextualProcessorBuffer@@UEAAJPEAK@Z @ 0x1801A2DF0 (-GetDelegateInputMode@ContextualProcessorBuffer@@UEAAJPEAK@Z.c)
 *     ?GetDelegateSourceProcessId@ContextualProcessorBuffer@@UEAAJPEAK@Z @ 0x1801A2E60 (-GetDelegateSourceProcessId@ContextualProcessorBuffer@@UEAAJPEAK@Z.c)
 *     ?GetDelegateSourceViewId@ContextualProcessorBuffer@@UEAAJPEAK@Z @ 0x1801A2ED0 (-GetDelegateSourceViewId@ContextualProcessorBuffer@@UEAAJPEAK@Z.c)
 *     ?GetProcessId@ContextualProcessorBuffer@@UEAAJPEAK@Z @ 0x1801A3030 (-GetProcessId@ContextualProcessorBuffer@@UEAAJPEAK@Z.c)
 *     ?GetThreadId@ContextualProcessorBuffer@@UEAAJPEAK@Z @ 0x1801A3120 (-GetThreadId@ContextualProcessorBuffer@@UEAAJPEAK@Z.c)
 *     ?GetViewId@ContextualProcessorBuffer@@UEAAJPEAK@Z @ 0x1801A3190 (-GetViewId@ContextualProcessorBuffer@@UEAAJPEAK@Z.c)
 *     ?GetWindowId@ContextualProcessorBuffer@@UEAAJPEA_K@Z @ 0x1801A3200 (-GetWindowId@ContextualProcessorBuffer@@UEAAJPEA_K@Z.c)
 *     ?OnInput@HotkeyContextualProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801B09E0 (-OnInput@HotkeyContextualProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcesso.c)
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801C2820 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputIn.c)
 *     ?MITSetMPCCursorPosition@DWMCursor@@UEAAJJJ@Z @ 0x1801C8600 (-MITSetMPCCursorPosition@DWMCursor@@UEAAJJJ@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  return v4(v3, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, a2);
}
