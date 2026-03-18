/*
 * XREFs of ?AllocateOutside@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x14009E238
 * Callers:
 *     ?ReserveOutsideRangeCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z @ 0x14009D060 (-ReserveOutsideRangeCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z.c)
 *     ?ReserveOutsideRangeNoDisplayingCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z @ 0x14009D1B0 (-ReserveOutsideRangeNoDisplayingCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1400D3AD0 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::AllocateOutside(
        VIDMM_LINEAR_POOL *this,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        char a7,
        char a8,
        struct VIDMM_PHYSICAL_ALLOC *a9,
        union _LARGE_INTEGER *a10,
        void **a11)
{
  __int64 result; // rax
  unsigned __int64 v15; // rcx

  result = 3221225473LL;
  if ( !a5 || (result = VIDMM_LINEAR_POOL::Allocate(this, a2, a3, 1u, 0LL, a5, a7, a8, a9, a10, a11), (int)result < 0) )
  {
    v15 = *((_QWORD *)this + 1);
    if ( a6 != v15 )
      return VIDMM_LINEAR_POOL::Allocate(this, a2, a3, 1u, a6, v15, a7, a8, a9, a10, a11);
  }
  return result;
}
