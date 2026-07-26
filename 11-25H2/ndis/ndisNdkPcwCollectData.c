/*
 * XREFs of ndisNdkPcwCollectData @ 0x14016DBF0
 * Callers:
 *     ?ndisNdkPcwProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x14016DBB0 (-ndisNdkPcwProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z.c)
 * Callees:
 *     ndisNdkPcwCollectMiniportStats @ 0x14016DCA0 (ndisNdkPcwCollectMiniportStats.c)
 */

__int64 __fastcall ndisNdkPcwCollectData(__int64 a1)
{
  int v2; // edi
  struct _NDIS_NDK_BLOCK *i; // rbx
  int v4; // eax

  v2 = -1073741823;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&ndisPcwMutex, 0LL);
  for ( i = NdkPcwNdkBlockList; i; i = *(struct _NDIS_NDK_BLOCK **)i )
  {
    v4 = *(_DWORD *)(a1 + 16);
    if ( v4 == -1 )
    {
      v2 = ndisNdkPcwCollectMiniportStats(i, *(_QWORD *)(a1 + 24));
      if ( v2 < 0 )
        break;
    }
    else if ( v4 == *((_DWORD *)i + 5) )
    {
      v2 = ndisNdkPcwCollectMiniportStats(i, *(_QWORD *)(a1 + 24));
      break;
    }
  }
  ExReleasePushLockExclusiveEx(&ndisPcwMutex, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
