/*
 * XREFs of ?DpiMiracastCbReportChunkInfo@@YAJPEAXPEAUDXGK_MIRACAST_CHUNK_INFO@@0I@Z @ 0x14007E1A0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0xqqqqqq_EtwWriteTransfer @ 0x140081C64 (McTemplateK0xqqqqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiMiracastCbReportChunkInfo(_QWORD *a1, struct DXGK_MIRACAST_CHUNK_INFO *a2, void *a3, int a4)
{
  __int64 result; // rax

  if ( a2 )
  {
    if ( a3 )
    {
      WdLogSingleEntry2(2LL, a1, -1073741583LL);
      result = 3221225713LL;
      WdLogGlobalForLineNumber = 1242;
    }
    else if ( a4 )
    {
      WdLogSingleEntry2(2LL, a1, -1073741582LL);
      result = 3221225714LL;
      WdLogGlobalForLineNumber = 1252;
    }
    else if ( a1 && *((_DWORD *)a1 + 4) == 1953656900 && *((_DWORD *)a1 + 5) == 14 && a1[54] )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000000LL) != 0 )
        McTemplateK0xqqqqqq_EtwWriteTransfer(
          a2->ChunkId.Value >> 40,
          (_DWORD)a1,
          0,
          a1[12],
          a2->ChunkType,
          *(_DWORD *)&a2->ChunkId.0,
          (unsigned __int16)WORD2(a2->ChunkId.Value) >> 8,
          a2->ProcessingTime,
          a2->EncodeRate,
          0);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry2(2LL, a1, -1073741585LL);
      result = 3221225711LL;
      WdLogGlobalForLineNumber = 1268;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, a1, -1073741584LL);
    result = 3221225712LL;
    WdLogGlobalForLineNumber = 1232;
  }
  return result;
}
