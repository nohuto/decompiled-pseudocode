/*
 * XREFs of VidMmAllocateVirtualMemoryFromPartition @ 0x140090508
 * Callers:
 *     ?VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z @ 0x1400C687C (-VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z @ 0x1400C7894 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z.c)
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJW4VIDMM_PAGE_PRIORITY@@_N@Z @ 0x1400CDC28 (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJW4VIDMM_PAGE_PRIORITY@@_N@Z.c)
 *     ?ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ @ 0x1400CECD4 (-ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ.c)
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DE0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VidMmAllocateVirtualMemoryFromPartition(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 result; // rax
  _QWORD v10[4]; // [rsp+40h] [rbp-48h] BYREF

  if ( (a4 & 0x1080000) != 0 )
  {
    WdLogSingleEntry1(4LL, a4);
    result = 3223191824LL;
    WdLogGlobalForLineNumber = 1504;
  }
  else
  {
    v10[0] = 5LL;
    v10[1] = 2LL;
    v10[3] = a1;
    v10[2] = 3LL;
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    return (*((__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, _QWORD *, int))VirtualMemoryInterface + 1))(
             -1LL,
             a2,
             a3,
             a4 | 0x20400000,
             a5,
             v10,
             2);
  }
  return result;
}
