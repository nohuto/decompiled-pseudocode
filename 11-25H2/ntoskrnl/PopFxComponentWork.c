/*
 * XREFs of PopFxComponentWork @ 0x14045A530
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     PopFxIdleWorker @ 0x14034964C (PopFxIdleWorker.c)
 */

LONG __fastcall PopFxComponentWork(__int64 a1)
{
  __int64 v2; // rcx
  LONG result; // eax
  _OWORD v4[3]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v5; // [rsp+50h] [rbp-18h]
  int v6; // [rsp+58h] [rbp-10h]

  memset(v4, 0, sizeof(v4));
  v5 = 0LL;
  v6 = 0;
  do
    PopFxIdleWorker(*(_QWORD **)(a1 + 80), *(_DWORD *)(a1 + 16), v4);
  while ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 56), 0xFFFFFFFF) != 1 );
  v2 = *(_QWORD *)(a1 + 80);
  _InterlockedDecrement((volatile signed __int32 *)(v2 + 288));
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 244), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(v2 + 248), 0, 0);
  return result;
}
