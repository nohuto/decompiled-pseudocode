/*
 * XREFs of IopAddLiveDumpPagesToPartialKernelDump @ 0x14059D2EC
 * Callers:
 *     IoAddPagesForPartialKernelDump @ 0x14059CE74 (IoAddPagesForPartialKernelDump.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     IoSaveBugCheckProgress @ 0x14058EF30 (IoSaveBugCheckProgress.c)
 *     IopDumpCallAddPagesCallbacks @ 0x140590AD0 (IopDumpCallAddPagesCallbacks.c)
 *     IopLiveDumpMarkDeviceNode @ 0x140598B04 (IopLiveDumpMarkDeviceNode.c)
 *     IoAddProcessesToDump @ 0x14059D088 (IoAddProcessesToDump.c)
 *     IopMarkPagesForProcessorData @ 0x14059E108 (IopMarkPagesForProcessorData.c)
 *     ExAddPrivateDataToCrashDump @ 0x1406524DC (ExAddPrivateDataToCrashDump.c)
 *     MmAddPrivateDataToCrashDump @ 0x140678A54 (MmAddPrivateDataToCrashDump.c)
 *     MmAddRangeToCrashDump @ 0x140678B70 (MmAddRangeToCrashDump.c)
 *     MmGetDumpRange @ 0x140678D28 (MmGetDumpRange.c)
 */

__int64 __fastcall IopAddLiveDumpPagesToPartialKernelDump(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 result; // rax
  __int64 i; // rbx
  __int64 v12; // rcx
  _QWORD v13[5]; // [rsp+28h] [rbp-51h] BYREF
  __int64 v14; // [rsp+50h] [rbp-29h]
  __int128 v15; // [rsp+58h] [rbp-21h] BYREF
  _QWORD *v16; // [rsp+68h] [rbp-11h]
  __int64 v17; // [rsp+70h] [rbp-9h]
  __int64 *v18; // [rsp+78h] [rbp-1h]
  __int64 v19; // [rsp+80h] [rbp+7h]
  _QWORD v20[2]; // [rsp+88h] [rbp+Fh] BYREF
  _QWORD v21[2]; // [rsp+98h] [rbp+1Fh] BYREF
  unsigned int v22; // [rsp+F0h] [rbp+77h] BYREF
  int v23; // [rsp+F4h] [rbp+7Bh]

  v23 = HIDWORD(a4);
  v14 = 0LL;
  v22 = 0;
  v16 = 0LL;
  v15 = 0LL;
  v8 = *(_QWORD *)(CrashdmpDumpBlock + 8);
  v9 = *(_QWORD *)(v8 + 48);
  v13[1] = 0LL;
  v20[0] = v9;
  v20[1] = v8 + 56;
  v13[2] = v20;
  v13[0] = IoSetDumpRange;
  v13[3] = v8;
  LODWORD(v14) = 3;
  v13[4] = &AvailablePagesForPartialDump;
  result = MmAddRangeToCrashDump(v13, &KdDebuggerDataBlock, 928LL);
  if ( (int)result >= 0 )
  {
    result = MmAddRangeToCrashDump(v13, KiProcessorBlock, 8LL * (unsigned int)KeNumberProcessors_0);
    if ( (int)result >= 0 )
    {
      for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
      {
        result = MmAddRangeToCrashDump(v13, KiProcessorBlock[i], 52992LL);
        if ( (int)result < 0 )
          return result;
      }
      *((_QWORD *)&v15 + 1) = KeActiveProcessors.Bitmap[0];
      *(_QWORD *)&v15 = &KeActiveProcessors;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v22, (unsigned __int16 **)&v15) )
      {
        result = IopMarkPagesForProcessorData(v13, v22);
        if ( (int)result < 0 )
          return result;
      }
      result = MmAddPrivateDataToCrashDump(v13, 2LL);
      if ( (int)result >= 0 )
      {
        result = MmAddRangeToCrashDump(v13, 0xFFFFF78000000000uLL, 2688LL);
        if ( (int)result >= 0 )
        {
          result = MmAddPrivateDataToCrashDump(v13, 4LL);
          if ( (int)result >= 0 )
          {
            result = MmAddPrivateDataToCrashDump(v13, 8LL);
            if ( (int)result >= 0 )
            {
              if ( !MmPhysicalMemoryBlock
                || (result = MmAddRangeToCrashDump(
                               v13,
                               MmPhysicalMemoryBlock,
                               16 * ((unsigned int)(*(_DWORD *)MmPhysicalMemoryBlock - 1) + 2LL)),
                    (int)result >= 0) )
              {
                result = MmAddPrivateDataToCrashDump(v13, 16LL);
                if ( (int)result >= 0 )
                {
                  if ( a1 != 351 || a2 != 2 )
                    goto LABEL_34;
                  result = MmAddRangeToCrashDump(v13, a3, 56LL);
                  if ( (int)result < 0 )
                    return result;
                  if ( (unsigned int)IopLiveDumpMarkDeviceNode((__int64)v13, *(_QWORD *)(a3 + 48)) == -1073741789 )
                    return 3221225507LL;
                  if ( !a5 || (result = IopLiveDumpMarkDeviceNode((__int64)v13, a5), (int)result >= 0) )
                  {
LABEL_34:
                    if ( !IoPreparedTriageDumpData
                      || IoPreparedTriageDumpData == *(void **)(CrashdmpDumpBlock + 1328)
                      || (result = MmAddRangeToCrashDump(
                                     v13,
                                     (char *)IoPreparedTriageDumpData - 0x2000,
                                     *((unsigned int *)IoPreparedTriageDumpData + 1)),
                          (int)result >= 0) )
                    {
                      result = ExAddPrivateDataToCrashDump(v13);
                      if ( (int)result >= 0 )
                      {
                        result = IoAddProcessesToDump((__int64)v13, (__int64)IopPartialDumpAddProcessesCallback);
                        if ( (int)result >= 0 )
                        {
                          IopDumpCallAddPagesCallbacks(a1);
                          IoSaveBugCheckProgress(33);
                          v19 = 0LL;
                          v12 = *(_QWORD *)(CrashdmpDumpBlock + 8);
                          v21[0] = *(_QWORD *)(v12 + 48);
                          v21[1] = v12 + 56;
                          v17 = v12;
                          v16 = v21;
                          LODWORD(v19) = 7;
                          *(_QWORD *)&v15 = IoSetDumpRange;
                          v18 = &AvailablePagesForPartialDump;
                          *((_QWORD *)&v15 + 1) = IoFreeDumpRange;
                          MmGetDumpRange(&v15, 0LL, 3LL);
                          IoSaveBugCheckProgress(41);
                          if ( !AvailablePagesForPartialDump )
                            return 3221225507LL;
                          return MmAddPrivateDataToCrashDump(v13, 1LL);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
