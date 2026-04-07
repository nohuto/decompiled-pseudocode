/*
 * XREFs of ?RegisterWindowCloseEvent@CWindowList@@AEAAJPEAUHWND__@@PEAXUDWM_WINDOW_CLOSE_EVENT_TOKEN@@@Z @ 0x1800F29F4
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800915A0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800434E0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@PEAXV?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBT_LARGE_INTEGER@@PEAX@1@@Z @ 0x1800ED4D0 (--$emplace@U-$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@PEAX.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@PEAXV?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@std@@@std@@@1@AEBT_LARGE_INTEGER@@@Z @ 0x1800ED72C (--$find@X@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@PEAXV-$_Uhash_compare@T_LARGE_INTEGER@@U-$has.c)
 */

// Hidden C++ exception states: #wind=1
__int64 CWindowList::RegisterWindowCloseEvent(CWindowList *a1, HWND a2, __int64 a3, ...)
{
  __int64 v3; // rbx
  struct CWindowData *WindowDataByHwnd; // rax
  struct CWindowData *v8; // rbp
  unsigned int v9; // edi
  __int64 v10; // rdx
  float *v11; // rsi
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v14[2]; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v15[48]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v17; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v17 = va_arg(va1, _QWORD);
  v3 = v17;
  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(a1, a2);
  v8 = WindowDataByHwnd;
  v9 = 0;
  if ( WindowDataByHwnd )
  {
    v11 = (float *)((char *)WindowDataByHwnd + 672);
    std::_Hash<std::_Umap_traits<_LARGE_INTEGER,void *,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,void *>>,0>>::find<void>(
      (_QWORD *)WindowDataByHwnd + 84,
      v14,
      (const unsigned __int8 *)va);
    if ( v14[0] == *((_QWORD *)v8 + 85) )
    {
      v14[0] = v3;
      v14[1] = a3;
      std::_Hash<std::_Umap_traits<_LARGE_INTEGER,void *,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,void *>>,0>>::emplace<std::pair<_LARGE_INTEGER const,void *>>(
        v11,
        (__int64)v15,
        (const unsigned __int8 *)v14);
      goto LABEL_7;
    }
    v10 = 8745LL;
  }
  else
  {
    v10 = 8741LL;
  }
  v9 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)0x80070057LL);
LABEL_7:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v9;
}
