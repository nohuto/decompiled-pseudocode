/*
 * XREFs of ?UpdateLightweightFullScreenMode@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x180325D40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x180324FB0 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall FullScreenPositioner::UpdateLightweightFullScreenMode(
        FullScreenPositioner *this,
        struct IApplicationView *a2)
{
  int (__fastcall *v4)(struct IApplicationView *, __int64 *); // rbx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v4 = *(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 264LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
  if ( v4(a2, &v6) >= 0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6) == 4 )
    FullScreenPositioner::PositionView((__int64)this - 104, a2, 0LL, 1u);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
  return 0LL;
}
