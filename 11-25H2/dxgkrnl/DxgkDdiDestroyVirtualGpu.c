/*
 * XREFs of DxgkDdiDestroyVirtualGpu @ 0x140209584
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x140237020 (DpiFdoDispatchIoctl.c)
 *     DpiFdoDispatchCleanupAndClose @ 0x1402BA580 (DpiFdoDispatchCleanupAndClose.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x140055794 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@E@Z @ 0x140206618 (-DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDdiDestroyVirtualGpu(_QWORD *a1, unsigned int a2, unsigned int *a3, char a4)
{
  int v8; // ebx
  struct DXGPROCESS *Current; // rax
  __int64 v11; // [rsp+28h] [rbp-30h]

  if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 305541) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 387;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Attempt to delete a vGPU while KSR prepared is not supported",
      387LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v8 = -1073741637;
  }
  else if ( !a4 || (Current = DXGPROCESS::GetCurrent(), (*((_DWORD *)Current + 102) & 0x40) != 0) )
  {
    v8 = ADAPTER_RENDER::DestroyVirtualGpu(a1[391], a2, a3, a4);
  }
  else
  {
    WdLogSingleEntry1(3LL, Current);
    WdLogGlobalForLineNumber = 399;
    v8 = -1073741811;
  }
  if ( bTracingEnabled )
  {
    LODWORD(v11) = *a3;
    VgpuTrace(1, v8, a1, L"DxgkDdiDestroyVirtualGpu", (wchar_t *)L"%d", v11);
    DxgkLogInternalTriageEvent((__int64)a1, 196609, *a3, L"Destroying vGPU returns %1", v8, 0LL, 0LL, 0LL, 0LL);
  }
  return (unsigned int)v8;
}
