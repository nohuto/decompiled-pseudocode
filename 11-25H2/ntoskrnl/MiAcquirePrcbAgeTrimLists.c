/*
 * XREFs of MiAcquirePrcbAgeTrimLists @ 0x14038870C
 * Callers:
 *     MiAgePte @ 0x1402483B0 (MiAgePte.c)
 *     MiResetAccessBitPteWorker @ 0x14037CC0C (MiResetAccessBitPteWorker.c)
 *     MiResetAccessBitPte @ 0x14037CD60 (MiResetAccessBitPte.c)
 *     MiTrimPteWorker @ 0x140387E98 (MiTrimPteWorker.c)
 *     MiTrimPte @ 0x140387FA0 (MiTrimPte.c)
 *     MiUpdateOldPte @ 0x140441BC0 (MiUpdateOldPte.c)
 *     MiUpdateOldPteWorker @ 0x140441E30 (MiUpdateOldPteWorker.c)
 *     MiSimpleAgePte @ 0x1404A3CC0 (MiSimpleAgePte.c)
 * Callees:
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 */

__int64 __fastcall MiAcquirePrcbAgeTrimLists(int a1, _QWORD *a2)
{
  __int64 *ProcessorFlushList; // rax
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // r11
  bool v8; // zf
  __int64 v9; // rcx

  ProcessorFlushList = MiGetProcessorFlushList();
  MiInitializeTbFlushList((_DWORD)ProcessorFlushList, a1, *((_DWORD *)ProcessorFlushList + 3), 0, 2);
  *a2 = v5;
  result = MiInitializeTbFlushList((int)v5 + 4136, a1, *(_DWORD *)(v5 + 4148), 2, 1);
  v8 = a2[2] == 1LL;
  a2[1] = v9;
  if ( v8 )
  {
    result = v7 + 8272;
    a2[2] = v7 + 8272;
  }
  return result;
}
