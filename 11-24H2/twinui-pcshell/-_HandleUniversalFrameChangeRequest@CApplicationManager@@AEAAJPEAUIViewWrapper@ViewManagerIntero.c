/*
 * XREFs of ?_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802ED3D4
 * Callers:
 *     ?_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewPropertyChangedArgs@3456@@Z @ 0x18008A7A8 (-_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800D6010 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180164368 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ?AcquireExclusive@CIAMGlobals@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1801D13C0 (-AcquireExclusive@CIAMGlobals@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 *     ?GetAppChromeData@@YA?AV?$optional@UAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@std@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801FE0BC (-GetAppChromeData@@YA-AV-$optional@UAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@std@@PEAUIViewWrapper.c)
 *     ??$query@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1802B39DC (--$query@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIViewWrapp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CApplicationManager::_HandleUniversalFrameChangeRequest(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  int First; // eax
  const char *v10; // r9
  __int64 result; // rax
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // r8d
  int v15; // eax
  __int64 v16; // [rsp+20h] [rbp-28h] BYREF
  RTL_SRWLOCK *v17; // [rsp+28h] [rbp-20h] BYREF
  __int64 v18; // [rsp+30h] [rbp-18h] BYREF
  int v19; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v21; // [rsp+60h] [rbp+18h] BYREF
  __int64 *v22; // [rsp+68h] [rbp+20h] BYREF

  v21 = 0;
  v4 = wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
         &v17,
         (__int64)a2);
  try
  {
    v5 = wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))v4,
           &v22);
    v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v5 + 48LL))(*v5, &v21);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x6A1,
        (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v6,
        v16);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v22);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v17);
    v22 = 0LL;
    CIAMGlobals::AcquireExclusive(v7, &v17);
    v8 = (__int64)v22;
    v22 = 0LL;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    v18 = v21;
    v19 = 4;
    First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>((__int64)this, &v18, &v22, 0LL);
    if ( First == -2147319765 )
    {
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v17);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v22);
      result = 0LL;
    }
    else
    {
      if ( First < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x6B1,
          (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)First,
          v16);
      v16 = 0LL;
      v12 = *v22;
      v16 = 0LL;
      v13 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v12 + 504))(v22, &v16);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x6B6,
          (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v13,
          v16);
      GetAppChromeData((__int64)&v18, (__int64)a2, v14);
      if ( !(_BYTE)v19 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x6BB,
          (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)0x8000FFFFLL,
          v16);
      v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 160LL))(v16, v18);
      if ( v15 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x6BD,
          (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v15,
          v16);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v17);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v22);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x6C1,
                           (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                           v10);
  }
  return result;
}
