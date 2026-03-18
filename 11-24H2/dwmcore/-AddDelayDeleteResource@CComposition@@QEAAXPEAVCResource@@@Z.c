/*
 * XREFs of ?AddDelayDeleteResource@CComposition@@QEAAXPEAVCResource@@@Z @ 0x180132E48
 * Callers:
 *     ?Delete@CResource@@IEAAXXZ @ 0x180132B80 (-Delete@CResource@@IEAAXXZ.c)
 * Callees:
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800BF040 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?IsCompositionThread@CComposition@@QEBA_NXZ @ 0x180154F30 (-IsCompositionThread@CComposition@@QEBA_NXZ.c)
 *     ?EnqueueResourceToDestroy@CDeferredDestroys@@QEAAXPEAVCResource@@@Z @ 0x1801EE998 (-EnqueueResourceToDestroy@CDeferredDestroys@@QEAAXPEAVCResource@@@Z.c)
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
    CComposition::ScheduleCompositionPass((__int64)v2, 0, 0x200u);
}
