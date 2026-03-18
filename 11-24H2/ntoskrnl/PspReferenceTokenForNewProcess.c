/*
 * XREFs of PspReferenceTokenForNewProcess @ 0x140A1B954
 * Callers:
 *     PspCreateProcess @ 0x140A1B354 (PspCreateProcess.c)
 *     NtCreateUserProcess @ 0x140ACBA80 (NtCreateUserProcess.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall PspReferenceTokenForNewProcess(__int64 a1, void *a2, KPROCESSOR_MODE a3, ULONG_PTR *a4)
{
  NTSTATUS result; // eax
  ULONG_PTR v6; // rbx
  ULONG_PTR v7; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    v7 = 0LL;
    result = ObReferenceObjectByHandle(a2, 1u, (POBJECT_TYPE)SeTokenObjectType, a3, (PVOID *)&v7, 0LL);
    v6 = v7;
    if ( result < 0 )
      return result;
  }
  else if ( a1 )
  {
    v6 = PsReferencePrimaryTokenWithTag(a1, 0x746C6644u);
  }
  else
  {
    v6 = PspBootAccessToken;
    PsReferenceSiloContext((void *)PspBootAccessToken);
  }
  *a4 = v6;
  return 0;
}
