/*
 * XREFs of ?OpenAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@IPEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_MULTI_ALLOC@@PEAIPEAE@Z @ 0x1400E7BC4
 * Callers:
 *     VidMmOpenAllocation @ 0x1400397A0 (VidMmOpenAllocation.c)
 * Callees:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1400E7C48 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALL.c)
 */

__int64 __fastcall VIDMM_GLOBAL::OpenAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct VIDMM_MULTI_GLOBAL_ALLOC *a3,
        __int64 a4,
        void *a5,
        bool a6,
        struct DXGALLOCATION *a7,
        struct VIDMM_MULTI_ALLOC **a8,
        unsigned int *a9,
        unsigned __int8 *a10)
{
  struct VIDMM_MULTI_ALLOC **v11; // rdi
  void *v12; // r9
  __int64 result; // rax
  unsigned __int8 *v14; // [rsp+38h] [rbp-10h]
  struct VIDMM_ALLOC *v15; // [rsp+60h] [rbp+18h] BYREF

  v11 = a8;
  v12 = a5;
  v15 = 0LL;
  v14 = a10;
  *a8 = 0LL;
  result = VIDMM_GLOBAL::OpenOneAllocation(this, a2, a3, v12, a6, a7, &v15, v14);
  if ( (int)result >= 0 )
  {
    *a9 = *((_DWORD *)a3 + 6) & 0x3F;
    *v11 = v15;
    return (unsigned int)result;
  }
  return result;
}
