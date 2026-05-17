/*
 * XREFs of RtlQueryModuleInformation @ 0x180139A70
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     NtQuerySystemInformation @ 0x1801638E0 (NtQuerySystemInformation.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlQueryModuleInformation(unsigned int *a1, int a2, __int64 a3)
{
  unsigned int v6; // edi
  __int64 result; // rax
  unsigned int *Heap; // rbx
  ULONG i; // r8d
  NTSTATUS v10; // eax
  __int64 v11; // r9
  unsigned int v12; // esi
  unsigned int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  _OWORD *v17; // rdx
  __int64 v18; // rcx
  _OWORD *v19; // rax
  __int128 v20; // xmm1
  ULONG ReturnLength[4]; // [rsp+20h] [rbp-178h] BYREF
  _BYTE SystemInformation[4]; // [rsp+30h] [rbp-168h] BYREF
  int v23; // [rsp+34h] [rbp-164h]

  v23 = 0;
  memset_thunk_772440563353939046(SystemInformation, 0, 0x12CuLL);
  v6 = 0;
  if ( a2 == 8 )
  {
    if ( (a3 & 7) != 0 )
      return 3221225713LL;
    goto LABEL_5;
  }
  if ( a2 != 272 )
    return 3221225712LL;
  result = (a3 & 7) != 0 ? 0xC00000F1 : 0;
  if ( (a3 & 7) == 0 )
  {
LABEL_5:
    Heap = (unsigned int *)SystemInformation;
    for ( i = 304; ; i = ReturnLength[0] )
    {
      ReturnLength[0] = 0;
      v10 = NtQuerySystemInformation(SystemModuleInformation, Heap, i, ReturnLength);
      v12 = v10;
      if ( ((v10 + 0x80000000) & 0x80000000) == 0 && v10 != -1073741820 )
        break;
      if ( !a3 )
      {
        v12 = 0;
        v13 = a2 * ((ReturnLength[0] - 8) / 0x128);
LABEL_29:
        *a1 = v13;
        break;
      }
      if ( v10 >= 0 )
      {
        v13 = a2 * *Heap;
        if ( *a1 >= v13 )
        {
          if ( *Heap )
          {
            v11 = 128LL;
            do
            {
              if ( a2 == 8 )
              {
                *(_QWORD *)(a3 + 8LL * v6) = *(_QWORD *)&Heap[74 * v6 + 6];
              }
              else
              {
                v14 = 74LL * v6;
                v15 = a3 + 272LL * v6;
                *(_QWORD *)v15 = *(_QWORD *)&Heap[v14 + 6];
                *(_DWORD *)(v15 + 8) = Heap[v14 + 8];
                *(_WORD *)(v15 + 12) = HIWORD(Heap[v14 + 11]);
                v16 = v14 * 4 + 48;
                v17 = (_OWORD *)(v15 + 14);
                v18 = 2LL;
                v19 = (_OWORD *)((char *)Heap + v16);
                do
                {
                  *v17 = *v19;
                  v17[1] = v19[1];
                  v17[2] = v19[2];
                  v17[3] = v19[3];
                  v17[4] = v19[4];
                  v17[5] = v19[5];
                  v17[6] = v19[6];
                  v17 += 8;
                  v20 = v19[7];
                  v19 += 8;
                  *(v17 - 1) = v20;
                  --v18;
                }
                while ( v18 );
              }
              ++v6;
            }
            while ( v6 < *Heap );
          }
        }
        else
        {
          v12 = -1073741789;
        }
        goto LABEL_29;
      }
      if ( Heap != (unsigned int *)SystemInformation )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap, v11);
      Heap = (unsigned int *)RtlAllocateHeap(
                               (char *)NtCurrentPeb()->ProcessHeap,
                               NtdllBaseTag + 1572864,
                               ReturnLength[0]);
      if ( !Heap )
        return 3221225626LL;
    }
    if ( Heap != (unsigned int *)SystemInformation )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap, v11);
    return v12;
  }
  return result;
}
