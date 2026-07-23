/*
 * XREFs of RtlQueryModuleInformation @ 0x180136530
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     NtQuerySystemInformation @ 0x180160710 (NtQuerySystemInformation.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlQueryModuleInformation(unsigned int *a1, int a2, __int64 a3)
{
  unsigned int v6; // edi
  __int64 result; // rax
  unsigned int *Heap; // rbx
  ULONG i; // r8d
  NTSTATUS v10; // eax
  unsigned int v11; // esi
  unsigned int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  _OWORD *v16; // rdx
  __int64 v17; // rcx
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  ULONG ReturnLength[4]; // [rsp+20h] [rbp-178h] BYREF
  _BYTE SystemInformation[4]; // [rsp+30h] [rbp-168h] BYREF
  int v22; // [rsp+34h] [rbp-164h]

  v22 = 0;
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
      v11 = v10;
      if ( ((v10 + 0x80000000) & 0x80000000) == 0 && v10 != -1073741820 )
        break;
      if ( !a3 )
      {
        v11 = 0;
        v12 = a2 * ((ReturnLength[0] - 8) / 0x128);
LABEL_28:
        *a1 = v12;
        break;
      }
      if ( v10 >= 0 )
      {
        v12 = a2 * *Heap;
        if ( *a1 >= v12 )
        {
          if ( *Heap )
          {
            do
            {
              if ( a2 == 8 )
              {
                *(_QWORD *)(a3 + 8LL * v6) = *(_QWORD *)&Heap[74 * v6 + 6];
              }
              else
              {
                v13 = 74LL * v6;
                v14 = a3 + 272LL * v6;
                *(_QWORD *)v14 = *(_QWORD *)&Heap[v13 + 6];
                *(_DWORD *)(v14 + 8) = Heap[v13 + 8];
                *(_WORD *)(v14 + 12) = HIWORD(Heap[v13 + 11]);
                v15 = v13 * 4 + 48;
                v16 = (_OWORD *)(v14 + 14);
                v17 = 2LL;
                v18 = (_OWORD *)((char *)Heap + v15);
                do
                {
                  *v16 = *v18;
                  v16[1] = v18[1];
                  v16[2] = v18[2];
                  v16[3] = v18[3];
                  v16[4] = v18[4];
                  v16[5] = v18[5];
                  v16[6] = v18[6];
                  v16 += 8;
                  v19 = v18[7];
                  v18 += 8;
                  *(v16 - 1) = v19;
                  --v17;
                }
                while ( v17 );
              }
              ++v6;
            }
            while ( v6 < *Heap );
          }
        }
        else
        {
          v11 = -1073741789;
        }
        goto LABEL_28;
      }
      if ( Heap != (unsigned int *)SystemInformation )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, ReturnLength[0]);
      if ( !Heap )
        return 3221225626LL;
    }
    if ( Heap != (unsigned int *)SystemInformation )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    return v11;
  }
  return result;
}
