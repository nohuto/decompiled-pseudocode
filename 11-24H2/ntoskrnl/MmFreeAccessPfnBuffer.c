/*
 * XREFs of MmFreeAccessPfnBuffer @ 0x14046B30C
 * Callers:
 *     PfpReturnAccessBuffer @ 0x14047E840 (PfpReturnAccessBuffer.c)
 *     PfpFlushBuffers @ 0x14094F8D0 (PfpFlushBuffers.c)
 *     PfTAccessTracingCleanup @ 0x140B5B46C (PfTAccessTracingCleanup.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14025E950 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
