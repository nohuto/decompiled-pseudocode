/*
 * XREFs of MiDeleteSystemPageTable @ 0x1404811C0
 * Callers:
 *     <none>
 * Callees:
 *     MiEvictPageTableLock @ 0x14020EE7C (MiEvictPageTableLock.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiDecreaseUsedPtes @ 0x14021C060 (MiDecreaseUsedPtes.c)
 *     MiInsertLargeTbFlushEntry @ 0x14021C25C (MiInsertLargeTbFlushEntry.c)
 *     MiAddSystemPageTableToList @ 0x14021C950 (MiAddSystemPageTableToList.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiReplicatePteChange @ 0x1404F4EFC (MiReplicatePteChange.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteSystemPageTable(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rbx
  __int64 v6; // r14
  __int64 v8; // r12
  ULONG_PTR BugCheckParameter4; // rbp
  __int64 v10; // rsi
  __int64 *ProcessorFlushList; // rax
  __int64 v12; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rcx

  v4 = *(_QWORD *)a2;
  v6 = *(_QWORD *)(a1 + 184);
  v8 = *(_QWORD *)(a1 + 32);
  BugCheckParameter4 = (int)a3;
  if ( (*(_QWORD *)a2 & 1) != 0 )
  {
    v10 = *(_QWORD *)(v6 + 32);
    if ( !v10 )
    {
      ProcessorFlushList = MiGetProcessorFlushList();
      *(_QWORD *)(v6 + 32) = ProcessorFlushList;
      v10 = (__int64)ProcessorFlushList;
      MiInitializeTbFlushList((__int64)ProcessorFlushList, v8, *((_DWORD *)ProcessorFlushList + 3), 8, 1);
    }
    if ( (v4 & 0x80u) != 0LL )
    {
      MiInsertLargeTbFlushEntry(v10, BugCheckParameter4, a2);
      *(_QWORD *)a2 = CLFS_LSN_NULL_EXT;
      return 0LL;
    }
    if ( !(_DWORD)BugCheckParameter4 )
    {
      *(_QWORD *)a2 = CLFS_LSN_NULL_EXT;
LABEL_9:
      MiAddSystemPageTableToList(a1, 48 * ((v4 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, a3, a4);
      MiInsertTbFlushEntry(v10, (__int64)(a2 << 25) >> 16, 1LL, 0);
      return 0LL;
    }
    if ( (unsigned int)MiEvictPageTableLock(
                         *(_QWORD *)(a1 + 32),
                         a2,
                         (unsigned int)BugCheckParameter4,
                         CLFS_LSN_NULL_EXT) )
    {
      if ( a2 < 0xFFFFF6FB7DBED000uLL || a2 > 0xFFFFF6FB7DBEDFFFuLL )
        MiDecreaseUsedPtes(v12, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL);
      goto LABEL_9;
    }
  }
  else if ( v4 == MiMakeDemandZeroPte(16) )
  {
    *v14 = CLFS_LSN_NULL_EXT;
    if ( a2 < 0xFFFFF6FB7DBED000uLL || a2 > 0xFFFFF6FB7DBEDFFFuLL )
      MiDecreaseUsedPtes(v15, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL);
    else
      MiReplicatePteChange(a2, 0LL);
  }
  else if ( v4 )
  {
    KeBugCheckEx(0x1Au, 0x1440uLL, a2, v4, BugCheckParameter4);
  }
  return 0LL;
}
