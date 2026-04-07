/*
 * XREFs of ??$As@UIWICBitmap@@@?$ComPtr@VIBitmapSource@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWICBitmap@@@WRL@Microsoft@@@Details@12@@Z @ 0x180052A54
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEAXKPEAPEAV1@@Z @ 0x180052564 (-Create@CBitmapSource@@SAJPEAXKPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008D08 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IBitmapSource>::As<IWICBitmap>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  return v4(v3, &GUID_00000121_a8f2_4877_ba0a_fd2b6645fb94, a2);
}
