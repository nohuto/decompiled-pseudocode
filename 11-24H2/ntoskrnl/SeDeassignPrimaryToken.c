/*
 * XREFs of SeDeassignPrimaryToken @ 0x1408FF694
 * Callers:
 *     PspProcessDelete @ 0x1408FFC10 (PspProcessDelete.c)
 *     SeAssignPrimaryToken @ 0x140A4A3CC (SeAssignPrimaryToken.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall SeDeassignPrimaryToken(__int64 a1)
{
  __int64 v1; // rax
  volatile signed __int64 *v2; // rcx
  int v3; // eax

  v1 = _InterlockedExchange64((volatile __int64 *)(a1 + 584), 0LL);
  v2 = (volatile signed __int64 *)(v1 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (v1 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v3 = v1 & 0xF;
    if ( v3 )
      _InterlockedAdd64(v2 - 6, -v3);
  }
  *((_BYTE *)v2 + 204) = 0;
  return ObfDereferenceObject((PVOID)v2);
}
