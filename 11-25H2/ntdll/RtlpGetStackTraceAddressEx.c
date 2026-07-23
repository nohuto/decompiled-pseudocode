/*
 * XREFs of RtlpGetStackTraceAddressEx @ 0x1800F7C20
 * Callers:
 *     RtlCheckHeldCriticalSections @ 0x1800F4D10 (RtlCheckHeldCriticalSections.c)
 *     RtlpGetStackTraceAddress @ 0x180148740 (RtlpGetStackTraceAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetStackTraceAddressEx(unsigned __int16 a1, unsigned __int16 a2)
{
  unsigned int v2; // r8d

  v2 = a1 + (a2 << 16);
  if ( RtlpStackTraceDatabase && v2 && v2 <= HIDWORD(RtlpStackTraceDatabase[22].Ptr) )
    return *(_QWORD *)(RtlpStackTraceDatabase[23].Value - 8LL * v2);
  else
    return 0LL;
}
