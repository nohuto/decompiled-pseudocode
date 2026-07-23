/*
 * XREFs of SmHwAcceleratorWaitForRequest @ 0x14060E02C
 * Callers:
 *     SmStoreDecompressBuffer @ 0x1402F9A18 (SmStoreDecompressBuffer.c)
 *     SmStoreCompressBuffer @ 0x140383774 (SmStoreCompressBuffer.c)
 *     ?SmStoreDecompressBufferContextCleanup@@YAXPEAU_SM_STORE_DECOMPRESS_BUFFER_CONTEXT@@@Z @ 0x1404753A8 (-SmStoreDecompressBufferContextCleanup@@YAXPEAU_SM_STORE_DECOMPRESS_BUFFER_CONTEXT@@@Z.c)
 *     SmStoreCompletePendingDecompress @ 0x1404C6F24 (SmStoreCompletePendingDecompress.c)
 *     SmStoreCompletePendingCompress @ 0x14060D96C (SmStoreCompletePendingCompress.c)
 * Callees:
 *     AccelGetStatusFromCompletionRecord @ 0x140402A28 (AccelGetStatusFromCompletionRecord.c)
 *     AccelWaitForWorkCompletion @ 0x140403150 (AccelWaitForWorkCompletion.c)
 *     AccelQueryCompletionInformation @ 0x140664438 (AccelQueryCompletionInformation.c)
 */

__int64 __fastcall SmHwAcceleratorWaitForRequest(__int64 a1, int a2, _QWORD *a3, _DWORD *a4, _DWORD *a5)
{
  unsigned int v7; // r8d
  __int64 v9; // rdx
  __int64 *v10; // rbx
  int StatusFromCompletionRecord; // ecx
  _QWORD v13[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v14; // [rsp+30h] [rbp-30h]
  __int128 v15; // [rsp+40h] [rbp-20h]
  __int64 v16; // [rsp+50h] [rbp-10h]

  v7 = 0;
  v9 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) + 40LL) * a2);
  v10 = (__int64 *)((unsigned int)v9 + a1 + 32);
  if ( a3 )
    v7 = *a3 == 0LL;
  if ( (int)AccelWaitForWorkCompletion((__int64 *)((unsigned int)v9 + a1 + 32), v9, v7) >= 0 )
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
