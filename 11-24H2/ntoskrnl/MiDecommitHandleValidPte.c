/*
 * XREFs of MiDecommitHandleValidPte @ 0x140297D80
 * Callers:
 *     MiDeleteEmptyPageTableWorker @ 0x1402005C8 (MiDeleteEmptyPageTableWorker.c)
 *     MiStoreDiscardPoisonedPage @ 0x14068D0B8 (MiStoreDiscardPoisonedPage.c)
 * Callees:
 *     MiReturnPagedPoolLockCharge @ 0x140296AA0 (MiReturnPagedPoolLockCharge.c)
 *     MiDecommitAddToList @ 0x1402985A0 (MiDecommitAddToList.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiDecommitLargePte @ 0x1404C1658 (MiDecommitLargePte.c)
 */

__int64 __fastcall MiDecommitHandleValidPte(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  char v3; // bl
  int v5; // esi
  __int64 ProcessorFlushList; // rax
  __int64 v8; // r8
  BOOL v9; // ecx
  __int64 v10; // rcx

  v3 = a2;
  if ( (*(_DWORD *)(a1 + 156) & 8) != 0 )
    return MiReturnPagedPoolLockCharge(a1, a2);
  v5 = 0;
  if ( !*(_QWORD *)(a1 + 16) )
  {
    ProcessorFlushList = MiGetProcessorFlushList(a1, a2, a3);
    v8 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 16) = ProcessorFlushList;
    *(_DWORD *)(ProcessorFlushList + 16) = 0;
    *(_DWORD *)(ProcessorFlushList + 20) = 1;
    *(_QWORD *)ProcessorFlushList = v8;
    *(_BYTE *)(ProcessorFlushList + 24) = (*(_DWORD *)(v8 + 184) & 0x800) != 0;
    if ( (*(_DWORD *)(v8 + 184) & 0xF) != 0
      || (struct _LIST_ENTRY **)v8 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
    {
      v9 = (*(_DWORD *)(v8 + 184) & 0xF) == 0;
    }
    else
    {
      *(_DWORD *)(ProcessorFlushList + 16) |= 9u;
      v9 = 0;
    }
    *(_DWORD *)(ProcessorFlushList + 16) &= 0xFFFFFFDB;
    *(_DWORD *)(ProcessorFlushList + 8) = v9;
    *(_WORD *)(ProcessorFlushList + 25) = 0;
    *(_DWORD *)(ProcessorFlushList + 28) = 0;
    *(_QWORD *)(ProcessorFlushList + 32) = 0LL;
    *(_QWORD *)(ProcessorFlushList + 40) = 0LL;
  }
  if ( (v3 >= 0 || !*(_DWORD *)(a1 + 96)) && (*(_QWORD *)(a1 + 192) == 1LL || *(_DWORD *)(a1 + 96)) )
  {
    LOBYTE(v5) = *(_DWORD *)(a1 + 96) != 0;
    ++v5;
  }
  if ( *(_DWORD *)(a1 + 136) )
  {
    if ( v5 == 2 )
      return MiDecommitAddToList(a1, *(_QWORD *)(a1 + 56));
    v10 = *(_QWORD *)(a1 + 208);
    if ( !v10 )
    {
      v10 = *(_QWORD *)(a1 + 88);
      *(_QWORD *)(a1 + 208) = v10;
    }
    *(_QWORD *)(a1 + 216) = (*(_QWORD *)(a1 + 88) + 8LL * *(_QWORD *)(a1 + 192) - v10) >> 3;
  }
  if ( v5 )
    return MiDecommitAddToList(a1, *(_QWORD *)(a1 + 56));
  return MiDecommitLargePte(a1);
}
