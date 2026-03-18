/*
 * XREFs of IopMarkPagesForRunTimeTriageDataBlocks @ 0x1405A1398
 * Callers:
 *     IopAddMiniDumpPagesToPartialKernelDump @ 0x1405A0708 (IopAddMiniDumpPagesToPartialKernelDump.c)
 * Callees:
 *     IopGetMaxValidMemorySize @ 0x14059464C (IopGetMaxValidMemorySize.c)
 *     IopGetMaxValidMemorySizeDown @ 0x1405946C4 (IopGetMaxValidMemorySizeDown.c)
 *     MmAddRangeToCrashDump @ 0x140677990 (MmAddRangeToCrashDump.c)
 */

__int64 __fastcall IopMarkPagesForRunTimeTriageDataBlocks(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 MaxValidMemorySizeDown; // rbx
  int MaxValidMemorySize; // eax
  __int64 result; // rax
  unsigned int v11; // ecx
  char *i; // rbx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx

  MaxValidMemorySizeDown = (unsigned int)IopGetMaxValidMemorySizeDown(*(_QWORD *)(a2 + 248));
  MaxValidMemorySize = IopGetMaxValidMemorySize(*(_QWORD *)(a2 + 248), 0x100u);
  result = MmAddRangeToCrashDump(
             a1,
             *(_QWORD *)(a2 + 248) - MaxValidMemorySizeDown,
             (unsigned int)(MaxValidMemorySize + MaxValidMemorySizeDown));
  v11 = result;
  if ( (int)result >= 0 )
  {
    for ( i = &IopRunTimeContextOffsets; ; i += 2 )
    {
      v13 = *(unsigned __int16 *)i;
      if ( (_WORD)v13 == 0xFFFF )
        break;
      v14 = *(_QWORD *)(v13 + a2);
      if ( v14 < a3 || v14 >= a4 )
      {
        result = MmAddRangeToCrashDump(a1, v14 & 0xFFFFFFFFFFFFF000uLL, 4096LL);
        v11 = result;
        if ( (int)result < 0 )
          return result;
      }
    }
    return v11;
  }
  return result;
}
