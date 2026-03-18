/*
 * XREFs of ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C00C4260
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C00A8AE8 (MultiUserNtGreCleanup.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00C68C0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     _lambda_792d576b28627a5f7e8ec309c675ba6b_::operator() @ 0x1C00D182C (_lambda_792d576b28627a5f7e8ec309c675ba6b_--operator().c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C015459C (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 * Callees:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C00D1708 (--$FreeIsolatedType@V-$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C016D424 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

void __fastcall PDEV::Free(struct PDEV *a1)
{
  if ( *((_QWORD *)a1 + 440) )
    ReleaseReferenceCountedObjectHandle(1LL);
  FreeIsolatedType<NSInstrumentation::CTypeIsolation<917504,3584>>(a1);
}
