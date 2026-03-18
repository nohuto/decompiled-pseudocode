/*
 * XREFs of ?Free@PDEV@@SAXPEAV1@H@Z @ 0x14003D9D0
 * Callers:
 *     vUnreferencePdevWorker @ 0x14003D4F0 (vUnreferencePdevWorker.c)
 *     MultiUserNtGreCleanup @ 0x140089C68 (MultiUserNtGreCleanup.c)
 *     _PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::operator() @ 0x14019AF2C (_PDEVOBJ--PDEVOBJ_--_2_--_lambda_1_--operator().c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x14019BA3C (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 * Callees:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x14003DC0C (--$FreeIsolatedType@V-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x14019D294 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

void __fastcall PDEV::Free(struct PDEV *a1)
{
  if ( *((_QWORD *)a1 + 442) )
    ReleaseReferenceCountedObjectHandle(1LL);
  FreeIsolatedType<NSInstrumentation::CTypeIsolation<909312,3552>>(a1);
}
