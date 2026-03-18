/*
 * XREFs of FreeObjOwnerWorker @ 0x14006CAE0
 * Callers:
 *     <none>
 * Callees:
 *     FreeObjOwner @ 0x140005670 (FreeObjOwner.c)
 *     AMLIRestartContext @ 0x14004B0FC (AMLIRestartContext.c)
 */

void __fastcall FreeObjOwnerWorker(struct _EX_RUNDOWN_REF *StartContext)
{
  __int64 Count; // rbx

  Count = StartContext[7].Count;
  FreeObjOwner(0LL, StartContext);
  AMLIRestartContext(Count);
}
