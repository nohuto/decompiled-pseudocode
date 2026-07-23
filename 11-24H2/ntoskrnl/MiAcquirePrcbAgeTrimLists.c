/*
 * XREFs of MiAcquirePrcbAgeTrimLists @ 0x140303A64
 * Callers:
 *     MiTrimPteWorker @ 0x140212FB0 (MiTrimPteWorker.c)
 *     MiTrimPte @ 0x1402130B0 (MiTrimPte.c)
 *     MiResetAccessBitPteWorker @ 0x1402941D8 (MiResetAccessBitPteWorker.c)
 *     MiResetAccessBitPte @ 0x140294320 (MiResetAccessBitPte.c)
 *     MiAgePte @ 0x140303CD0 (MiAgePte.c)
 *     MiAgePteWorker @ 0x1403040A0 (MiAgePteWorker.c)
 *     MiUpdateOldPte @ 0x140438350 (MiUpdateOldPte.c)
 *     MiUpdateOldPteWorker @ 0x1404385C0 (MiUpdateOldPteWorker.c)
 *     MiSimpleAgePte @ 0x14049EAD0 (MiSimpleAgePte.c)
 * Callees:
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 */

unsigned __int64 __fastcall MiAcquirePrcbAgeTrimLists(__int64 a1, __int64 **a2)
{
  __int64 *ProcessorFlushList; // r9
  BOOL v5; // eax
  unsigned __int64 result; // rax
  bool v7; // zf

  ProcessorFlushList = MiGetProcessorFlushList();
  *((_DWORD *)ProcessorFlushList + 4) = 0;
  *((_DWORD *)ProcessorFlushList + 5) = 2;
  *ProcessorFlushList = a1;
  *((_BYTE *)ProcessorFlushList + 24) = (*(_DWORD *)(a1 + 184) & 0x800) != 0;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0
    || (struct _LIST_ENTRY **)a1 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
  {
    v5 = (*(_DWORD *)(a1 + 184) & 0xF) == 0;
  }
  else
  {
    *((_DWORD *)ProcessorFlushList + 4) |= 9u;
    v5 = 0;
  }
  *((_DWORD *)ProcessorFlushList + 4) &= 0xFFFFFFDB;
  *((_DWORD *)ProcessorFlushList + 2) = v5;
  *(_WORD *)((char *)ProcessorFlushList + 25) = 0;
  *((_DWORD *)ProcessorFlushList + 7) = 0;
  ProcessorFlushList[4] = 0LL;
  ProcessorFlushList[5] = 0LL;
  *a2 = ProcessorFlushList;
  *((_DWORD *)ProcessorFlushList + 1038) = 2;
  *((_DWORD *)ProcessorFlushList + 1039) = 1;
  ProcessorFlushList[517] = a1;
  *((_BYTE *)ProcessorFlushList + 4160) = (*(_DWORD *)(a1 + 184) & 0x800) != 0;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0
    || (struct _LIST_ENTRY **)a1 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
  {
    result = (*(_DWORD *)(a1 + 184) & 0xF) == 0;
  }
  else
  {
    *((_DWORD *)ProcessorFlushList + 1038) |= 9u;
    result = 0LL;
  }
  *((_DWORD *)ProcessorFlushList + 1038) &= 0xFFFFFFDB;
  *((_DWORD *)ProcessorFlushList + 1036) = result;
  *(_WORD *)((char *)ProcessorFlushList + 4161) = 0;
  *((_DWORD *)ProcessorFlushList + 1041) = 0;
  ProcessorFlushList[521] = 0LL;
  ProcessorFlushList[522] = 0LL;
  v7 = a2[2] == (__int64 *)1;
  a2[1] = ProcessorFlushList + 517;
  if ( v7 )
  {
    result = (unsigned __int64)(ProcessorFlushList + 1034);
    a2[2] = ProcessorFlushList + 1034;
  }
  return result;
}
