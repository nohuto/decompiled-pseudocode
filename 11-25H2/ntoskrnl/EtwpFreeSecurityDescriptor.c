/*
 * XREFs of EtwpFreeSecurityDescriptor @ 0x140A0910C
 * Callers:
 *     EtwpUpdateTrace @ 0x140893BB4 (EtwpUpdateTrace.c)
 *     EtwpFixBootLoggers @ 0x140C2D2BC (EtwpFixBootLoggers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeSecurityDescriptor(void **a1)
{
  PSECURITY_DESCRIPTOR v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    if ( v2 != (PSECURITY_DESCRIPTOR)WmipDefaultAccessSd && v2 != EtwpDefaultTraceSecurityDescriptor )
      ExFreePoolWithTag(v2, 0);
    *a1 = 0LL;
  }
}
