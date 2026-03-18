/*
 * XREFs of ?GetVaAllocator@VIDMM_SCH_LOG@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x140039C40
 * Callers:
 *     ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4VIDMM_SCH_LOG_TYPE@@@Z @ 0x140024A94 (-CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4V.c)
 *     ?RecommitSchLog@VIDMM_SCH_LOG@@SAJPEAV1@@Z @ 0x1400399F4 (-RecommitSchLog@VIDMM_SCH_LOG@@SAJPEAV1@@Z.c)
 *     ??1VIDMM_SCH_LOG@@AEAA@XZ @ 0x140039B14 (--1VIDMM_SCH_LOG@@AEAA@XZ.c)
 * Callees:
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400BC6E0 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEBAKXZ @ 0x1400F1A88 (-AdapterId@VIDMM_GLOBAL@@QEBAKXZ.c)
 */

struct CVirtualAddressAllocator *__fastcall VIDMM_SCH_LOG::GetVaAllocator(VIDMM_GLOBAL **this)
{
  unsigned int v1; // eax
  unsigned int v2; // r8d
  VIDMM_PROCESS *v3; // r9

  v1 = VIDMM_GLOBAL::AdapterId(*this);
  return VIDMM_PROCESS::GetVirtualAddressAllocator(v3, v1, v2);
}
