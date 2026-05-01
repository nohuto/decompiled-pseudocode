/*
 * XREFs of ?CreateApplicationViewOperation@KioskPositioner@@AEAA?AV?$com_ptr_t@UIApplicationViewOperation@@Uerr_exception_policy@wil@@@wil@@W4APPLICATION_FRAME_CHROME_OPTIONS@@V?$function@$$A6A?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@XZ@std@@@Z @ 0x1804F1628
 * Callers:
 *     ?MaximizeWin32View@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804F26CC (-MaximizeWin32View@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?SetUwpViewFullScreen@KioskPositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x1804F3178 (-SetUwpViewFullScreen@KioskPositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 *     ?MaximizeWin32View@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@PEAUHWND__@@@Z @ 0x180502FF8 (-MaximizeWin32View@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@PEAUHWND__@@@Z.c)
 *     ?SetUwpViewFullScreen@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180506C50 (-SetUwpViewFullScreen@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18006DEB8 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??R?$_Func_class@V?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@$$V@std@@QEBA?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180320D54 (--R-$_Func_class@V-$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@.c)
 *     ??$MakeAndInitializeOrThrow@VApplicationViewOperation@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@XZ @ 0x1804F08B8 (--$MakeAndInitializeOrThrow@VApplicationViewOperation@@$$V@wil@@YA-AV-$ComPtr@VApplicationViewOp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall KioskPositioner::CreateApplicationViewOperation(__int64 a1, __int64 *a2, int a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _BYTE v16[24]; // [rsp+38h] [rbp-28h]
  __int64 v17; // [rsp+90h] [rbp+30h] BYREF
  __int64 *v18; // [rsp+98h] [rbp+38h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+48h]

  v19 = a4;
  v18 = a2;
  v17 = a1;
  wil::MakeAndInitializeOrThrow<ApplicationViewOperation,>((__int64 *)&v18);
  v7 = (__int64)v18;
  *((_DWORD *)v18 + 27) = 255;
  *(_DWORD *)(v7 + 112) = a3;
  *((_DWORD *)v18 + 29) = 0;
  *((_DWORD *)v18 + 42) = 1;
  *((_DWORD *)v18 + 48) = 0;
  v8 = (__int64)v18;
  *(__int64 *)((char *)v18 + 212) = 0LL;
  *(_QWORD *)(v8 + 220) = 0LL;
  v9 = (__int64)v18;
  *(__int64 *)((char *)v18 + 196) = 0LL;
  *(_QWORD *)(v9 + 204) = 0LL;
  v10 = (__int64)v18;
  *((_BYTE *)v18 + 228) = 1;
  *(_QWORD *)(v10 + 232) = 0LL;
  *(_QWORD *)v16 = 0LL;
  *(__m128i *)&v16[8] = _mm_load_si128((const __m128i *)&_xmm);
  v11 = (__int64)v18;
  *(_OWORD *)((char *)v18 + 124) = 0LL;
  *(_OWORD *)(v11 + 140) = *(_OWORD *)v16;
  *(_QWORD *)(v11 + 156) = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v16[8], *(__m128d *)&v16[8]);
  *(_DWORD *)(v11 + 164) = 0;
  *(_BYTE *)(v11 + 120) = 1;
  std::_Func_class<wil::com_ptr_t<IApplicationViewTitlebarConfiguration,wil::err_exception_policy>,>::operator()(
    a4,
    (__int64)&v17);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v18 + 23, v17);
  v12 = (__int64)v18;
  v18 = 0LL;
  *a2 = v12;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
  Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v18);
  v14 = *(_QWORD *)(a4 + 56);
  if ( v14 )
  {
    LOBYTE(v13) = v14 != a4;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 32LL))(v14, v13);
    *(_QWORD *)(a4 + 56) = 0LL;
  }
  return a2;
}
