/*
 * XREFs of ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x14015F620
 * Callers:
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14017F560 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1401893D0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x14015F980 (-ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z.c)
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x14015FB30 (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 */

struct NDISWATCHDOG__ **__fastcall ndisMakeWatchdog(
        struct NDISWATCHDOG__ **a1,
        void *a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  struct NDISWATCHDOG__ *Watchdog; // rbx
  struct NDISWATCHDOG__ **result; // rax

  Watchdog = ndisAllocateWatchdog();
  ndisArmWatchdog(Watchdog, a2, a3, a4, a5, a6);
  result = a1;
  *a1 = Watchdog;
  return result;
}
