/*
 * XREFs of ??$As@UIVirtualDesktopNewElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopNewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804CF7D8
 * Callers:
 *     ?GetNewDesktopButton@CVirtualDesktopBarElement@@UEAA?AV?$ComPtr@UIVirtualDesktopNewElement@@@WRL@Microsoft@@XZ @ 0x1804CFA70 (-GetNewDesktopButton@CVirtualDesktopBarElement@@UEAA-AV-$ComPtr@UIVirtualDesktopNewElement@@@WRL.c)
 *     ?GetNewTimelineButton@CVirtualDesktopBarElement@@UEAA?AV?$ComPtr@UIVirtualDesktopNewElement@@@WRL@Microsoft@@XZ @ 0x1804CFAC0 (-GetNewTimelineButton@CVirtualDesktopBarElement@@UEAA-AV-$ComPtr@UIVirtualDesktopNewElement@@@WR.c)
 *     ?v_LayoutChildren@CVirtualDesktopBarElement@@MEAAXXZ @ 0x1804D0690 (-v_LayoutChildren@CVirtualDesktopBarElement@@MEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IVirtualDesktopNewElement>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  return v4(v3, &GUID_b5c10705_700e_44ce_a812_dbd79f732700, a2);
}
