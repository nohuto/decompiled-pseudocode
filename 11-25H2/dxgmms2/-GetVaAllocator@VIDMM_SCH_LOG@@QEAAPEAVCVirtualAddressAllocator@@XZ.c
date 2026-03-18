/*
 * XREFs of ?GetVaAllocator@VIDMM_SCH_LOG@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x14003C1E0
 * Callers:
 *     ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4VIDMM_SCH_LOG_TYPE@@@Z @ 0x140033230 (-CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4V.c)
 *     ?RecommitSchLog@VIDMM_SCH_LOG@@SAJPEAV1@@Z @ 0x14003BF94 (-RecommitSchLog@VIDMM_SCH_LOG@@SAJPEAV1@@Z.c)
 *     ??1VIDMM_SCH_LOG@@AEAA@XZ @ 0x14003C0B4 (--1VIDMM_SCH_LOG@@AEAA@XZ.c)
 * Callees:
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400B4820 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEBAKXZ @ 0x1400F671C (-AdapterId@VIDMM_GLOBAL@@QEBAKXZ.c)
 */

struct CVirtualAddressAllocator *__fastcall VIDMM_SCH_LOG::GetVaAllocator(VIDMM_GLOBAL **this)
{
  unsigned int v1; // eax
  unsigned int v2; // r8d
  VIDMM_PROCESS *v3; // r9

  v1 = VIDMM_GLOBAL::AdapterId(*this);
  return VIDMM_PROCESS::GetVirtualAddressAllocator(v3, v1, v2);
}
