/*
 * XREFs of RtlRandomEx @ 0x180003420
 * Callers:
 *     RtlHpGlobalsInitialize @ 0x1800028B4 (RtlHpGlobalsInitialize.c)
 *     RtlpCreateIFEOKeyFilterKey @ 0x1800B441C (RtlpCreateIFEOKeyFilterKey.c)
 *     RtlHeapTrkInitialize @ 0x180116430 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlpRunOnceWaitForInit @ 0x180002444 (RtlpRunOnceWaitForInit.c)
 *     RtlpInitRandomExVector @ 0x18000358C (RtlpInitRandomExVector.c)
 *     RtlReportCriticalFailure @ 0x1800041B0 (RtlReportCriticalFailure.c)
 *     RtlRunOnceComplete @ 0x180004290 (RtlRunOnceComplete.c)
 */

__int64 __fastcall RtlRandomEx(__int32 *a1)
{
  signed __int64 v1; // rax
  signed __int64 v3; // rcx
  signed __int64 v4; // rcx
  int v5; // eax
  __int32 v6; // r8d
  __int64 v7; // rax
  __int32 v8; // r8d
  unsigned int i; // edx
  unsigned int v12; // r8d
  char v14; // [rsp+30h] [rbp+8h] BYREF
  int v15; // [rsp+38h] [rbp+10h]

  v1 = RtlpRandomExInit;
  v14 = 0;
  if ( (RtlpRandomExInit & 3) != 2 )
  {
    do
    {
      while ( 1 )
      {
        v3 = v1 & 3;
        if ( (v1 & 3) == 0 )
          break;
        if ( v3 != 1 )
        {
          if ( v3 != 3 )
            goto LABEL_11;
          v5 = -1073741584;
          goto LABEL_10;
        }
        v1 = RtlpRunOnceWaitForInit(v1, &RtlpRandomExInit);
      }
      v4 = v1;
      v1 = _InterlockedCompareExchange64(&RtlpRandomExInit, 1LL, v1);
    }
    while ( v1 != v4 );
    if ( (unsigned int)RtlpInitRandomExVector(&RtlpRandomExInit, 0LL, 0LL) )
    {
      v5 = RtlRunOnceComplete(&RtlpRandomExInit, 0LL);
      if ( v5 >= 0 )
        goto LABEL_11;
      v14 = 1;
      goto LABEL_10;
    }
    v5 = RtlRunOnceComplete(&RtlpRandomExInit, 4LL);
    if ( v5 < 0 )
    {
      v14 = 2;
LABEL_10:
      RtlReportCriticalFailure((unsigned int)v5, &v14, 1LL);
    }
  }
LABEL_11:
  v6 = (2147483629 * (unsigned __int64)(unsigned int)*a1 + 2147483587) % 0x7FFFFFFF;
  v7 = RtlpRandomExAuxVarY & 0x7F;
  *a1 = v6;
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
