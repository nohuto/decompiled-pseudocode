/*
 * XREFs of MiDecommitHandleValidPte @ 0x140381970
 * Callers:
 *     MiDeleteEmptyPageTableWorker @ 0x140475828 (MiDeleteEmptyPageTableWorker.c)
 *     MiStoreDiscardPoisonedPage @ 0x1406806F8 (MiStoreDiscardPoisonedPage.c)
 * Callees:
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiDecommitAddToList @ 0x140382190 (MiDecommitAddToList.c)
 *     MiReturnPagedPoolLockCharge @ 0x140383A0C (MiReturnPagedPoolLockCharge.c)
 *     MiDecommitLargePte @ 0x1404C9F9C (MiDecommitLargePte.c)
 */

__int64 __fastcall MiDecommitHandleValidPte(__int64 a1, __int64 *a2)
{
  char v2; // bl
  int v4; // esi
  __int64 *ProcessorFlushList; // rax
  __int64 v7; // r8
  BOOL v8; // ecx
  __int64 v9; // rcx

  v2 = (char)a2;
  if ( (*(_DWORD *)(a1 + 156) & 8) != 0 )
    return MiReturnPagedPoolLockCharge(a1, a2);
  v4 = 0;
  if ( !*(_QWORD *)(a1 + 16) )
  {
    ProcessorFlushList = MiGetProcessorFlushList();
    v7 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 16) = ProcessorFlushList;
    a2 = ProcessorFlushList;
    *((_DWORD *)ProcessorFlushList + 4) = 0;
    *((_DWORD *)ProcessorFlushList + 5) = 1;
    *ProcessorFlushList = v7;
    *((_BYTE *)ProcessorFlushList + 24) = (*(_DWORD *)(v7 + 184) & 0x800) != 0;
    if ( (*(_DWORD *)(v7 + 184) & 0xF) != 0
      || (struct _LIST_ENTRY **)v7 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
    {
      v8 = (*(_DWORD *)(v7 + 184) & 0xF) == 0;
    }
    else
    {
      *((_DWORD *)ProcessorFlushList + 4) |= 9u;
      v8 = 0;
    }
    *((_DWORD *)ProcessorFlushList + 4) &= 0xFFFFFFDB;
    *((_DWORD *)ProcessorFlushList + 2) = v8;
    *(_WORD *)((char *)ProcessorFlushList + 25) = 0;
    *((_DWORD *)ProcessorFlushList + 7) = 0;
    ProcessorFlushList[4] = 0LL;
    ProcessorFlushList[5] = 0LL;
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
  return MiDecommitLargePte(a1, a2);
}
