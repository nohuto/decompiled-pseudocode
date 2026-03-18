/*
 * XREFs of KiInitDynamicTraceSupport @ 0x140C191A4
 * Callers:
 *     KeInitSystem @ 0x140C4FA10 (KeInitSystem.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x14025C9D0 (RtlLookupFunctionEntry.c)
 */

__int64 KiInitDynamicTraceSupport()
{
  int v0; // ebx
  int v1; // ebx
  __int64 result; // rax
  unsigned int *v3; // rax
  unsigned __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v4 = 0LL;
  v0 = 1;
  KiDynamicTraceCallouts[0] = 9LL;
  if ( !(_BYTE)KdDebuggerNotPresent )
    v0 = 5;
  v1 = v0 | 2;
  result = TraceInitSystem(&v5, KiDynamicTraceCallouts, &qword_140FC6448);
  if ( (int)result >= 0 )
  {
    v3 = RtlLookupFunctionEntry(qword_140FC6448, &v4, 0LL);
    if ( v3 )
    {
      qword_140FC6448 = v4 + *v3;
      qword_140FC6450 = v4 + v3[1];
    }
    result = (__int64)v5;
    *v5 = KiDynamicTraceContext;
    KiDynamicTraceEnabled = v1;
  }
  return result;
}
