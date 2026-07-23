/*
 * XREFs of PopFxComponentPerfWork @ 0x1405CE0C0
 * Callers:
 *     <none>
 * Callees:
 *     PopFxDereferenceDevice @ 0x1403A7F58 (PopFxDereferenceDevice.c)
 *     PopFxCompleteComponentPerfState @ 0x1404B149C (PopFxCompleteComponentPerfState.c)
 */

LONG __fastcall PopFxComponentPerfWork(volatile signed __int32 *a1)
{
  __int64 v1; // rdi
  unsigned int v3; // esi
  __int64 v4; // rbp
  signed __int32 v5; // eax
  signed __int32 v6; // ett

  v1 = *(_QWORD *)a1;
  v3 = *(_DWORD *)(*(_QWORD *)a1 + 16LL);
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  do
  {
    _m_prefetchw((const void *)(a1 + 10));
    v5 = *((_DWORD *)a1 + 10);
    do
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange(a1 + 10, v5, v5);
    }
    while ( v6 != v5 );
    PopFxCompleteComponentPerfState(v4, v3, (__int64)a1, (v5 & 0x40000000) != 0);
  }
  while ( _InterlockedExchangeAdd(a1 + 30, 0xFFFFFFFF) != 1 );
  return PopFxDereferenceDevice(*(_QWORD *)(v1 + 80), 4);
}
