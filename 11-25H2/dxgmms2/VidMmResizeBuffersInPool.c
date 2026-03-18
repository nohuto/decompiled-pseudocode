/*
 * XREFs of VidMmResizeBuffersInPool @ 0x140097B50
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     RemoveDmaBufferFromPool @ 0x1400AF894 (RemoveDmaBufferFromPool.c)
 *     AddDmaBufferToPool @ 0x1400B05D8 (AddDmaBufferToPool.c)
 */

__int64 __fastcall VidMmResizeBuffersInPool(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int v8; // ebp
  unsigned int i; // esi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rcx

  v8 = -1073741811;
  if ( a2 < *(_DWORD *)(a1 + 40) || a3 < *(_DWORD *)(a1 + 52) || a4 < *(_DWORD *)(a1 + 64) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2609;
    DxgkLogInternalTriageEvent(v14, 0x40000LL);
  }
  else
  {
    if ( a2 == *(_DWORD *)(a1 + 36) && a3 == *(_DWORD *)(a1 + 48) && a4 == *(_DWORD *)(a1 + 60) )
      return 0LL;
    for ( i = 0; i < 2; ++i )
    {
      v8 = AddDmaBufferToPool(a1, a2, a3, a4);
      if ( v8 < 0 )
      {
        if ( i )
        {
          v11 = i;
          do
          {
            RemoveDmaBufferFromPool(a1, *(_QWORD *)(a1 + 80));
            --v11;
          }
          while ( v11 );
        }
        return (unsigned int)v8;
      }
    }
    if ( v8 >= 0 )
    {
      v12 = *(_QWORD *)(a1 + 88);
      *(_DWORD *)(a1 + 36) = a2;
      *(_DWORD *)(a1 + 48) = a3;
      *(_DWORD *)(a1 + 60) = a4;
      do
      {
        while ( 1 )
        {
          v13 = v12;
          v12 = *(_QWORD *)(v12 + 8);
          if ( *(_DWORD *)(v13 + 36) == *(_DWORD *)(a1 + 36)
            && *(_DWORD *)(v13 + 40) == *(_DWORD *)(a1 + 48)
            && *(_DWORD *)(v13 + 44) == *(_DWORD *)(a1 + 60) )
          {
            break;
          }
          if ( *(_BYTE *)(v13 + 24) )
            *(_BYTE *)(v13 + 25) = 1;
          else
            RemoveDmaBufferFromPool(a1, v13);
        }
      }
      while ( *(_BYTE *)(v13 + 25) );
    }
  }
  return (unsigned int)v8;
}
