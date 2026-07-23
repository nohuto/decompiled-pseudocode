/*
 * XREFs of PopAddPagesToCompressedPageSet @ 0x140B5E434
 * Callers:
 *     PopCompressHiberBlocks @ 0x140B5E674 (PopCompressHiberBlocks.c)
 *     PopWriteHiberImage @ 0x140B60960 (PopWriteHiberImage.c)
 * Callees:
 *     RtlCompressBuffer @ 0x140383BB0 (RtlCompressBuffer.c)
 *     RtlCompressBufferProgress @ 0x1405EE680 (RtlCompressBufferProgress.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

char *__fastcall PopAddPagesToCompressedPageSet(
        _BYTE *a1,
        __int64 a2,
        unsigned int *a3,
        char *a4,
        char a5,
        int a6,
        __int64 a7)
{
  char *v7; // r12
  unsigned int *v8; // rax
  ULONG v9; // edi
  unsigned int v12; // ebx
  UCHAR *v13; // r15
  char v14; // bl
  unsigned int v15; // r9d
  __int64 v16; // r8
  int v17; // r10d
  unsigned int v18; // edx
  unsigned __int64 v19; // r13
  __int64 v20; // rbp
  int v21; // eax
  int v22; // ecx
  unsigned __int64 v23; // rax
  __int64 CompressedBufferSize; // [rsp+20h] [rbp-68h]
  ULONG FinalCompressedSize; // [rsp+98h] [rbp+10h] BYREF
  unsigned int *v27; // [rsp+A0h] [rbp+18h]

  v27 = a3;
  v7 = *(char **)(a2 + 24);
  v8 = a3;
  v9 = a6 << 12;
  FinalCompressedSize = 0;
  v12 = 0;
  if ( !v7 )
    goto LABEL_22;
  if ( a5 )
  {
    v13 = *(UCHAR **)a2;
    v14 = a1[491];
    memmove(*(void **)a2, a4, v9);
    v12 = v14 != 0 ? 4 : 0;
    goto LABEL_12;
  }
  v13 = (UCHAR *)a4;
  v15 = *(_DWORD *)(a2 + 160);
  v16 = *((_QWORD *)qword_140F0BC28 + 5) - *((_QWORD *)qword_140F0BC28 + 7);
  if ( !v15 || (v17 = *(_DWORD *)(a2 + 164), (int)(100 * v17 / v15) > dword_140F0BBC4) )
  {
    if ( v16 >= (__int64)((unsigned __int64)*((unsigned int *)qword_140F0BC28 + 2) >> 1) )
    {
      v12 = 1;
      goto LABEL_11;
    }
    goto LABEL_9;
  }
  v18 = *((_DWORD *)qword_140F0BC28 + 2);
  if ( v16 < (__int64)((unsigned __int64)v18 >> 1) )
  {
LABEL_9:
    v12 = a1[492] != 0 ? 4 : 0;
    goto LABEL_11;
  }
  *(_DWORD *)(a2 + 164) = v17 + 1;
  LOBYTE(v12) = v16 >= (__int64)((unsigned __int64)(3 * v18) >> 2);
  v12 += 2;
LABEL_11:
  *(_DWORD *)(a2 + 160) = v15 + 1;
LABEL_12:
  v19 = __rdtsc();
  if ( !a1[490] || (v12 & 0xFFFFFFFA) != 0 || v12 == 5 )
  {
    v20 = v12;
    v21 = RtlCompressBufferProgress(
            *((_WORD *)qword_140029310 + v12),
            v13,
            v9,
            v7,
            CompressedBufferSize,
            &FinalCompressedSize,
            *(_QWORD *)(a2 + 16),
            a7,
            (__int64)a1);
  }
  else
  {
    v20 = v12;
    v21 = RtlCompressBuffer(
            *((_WORD *)qword_140029310 + v12),
            v13,
            v9,
            (PUCHAR)v7,
            0x10000u,
            0x1000u,
            &FinalCompressedSize,
            *(PVOID *)(a2 + 16));
  }
  v22 = v21;
  v23 = __rdtsc();
  *(_QWORD *)(a2 + 40) += (((unsigned __int64)HIDWORD(v23) << 32) | (unsigned int)v23) - v19;
  if ( v22 < 0 || FinalCompressedSize >= (7 * v9) >> 3 )
  {
    a4 = (char *)v13;
  }
  else
  {
    ++*(_QWORD *)(a2 + 8 * v20 + 88);
    a4 = v7;
    v9 = FinalCompressedSize;
  }
  v8 = v27;
LABEL_22:
  *v8 = (v12 << 29) | ((v9 << 8) ^ (unsigned __int8)*v8) & 0x1FFFFFFF;
  return a4;
}
