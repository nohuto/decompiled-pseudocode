/*
 * XREFs of EtwpFreeSecurityDescriptor @ 0x140A0B660
 * Callers:
 *     EtwpUpdateTrace @ 0x140ADA038 (EtwpUpdateTrace.c)
 *     EtwpFixBootLoggers @ 0x140C406E8 (EtwpFixBootLoggers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
