/*
 * XREFs of MiDecommitHandleValidPte @ 0x140288180
 * Callers:
 *     MiDeleteEmptyPageTableWorker @ 0x140473768 (MiDeleteEmptyPageTableWorker.c)
 *     MiStoreDiscardPoisonedPage @ 0x14068BF88 (MiStoreDiscardPoisonedPage.c)
 * Callees:
 *     MiReturnPagedPoolLockCharge @ 0x140286EA0 (MiReturnPagedPoolLockCharge.c)
 *     MiDecommitAddToList @ 0x1402889A0 (MiDecommitAddToList.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiDecommitLargePte @ 0x1404C7F24 (MiDecommitLargePte.c)
 */

__int64 __fastcall MiDecommitHandleValidPte(__int64 a1, unsigned __int64 a2)
{
  char v2; // bl
  int v4; // esi
  __int64 ProcessorFlushList; // rax
  __int64 v7; // r8
  BOOL v8; // ecx
  __int64 v9; // rcx

  v2 = a2;
  if ( (*(_DWORD *)(a1 + 156) & 8) != 0 )
    return MiReturnPagedPoolLockCharge(a1, a2);
  v4 = 0;
  if ( !*(_QWORD *)(a1 + 16) )
  {
    ProcessorFlushList = MiGetProcessorFlushList(a1, a2);
    v7 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 16) = ProcessorFlushList;
    *(_DWORD *)(ProcessorFlushList + 16) = 0;
    *(_DWORD *)(ProcessorFlushList + 20) = 1;
    *(_QWORD *)ProcessorFlushList = v7;
    *(_BYTE *)(ProcessorFlushList + 24) = (*(_DWORD *)(v7 + 184) & 0x800) != 0;
    if ( (*(_DWORD *)(v7 + 184) & 0xF) != 0
      || (struct _LIST_ENTRY **)v7 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
    {
      v8 = (*(_DWORD *)(v7 + 184) & 0xF) == 0;
    }
    else
    {
      *(_DWORD *)(ProcessorFlushList + 16) |= 9u;
      v8 = 0;
    }
    *(_DWORD *)(ProcessorFlushList + 16) &= 0xFFFFFFDB;
    *(_DWORD *)(ProcessorFlushList + 8) = v8;
    *(_WORD *)(ProcessorFlushList + 25) = 0;
    *(_DWORD *)(ProcessorFlushList + 28) = 0;
    *(_QWORD *)(ProcessorFlushList + 32) = 0LL;
    *(_QWORD *)(ProcessorFlushList + 40) = 0LL;
  }
  if ( (v2 >= 0 || !*(_DWORD *)(a1 + 96)) && (*(_QWORD *)(a1 + 192) == 1LL || *(_DWORD *)(a1 + 96)) )
  {
    LOBYTE(v4) = *(_DWORD *)(a1 + 96) != 0;
    ++v4;
  }
  if ( *(_DWORD *)(a1 + 136) )
  {
    if ( v4 == 2 )
      return MiDecommitAddToList(a1, *(_QWORD *)(a1 + 56));
    v9 = *(_QWORD *)(a1 + 208);
    if ( !v9 )
    {
      v9 = *(_QWORD *)(a1 + 88);
      *(_QWORD *)(a1 + 208) = v9;
    }
    *(_QWORD *)(a1 + 216) = (*(_QWORD *)(a1 + 88) + 8LL * *(_QWORD *)(a1 + 192) - v9) >> 3;
  }
  if ( v4 )
    return MiDecommitAddToList(a1, *(_QWORD *)(a1 + 56));
  return MiDecommitLargePte(a1);
}
