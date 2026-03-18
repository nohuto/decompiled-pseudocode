/*
 * XREFs of EtwpInitializeLoggerSecurityDescriptor @ 0x14083042C
 * Callers:
 *     EtwpStartLogger @ 0x140831694 (EtwpStartLogger.c)
 *     EtwpFixBootLoggers @ 0x140C3E598 (EtwpFixBootLoggers.c)
 * Callees:
 *     ObLogSecurityDescriptor @ 0x140838F50 (ObLogSecurityDescriptor.c)
 */

__int64 __fastcall EtwpInitializeLoggerSecurityDescriptor(__int64 a1, void *a2)
{
  int v3; // ecx

  v3 = ObLogSecurityDescriptor(a2);
  if ( v3 >= 0 )
    *(_QWORD *)(a1 + 784) = 0LL;
  return (unsigned int)v3;
}
