/*
 * XREFs of ?UpdateWindowCaptureBorder@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z @ 0x1800B2550
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Find@T_LARGE_INTEGER@@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@AEBAPEAU?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@PEAX@1@AEBT_LARGE_INTEGER@@_K@Z @ 0x1800AC1E0 (--$_Find@T_LARGE_INTEGER@@@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CC.c)
 *     ??$_Hash_representation@_J@std@@YA_KAEB_J@Z @ 0x1800AC3B8 (--$_Hash_representation@_J@std@@YA_KAEB_J@Z.c)
 *     ?_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800B400C (-_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800B45F8 (-_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCaptureManager::UpdateWindowCaptureBorder(
        CCaptureManager *this,
        const struct DWM_CAPTURE_TOKEN *a2,
        int a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // r9
  __int64 v11; // rdx
  _BOOL8 v12; // rcx
  bool v13; // si
  int ProxyWindowHandle; // eax
  CCaptureManager *v15; // rcx
  CProjectionBorderManager *v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HWND v19; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+38h] [rbp+10h] BYREF

  v20 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = std::_Hash_representation<__int64>((const unsigned __int8 *)a2);
  v7 = std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>>,0>>::_Find<_LARGE_INTEGER>(
         (__int64)this + 8,
         (__int64)a2,
         v6);
  v8 = v7;
  if ( v7 != *((_QWORD *)this + 2) )
  {
    v12 = a3 != 0;
    if ( *(_BYTE *)(v7 + 56) != v12 )
    {
      v13 = a3 != 0;
      *(_BYTE *)(v7 + 56) = v13;
      if ( *(_BYTE *)(v7 + 57) )
      {
        ProxyWindowHandle = CProjectionBorderManager::_SetProjectionBorderForWindow(
                              (CProjectionBorderManager *)v12,
                              *(HWND *)(v7 + 40),
                              v13);
        v9 = ProxyWindowHandle;
        if ( ProxyWindowHandle < 0 )
        {
          v11 = 453LL;
LABEL_7:
          v10 = (unsigned int)ProxyWindowHandle;
          goto LABEL_8;
        }
        v19 = 0LL;
        ProxyWindowHandle = CCaptureManager::_GetProxyWindowHandle(v15, *(HWND *)(v8 + 40), &v19);
        v9 = ProxyWindowHandle;
        if ( ProxyWindowHandle < 0 )
        {
          v11 = 456LL;
          goto LABEL_7;
        }
        if ( v19 )
        {
          ProxyWindowHandle = CProjectionBorderManager::_SetProjectionBorderForWindow(v16, v19, v13);
          v9 = ProxyWindowHandle;
          if ( ProxyWindowHandle < 0 )
          {
            v11 = 459LL;
            goto LABEL_7;
          }
        }
      }
    }
    v9 = 0;
    goto LABEL_15;
  }
  v9 = -2147024809;
  v10 = 2147942487LL;
  v11 = 446LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)v10);
LABEL_15:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v20);
  return v9;
}
