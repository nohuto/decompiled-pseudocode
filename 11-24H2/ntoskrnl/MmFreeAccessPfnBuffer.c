/*
 * XREFs of MmFreeAccessPfnBuffer @ 0x140463F10
 * Callers:
 *     PfpReturnAccessBuffer @ 0x140479740 (PfpReturnAccessBuffer.c)
 *     PfpFlushBuffers @ 0x140971DE0 (PfpFlushBuffers.c)
 *     PfTAccessTracingCleanup @ 0x140B5D4DC (PfTAccessTracingCleanup.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14028EF60 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
