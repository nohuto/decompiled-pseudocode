/*
 * XREFs of ViValidateTriageRules @ 0x140C3E770
 * Callers:
 *     VfTriageSystem @ 0x140C3E1C0 (VfTriageSystem.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 */

__int64 __fastcall ViValidateTriageRules(unsigned int *a1, __int64 a2)
{
  unsigned int *v2; // r8
  bool v3; // cf
  unsigned __int64 v4; // rax

  v2 = (unsigned int *)((char *)a1 + a2);
  v3 = a1 < (unsigned int *)((char *)a1 + a2);
  while ( v3 )
  {
    v4 = *a1;
    if ( (v4 & 0x70000) == 0 )
    {
      DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: found zeroed rule during validation.\n");
      return 1LL;
    }
    a1 = (unsigned int *)((char *)a1 + (v4 >> 19) + 8);
    v3 = a1 < v2;
    if ( a1 > v2 )
    {
      DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: invalid rules structure! \n");
      return 0LL;
    }
  }
  DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: rules are ok.\n");
  return 1LL;
}
