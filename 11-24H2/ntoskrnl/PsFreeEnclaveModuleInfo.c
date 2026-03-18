/*
 * XREFs of PsFreeEnclaveModuleInfo @ 0x1404BEC50
 * Callers:
 *     PsGetProcessEnclaveModuleInfo @ 0x1404BEA10 (PsGetProcessEnclaveModuleInfo.c)
 *     DbgkpPostModuleMessages @ 0x140A4A9B8 (DbgkpPostModuleMessages.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PsFreeEnclaveModuleInfo(char *P, int a2)
{
  int v2; // edi
  PVOID *v4; // rbx

  if ( P )
  {
    v2 = a2;
    if ( a2 )
    {
      v4 = (PVOID *)&P[16 * a2];
      do
      {
        v4 -= 2;
        ExFreePoolWithTag(*v4, 0);
        --v2;
      }
      while ( v2 );
    }
    ExFreePoolWithTag(P, 0);
  }
}
