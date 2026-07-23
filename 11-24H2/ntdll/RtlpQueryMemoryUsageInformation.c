/*
 * XREFs of RtlpQueryMemoryUsageInformation @ 0x180140C8C
 * Callers:
 *     RtlQueryHeapInformation @ 0x18002AB10 (RtlQueryHeapInformation.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1801144DC (RtlpQueryExtendedHeapInformation.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpQueryMemoryUsageInformation(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  _QWORD *v4; // rdi
  SIZE_T v9; // rbx
  _QWORD *v10; // rcx
  _QWORD *Heap; // rax
  int v12; // ebx
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rsi
  _QWORD BaseAddress[2]; // [rsp+20h] [rbp-60h] BYREF
  int v20; // [rsp+30h] [rbp-50h]
  SIZE_T Size; // [rsp+B8h] [rbp+38h] BYREF

  Size = 0LL;
  v4 = BaseAddress;
  if ( a2 && a3 >= 0x28 && *(_WORD *)a2 == 1 )
  {
    v9 = 88LL;
    memset_thunk_772440563353939046(BaseAddress, 0, 0x58uLL);
    BaseAddress[0] = -1LL;
    v10 = BaseAddress;
    BaseAddress[1] = a1;
    v20 = 2;
    while ( 1 )
    {
      v12 = RtlpQueryExtendedHeapInformation((__int64)v10, v9, &Size);
      if ( v12 >= 0 )
        break;
      if ( v12 != -1073741789 )
        goto LABEL_23;
      if ( v4 != BaseAddress )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
      v9 = Size;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Size);
      v4 = Heap;
      if ( !Heap )
      {
        v12 = -1073741670;
        goto LABEL_23;
      }
      memset_thunk_772440563353939046(Heap, 0, v9);
      *v4 = -1LL;
      v10 = v4;
      v4[1] = a1;
      *((_DWORD *)v4 + 4) = 2;
    }
    if ( a1 )
    {
      *(_OWORD *)(a2 + 16) = 0LL;
      *(_QWORD *)(a2 + 32) = 0LL;
      *(_QWORD *)(a2 + 16) = v4[5];
      *(_QWORD *)(a2 + 24) = v4[8];
      *(_QWORD *)(a2 + 32) = v4[7];
      *(_QWORD *)(a2 + 8) = 1LL;
      if ( a4 )
        *a4 = 40LL;
    }
    else
    {
      v13 = *((unsigned int *)v4 + 14);
      v14 = (unsigned int)(24 * v13 + 16);
      if ( a4 )
        *a4 = v14;
      if ( a3 >= v14 )
      {
        *(_QWORD *)(a2 + 8) = v13;
        v15 = v13;
        v16 = v4[8];
        if ( (_DWORD)v13 )
        {
          v17 = a2 + 16;
          do
          {
            *(_OWORD *)v17 = 0LL;
            *(_QWORD *)(v17 + 16) = 0LL;
            *(_QWORD *)v17 = *(_QWORD *)((char *)v4 + v16);
            v17 += 24LL;
            *(_QWORD *)(v17 - 16) = *(_QWORD *)((char *)v4 + v16 + 24);
            *(_QWORD *)(v17 - 8) = *(_QWORD *)((char *)v4 + v16 + 16);
            v16 = *(_QWORD *)((char *)v4 + v16 + 40);
            --v15;
          }
          while ( v15 );
        }
        v12 = 0;
      }
      else
      {
        v12 = -1073741789;
      }
    }
LABEL_23:
    if ( v4 != BaseAddress )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v12;
}
