/*
 * XREFs of ??$As@UITabletModeInputCallback@@@?$ComPtr@UIDragVisualHost@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UITabletModeInputCallback@@@WRL@Microsoft@@@Details@12@@Z @ 0x18054126C
 * Callers:
 *     ?_OnCancelDrag@CDragVisual@@AEAAXXZ @ 0x18054473C (-_OnCancelDrag@CDragVisual@@AEAAXXZ.c)
 *     ?_OnContinueDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z @ 0x1805448D4 (-_OnContinueDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z.c)
 *     ?_OnFinishDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z @ 0x180544950 (-_OnFinishDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IDragVisualHost>::As<ITabletModeInputCallback>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v2 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  return v4(v2, &GUID_bf49be29_71c8_427e_a671_fec22c61e5f1, a2);
}
