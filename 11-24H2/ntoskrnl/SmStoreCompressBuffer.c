/*
 * XREFs of SmStoreCompressBuffer @ 0x140383774
 * Callers:
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x140383570 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_.c)
 * Callees:
 *     RtlCompressBuffer @ 0x140383BB0 (RtlCompressBuffer.c)
 *     RtlCompressBufferLz4 @ 0x140383D30 (RtlCompressBufferLz4.c)
 *     RtlCompressBufferXpressHuff @ 0x1403853E0 (RtlCompressBufferXpressHuff.c)
 *     ?SmStoreCompressCompleteCompressedChunks@@YAJPEAU_SM_COMPRESSED_PAGE_HEADER@@PEAKK1@Z @ 0x14060D028 (-SmStoreCompressCompleteCompressedChunks@@YAJPEAU_SM_COMPRESSED_PAGE_HEADER@@PEAKK1@Z.c)
 *     SmHwAcceleratorIssueRequest @ 0x14060DA70 (SmHwAcceleratorIssueRequest.c)
 *     SmHwAcceleratorWaitForRequest @ 0x14060E02C (SmHwAcceleratorWaitForRequest.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCompressBufferLZNT1 @ 0x140B66200 (RtlCompressBufferLZNT1.c)
 */

__int64 __fastcall SmStoreCompressBuffer(
        int a1,
        UCHAR *a2,
        struct _SM_COMPRESSED_PAGE_HEADER *a3,
        void *a4,
        __int64 a5,
        unsigned int *a6)
{
  unsigned int v6; // edi
  int v10; // edx
  NTSTATUS v11; // ebx
  unsigned int v12; // r15d
  USHORT v13; // si
  unsigned __int16 v14; // si
  __int64 (__fastcall *v15)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64); // rax
  ULONG v18; // r11d
  unsigned int v19; // r10d
  unsigned int v20; // eax
  ULONG v21; // edx
  ULONG CompressedBufferSize; // r8d
  unsigned int v23; // r13d
  UCHAR *v24; // rdx
  unsigned int *v25; // rsi
  unsigned int v26; // [rsp+50h] [rbp-58h]
  UCHAR *v27; // [rsp+58h] [rbp-50h]
  unsigned int v28[18]; // [rsp+60h] [rbp-48h] BYREF
  ULONG v29; // [rsp+B0h] [rbp+8h]
  ULONG v30; // [rsp+C0h] [rbp+18h]

  v6 = 0;
  v10 = 4096 - ((unsigned __int16)a3 & 0xFFF);
  v11 = 0;
  v12 = 0;
  v13 = word_140011540[a1];
  if ( a1 )
  {
    v18 = 2048;
    v19 = (a1 == 2) + 1;
    v26 = v19;
    v20 = 2 * v19 - 2;
    v21 = v10 - v20;
    CompressedBufferSize = v21 >> 1;
    if ( a1 != 2 )
    {
      CompressedBufferSize = v21;
      v18 = 4096;
    }
    v23 = 0;
    v24 = (UCHAR *)a3 + v20;
    v30 = CompressedBufferSize;
    v29 = v18;
    while ( 1 )
    {
      v27 = v24;
      if ( v23 >= v19 )
        break;
      if ( a5 )
      {
        v11 = SmHwAcceleratorIssueRequest(a5, v23, 0, (_DWORD)a2, v18, (__int64)v24, CompressedBufferSize);
        if ( v11 != 259 )
          goto LABEL_5;
        ++v12;
      }
      else
      {
        v11 = RtlCompressBuffer(v13, a2, v18, v24, CompressedBufferSize, 0, &v28[v23], a4);
        if ( v11 < 0 )
          goto LABEL_5;
      }
      v18 = v29;
      CompressedBufferSize = v30;
      a2 += v29;
      v19 = v26;
      v24 = &v27[v30];
      ++v23;
    }
    v12 = 0;
    if ( v11 != 259 )
      return (unsigned int)SmStoreCompressCompleteCompressedChunks(a3, v28, v19, a6);
LABEL_5:
    if ( v12 )
    {
      v25 = v28;
      do
      {
        SmHwAcceleratorWaitForRequest(a5, v6++, 0, (_DWORD)v25, (__int64)v25);
        ++v25;
      }
      while ( v6 < v12 );
    }
  }
  else
  {
    v14 = v13 & 0xFF00;
    v15 = (__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64))*(&RtlCompressBufferProcs + 6);
    if ( v15 == RtlCompressBufferLz4 )
    {
      return (unsigned int)RtlCompressBufferLz4(v14, (_DWORD)a2, 4096, (_DWORD)a3, v10, 4096, (__int64)a6, (__int64)a4);
    }
    else if ( v15 == RtlCompressBufferLZNT1 )
    {
      return (unsigned int)RtlCompressBufferLZNT1(
                             v14,
                             (_DWORD)a2,
                             4096,
                             (_DWORD)a3,
                             v10,
                             4096,
                             (__int64)a6,
                             (__int64)a4);
    }
    else if ( (char *)v15 == (char *)RtlCompressBufferXpressHuff )
    {
      return (unsigned int)RtlCompressBufferXpressHuff(v14, a2, 4096LL, a3, v10, 4096, a6);
    }
    else
    {
      return (unsigned int)guard_dispatch_icall_no_overrides(v14, a2);
    }
  }
  return (unsigned int)v11;
}
