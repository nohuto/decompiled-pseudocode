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
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        _DWORD *a7,
        _DWORD *a8,
        int a9)
{
  __int64 v9; // rdi
  __int64 v10; // r13
  unsigned int v11; // eax
  int v12; // r12d
  unsigned int v13; // ebx
  unsigned int v14; // r14d
  __int64 Heap; // r15
  __int64 v16; // rsi
  __int64 v17; // rbx
  NTSTATUS v18; // r8d
  unsigned __int64 v19; // rdx
  unsigned int v20; // ecx
  ULONG v22; // eax
  _DWORD *v23; // r8
  __int64 v24; // r9
  _DWORD *v25; // rax
  unsigned int v26; // [rsp+34h] [rbp-34h]
  int v27; // [rsp+38h] [rbp-30h]
  __int64 v28; // [rsp+40h] [rbp-28h] BYREF
  __int64 v29; // [rsp+48h] [rbp-20h]
  _DWORD *v30; // [rsp+50h] [rbp-18h]
  char v31; // [rsp+B0h] [rbp+48h]
  unsigned int v34; // [rsp+C8h] [rbp+60h]

  v34 = a4;
  v9 = a5;
  v10 = 0LL;
  v11 = 0;
  v28 = a1;
  v12 = 0;
  v29 = 0LL;
  v13 = 0;
  v31 = 0;
  v14 = 0;
  v30 = 0LL;
  Heap = 0LL;
  v27 = 0;
  v16 = 0LL;
  v26 = 0;
  if ( a9 == 4 || a9 == 11 )
  {
    Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, a6);
    if ( !Heap )
      return 8;
    v10 = a5 + 72;
    v29 = a5;
    v16 = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 8LL * v34);
    if ( v16 )
    {
      v11 = 0;
      goto LABEL_10;
    }
    v13 = 8;
    goto LABEL_30;
  }
  while ( v11 < (unsigned int)a4 )
  {
    HIDWORD(v28) = a2;
    v17 = (((unsigned __int64)MEMORY[0x7FFE0004] << 32) * (unsigned __int128)(unsigned __int64)(MEMORY[0x7FFE0320] << 8)) >> 64;
    v18 = NtTraceControl(19LL, &v28, 8LL);
    v19 = ((((unsigned __int64)MEMORY[0x7FFE0004] << 32) * (unsigned __int128)(unsigned __int64)(MEMORY[0x7FFE0320] << 8)) >> 64)
        - v17;
    if ( a2 <= v19 )
    {
      v13 = 1460;
      goto LABEL_12;
    }
    a2 -= v19;
    v20 = (v26 + 7) & 0xFFFFFFF8;
    v26 = v20;
    if ( !v18 )
    {
      v13 = 0;
LABEL_7:
      if ( !a3 )
      {
        if ( v29 )
        {
          if ( *(_DWORD *)(v9 + 4) >= 0xF8u )
          {
            if ( *(_DWORD *)(v9 + 76) == 1 )
            {
              *(_DWORD *)(v16 + 8LL * v14) = *(_DWORD *)(v9 + 32);
              *(_WORD *)(v16 + 8LL * v14 + 4) = *(_WORD *)(v9 + 80);
              *(_WORD *)(v16 + 8LL * v14 + 6) = *(_WORD *)(v9 + 236);
              v20 = v26;
            }
            if ( ++v14 == 1 )
            {
              v9 = Heap;
            }
            else if ( *(_DWORD *)(v9 + 76) != 1 )
            {
              v23 = (_DWORD *)(v10 + 104);
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
          v25 = (_DWORD *)(v9 + 8);
          *(_DWORD *)(v9 + 8) = v20;
          v20 = v26;
          v9 += v26;
          v30 = v25;
          a6 -= v26;
        }
      }
      v12 += v20;
      goto LABEL_9;
    }
    v22 = RtlNtStatusToDosError(v18);
    v13 = v22;
    if ( !v22 )
    {
      v20 = v26;
      goto LABEL_7;
    }
    if ( v22 != 122 )
      break;
    v12 += v26;
    v31 = 1;
LABEL_9:
    v11 = ++v27;
LABEL_10:
    a4 = v34;
  }
  if ( v14 && *(_DWORD *)(v10 + 4) == 1 )
    v13 = NtTraceControl(38LL, v16, 8 * v14);
  *a7 = v27;
  *a8 = v12;
  if ( v30 )
    *v30 = 0;
  if ( !v13 && v31 )
    v13 = 122;
LABEL_12:
  if ( Heap )
LABEL_30:
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap, a4);
  if ( v16 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v16, a4);
  return v13;
}
