/*
 * XREFs of ??$Make@VLegacyUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@AEBW4AppModelKind@WindowManagement@ApplicationModel@67@AEAUUwpWindowContextId@4567@PEAUIWindow@WindowManagement@ApplicationModel@67@AEAUWindowId@WindowManagement@ApplicationModel@67@PEBGW4WindowCreatedType@@AEA_K@Details@WRL@Microsoft@@YA?AV?$ComPtr@VLegacyUwpWindowWrapper@@@12@$$QEAPEAVUwpWindowEventDispatcher@@$$QEAPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@$$QEAPEAUHSTRING__@@AEBW4AppModelKind@WindowManagement@ApplicationModel@89@AEAUUwpWindowContextId@6789@$$QEAPEAUIWindow@WindowManagement@ApplicationModel@89@AEAUWindowId@WindowManagement@ApplicationModel@89@$$QEAPEBG$$QEAW4WindowCreatedType@@AEA_K@Z @ 0x1802A0E5C
 * Callers:
 *     ??$MakeOrThrow@VLegacyUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@AEBW4AppModelKind@WindowManagement@ApplicationModel@67@AEAUUwpWindowContextId@4567@PEAUIWindow@WindowManagement@ApplicationModel@67@AEAUWindowId@WindowManagement@ApplicationModel@67@PEBGW4WindowCreatedType@@AEA_K@wil@@YA?AV?$ComPtr@VLegacyUwpWindowWrapper@@@WRL@Microsoft@@$$QEAPEAVUwpWindowEventDispatcher@@$$QEAPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@$$QEAPEAUHSTRING__@@AEBW4AppModelKind@WindowManagement@ApplicationModel@89@AEAUUwpWindowContextId@6789@$$QEAPEAUIWindow@WindowManagement@ApplicationModel@89@AEAUWindowId@WindowManagement@ApplicationModel@89@$$QEAPEBG$$QEAW4WindowCreatedType@@AEA_K@Z @ 0x1802A0DB8 (--$MakeOrThrow@VLegacyUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindowContext@UwpW.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Attach@?$ComPtr@VLegacyUwpWindowWrapper@@@WRL@Microsoft@@QEAAXPEAVLegacyUwpWindowWrapper@@@Z @ 0x180428978 (-Attach@-$ComPtr@VLegacyUwpWindowWrapper@@@WRL@Microsoft@@QEAAXPEAVLegacyUwpWindowWrapper@@@Z.c)
 *     ??0LegacyUwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@56@UUwpWindowContextId@3456@PEAUIWindow@9ApplicationModel@56@UWindowId@9ApplicationModel@56@PEBGW4WindowCreatedType@@_K@Z @ 0x180437494 (--0LegacyUwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@Uwp.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Microsoft::WRL::Details::Make<LegacyUwpWindowWrapper,UwpWindowEventDispatcher *,Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext *,HSTRING__ *,enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind const &,Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId &,Windows::Internal::ApplicationModel::WindowManagement::IWindow *,Windows::Internal::ApplicationModel::WindowManagement::WindowId &,unsigned short const *,enum WindowCreatedType,unsigned __int64 &>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _QWORD *a7,
        _DWORD *a8,
        _QWORD *a9,
        _DWORD *a10,
        _QWORD *a11)
{
  void *v15; // rax
  void *v16; // rbp
  __int64 v17; // rax

  *a1 = 0LL;
  v15 = operator new(0x280uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v15;
  if ( v15 )
  {
    v17 = LegacyUwpWindowWrapper::LegacyUwpWindowWrapper(
            v15,
            (*a2 + 16LL) & -(__int64)(*a2 != 0LL),
            *a3,
            *a4,
            *a5,
            *a6,
            *a7,
            *a8,
            *a9,
            *a10,
            *a11);
    Microsoft::WRL::ComPtr<LegacyUwpWindowWrapper>::Attach(a1, v17);
    v16 = 0LL;
  }
  if ( v16 )
    operator delete(v16, (const struct std::nothrow_t *)1);
  return a1;
}
