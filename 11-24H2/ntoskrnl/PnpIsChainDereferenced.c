/*
 * XREFs of PnpIsChainDereferenced @ 0x14049CB60
 * Callers:
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x1407380C8 (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1409BBF7C (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     PnpUpdateExtensionFlags @ 0x1404AA02C (PnpUpdateExtensionFlags.c)
 *     PnpChainDereferenceComplete @ 0x140A83D94 (PnpChainDereferenceComplete.c)
 */

_BOOL8 __fastcall PnpIsChainDereferenced(__int64 *a1, int a2, int a3, unsigned int a4, _QWORD *a5)
{
  __int64 i; // rsi
  BOOL v9; // ebx
  int v10; // edi
  __int64 v11; // r8
  __int64 *v12; // r15
  int v13; // ecx
  int v14; // edx
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 *v18; // rdx
  __int64 v19; // rdx
  int v20; // r10d

  if ( a5 )
    *a5 = 0LL;
  i = 0LL;
  v9 = 0;
  v10 = 0;
  LOBYTE(v11) = KeAcquireQueuedSpinLock(0xAuLL);
  if ( a2 > 0 )
  {
    v12 = a1;
    do
    {
      i = 0LL;
      v13 = 0;
      v14 = 0;
      v15 = v12;
      do
      {
        if ( v13 )
          break;
        for ( i = *v15; i; i = *(_QWORD *)(i + 24) )
        {
          v13 = *(_DWORD *)(i + 4);
          if ( v13 )
            break;
        }
        ++v14;
        ++v15;
      }
      while ( !v14 );
      v16 = *v12;
      v9 = v13 != 0;
      while ( v16 )
      {
        *(_DWORD *)(*(_QWORD *)(v16 + 312) + 32LL) |= 4u;
        v16 = *(_QWORD *)(v16 + 24);
      }
      if ( a3 )
      {
        if ( v13 )
          goto LABEL_17;
      }
      else if ( !v13 )
      {
        KeReleaseQueuedSpinLock(0xAuLL, v11);
        PnpChainDereferenceComplete(*v12, a4);
        LOBYTE(v11) = KeAcquireQueuedSpinLock(0xAuLL);
      }
      ++v10;
      ++v12;
    }
    while ( v10 < a2 );
  }
  if ( a3 )
  {
LABEL_17:
    if ( v9 )
    {
      if ( a5 )
        *a5 = i;
      if ( v10 >= 0 )
      {
        v18 = &a1[v10];
        do
        {
          PnpUpdateExtensionFlags(v18, v18, v11, 0LL);
          v18 = (__int64 *)(v19 - 8);
          v10 -= v20;
        }
        while ( v10 >= 0 );
      }
    }
  }
  KeReleaseQueuedSpinLock(0xAuLL, v11);
  if ( !a3 )
    return 1;
  return v9;
}
