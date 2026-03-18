/*
 * XREFs of MmFreeAccessPfnBuffer @ 0x14046CB08
 * Callers:
 *     PfpReturnAccessBuffer @ 0x14047DF70 (PfpReturnAccessBuffer.c)
 *     PfpFlushBuffers @ 0x140923880 (PfpFlushBuffers.c)
 *     PfTAccessTracingCleanup @ 0x140B4B4FC (PfTAccessTracingCleanup.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402BC860 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MmFreeAccessPfnBuffer(_QWORD *P, char a2)
{
  void *v3; // rcx

  if ( !*((_DWORD *)P + 2) )
  {
    v3 = (void *)P[7];
    if ( (unsigned __int64)v3 > 1 )
    {
      if ( a2 )
        ObDereferenceObjectDeferDeleteWithTag(v3, 0x4C416D4Du);
      else
        ObfDereferenceObjectWithTag(v3, 0x4C416D4Du);
    }
  }
  ExFreePoolWithTag(P, 0);
}
