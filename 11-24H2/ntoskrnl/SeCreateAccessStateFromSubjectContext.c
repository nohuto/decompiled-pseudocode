/*
 * XREFs of SeCreateAccessStateFromSubjectContext @ 0x140A74EC8
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x1407DB5E4 (CmpDoBuildVirtualStack.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140978D18 (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyRemapToVirtual @ 0x14097A7E4 (CmKeyBodyRemapToVirtual.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1403EBC80 (SepCreateAccessStateFromSubjectContext.c)
 */

__int64 __fastcall SeCreateAccessStateFromSubjectContext(__int64 a1, _QWORD *a2, _QWORD *a3, int a4, _DWORD *a5)
{
  void *v7; // rcx
  int AccessStateFromSubjectContext; // edi

  v7 = *(void **)a1;
  if ( v7 )
    PsReferenceSiloContext(v7);
  PsReferenceSiloContext(*(void **)(a1 + 16));
  AccessStateFromSubjectContext = SepCreateAccessStateFromSubjectContext((_OWORD *)a1, a2, a3, a4, a5);
  if ( AccessStateFromSubjectContext < 0 )
  {
    if ( *(_QWORD *)a1 )
      ObfDereferenceObject(*(PVOID *)a1);
    ObfDereferenceObject(*(PVOID *)(a1 + 16));
  }
  return (unsigned int)AccessStateFromSubjectContext;
}
