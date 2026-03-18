/*
 * XREFs of SmHwAcceleratorWaitForRequest @ 0x140603AAC
 * Callers:
 *     SmStoreDecompressBuffer @ 0x14020D068 (SmStoreDecompressBuffer.c)
 *     SmStoreCompressBuffer @ 0x1403A1334 (SmStoreCompressBuffer.c)
 *     ?SmStoreDecompressBufferContextCleanup@@YAXPEAU_SM_STORE_DECOMPRESS_BUFFER_CONTEXT@@@Z @ 0x140478E10 (-SmStoreDecompressBufferContextCleanup@@YAXPEAU_SM_STORE_DECOMPRESS_BUFFER_CONTEXT@@@Z.c)
 *     SmStoreCompletePendingDecompress @ 0x1404CDD74 (SmStoreCompletePendingDecompress.c)
 *     SmStoreCompletePendingCompress @ 0x1406033EC (SmStoreCompletePendingCompress.c)
 * Callees:
 *     AccelGetStatusFromCompletionRecord @ 0x1406596B4 (AccelGetStatusFromCompletionRecord.c)
 *     AccelQueryCompletionInformation @ 0x140659904 (AccelQueryCompletionInformation.c)
 *     AccelWaitForWorkCompletion @ 0x140659AEC (AccelWaitForWorkCompletion.c)
 */

__int64 __fastcall SmHwAcceleratorWaitForRequest(__int64 a1, int a2, _QWORD *a3, _DWORD *a4, _DWORD *a5)
{
  _BOOL8 v7; // r8
  __int64 v9; // rdx
  __int64 v10; // rbx
  int StatusFromCompletionRecord; // ecx
  _QWORD v13[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v14; // [rsp+30h] [rbp-30h]
  __int128 v15; // [rsp+40h] [rbp-20h]
  __int64 v16; // [rsp+50h] [rbp-10h]

  v7 = 0LL;
  v9 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) + 40LL) * a2);
  v10 = (unsigned int)v9 + a1 + 32;
  if ( a3 )
    v7 = *a3 == 0LL;
  if ( (int)AccelWaitForWorkCompletion((unsigned int)v9 + a1 + 32, v9, v7) >= 0 )
  {
    StatusFromCompletionRecord = AccelGetStatusFromCompletionRecord(v10);
    if ( StatusFromCompletionRecord >= 0 )
    {
      v13[0] = 3670017LL;
      v14 = 0LL;
      LODWORD(v14) = 6;
      v13[1] = v10;
      v15 = 0LL;
      v16 = 0LL;
      AccelQueryCompletionInformation(v13);
      *a4 = DWORD1(v15);
      LODWORD(v14) = 4;
      AccelQueryCompletionInformation(v13);
      *a5 = HIDWORD(v14);
      return 0;
    }
    else
    {
      if ( StatusFromCompletionRecord == -1073741248 )
        StatusFromCompletionRecord = -1073741823;
      if ( !*(_DWORD *)(*(_QWORD *)(a1 + 8) + 60LL) )
        return (unsigned int)-1073741248;
    }
  }
  else
  {
    return 258;
  }
  return (unsigned int)StatusFromCompletionRecord;
}
