/*
 * XREFs of CrmPolicyTableEntryGet @ 0x18002E830
 * Callers:
 *     CrmActivityStart @ 0x18002D920 (CrmActivityStart.c)
 *     CrmLogActivityUpdate @ 0x18002E5A0 (CrmLogActivityUpdate.c)
 * Callees:
 *     <none>
 */

char *__fastcall CrmPolicyTableEntryGet(int a1)
{
  char *v1; // rbx
  void *v2; // rax
  int Key; // [rsp+40h] [rbp+8h] BYREF

  Key = a1;
  v1 = (char *)&CrmPolicyTable + 712 * a1;
  v2 = bsearch(&Key, &CrmPolicyTableIndexerExperimentOverride, 6uLL, 0x2C8uLL, CrmPolicyTableCompare);
  if ( v2 )
    return (char *)v2;
  return v1;
}
