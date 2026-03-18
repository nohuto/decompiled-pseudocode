/*
 * XREFs of ?Destroy@CManualResetEvent@@SAXQEAV1@@Z @ 0x1C0098900
 * Callers:
 *     ?Destroy@CWorkItemQueue@@SAXQEAV1@@Z @ 0x1C009881C (-Destroy@CWorkItemQueue@@SAXQEAV1@@Z.c)
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C00988CC (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 *     ??1?$CAutoDestroy@VCManualResetEvent@@@@QEAA@XZ @ 0x1C0306978 (--1-$CAutoDestroy@VCManualResetEvent@@@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CManualResetEvent::Destroy(void **pv)
{
  void *v2; // rcx

  v2 = *pv;
  if ( v2 )
    EngFreeMem(v2);
  EngFreeMem(pv);
}
