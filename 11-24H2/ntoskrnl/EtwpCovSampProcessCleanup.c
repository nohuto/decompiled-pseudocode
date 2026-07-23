/*
 * XREFs of EtwpCovSampProcessCleanup @ 0x140924B30
 * Callers:
 *     EtwExitProcess @ 0x1408FF6D4 (EtwExitProcess.c)
 *     EtwpCovSampProcessEnsureContext @ 0x1409247F8 (EtwpCovSampProcessEnsureContext.c)
 *     EtwpCovSampContextCleanup @ 0x140ADB73C (EtwpCovSampContextCleanup.c)
 *     EtwpCoverageSamplerStop @ 0x140ADC310 (EtwpCoverageSamplerStop.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     EtwpCovSampModuleDereference @ 0x14092387C (EtwpCovSampModuleDereference.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCovSampProcessCleanup(__int64 a1, char a2)
{
  __int64 v4; // rdx
  unsigned int i; // r8d
  int v6; // r8d

  if ( *(_QWORD *)(a1 + 24) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 32); i = v6 + 1 )
      EtwpCovSampModuleDereference(*(_QWORD *)a1, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL * i + 8));
    ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0x56777445u);
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 36) = 0;
  }
  v4 = *(_QWORD *)(a1 + 48);
  if ( v4 )
  {
    EtwpCovSampModuleDereference(*(_QWORD *)a1, v4);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  if ( *(_QWORD *)a1 )
  {
    if ( a2 )
      ObfDereferenceObject(**(PVOID **)a1);
    *(_QWORD *)a1 = 0LL;
  }
}
