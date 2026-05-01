/*
 * XREFs of ?s_CreateInstance@CTaskWindow@@SAJQEBUTASKWINDOW_INIT_DATA@@AEBU_GUID@@PEAPEAX@Z @ 0x1802A96FC
 * Callers:
 *     ?AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x18022BD80 (-AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerI.c)
 *     ?AddOrphanedWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x180301D54 (-AddOrphanedWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAUITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x1802A9788 (--$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Details@WRL@Micro.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CTaskWindow::s_CreateInstance(
        const struct TASKWINDOW_INIT_DATA *a1,
        const struct _GUID *a2,
        void **a3)
{
  int v4; // ebx
  __int64 v5; // rcx
  const struct TASKWINDOW_INIT_DATA *v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 (__fastcall ***v8)(_QWORD, GUID *, void **); // [rsp+38h] [rbp+10h] BYREF

  v7 = a1;
  *a3 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<CTaskWindow,ITaskWindow,TASKWINDOW_INIT_DATA const * const &>(
         &v8,
         &v7);
  if ( v4 >= 0 )
    v4 = (**v8)(v8, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, a3);
  v5 = (__int64)v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return (unsigned int)v4;
}
