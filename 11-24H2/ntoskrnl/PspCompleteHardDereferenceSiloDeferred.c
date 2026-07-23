/*
 * XREFs of PspCompleteHardDereferenceSiloDeferred @ 0x140AA07B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PspStorageEmptyArrayNonReadonly @ 0x140493408 (PspStorageEmptyArrayNonReadonly.c)
 */

LONG_PTR __fastcall PspCompleteHardDereferenceSiloDeferred(PVOID Object)
{
  __int64 v1; // rbx
  unsigned __int64 *v3; // rcx

  v1 = *((_QWORD *)Object + 192);
  if ( v1 )
  {
    PspStorageEmptyArrayNonReadonly(*((unsigned __int64 **)Object + 192), 0x20u);
    v3 = *(unsigned __int64 **)(v1 + 512);
    if ( v3 )
      PspStorageEmptyArrayNonReadonly(v3, 0x100u);
  }
  return ObfDereferenceObject(Object);
}
