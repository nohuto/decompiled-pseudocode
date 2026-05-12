/*
 * XREFs of RaidInitializeCryptoEngine @ 0x1400457B4
 * Callers:
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140056648 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     RaidConvertCryptoCapabilitiesToInternal @ 0x14006A5E0 (RaidConvertCryptoCapabilitiesToInternal.c)
 *     memmove @ 0x140143780 (memmove.c)
 */

__int64 __fastcall RaidInitializeCryptoEngine(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v2; // edi
  __int64 v4; // rsi
  void *v6; // rcx
  __int64 v7; // r14
  __int64 v8; // r14
  void *Pool; // rax
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rax
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  unsigned int i; // ebx
  unsigned __int64 v17; // rcx

  v2 = 0;
  v4 = 0LL;
  if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
  {
    v2 = RaidConvertCryptoCapabilitiesToInternal(a1 + 5616, a2, 0LL);
    if ( v2 )
      goto LABEL_10;
  }
  else
  {
    v6 = *(void **)(a1 + 5624);
    v7 = a2[5];
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0x72436152u);
      *(_QWORD *)(a1 + 5624) = 0LL;
    }
    v8 = 28 * v7;
    Pool = (void *)RaidAllocatePool(64LL, v8 + 12, 1917018450LL, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 5624) = Pool;
    if ( !Pool )
      goto LABEL_9;
    memmove(Pool, a2, v8 + 12);
  }
  v4 = a1 + 5632;
  *(_DWORD *)(a1 + 5632) = a2[4];
  v10 = *(_QWORD *)(a1 + 8);
  v11 = (unsigned __int64)*(unsigned int *)(a1 + 5632) << 6;
  *(_DWORD *)(a1 + 5648) = 0;
  *(_BYTE *)(a1 + 5636) = 0;
  v12 = RaidAllocatePool(64LL, v11, 1917018450LL, v10);
  *(_QWORD *)(a1 + 5640) = v12;
  if ( !v12 )
  {
LABEL_9:
    v2 = -1056964605;
LABEL_10:
    if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
    {
      v13 = *(void **)(a1 + 5616);
      if ( v13 )
      {
        ExFreePoolWithTag(v13, 0x72436152u);
        *(_QWORD *)(a1 + 5616) = 0LL;
      }
    }
    v14 = *(void **)(a1 + 5624);
    if ( v14 )
    {
      ExFreePoolWithTag(v14, 0x72436152u);
      *(_QWORD *)(a1 + 5624) = 0LL;
    }
    v15 = *(void **)(v4 + 8);
    if ( v15 )
      ExFreePoolWithTag(v15, 0x72436152u);
    return v2;
  }
  for ( i = 0; i < *(_DWORD *)v4; ++i )
  {
    v17 = *(_QWORD *)(v4 + 8) + ((unsigned __int64)i << 6);
    *(_DWORD *)(v17 + 44) = 0;
    *(_DWORD *)v17 = i;
    InitializeSListHead((PSLIST_HEADER)(v17 + 48));
  }
  return v2;
}
