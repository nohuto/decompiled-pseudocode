/*
 * XREFs of AllocateCpuHostApertureRange @ 0x1400F430C
 * Callers:
 *     ?GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT@@@Z @ 0x1400AC590 (-GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_DRIVER_UPDATE_A.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall AllocateCpuHostApertureRange(int a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = ExAllocatePool2(256LL, 4LL * (unsigned int)(a1 - 1) + 40, 1630824790LL);
  if ( result )
  {
    *(_QWORD *)result = 0LL;
    *(_QWORD *)(result + 8) = 0LL;
    *(_DWORD *)(result + 36) = 0;
    *(_QWORD *)(result + 16) = 0LL;
    *(_DWORD *)(result + 24) = -1;
    *(_DWORD *)(result + 28) = -1;
    *(_DWORD *)(result + 32) = -1;
  }
  else
  {
    _InterlockedIncrement(&dword_1400817D8);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 372;
    DxgkLogInternalTriageEvent(v2, 262145LL);
    return 0LL;
  }
  return result;
}
