/*
 * XREFs of ?AddDelayDeleteResource@CComposition@@QEAAXPEAVCResource@@@Z @ 0x180069728
 * Callers:
 *     ?Delete@CResource@@IEAAXXZ @ 0x180069460 (-Delete@CResource@@IEAAXXZ.c)
 * Callees:
 *     ?IsCompositionThread@CComposition@@QEBA_NXZ @ 0x18003E290 (-IsCompositionThread@CComposition@@QEBA_NXZ.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800E5580 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?EnqueueResourceToDestroy@CDeferredDestroys@@QEAAXPEAVCResource@@@Z @ 0x1801FB0E8 (-EnqueueResourceToDestroy@CDeferredDestroys@@QEAAXPEAVCResource@@@Z.c)
 */

void __fastcall CComposition::AddDelayDeleteResource(CComposition *this, struct CResource *a2)
{
  CGlobalComposition *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  CComposition *v5; // rcx

  v2 = g_pComposition;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_pComposition + 5720);
  EnterCriticalSection((LPCRITICAL_SECTION)g_pComposition + 143);
  CDeferredDestroys::EnqueueResourceToDestroy((CGlobalComposition *)((char *)v2 + 5760), a2);
  if ( v4 )
    LeaveCriticalSection(v4);
  if ( !CComposition::IsCompositionThread(v5) )
    CComposition::ScheduleCompositionPass(v2, 0LL, 512LL);
}
