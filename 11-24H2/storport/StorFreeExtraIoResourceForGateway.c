/*
 * XREFs of StorFreeExtraIoResourceForGateway @ 0x1400A6D40
 * Callers:
 *     StorFreeExtraIoResourceForAdapter @ 0x1400A6CB4 (StorFreeExtraIoResourceForAdapter.c)
 * Callees:
 *     StorFreeContiguousIoResources @ 0x140010B84 (StorFreeContiguousIoResources.c)
 */

void __fastcall StorFreeExtraIoResourceForGateway(__int64 a1, unsigned int a2)
{
  unsigned int v4; // esi
  PSLIST_ENTRY v5; // rax
  __int64 v6; // rcx
  unsigned int i; // esi
  unsigned int v8; // eax
  unsigned int v9; // r14d
  PSLIST_ENTRY v10; // rax
  __int64 v11; // rcx

  if ( *(_DWORD *)(a1 + 128) )
  {
    if ( *(_DWORD *)(a1 + 136) > a2 )
    {
      do
      {
        for ( i = 0; ; ++i )
        {
          v8 = *(_DWORD *)(a1 + 136);
          if ( i >= *(_DWORD *)(a1 + 128) )
            break;
          if ( v8 <= a2 )
            return;
          v9 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 136), 0, 0);
          v10 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(a1 + 64) + 8LL * i));
          if ( !v10 )
            return;
          v11 = *(_QWORD *)(a1 + 48);
          if ( *(_BYTE *)(v11 + 4370) )
            StorFreeContiguousIoResources(v11, (__int64)v10);
          else
            ExFreePoolWithTag(v10, 0x53526152u);
          if ( _InterlockedDecrement((volatile signed __int32 *)(a1 + 136)) >= v9 )
            return;
        }
      }
      while ( v8 > a2 );
    }
  }
  else
  {
    do
    {
      if ( *(_DWORD *)(a1 + 136) <= a2 )
        break;
      v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 136), 0, 0);
      v5 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 64));
      if ( !v5 )
        break;
      v6 = *(_QWORD *)(a1 + 48);
      if ( *(_BYTE *)(v6 + 4370) )
        StorFreeContiguousIoResources(v6, (__int64)v5);
      else
        ExFreePoolWithTag(v5, 0x53526152u);
    }
    while ( _InterlockedDecrement((volatile signed __int32 *)(a1 + 136)) < v4 );
  }
}
