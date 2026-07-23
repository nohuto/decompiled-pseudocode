/*
 * XREFs of IopLiveDumpBufferDumpData @ 0x1405967F8
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x14045F638 (IopLiveDumpProcessCorralStateChange.c)
 * Callees:
 *     MmProtectMdlSystemAddress @ 0x1404063A0 (MmProtectMdlSystemAddress.c)
 *     RtlpComputeCrcInternal @ 0x140449440 (RtlpComputeCrcInternal.c)
 *     IopLiveDumpShouldCheckChunkCRC @ 0x140495C24 (IopLiveDumpShouldCheckChunkCRC.c)
 *     IopLiveDumpGetCapturePages @ 0x140598114 (IopLiveDumpGetCapturePages.c)
 *     IopLiveDumpIsChunkInIOSpace @ 0x1405989BC (IopLiveDumpIsChunkInIOSpace.c)
 *     IopLiveDumpIsChunkInIOSpaceBuffer @ 0x1405989F8 (IopLiveDumpIsChunkInIOSpaceBuffer.c)
 *     IopLiveDumpTraceEventGeneric @ 0x1405A0124 (IopLiveDumpTraceEventGeneric.c)
 *     MmMapMemoryDumpMdlEx @ 0x140678FF0 (MmMapMemoryDumpMdlEx.c)
 */

