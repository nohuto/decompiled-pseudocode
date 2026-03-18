/*
 * XREFs of KeInitializeProfileCallback @ 0x1406EAD3C
 * Callers:
 *     EtwpTimeProfileStart @ 0x1406EACF8 (EtwpTimeProfileStart.c)
 *     EtwpSetPmcProfileSource @ 0x14079AD18 (EtwpSetPmcProfileSource.c)
 *     EtwpCoverageSamplerStart @ 0x1407A3978 (EtwpCoverageSamplerStart.c)
 *     KiInitializeCacheErrataSupport @ 0x140C18DF0 (KiInitializeCacheErrataSupport.c)
 * Callees:
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140271570 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __fastcall KeInitializeProfileCallback(_DWORD *a1, __int64 a2, __int64 a3, __int16 a4)
{
  memset_0(a1, 0, 0x268uLL);
  *a1 = 40370193;
  *((_QWORD *)a1 + 4) = a2;
  *((_QWORD *)a1 + 5) = a3;
  *((_WORD *)a1 + 304) = a4;
  a1[19] = 0;
  a1[18] = 2097153;
  memset_0(a1 + 20, 0, 0x100uLL);
  KiCopyAffinityEx((struct _KAFFINITY_EX *)(a1 + 18), *((_WORD *)a1 + 37), &KeActiveProcessors);
}
