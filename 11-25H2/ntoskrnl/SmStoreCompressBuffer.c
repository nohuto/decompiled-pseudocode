/*
 * XREFs of SmStoreCompressBuffer @ 0x1403A1334
 * Callers:
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x1403A1130 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_.c)
 * Callees:
 *     RtlCompressBuffer @ 0x1403A15F0 (RtlCompressBuffer.c)
 *     ?SmStoreCompressCompleteCompressedChunks@@YAJPEAU_SM_COMPRESSED_PAGE_HEADER@@PEAKK1@Z @ 0x140602AA8 (-SmStoreCompressCompleteCompressedChunks@@YAJPEAU_SM_COMPRESSED_PAGE_HEADER@@PEAKK1@Z.c)
 *     SmHwAcceleratorIssueRequest @ 0x1406034F0 (SmHwAcceleratorIssueRequest.c)
 *     SmHwAcceleratorWaitForRequest @ 0x140603AAC (SmHwAcceleratorWaitForRequest.c)
 */

__int64 __fastcall SmStoreCompressBuffer(
        unsigned int a1,
        UCHAR *a2,
        struct _SM_COMPRESSED_PAGE_HEADER *a3,
        void *WorkSpace,
        __int64 a5,
        unsigned int *FinalCompressedSize)
{
  unsigned int v6; // ebx
  NTSTATUS v9; // edi
  USHORT v10; // r10
  unsigned int v11; // ebp
  ULONG CompressedBufferSize; // edx
  unsigned int *v15; // rsi
  unsigned int v16; // r14d
  unsigned int v17; // r8d
  ULONG v18; // edx
  ULONG v19; // r13d
  ULONG v20; // edx
  UCHAR *v21; // r12
  unsigned int v22; // [rsp+40h] [rbp-48h]
  unsigned int v23[16]; // [rsp+48h] [rbp-40h] BYREF
  USHORT v24; // [rsp+90h] [rbp+8h]
  ULONG v25; // [rsp+A0h] [rbp+18h]
  void *v26; // [rsp+A8h] [rbp+20h]

  v26 = WorkSpace;
  v6 = 0;
  v9 = 0;
  v10 = *((_WORD *)qword_140011220 + a1);
  v11 = 0;
  v24 = v10;
  CompressedBufferSize = 4096 - ((unsigned __int16)a3 & 0xFFF);
  if ( a1 )
  {
    v16 = 0;
    v17 = (a1 == 2) + 1;
    v22 = v17;
    v18 = CompressedBufferSize - (2 * v17 - 2);
    v19 = v18 >> 1;
    if ( a1 != 2 )
      v19 = v18;
    v20 = 2048;
    if ( a1 != 2 )
      v20 = 4096;
    v21 = (UCHAR *)a3 + 2 * v17 - 2;
    v25 = v20;
    while ( v16 < v17 )
    {
      if ( a5 )
      {
        v9 = SmHwAcceleratorIssueRequest(a5, v16, 0, (_DWORD)a2, v20, (__int64)v21, v19);
        if ( v9 != 259 )
          goto LABEL_5;
        ++v11;
      }
      else
      {
        v9 = RtlCompressBuffer(v10, a2, v20, v21, v19, 0, &v23[v16], WorkSpace);
        if ( v9 < 0 )
          goto LABEL_5;
      }
      v20 = v25;
      v17 = v22;
      a2 += v25;
      WorkSpace = v26;
      v10 = v24;
      v21 += v19;
      ++v16;
    }
    v11 = 0;
    if ( v9 != 259 )
      return (unsigned int)SmStoreCompressCompleteCompressedChunks(a3, v23, v17, FinalCompressedSize);
LABEL_5:
    if ( v11 )
    {
      v15 = v23;
      do
      {
        SmHwAcceleratorWaitForRequest(a5, v6++, 0, (_DWORD)v15, (__int64)v15);
        ++v15;
      }
      while ( v6 < v11 );
    }
  }
  else
  {
    return (unsigned int)RtlCompressBuffer(
                           v10,
                           a2,
                           0x1000u,
                           (PUCHAR)a3,
                           CompressedBufferSize,
                           0x1000u,
                           FinalCompressedSize,
                           WorkSpace);
  }
  return (unsigned int)v9;
}