__int64 __fastcall IopLiveDumpBufferDumpData(__int64 *a1, unsigned int *a2, __int64 a3, int a4)
{
  __int64 v4; // r14
  _QWORD *v6; // r13
  __int64 v7; // rax
  __int64 result; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rsi
  unsigned int v12; // r12d
  __int64 v13; // rdx
  __int64 v14; // rax
  _QWORD *v15; // r14
  _QWORD *v16; // r13
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rcx
  _DWORD *v21; // rdi
  _DWORD *v22; // r8
  _DWORD *v23; // rsi
  unsigned int v24; // edi
  __int64 v25; // r15
  int v26; // ecx
  int IsChunkInIOSpace; // eax
  struct _MDL *v28; // rsi
  struct _MDL *Next; // rdi
  __int64 v30; // [rsp+40h] [rbp-38h] BYREF
  _DWORD *v31; // [rsp+48h] [rbp-30h]
  _QWORD *v32; // [rsp+50h] [rbp-28h]
  __int64 v33; // [rsp+58h] [rbp-20h]
  __int64 v34; // [rsp+60h] [rbp-18h]
  _QWORD *v35; // [rsp+68h] [rbp-10h]
  const wchar_t *v36; // [rsp+C0h] [rbp+48h] BYREF
  unsigned int *v37; // [rsp+C8h] [rbp+50h] BYREF
  __int64 v38; // [rsp+D0h] [rbp+58h] BYREF
  const wchar_t *v39; // [rsp+D8h] [rbp+60h] BYREF

  v37 = a2;
  v4 = *a1;
  v30 = 0LL;
  LODWORD(v36) = 0;
  v33 = v4;
  v6 = (_QWORD *)(v4 + 680);
  if ( (*(_DWORD *)(v4 + 80) & 0x20000) != 0 )
  {
    v7 = *a2;
    v39 = L"ProcessorNumber";
    v38 = v7;
    IopLiveDumpTraceEventGeneric(L"IopLiveDumpBufferDumpDataEntry", 1LL, &v39, &v38);
  }
  result = *a2;
  if ( (unsigned int)result < *(_DWORD *)(v4 + 888) && (unsigned int)result < *(_DWORD *)(v4 + 1112) )
  {
    v9 = *(_QWORD **)(*(_QWORD *)(v4 + 1120) + 8LL * (unsigned int)result);
    v10 = *(_QWORD *)(v4 + 896) + 16LL * (unsigned int)result;
    v35 = v9;
    v32 = (_QWORD *)v10;
    v11 = *(_QWORD *)(v10 + 8) + 48LL;
    v39 = (const wchar_t *)v11;
LABEL_28:
    v26 = v4 + 544;
    v24 = 0;
    while ( 1 )
    {
      result = IopLiveDumpGetCapturePages(
                 v26,
                 (_DWORD)v6,
                 (_DWORD)v9,
                 a4,
                 (__int64)&v36,
                 (__int64)&v30,
                 (*(_DWORD *)(v4 + 80) & 0x20000) != 0);
      v12 = (unsigned int)v36;
      if ( !(_DWORD)v36 )
        break;
      LODWORD(v13) = 0;
      v14 = v6[9];
      v15 = v9;
      v16 = v32;
      v34 = v30;
      LODWORD(v38) = 0;
      v31 = *(_DWORD **)(v14 + 8 * v30);
      do
      {
        v17 = (unsigned int)v13;
        v13 = (unsigned int)(v13 + 1);
        *(_QWORD *)(v11 + 8 * v17) = *v15;
        if ( (_DWORD)v13 == 16 || v24 == v12 - 1 )
        {
          v18 = v16[1];
          v19 = (unsigned int)((_DWORD)v13 << 12);
          *(_QWORD *)v18 = 0LL;
          *(_WORD *)(v18 + 10) = 0;
          *(_QWORD *)(v18 + 32) = 0LL;
          *(_QWORD *)(v18 + 40) = (unsigned int)v19;
          *(_WORD *)(v18 + 8) = 8 * ((v19 >> 12) + 6);
          MmMapMemoryDumpMdlEx(*v16, v13, v16[1], 0LL);
          LODWORD(v13) = 0;
          v20 = (unsigned __int64)(unsigned int)v19 >> 2;
          v21 = v31;
          v22 = (_DWORD *)((char *)v31 + v19);
          v23 = *(_DWORD **)(v16[1] + 24LL);
          while ( v20 )
          {
            *v21++ = *v23++;
            --v20;
          }
          v24 = v38;
          v11 = (__int64)v39;
          v31 = v22;
        }
        ++v24;
        ++v15;
        LODWORD(v38) = v24;
      }
      while ( v24 < v12 );
      v4 = v33;
      v25 = v34;
      v9 = v35;
      v6 = (_QWORD *)(v33 + 680);
      v24 = 0;
      if ( IopLiveDumpShouldCheckChunkCRC(v33 + 680) )
        *(_QWORD *)(v6[25] + 8 * v25) = RtlpComputeCrcInternal(
                                          *(_QWORD *)(v6[9] + 8 * v25),
                                          v12 << 12,
                                          0LL,
                                          (__int64)&Crc64Ctrl);
      v26 = v4 + 544;
      if ( (*(_DWORD *)(v4 + 80) & 0x80000) != 0 )
      {
        IsChunkInIOSpace = IopLiveDumpIsChunkInIOSpace(v6, v25);
        v26 = v4 + 544;
        if ( IsChunkInIOSpace )
        {
          if ( (unsigned int)IopLiveDumpIsChunkInIOSpaceBuffer(v6 + 20) )
          {
            v28 = (struct _MDL *)v6[22];
          }
          else
          {
            if ( !(unsigned int)IopLiveDumpIsChunkInIOSpaceBuffer(v6 + 15) )
              NT_ASSERT("Unknown IOSpace Type!");
            v28 = (struct _MDL *)v6[17];
          }
          v26 = v4 + 544;
          if ( v28 )
          {
            for ( ; v25; --v25 )
              v28 = v28->Next;
            Next = v28->Next;
            v28->Next = 0LL;
            MmProtectMdlSystemAddress(v28, 2u);
            v28->Next = Next;
            v11 = (__int64)v39;
            goto LABEL_28;
          }
          v11 = (__int64)v39;
        }
      }
    }
    if ( (*(_DWORD *)(v4 + 80) & 0x20000) != 0 )
    {
      v36 = L"ProcessorNumber";
      v37 = (unsigned int *)*v37;
      return IopLiveDumpTraceEventGeneric(L"IopLiveDumpBufferDumpDataExit", 1LL, &v36, &v37);
    }
  }
  return result;
}
