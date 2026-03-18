/*
 * XREFs of IopLiveDumpGetCapturePages @ 0x14059B194
 * Callers:
 *     IopLiveDumpBufferDumpData @ 0x140599878 (IopLiveDumpBufferDumpData.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     IopLiveDumpShouldCheckChunkCRC @ 0x14049B234 (IopLiveDumpShouldCheckChunkCRC.c)
 *     IopLiveDumpGetCapturePagesNoLock @ 0x14059B284 (IopLiveDumpGetCapturePagesNoLock.c)
 *     IopLiveDumpTraceEventGeneric @ 0x1405A31E4 (IopLiveDumpTraceEventGeneric.c)
 */

__int64 __fastcall IopLiveDumpGetCapturePages(int a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  int v7; // edi
  bool v11; // al
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  const wchar_t *v15; // [rsp+40h] [rbp-28h] BYREF
  __int64 v16; // [rsp+78h] [rbp+10h] BYREF

  v7 = BufferChunkSizeInPages;
  KxAcquireSpinLock((PKSPIN_LOCK)(a2 + 32));
  IopLiveDumpGetCapturePagesNoLock(a1, a2, a3, v7, a5, a6, a7);
  v11 = IopLiveDumpShouldCheckChunkCRC(a2);
  v13 = 0LL;
  if ( v11 )
  {
    while ( v13 < (unsigned __int64)BufferChunkSizeInBytes >> 3 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 72) + 8 * v12) + 8 * v13) != v12 )
      {
        v16 = v12;
        v15 = L"ChunkIndex";
        IopLiveDumpTraceEventGeneric(L"IopLiveDumpGetCapturePagesMismatch", 1LL, &v15, &v16);
        return KxReleaseSpinLock((volatile signed __int64 *)(a2 + 32));
      }
      ++v13;
    }
  }
  return KxReleaseSpinLock((volatile signed __int64 *)(a2 + 32));
}
