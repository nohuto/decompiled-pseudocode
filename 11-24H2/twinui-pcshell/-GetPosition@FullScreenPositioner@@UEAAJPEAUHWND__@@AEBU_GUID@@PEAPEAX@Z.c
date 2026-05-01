/*
 * XREFs of ?GetPosition@FullScreenPositioner@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x180324880
 * Callers:
 *     ?GetPosition@FullScreenPositioner@@W7EAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x180324930 (-GetPosition@FullScreenPositioner@@W7EAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewArrangePositionSnapshot@@UIApplicationViewArrangePosition@@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewArrangePosition@@AEAPEAUHWND__@@@Z @ 0x18014785C (--$MakeAndInitialize@VCCommonApplicationViewArrangePositionSnapshot@@UIApplicationV_ea_18014785C.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall FullScreenPositioner::GetPosition(
        FullScreenPositioner *this,
        HWND a2,
        const struct _GUID *a3,
        void **a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HWND v12; // [rsp+38h] [rbp+10h] BYREF
  int (__fastcall ***v13)(_QWORD, const struct _GUID *, void **); // [rsp+48h] [rbp+20h] BYREF

  v12 = a2;
  *a4 = 0LL;
  v13 = 0LL;
  v6 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewArrangePositionSnapshot,IApplicationViewArrangePosition,HWND__ * &>(
         &v13,
         &v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = (unsigned int)v6;
    v9 = 843LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)v8);
    goto LABEL_9;
  }
  if ( !v13 )
  {
    *a4 = 0LL;
    goto LABEL_7;
  }
  if ( (**v13)(v13, a3, a4) < 0 )
  {
LABEL_7:
    v7 = -2147467262;
    v8 = 2147500034LL;
    v9 = 844LL;
    goto LABEL_8;
  }
  v7 = 0;
LABEL_9:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v13);
  return v7;
}
