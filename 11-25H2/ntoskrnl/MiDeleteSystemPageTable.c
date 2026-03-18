/*
 * XREFs of MiDeleteSystemPageTable @ 0x14038A330
 * Callers:
 *     <none>
 * Callees:
 *     MiAddSystemPageTableToList @ 0x1402270A8 (MiAddSystemPageTableToList.c)
 *     MiEvictPageTableLock @ 0x1402FB4A4 (MiEvictPageTableLock.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     MiInsertLargeTbFlushEntry @ 0x14038BC74 (MiInsertLargeTbFlushEntry.c)
 *     MiDecreaseUsedPtes @ 0x14038BCF0 (MiDecreaseUsedPtes.c)
 *     MiReplicatePteChange @ 0x1404F4ED8 (MiReplicatePteChange.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteSystemPageTable(__int64 a1, unsigned __int64 a2, int a3)
{
  ULONG_PTR v3; // rbx
  __int64 v5; // r14
  __int64 v7; // r12
  ULONG_PTR BugCheckParameter4; // rbp
  __int64 v9; // rsi
  __int64 *ProcessorFlushList; // rax
  __int64 v11; // rcx
  _QWORD *v13; // rdx
  __int64 v14; // rcx

  v3 = *(_QWORD *)a2;
  v5 = *(_QWORD *)(a1 + 184);
  v7 = *(_QWORD *)(a1 + 32);
  BugCheckParameter4 = a3;
  if ( (*(_QWORD *)a2 & 1) != 0 )
  {
    v9 = *(_QWORD *)(v5 + 32);
    if ( !v9 )
    {
      ProcessorFlushList = MiGetProcessorFlushList();
      *(_QWORD *)(v5 + 32) = ProcessorFlushList;
      v9 = (__int64)ProcessorFlushList;
      MiInitializeTbFlushList((__int64)ProcessorFlushList, v7, *((_DWORD *)ProcessorFlushList + 3), 8, 1);
    }
    if ( (v3 & 0x80u) != 0LL )
    {
      MiInsertLargeTbFlushEntry(v9, (unsigned int)BugCheckParameter4, a2);
      *(_QWORD *)a2 = CLFS_LSN_NULL_EXT;
      return 0LL;
    }
    if ( !(_DWORD)BugCheckParameter4 )
    {
      *(_QWORD *)a2 = CLFS_LSN_NULL_EXT;
LABEL_9:
      MiAddSystemPageTableToList(a1, 48 * ((v3 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
      MiInsertTbFlushEntry(v9, (__int64)(a2 << 25) >> 16, 1LL, 0);
      return 0LL;
    }
    if ( (unsigned int)MiEvictPageTableLock(*(_QWORD *)(a1 + 32), a2, BugCheckParameter4, CLFS_LSN_NULL_EXT) )
    {
      if ( a2 < 0xFFFFF6FB7DBED000uLL || a2 > 0xFFFFF6FB7DBEDFFFuLL )
        MiDecreaseUsedPtes(v11, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL);
      goto LABEL_9;
    }
  }
  else if ( v3 == MiMakeDemandZeroPte(16) )
  {
    *v13 = CLFS_LSN_NULL_EXT;
    if ( a2 < 0xFFFFF6FB7DBED000uLL || a2 > 0xFFFFF6FB7DBEDFFFuLL )
      MiDecreaseUsedPtes(v14, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL);
    else
      MiReplicatePteChange(a2, 0LL);
  }
  else if ( v3 )
  {
    KeBugCheckEx(0x1Au, 0x1440uLL, a2, v3, BugCheckParameter4);
  }
  return 0LL;
}
