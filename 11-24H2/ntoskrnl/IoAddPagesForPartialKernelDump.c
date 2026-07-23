/*
 * XREFs of IoAddPagesForPartialKernelDump @ 0x14059CE74
 * Callers:
 *     IoWriteCrashDump @ 0x14058F7F8 (IoWriteCrashDump.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140244560 (MmIsAddressValidEx.c)
 *     IoSaveBugCheckProgress @ 0x14058EF30 (IoSaveBugCheckProgress.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x140590C18 (IopDumpCallRemovePagesCallbacks.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x14059D2EC (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     IopAddMiniDumpPagesToPartialKernelDump @ 0x14059D638 (IopAddMiniDumpPagesToPartialKernelDump.c)
 *     IopCompactRemovePagesArray @ 0x14059D974 (IopCompactRemovePagesArray.c)
 *     ExpHeapDumpEnumLargeAllocs @ 0x14065881C (ExpHeapDumpEnumLargeAllocs.c)
 */

__int64 __fastcall IoAddPagesForPartialKernelDump(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  unsigned int i; // ebx
  __int64 j; // rdi
  int v13; // eax
  int v14; // r9d
  unsigned int v15; // ebx
  unsigned __int64 v16; // rcx

  AvailablePagesForPartialDump = *(_QWORD *)(CrashdmpDumpBlock + 1424);
  IopDumpCallRemovePagesCallbacks(a1);
  IoSaveBugCheckProgress(34);
  if ( MmIsAddressValidEx((__int64)IopRemoveLargeAllocsFromPartialDump) )
  {
    for ( i = 0; i < dword_140E6BE10; ++i )
    {
      for ( j = 0LL; (unsigned int)j <= 1; j = (unsigned int)(j + 1) )
      {
        if ( *((_QWORD *)&unk_140E6BE40 + 1048 * i + j) && (int)ExpHeapDumpEnumLargeAllocs() < 0 )
          goto LABEL_9;
      }
    }
  }
LABEL_9:
  IoSaveBugCheckProgress(40);
  IopCompactRemovePagesArray();
  v13 = IopAddMiniDumpPagesToPartialKernelDump(a1, a2, a3, a4, a5, a6, a7);
  v15 = v13;
  if ( v13 >= 0 )
  {
    v13 = IopAddLiveDumpPagesToPartialKernelDump(a1, a2, a3, v14, a5);
    v15 = v13;
  }
  if ( v13 == -1073741789 )
  {
    *(_DWORD *)(CrashdmpDumpBlock + 1368) |= 0x10u;
    v15 = 0;
  }
  v16 = *(_QWORD *)(CrashdmpDumpBlock + 1424);
  if ( v16 > AvailablePagesForPartialDump )
    *(_QWORD *)(*(_QWORD *)(CrashdmpDumpBlock + 8) + 40LL) = v16 - AvailablePagesForPartialDump;
  IoSaveBugCheckProgress(42);
  return v15;
}
