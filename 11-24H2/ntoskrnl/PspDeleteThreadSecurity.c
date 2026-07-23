/*
 * XREFs of PspDeleteThreadSecurity @ 0x140A1E208
 * Callers:
 *     PspThreadDelete @ 0x140ACF4E0 (PspThreadDelete.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall PspDeleteThreadSecurity(__int64 a1)
{
  LONG_PTR result; // rax
  _QWORD *v2; // rdi
  void *v4; // rcx

  result = *(unsigned int *)(a1 + 1440);
  v2 = (_QWORD *)(a1 + 1336);
  if ( (result & 8) != 0 )
  {
    result = ObfDereferenceObject((PVOID)(*v2 & 0xFFFFFFFFFFFFFFF8uLL));
    v4 = *(void **)(a1 + 1608);
    if ( v4 )
    {
      result = ObfDereferenceObject(v4);
      *(_QWORD *)(a1 + 1608) = 0LL;
    }
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1440), 0xFFFFFFF7);
  }
  *v2 = 0LL;
  return result;
}
