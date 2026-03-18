/*
 * XREFs of MiFlushFileOnlyMdl @ 0x1404C7B90
 * Callers:
 *     MiFlushSection @ 0x14023A550 (MiFlushSection.c)
 *     MiGatherMappedPages @ 0x140369B20 (MiGatherMappedPages.c)
 * Callees:
 *     MiTransferFileExtent @ 0x1404BEE98 (MiTransferFileExtent.c)
 *     MiPersistMdl @ 0x1404C7C68 (MiPersistMdl.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiFlushFileOnlyMdl(
        __int64 a1,
        struct _MDL *a2,
        ULONG_PTR a3,
        __int64 a4,
        ULONG_PTR BugCheckParameter2,
        __int64 a6)
{
  ULONG ByteOffset; // edi
  int StartVa; // ebx
  __int64 ByteCount; // rsi

  if ( (*(_BYTE *)(*(_QWORD *)BugCheckParameter2 + 62LL) & 0xC) == 8 )
  {
    MiTransferFileExtent(a2, BugCheckParameter2, a3, 1, a6);
    if ( *(_DWORD *)a6 || *(_QWORD *)(a6 + 8) != a2->ByteCount )
      KeBugCheckEx(0x1Au, 0x1484uLL, BugCheckParameter2, a3, (ULONG_PTR)a2);
  }
  else
  {
    ByteOffset = a2->ByteOffset;
    StartVa = (int)a2->StartVa;
    ByteCount = a2->ByteCount;
    *(_QWORD *)(a6 + 8) = 0LL;
    *(_DWORD *)a6 = 0;
    MiPersistMdl(a2);
    *(_DWORD *)a6 = 0;
    *(_QWORD *)(a6 + 8) = (ByteCount + 4095 + (((_WORD)ByteOffset + (_WORD)StartVa) & 0xFFF)) & 0xFFFFFFFFFFFFF000uLL;
  }
  return 0LL;
}
