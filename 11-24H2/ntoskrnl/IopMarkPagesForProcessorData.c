/*
 * XREFs of IopMarkPagesForProcessorData @ 0x14059E108
 * Callers:
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x14059D2EC (IopAddLiveDumpPagesToPartialKernelDump.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140244560 (MmIsAddressValidEx.c)
 *     KeGetNextKernelStackSegment @ 0x140406CA0 (KeGetNextKernelStackSegment.c)
 *     IopAddStackSegmentKernelShadowStackToDump @ 0x14059D7C4 (IopAddStackSegmentKernelShadowStackToDump.c)
 *     MmAddRangeToCrashDump @ 0x140678B70 (MmAddRangeToCrashDump.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall IopMarkPagesForProcessorData(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rbp
  int v7; // esi
  __int64 v8; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9; // [rsp+28h] [rbp-40h]

  v3 = KiProcessorBlock[a2];
  result = MmAddRangeToCrashDump(a1, v3 - 384, 53376LL);
  if ( (int)result >= 0 )
  {
    v5 = *(_QWORD *)(v3 + 8);
    if ( !v5 || !MmIsAddressValidEx(v5) )
      goto LABEL_13;
    result = MmAddRangeToCrashDump(a1, *(_QWORD *)(v3 + 8), 1944LL);
    if ( (int)result < 0 )
      return result;
    result = MmAddRangeToCrashDump(a1, *(_QWORD *)(*(_QWORD *)(v3 + 8) + 184LL), 2112LL);
    if ( (int)result < 0 )
      return result;
    if ( (PartialDumpControl & 2) != 0 && (v6 = *(_QWORD *)(v3 + 8), (*(_DWORD *)(v6 + 120) & 0x20000) != 0) )
    {
      memset_0(&v8, 0, 0x40uLL);
      v7 = 0;
      KeGetNextKernelStackSegment((_QWORD *)v6, &v8, 1);
      while ( 1 )
      {
        result = MmAddRangeToCrashDump(a1, v9, v8 - v9);
        if ( (int)result < 0 )
          break;
        result = IopAddStackSegmentKernelShadowStackToDump(a1, (__int64)&v8);
        if ( (int)result < 0 )
          break;
        if ( (unsigned int)++v7 >= 0x64 || !KeGetNextKernelStackSegment(*(_QWORD **)(v3 + 8), &v8, 0) )
          goto LABEL_13;
      }
    }
    else
    {
LABEL_13:
      result = MmAddRangeToCrashDump(a1, *(_QWORD *)(v3 + 36800), 1232LL);
      if ( (int)result >= 0 )
      {
        result = MmAddRangeToCrashDump(a1, *(_QWORD *)(*(_QWORD *)(v3 + 36800) + 152LL), 0x2000LL);
        if ( (int)result >= 0 )
        {
          result = MmAddRangeToCrashDump(a1, *(_QWORD *)(*(_QWORD *)(v3 + 36800) + 248LL) - 4096LL, 0x2000LL);
          if ( (int)result >= 0 )
          {
            result = MmAddRangeToCrashDump(a1, *(_QWORD *)(v3 + 344), *(unsigned __int16 *)(v3 + 342));
            if ( (int)result >= 0 )
              return MmAddRangeToCrashDump(a1, *(_QWORD *)(v3 + 360), *(unsigned __int16 *)(v3 + 358));
          }
        }
      }
    }
  }
  return result;
}
