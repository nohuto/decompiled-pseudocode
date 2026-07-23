/*
 * XREFs of AlpcpAdjustCompletionListConcurrencyCount @ 0x140A070E0
 * Callers:
 *     NtAlpcSetInformation @ 0x140A06870 (NtAlpcSetInformation.c)
 * Callees:
 *     AlpcpQueueIoCompletionPort @ 0x1403ABBA0 (AlpcpQueueIoCompletionPort.c)
 */

void __fastcall AlpcpAdjustCompletionListConcurrencyCount(_QWORD *a1, unsigned __int32 a2)
{
  __int64 v2; // rsi
  unsigned __int32 v5; // edi
  unsigned __int32 v6; // ecx
  __int64 v7; // r14

  v2 = a1[45];
  _m_prefetchw((const void *)(v2 + 144));
  v5 = *(_DWORD *)(v2 + 144);
  while ( v5 != a2 )
  {
    while ( 1 )
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 144), a2, v5);
      if ( v5 == v6 )
        break;
      if ( v5 >= a2 )
        return;
    }
    if ( !a1[4] )
      break;
    if ( v6 < a2 )
    {
      v7 = a2 - v6;
      do
      {
        AlpcpQueueIoCompletionPort(a1, 1, 0, 0, 0);
        --v7;
      }
      while ( v7 );
    }
  }
}
