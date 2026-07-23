/*
 * XREFs of EtwpWriteBufferCompressed @ 0x1800AA248
 * Callers:
 *     EtwpFlushBuffer @ 0x1800A9FC0 (EtwpFlushBuffer.c)
 * Callees:
 *     RtlCompressBufferXpressLz @ 0x1800B8E60 (RtlCompressBufferXpressLz.c)
 *     NtWriteFile @ 0x180160150 (NtWriteFile.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall EtwpWriteBufferCompressed(__int64 a1, _OWORD *a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v4; // r10
  int v5; // edi
  int v7; // r11d
  __int64 v8; // r9
  int v10; // r8d
  __int64 v11; // r9
  unsigned int v12; // r11d
  __int64 v13; // r8
  int v16; // eax
  unsigned __int32 v17; // ebp
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // r14d
  int v22; // ecx
  ULONG v23; // ecx
  ULONG Length; // eax
  int v25; // ecx
  int v26; // edx
  int v27; // eax
  __int64 v28; // rax
  unsigned int v29; // edx
  int v30; // eax
  char *v31; // rcx
  size_t v32; // r8
  char *v33; // rdx
  PLARGE_INTEGER ByteOffset; // [rsp+38h] [rbp-50h]
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  int v36; // [rsp+90h] [rbp+8h] BYREF

  v4 = *(unsigned int *)(a1 + 436);
  v5 = 0;
  v7 = *(_DWORD *)(a1 + 432) - v4;
  *a4 = 0;
  v8 = *(_QWORD *)(a1 + 424);
  *a3 = 0;
  v10 = *((_DWORD *)a2 + 12);
  v11 = v4 + v8 + 72;
  v12 = v7 - 72;
  ByteOffset = *(PLARGE_INTEGER *)(a1 + 416);
  v36 = 0;
  v13 = (unsigned int)(v10 - 72);
  IoStatusBlock = 0LL;
  if ( v12 >= *(_DWORD *)(a1 + 192) )
    v12 = *(_DWORD *)(a1 + 192);
  v16 = RtlCompressBufferXpressLz(0LL, (char *)a2 + 72, v13, v11, v12, 0, &v36, ByteOffset);
  v17 = v16;
  if ( v16 == -1073741789 )
  {
    v21 = *((_DWORD *)a2 + 12);
    memmove((void *)(*(_QWORD *)(a1 + 424) + *(unsigned int *)(a1 + 436)), a2, v21);
    v17 = 0;
  }
  else
  {
    if ( v16 < 0 )
    {
      *a4 = 1;
      return v17;
    }
    *((_WORD *)a2 + 26) |= 0x40u;
    v19 = *(unsigned int *)(a1 + 436);
    v20 = *(_QWORD *)(a1 + 424);
    *(_OWORD *)(v19 + v20) = *a2;
    *(_OWORD *)(v19 + v20 + 16) = a2[1];
    *(_OWORD *)(v19 + v20 + 32) = a2[2];
    *(_OWORD *)(v19 + v20 + 48) = a2[3];
    *(_QWORD *)(v19 + v20 + 64) = *((_QWORD *)a2 + 8);
    v21 = v36 + 72;
  }
  *(_DWORD *)(*(unsigned int *)(a1 + 436) + *(_QWORD *)(a1 + 424)) = v21;
  v22 = *(_DWORD *)(a1 + 436);
  ++*(_DWORD *)(a1 + 440);
  v23 = v21 + v22;
  *(_DWORD *)(a1 + 436) = v23;
  Length = *(_DWORD *)(a1 + 192);
  if ( v23 >= Length )
  {
    v17 = NtWriteFile(
            *(HANDLE *)(a1 + 128),
            0LL,
            0LL,
            0LL,
            &IoStatusBlock,
            *(PVOID *)(a1 + 424),
            Length,
            (PLARGE_INTEGER)(a1 + 344),
            0LL);
    if ( (v17 & 0x80000000) == 0 )
    {
      v28 = *(unsigned int *)(a1 + 192);
      *(_QWORD *)(a1 + 344) += v28;
      v29 = *(_DWORD *)(a1 + 436) - v28;
      v30 = *(_DWORD *)(a1 + 440);
      *(_DWORD *)(a1 + 436) = v29;
      *(_DWORD *)(a1 + 444) = v29;
      if ( v29 )
      {
        v31 = *(char **)(a1 + 424);
        v32 = v29;
        *(_DWORD *)(a1 + 440) = 1;
        v33 = &v31[*(unsigned int *)(a1 + 192)];
        *a3 = v30 - 1;
        memmove(v31, v33, v32);
        return v17;
      }
      *a3 = v30;
    }
    else
    {
      v25 = *(_DWORD *)(a1 + 440);
      v26 = *(_DWORD *)(a1 + 444);
      *(_DWORD *)(a1 + 436) = v26;
      LOBYTE(v5) = v26 != 0;
      v27 = v25 - 1;
      if ( !v26 )
        v27 = v25;
      *a4 = v27;
    }
    *(_DWORD *)(a1 + 440) = v5;
  }
  return v17;
}
