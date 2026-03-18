/*
 * XREFs of EtwpDereferenceLoggerSecurityDescriptor @ 0x140A2B970
 * Callers:
 *     EtwQueryPerformanceTraceInformation @ 0x14095E9DC (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     ObDereferenceSecurityDescriptor @ 0x140879D10 (ObDereferenceSecurityDescriptor.c)
 */

void __fastcall EtwpDereferenceLoggerSecurityDescriptor(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  _m_prefetchw((const void *)(a1 + 784));
  v2 = *(_QWORD *)(a1 + 784);
  while ( (a2 ^ (unsigned __int64)v2) < 0xF )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 784), v2 + 1, v2);
    if ( v3 == v2 )
      return;
  }
  ObDereferenceSecurityDescriptor(a2, 1u);
}
