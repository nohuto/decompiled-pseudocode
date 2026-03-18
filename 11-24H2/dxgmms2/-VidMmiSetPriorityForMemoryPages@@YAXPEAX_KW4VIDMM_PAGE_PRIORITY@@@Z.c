/*
 * XREFs of ?VidMmiSetPriorityForMemoryPages@@YAXPEAX_KW4VIDMM_PAGE_PRIORITY@@@Z @ 0x1400BFB9C
 * Callers:
 *     ?Reset@VIDMM_PROCESS_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@W4VIDMM_PAGE_PRIORITY@@_N@Z @ 0x1400A3980 (-Reset@VIDMM_PROCESS_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@W4VIDMM_PAGE_PRIORITY@@_N@Z.c)
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJW4VIDMM_PAGE_PRIORITY@@_N@Z @ 0x1400BF898 (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJW4VIDMM_PAGE_PRIORITY@@_N@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C3430 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidMmiSetPriorityForMemoryPages(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = a3;
  v6[1] = a2;
  v6[0] = a1;
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *, int *, int))ZwSetInformationVirtualMemory)(
             -1LL,
             1LL,
             1LL,
             v6,
             &v7,
             4);
  if ( (int)result < 0 )
  {
    result = WdLogSingleEntry3(3LL, a1, a2, (int)result);
    WdLogGlobalForLineNumber = 816;
  }
  return result;
}
