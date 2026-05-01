/*
 * XREFs of ?Free@ARI@@YAXPEAX@Z @ 0x18005E354
 * Callers:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18005D4A0 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ??1AutoSysAppId@ProcessToken@ARI@@QEAA@XZ @ 0x18005DCAC (--1AutoSysAppId@ProcessToken@ARI@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ARI::Free(PVOID P, void *a2)
{
  if ( P )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
}
