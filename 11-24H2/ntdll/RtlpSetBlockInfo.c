/*
 * XREFs of RtlpSetBlockInfo @ 0x180021E9C
 * Callers:
 *     RtlpPushPageDescriptor @ 0x18001FE54 (RtlpPushPageDescriptor.c)
 *     RtlpSetBlockInfo @ 0x180021E9C (RtlpSetBlockInfo.c)
 *     RtlpLeakCallbackRoutine @ 0x1800F03A0 (RtlpLeakCallbackRoutine.c)
 * Callees:
 *     DbgPrint @ 0x18000F790 (DbgPrint.c)
 *     RtlpSetBlockInfo @ 0x180021E9C (RtlpSetBlockInfo.c)
 *     RtlpInitializeMap @ 0x180022B44 (RtlpInitializeMap.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 */

int __fastcall RtlpSetBlockInfo(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rbx
  unsigned __int64 v13; // r15
  PVOID Heap; // rax

  v5 = a3 + a2 - 1;
  if ( v5 >= a1[1] && a2 <= a1[2] )
  {
    v9 = a2 - a1[1];
    if ( a2 <= a1[1] )
      v10 = 0LL;
    else
      v10 = v9 / *a1;
    v11 = (v9 + a3 - 1) % *a1;
    v12 = &a1[v10 + 7];
    v13 = (v9 + a3 - 1) / *a1;
    LODWORD(v5) = 255;
    if ( v13 > 0xFF )
      v13 = 255LL;
    while ( v10 <= v13 )
    {
      if ( *a1 == 4096LL )
      {
        if ( a4 )
        {
          if ( *v12 )
          {
            if ( *v12 != a4 )
              LODWORD(v5) = DbgPrint("Error\n", v11);
          }
          *v12 = a4;
        }
        else
        {
          v11 = v10 >> 3;
          LODWORD(v5) = v10 & 7;
          *((_BYTE *)a1 + (v10 >> 3) + 24) |= 1 << v5;
        }
      }
      else
      {
        if ( !*v12 )
        {
          Heap = RtlAllocateHeap(RtlpLeakHeap, 0, 0x840uLL);
          *v12 = Heap;
          if ( !Heap )
          {
            LODWORD(v5) = DbgPrint("Not enough memory to complete\n");
            return v5;
          }
          RtlpInitializeMap(Heap, a1);
          *(_QWORD *)(*v12 + 8LL) = a1[1] + *a1 * v10;
          *(_QWORD *)(*v12 + 16LL) = a1[1] - 1LL + *a1 * (v10 + 1);
        }
        LODWORD(v5) = RtlpSetBlockInfo(*v12, a2, a3, a4);
      }
      ++v10;
      ++v12;
    }
  }
  return v5;
}
