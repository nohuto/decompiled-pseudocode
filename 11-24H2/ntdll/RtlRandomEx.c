/*
 * XREFs of RtlRandomEx @ 0x18002CC00
 * Callers:
 *     RtlHpGlobalsInitialize @ 0x18002C0A4 (RtlHpGlobalsInitialize.c)
 *     RtlpCreateIFEOKeyFilterKey @ 0x1800A6F4C (RtlpCreateIFEOKeyFilterKey.c)
 *     RtlHeapTrkInitialize @ 0x18010E7A0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlpInitRandomExVector @ 0x18002CD6C (RtlpInitRandomExVector.c)
 *     RtlReportCriticalFailure @ 0x18002D990 (RtlReportCriticalFailure.c)
 *     RtlRunOnceComplete @ 0x18002DA70 (RtlRunOnceComplete.c)
 *     RtlpRunOnceWaitForInit @ 0x1800E5590 (RtlpRunOnceWaitForInit.c)
 */

ULONG __cdecl RtlRandomEx(PULONG Seed)
{
  signed __int64 Value; // rax
  signed __int64 v3; // rcx
  signed __int64 v4; // rcx
  NTSTATUS v5; // eax
  unsigned __int32 v6; // r8d
  __int64 v7; // rax
  __int32 v8; // r8d
  unsigned int i; // edx
  unsigned int v12; // r8d
  char v14; // [rsp+30h] [rbp+8h] BYREF
  int v15; // [rsp+38h] [rbp+10h]

  Value = RtlpRandomExInit.Value;
  v14 = 0;
  if ( ((__int64)RtlpRandomExInit.Ptr & 3) != 2 )
  {
    do
    {
      while ( 1 )
      {
        v3 = Value & 3;
        if ( (Value & 3) == 0 )
          break;
        if ( v3 != 1 )
        {
          if ( v3 != 3 )
            goto LABEL_11;
          v5 = -1073741584;
          goto LABEL_10;
        }
        Value = RtlpRunOnceWaitForInit(Value, &RtlpRandomExInit);
      }
      v4 = Value;
      Value = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlpRandomExInit, 1LL, Value);
    }
    while ( Value != v4 );
    if ( (unsigned int)RtlpInitRandomExVector(&RtlpRandomExInit, 0LL, 0LL) )
    {
      v5 = RtlRunOnceComplete(&RtlpRandomExInit, 0, 0LL);
      if ( v5 >= 0 )
        goto LABEL_11;
      v14 = 1;
      goto LABEL_10;
    }
    v5 = RtlRunOnceComplete(&RtlpRandomExInit, 4u, 0LL);
    if ( v5 < 0 )
    {
      v14 = 2;
LABEL_10:
      RtlReportCriticalFailure((unsigned int)v5, &v14, 1LL);
    }
  }
LABEL_11:
  v6 = (2147483629 * (unsigned __int64)*Seed + 2147483587) % 0x7FFFFFFF;
  v7 = RtlpRandomExAuxVarY & 0x7F;
  *Seed = v6;
  v8 = _InterlockedExchange(&RtlpRandomExConstantVector[v7], v6);
  v15 = 0;
  if ( MEMORY[0x7FFE0290] )
  {
    for ( i = 0; i < 0xA; ++i )
    {
      __asm { rdrand  eax }
      v15 = _EAX;
      if ( _CF )
        goto LABEL_17;
    }
  }
  _EAX = 0;
LABEL_17:
  v12 = _EAX ^ v8;
  _InterlockedAdd(&RtlpRandomExAuxVarY, v12);
  return v12;
}
