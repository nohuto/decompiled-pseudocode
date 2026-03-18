/*
 * XREFs of PspDeleteThreadStateChange @ 0x140A83230
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PsMultiResumeThread @ 0x14046086C (PsMultiResumeThread.c)
 */

LONG_PTR __fastcall PspDeleteThreadStateChange(__int64 a1)
{
  unsigned int v1; // r8d

  v1 = *(_DWORD *)(a1 + 16);
  if ( v1 )
    PsMultiResumeThread(*(_QWORD *)a1, 0LL, v1);
  return ObfDereferenceObjectWithTag(*(PVOID *)a1, 0x63547350u);
}
