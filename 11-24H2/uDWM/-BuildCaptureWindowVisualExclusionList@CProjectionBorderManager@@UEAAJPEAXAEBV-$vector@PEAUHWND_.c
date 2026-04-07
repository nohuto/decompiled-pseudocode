/*
 * XREFs of ?BuildCaptureWindowVisualExclusionList@CProjectionBorderManager@@UEAAJPEAXAEBV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x1800CB8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800398F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Update@CVisualGroupProxy@@QEAAJPEAPEAVCVisualProxy@@I@Z @ 0x18006B484 (-Update@CVisualGroupProxy@@QEAAJPEAPEAVCVisualProxy@@I@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180070218 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18009AB7C (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVCVisualProxy@@@?$vector@PEAVCVisualProxy@@V?$allocator@PEAVCVisualProxy@@@std@@@std@@AEAAPEAPEAVCVisualProxy@@QEAPEAV2@AEBQEAV2@@Z @ 0x1800ABDC8 (--$_Emplace_reallocate@AEBQEAVCVisualProxy@@@-$vector@PEAVCVisualProxy@@V-$allocator@PEAVCVisual.c)
 *     ?CreateVisualGroupProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualGroupProxy@@@Z @ 0x1800B6240 (-CreateVisualGroupProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualGroupProxy@@@Z.c)
 *     ?_GetWindowRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@@Z @ 0x1800CF454 (-_GetWindowRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::BuildCaptureWindowVisualExclusionList(__int64 a1, void *a2, HWND **a3)
{
  __int64 v5; // rbx
  int v6; // eax
  CProjectionBorderManager *v7; // rcx
  unsigned int v8; // ebx
  struct CVisualProxy **v9; // rbx
  HWND *v10; // r14
  HWND *v11; // rsi
  struct CVisualProxy **v12; // rdi
  struct CVisualProxy **v13; // rsi
  unsigned __int64 v14; // rdi
  int v15; // eax
  int v16; // edi
  unsigned int v18; // edi
  void *v19; // [rsp+20h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+28h] [rbp-28h] BYREF
  struct CVisualProxy **v21[2]; // [rsp+30h] [rbp-20h] BYREF
  struct CVisualProxy **v22; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  CVisualGroupProxy *v24; // [rsp+78h] [rbp+28h] BYREF
  struct CVisualProxy *v25; // [rsp+88h] [rbp+38h] BYREF

  v20 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v19 = a2;
  v24 = 0LL;
  v5 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v24);
  v6 = CCompositor::CreateVisualGroupProxyFromSharedHandle(v5, a2, &v24);
  v8 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x690,
      (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)v6);
LABEL_16:
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v24);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v19);
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v20);
    return v8;
  }
  *(_OWORD *)v21 = 0LL;
  v9 = 0LL;
  v22 = 0LL;
  v10 = a3[1];
  v11 = *a3;
  v12 = 0LL;
  while ( v11 != v10 )
  {
    v25 = 0LL;
    if ( CProjectionBorderManager::_GetWindowRootVisual(v7, *v11, &v25) >= 0 )
    {
      if ( v12 == v9 )
      {
        std::vector<CVisualProxy *>::_Emplace_reallocate<CVisualProxy * const &>((void **)v21, (__int64)v12, &v25);
        v9 = v22;
        v12 = v21[1];
      }
      else
      {
        *v12++ = v25;
        v21[1] = v12;
      }
    }
    ++v11;
  }
  v13 = v21[0];
  v14 = v12 - v21[0];
  if ( v14 > 0xFFFFFFFF )
  {
    v18 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x69D,
            (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
            (const char *)0xC0000095LL);
    if ( v13 )
      std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)(8 * (v9 - v13)));
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v24);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v19);
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v20);
    return v18;
  }
  else
  {
    if ( (_DWORD)v14 )
    {
      v15 = CVisualGroupProxy::Update(v24, v21[0], v14);
      v16 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6A2,
          (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
          (const char *)(unsigned int)v15);
        if ( v13 )
          std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)(8 * (v9 - v13)));
        v8 = v16;
        goto LABEL_16;
      }
    }
    if ( v13 )
      std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)(8 * (v9 - v13)));
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v24);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v19);
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v20);
    return 0LL;
  }
}
