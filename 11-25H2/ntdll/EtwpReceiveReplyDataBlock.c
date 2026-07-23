/*
 * XREFs of EtwpReceiveReplyDataBlock @ 0x1800EFBE8
 * Callers:
 *     EtwSendNotification @ 0x1800EF950 (EtwSendNotification.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180046BD0 (RtlNtStatusToDosError.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     NtTraceControl @ 0x180166CD0 (NtTraceControl.c)
 */

__int64 __fastcall EtwpReceiveReplyDataBlock(
        unsigned int a1,
        unsigned int a2,
        char a3,
        unsigned int a4,
        char *OutputBuffer,
        ULONG OutputBufferLength,
        _DWORD *a7,
        _DWORD *a8,
        int a9)
{
  char *v9; // rdi
  char *v10; // r13
  unsigned int v11; // eax
  int v12; // r12d
  unsigned __int32 v13; // ebx
  int v14; // r14d
  char *Heap; // r15
  _DWORD *v16; // rsi
  __int64 v17; // rbx
  NTSTATUS v18; // r8d
  unsigned __int64 v19; // rdx
  ULONG v20; // ecx
  ULONG v22; // eax
  _DWORD *v23; // r8
  __int64 v24; // r9
  _DWORD *v25; // rax
  __int16 v26[2]; // [rsp+30h] [rbp-38h] BYREF
  ULONG ReturnLength; // [rsp+34h] [rbp-34h] BYREF
  int v28; // [rsp+38h] [rbp-30h]
  ULONG v29; // [rsp+3Ch] [rbp-2Ch] BYREF
  __int64 InputBuffer; // [rsp+40h] [rbp-28h] BYREF
  char *v31; // [rsp+48h] [rbp-20h]
  _DWORD *v32; // [rsp+50h] [rbp-18h]
  char v33; // [rsp+B0h] [rbp+48h]
  unsigned int v36; // [rsp+C8h] [rbp+60h]

  v36 = a4;
  v9 = OutputBuffer;
  v10 = 0LL;
  v11 = 0;
  InputBuffer = a1;
  v12 = 0;
  v31 = 0LL;
  v13 = 0;
  v33 = 0;
  v14 = 0;
  v32 = 0LL;
  Heap = 0LL;
  v28 = 0;
  v16 = 0LL;
  ReturnLength = 0;
  v29 = 0;
  v26[0] = 0;
  if ( a9 == 4 || a9 == 11 )
  {
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, OutputBufferLength);
    if ( !Heap )
      return 8;
    v10 = OutputBuffer + 72;
    v31 = OutputBuffer;
    v16 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 8LL * v36);
    if ( v16 )
    {
      v11 = 0;
      goto LABEL_10;
    }
    v13 = 8;
    goto LABEL_30;
  }
  while ( v11 < a4 )
  {
    HIDWORD(InputBuffer) = a2;
    v17 = (((unsigned __int64)MEMORY[0x7FFE0004] << 32) * (unsigned __int128)(unsigned __int64)(MEMORY[0x7FFE0320] << 8)) >> 64;
    v18 = NtTraceControl(EtwReceiveReplyDataBlock, &InputBuffer, 8u, v9, OutputBufferLength, &ReturnLength);
    v19 = ((((unsigned __int64)MEMORY[0x7FFE0004] << 32) * (unsigned __int128)(unsigned __int64)(MEMORY[0x7FFE0320] << 8)) >> 64)
        - v17;
    if ( a2 <= v19 )
    {
      v13 = 1460;
      goto LABEL_12;
    }
    a2 -= v19;
    v20 = (ReturnLength + 7) & 0xFFFFFFF8;
    ReturnLength = v20;
    if ( !v18 )
    {
      v13 = 0;
LABEL_7:
      if ( !a3 )
      {
        if ( v31 )
        {
          if ( *((_DWORD *)v9 + 1) >= 0xF8u )
          {
            if ( *((_DWORD *)v9 + 19) == 1 )
            {
              v16[2 * v14] = *((_DWORD *)v9 + 8);
              LOWORD(v16[2 * v14 + 1]) = *((_WORD *)v9 + 40);
              HIWORD(v16[2 * v14 + 1]) = *((_WORD *)v9 + 118);
              v20 = ReturnLength;
            }
            if ( ++v14 == 1 )
            {
              v9 = Heap;
            }
            else if ( *((_DWORD *)v9 + 19) != 1 )
            {
              v23 = v10 + 104;
              v24 = 4LL;
              do
              {
                *v23 += *(_DWORD *)((char *)v23 + v9 + 72 - v10);
                ++v23;
                --v24;
              }
              while ( v24 );
            }
          }
        }
        else
        {
          v25 = v9 + 8;
          *((_DWORD *)v9 + 2) = v20;
          v20 = ReturnLength;
          v9 += ReturnLength;
          v32 = v25;
          OutputBufferLength -= ReturnLength;
        }
      }
      v12 += v20;
      goto LABEL_9;
    }
    v22 = RtlNtStatusToDosError(v18);
    v13 = v22;
    if ( !v22 )
    {
      v20 = ReturnLength;
      goto LABEL_7;
    }
    if ( v22 != 122 )
      break;
    v12 += ReturnLength;
    v33 = 1;
LABEL_9:
    v11 = ++v28;
LABEL_10:
    a4 = v36;
  }
  if ( v14 )
  {
    if ( *((_DWORD *)v10 + 1) == 1 )
    {
      v13 = NtTraceControl(EtwGetPrivateSessionTraceHandle, v16, 8 * v14, v26, 2u, &v29);
      if ( !v13 && v29 == 2 )
        *((_WORD *)v10 + 4) = v26[0];
    }
  }
  *a7 = v28;
  *a8 = v12;
  if ( v32 )
    *v32 = 0;
  if ( !v13 && v33 )
    v13 = 122;
LABEL_12:
  if ( Heap )
LABEL_30:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  if ( v16 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v16);
  return v13;
}
