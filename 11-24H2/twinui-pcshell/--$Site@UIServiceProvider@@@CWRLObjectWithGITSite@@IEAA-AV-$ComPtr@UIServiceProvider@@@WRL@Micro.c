/*
 * XREFs of ??$Site@UIServiceProvider@@@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@XZ @ 0x1803A1848
 * Callers:
 *     ?QueryService@CLauncherUIMode@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1803A3DA0 (-QueryService@CLauncherUIMode@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?Update@CLauncherUIMode@@UEAAJPEAUIUnknown@@@Z @ 0x1803A46E0 (-Update@CLauncherUIMode@@UEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall CWRLObjectWithGITSite::Site<IServiceProvider>(__int64 a1, __int64 *a2)
{
  void (__fastcall *v4)(__int64, GUID *, __int64 *); // rbx

  *a2 = 0LL;
  v4 = *(void (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)a1 + 32LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  v4(a1, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, a2);
  return a2;
}
