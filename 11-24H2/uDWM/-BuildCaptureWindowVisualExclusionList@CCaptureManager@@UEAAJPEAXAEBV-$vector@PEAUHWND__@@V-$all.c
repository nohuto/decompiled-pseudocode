/*
 * XREFs of ?BuildCaptureWindowVisualExclusionList@CCaptureManager@@UEAAJPEAXAEBV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x1800AD5A0
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
 *     ?_GetWindowRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAPEAVCVisualProxy@@@Z @ 0x1800B409C (-_GetWindowRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAPEAVCVisualProxy@@@Z.c)
 *     ?CreateVisualGroupProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualGroupProxy@@@Z @ 0x1800B6240 (-CreateVisualGroupProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualGroupProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CCaptureManager::BuildCaptureWindowVisualExclusionList(__int64 a1, void *a2, HWND **a3)
{
  CCompositor *v5; // rbx
  int v6; // eax
  CCaptureManager *v7; // rcx
  bool v8; // r8
  unsigned int v9; // ebx
  struct CVisualProxy **v10; // rbx
  HWND *v11; // r14
  HWND *v12; // rsi
  struct CVisualProxy **v13; // rdi
  struct CVisualProxy **v14; // rsi
  unsigned __int64 v15; // rdi
  int v16; // eax
  int v17; // edi
  unsigned int v19; // edi
  void *v20; // [rsp+20h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+28h] [rbp-28h] BYREF
  struct CVisualProxy **v22[2]; // [rsp+30h] [rbp-20h] BYREF
  struct CVisualProxy **v23; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  CVisualGroupProxy *v25; // [rsp+78h] [rbp+28h] BYREF
  struct CVisualProxy *v26; // [rsp+88h] [rbp+38h] BYREF

  v21 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v20 = a2;
  v25 = 0LL;
  v5 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v25);
  v6 = CCompositor::CreateVisualGroupProxyFromSharedHandle(v5, a2, &v25);
  v9 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50B,
      (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)v6);
LABEL_16:
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v25);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v20);
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v21);
    return v9;
  }
  *(_OWORD *)v22 = 0LL;
  v10 = 0LL;
  v23 = 0LL;
  v11 = a3[1];
  v12 = *a3;
  v13 = 0LL;
  while ( v12 != v11 )
  {
    v26 = 0LL;
    if ( CCaptureManager::_GetWindowRootVisual(v7, *v12, v8, &v26) >= 0 )
    {
      if ( v13 == v10 )
      {
        std::vector<CVisualProxy *>::_Emplace_reallocate<CVisualProxy * const &>((void **)v22, (__int64)v13, &v26);
        v10 = v23;
        v13 = v22[1];
      }
      else
      {
        *v13++ = v26;
        v22[1] = v13;
      }
    }
    ++v12;
  }
  v14 = v22[0];
  v15 = v13 - v22[0];
  if ( v15 > 0xFFFFFFFF )
  {
    v19 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x518,
            (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
            (const char *)0xC0000095LL);
    if ( v14 )
      std::_Deallocate<16,0>(v14, (const struct std::nothrow_t *)(8 * (v10 - v14)));
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v25);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v20);
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v21);
    return v19;
  }
  else
  {
    if ( (_DWORD)v15 )
    {
      v16 = CVisualGroupProxy::Update(v25, v22[0], v15);
      v17 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x51D,
          (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
          (const char *)(unsigned int)v16);
        if ( v14 )
          std::_Deallocate<16,0>(v14, (const struct std::nothrow_t *)(8 * (v10 - v14)));
        v9 = v17;
        goto LABEL_16;
      }
    }
    if ( v14 )
      std::_Deallocate<16,0>(v14, (const struct std::nothrow_t *)(8 * (v10 - v14)));
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v25);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v20);
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v21);
    return 0LL;
  }
}
