/*
 * XREFs of RtlpInitializeStackTraceDatabase @ 0x1800E0E4C
 * Callers:
 *     RtlControlStackTraceDataBase @ 0x1800E0DE4 (RtlControlStackTraceDataBase.c)
 * Callees:
 *     RtlStdInitializeStackDatabase @ 0x1800E0EC0 (RtlStdInitializeStackDatabase.c)
 *     RtlHeapsStackCollection @ 0x1800E10F4 (RtlHeapsStackCollection.c)
 *     RtlStdDeleteStackDatabase @ 0x18011BDC0 (RtlStdDeleteStackDatabase.c)
 */

__int64 __fastcall RtlpInitializeStackTraceDatabase(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  signed __int64 v5; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0LL;
  if ( RtlpStackTraceDatabase )
    return 3221225994LL;
  v3 = RtlStdInitializeStackDatabase(a1, a2, a3, &v5);
  if ( v3 >= 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&RtlpStackTraceDatabase, v5, 0LL) )
    {
      RtlStdDeleteStackDatabase(v5);
      return 3221225994LL;
    }
    if ( LdrInitState == 3 )
      RtlHeapsStackCollection();
  }
  return (unsigned int)v3;
}
