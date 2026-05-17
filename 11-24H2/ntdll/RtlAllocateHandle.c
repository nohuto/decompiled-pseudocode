/*
 * XREFs of RtlAllocateHandle @ 0x1800AEB70
 * Callers:
 *     RtlpInsertStringAtom @ 0x1800AEAC0 (RtlpInsertStringAtom.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlReAllocateHeap @ 0x1800A0E30 (RtlReAllocateHeap.c)
 *     ZwAllocateVirtualMemory @ 0x180161F90 (ZwAllocateVirtualMemory.c)
 */

unsigned __int64 *__fastcall RtlAllocateHandle(__int64 a1, _DWORD *a2)
{
  unsigned __int64 *v2; // rsi
  unsigned __int64 *v5; // rcx
  unsigned __int64 *v6; // r8
  unsigned int v8; // ecx
  int v9; // eax
  __int64 v10; // r8
  unsigned int v11; // r15d
  void *ProcessHeap; // rcx
  __int64 v13; // r14
  __int64 v14; // rax
  char *v15; // rdx
  unsigned __int64 *v16; // r14
  unsigned __int64 v17; // rcx
  unsigned __int64 *v18; // rdx
  __int64 v19; // rcx
  __int64 v20[7]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 *v21; // [rsp+70h] [rbp+8h] BYREF
  __int64 v22; // [rsp+80h] [rbp+18h] BYREF
  __int64 v23; // [rsp+88h] [rbp+20h] BYREF

  v2 = (unsigned __int64 *)(a1 + 16);
  v22 = 0LL;
  v23 = 0LL;
  v20[0] = 0LL;
  if ( !*(_QWORD *)(a1 + 16) )
  {
    if ( *(_DWORD *)(a1 + 8) )
    {
      v8 = *(_DWORD *)(a1 + 12);
      if ( v8 <= *(_DWORD *)a1 )
      {
        v9 = *(_DWORD *)(a1 + 4);
        v10 = *(_QWORD *)(a1 + 24);
        v11 = v8 * v9;
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
        v13 = v11 + 8 * v9;
        v14 = v10
            ? RtlReAllocateHeap((__int64)ProcessHeap, 8u, v10, (unsigned int)v13)
            : RtlAllocateHeap((__int64)ProcessHeap, 8u, v11 + 8 * v9);
        v22 = v14;
        if ( v14 )
        {
          *(_DWORD *)(a1 + 12) += 8;
          v15 = (char *)(v13 + v14);
          v16 = (unsigned __int64 *)(a1 + 32);
          v17 = v14 + v11;
          *(_QWORD *)(a1 + 24) = v14;
          v21 = (unsigned __int64 *)v17;
          *(_QWORD *)(a1 + 32) = v15;
          goto LABEL_11;
        }
      }
    }
    else
    {
      v18 = *(unsigned __int64 **)(a1 + 32);
      if ( v18 )
      {
        v16 = (unsigned __int64 *)(a1 + 32);
      }
      else
      {
        v23 = (unsigned int)(*(_DWORD *)a1 * *(_DWORD *)(a1 + 4));
        if ( (int)ZwAllocateVirtualMemory(-1LL, &v22, 0LL, &v23, 0x2000, 4) < 0 )
          return 0LL;
        v18 = (unsigned __int64 *)v22;
        v16 = (unsigned __int64 *)(a1 + 32);
        v19 = v22 + v23;
        *(_QWORD *)(a1 + 24) = v22;
        *(_QWORD *)(a1 + 40) = v19;
        *(_QWORD *)(a1 + 32) = v18;
      }
      v21 = v18;
      if ( (unsigned __int64)v18 < *(_QWORD *)(a1 + 40) )
      {
        v20[0] = 4096LL;
        if ( (int)ZwAllocateVirtualMemory(-1LL, &v21, 0LL, v20, 4096, 4) >= 0 )
        {
          v17 = (unsigned __int64)v21;
          v15 = (char *)v21 + v20[0];
          *(_QWORD *)(a1 + 32) = (char *)v21 + v20[0];
LABEL_11:
          if ( v17 < (unsigned __int64)v15 )
          {
            do
            {
              *v2 = v17;
              v2 = v21;
              v17 = (unsigned __int64)v21 + *(unsigned int *)(a1 + 4);
              v21 = (unsigned __int64 *)v17;
            }
            while ( v17 < *v16 );
          }
          goto LABEL_2;
        }
      }
    }
    return 0LL;
  }
LABEL_2:
  v5 = *(unsigned __int64 **)(a1 + 16);
  v21 = v5;
  *(_QWORD *)(a1 + 16) = *v5;
  *v5 = 0LL;
  v6 = v21;
  if ( a2 )
    *a2 = ((__int64)v21 - *(_QWORD *)(a1 + 24)) / *(unsigned int *)(a1 + 4);
  return v6;
}
