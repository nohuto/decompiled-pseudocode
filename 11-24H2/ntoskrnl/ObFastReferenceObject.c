/*
 * XREFs of ObFastReferenceObject @ 0x1403FD230
 * Callers:
 *     IopQueueIrpToFileObject @ 0x1404DC180 (IopQueueIrpToFileObject.c)
 *     PspReferenceSystemDll @ 0x1409222A8 (PspReferenceSystemDll.c)
 * Callees:
 *     ObpTraceObjectReferenceIfActive @ 0x14031F930 (ObpTraceObjectReferenceIfActive.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall ObFastReferenceObject(signed __int64 *a1)
{
  signed __int64 v1; // r9
  signed __int64 v2; // rax
  signed __int64 v3; // rbx
  unsigned int v4; // r9d
  ULONG_PTR v5; // rbx
  __int64 v7; // rax
  signed __int64 v8; // rax
  signed __int64 v9; // rtt

  _m_prefetchw(a1);
  v1 = *a1;
  if ( (*a1 & 0xF) != 0 )
  {
    do
    {
      v2 = _InterlockedCompareExchange64(a1, v1 - 1, v1);
      if ( v1 == v2 )
        break;
      v1 = v2;
    }
    while ( (v2 & 0xF) != 0 );
  }
  v3 = v1;
  v4 = v1 & 0xF;
  v5 = v3 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v4 > 1 )
  {
LABEL_5:
    ObpTraceObjectReferenceIfActive(v5 - 48);
    return v5;
  }
  if ( v4 )
  {
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 - 48), 0xFuLL);
    if ( v7 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v5, 0x10uLL, v7 + 15);
    _m_prefetchw(a1);
    v8 = *a1;
    while ( (v8 & 0xF) == 0 && v5 == (v8 & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      v9 = v8;
      v8 = _InterlockedCompareExchange64(a1, v8 + 15, v8);
      if ( v9 == v8 )
        goto LABEL_5;
    }
    _InterlockedAdd64((volatile signed __int64 *)(v5 - 48), 0xFFFFFFFFFFFFFFF1uLL);
    goto LABEL_5;
  }
  return 0LL;
}
