/*
 * XREFs of RtlAllocateAndInitializeSid @ 0x1800E10D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlAllocateAndInitializeSid(
        __int64 a1,
        unsigned __int8 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 *a11)
{
  int v11; // ebx
  __int64 Heap; // rax

  v11 = a2;
  if ( a2 > 8u )
    return 3221225592LL;
  Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, 4 * (unsigned int)a2 + 8);
  if ( !Heap )
    return 3221225495LL;
  *(_BYTE *)(Heap + 1) = v11;
  *(_BYTE *)Heap = 1;
  *(_DWORD *)(Heap + 2) = *(_DWORD *)a1;
  *(_WORD *)(Heap + 6) = *(_WORD *)(a1 + 4);
  if ( v11 != 1 )
  {
    if ( v11 != 2 )
    {
      switch ( v11 )
      {
        case 3:
          goto LABEL_15;
        case 4:
          goto LABEL_14;
        case 5:
          goto LABEL_13;
        case 6:
          goto LABEL_12;
        case 7:
          goto LABEL_17;
        case 8:
          *(_DWORD *)(Heap + 36) = a10;
LABEL_17:
          *(_DWORD *)(Heap + 32) = a9;
LABEL_12:
          *(_DWORD *)(Heap + 28) = a8;
LABEL_13:
          *(_DWORD *)(Heap + 24) = a7;
LABEL_14:
          *(_DWORD *)(Heap + 20) = a6;
LABEL_15:
          *(_DWORD *)(Heap + 16) = a5;
          break;
        default:
          goto LABEL_5;
      }
    }
    *(_DWORD *)(Heap + 12) = a4;
  }
  *(_DWORD *)(Heap + 8) = a3;
LABEL_5:
  *a11 = Heap;
  return 0LL;
}
