/*
 * XREFs of RtlpSetBlockInfo @ 0x180094F5C
 * Callers:
 *     RtlpPushPageDescriptor @ 0x180092F14 (RtlpPushPageDescriptor.c)
 *     RtlpSetBlockInfo @ 0x180094F5C (RtlpSetBlockInfo.c)
 *     RtlpLeakCallbackRoutine @ 0x1800F7800 (RtlpLeakCallbackRoutine.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     RtlpSetBlockInfo @ 0x180094F5C (RtlpSetBlockInfo.c)
 *     RtlpInitializeMap @ 0x180095D80 (RtlpInitializeMap.c)
 */

unsigned __int64 __fastcall RtlpSetBlockInfo(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  __int64 *v12; // rbx
  unsigned __int64 v13; // r15
  __int64 Heap; // rax

  result = a3 + a2 - 1;
  if ( result >= a1[1] && a2 <= a1[2] )
  {
    v9 = a2 - a1[1];
    if ( a2 <= a1[1] )
      v10 = 0LL;
    else
      v10 = v9 / *a1;
    v11 = (v9 + a3 - 1) % *a1;
    v12 = &a1[v10 + 7];
    v13 = (v9 + a3 - 1) / *a1;
    result = 255LL;
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
              result = DbgPrint("Error\n", v11);
          }
          *v12 = a4;
        }
        else
        {
          v11 = v10 >> 3;
          result = v10 & 7;
          *((_BYTE *)a1 + (v10 >> 3) + 24) |= 1 << result;
        }
      }
      else
      {
        if ( !*v12 )
        {
          Heap = RtlAllocateHeap((char *)RtlpLeakHeap, 0, 0x840uLL);
          *v12 = Heap;
          if ( !Heap )
            return DbgPrint("Not enough memory to complete\n");
          RtlpInitializeMap(Heap, a1);
          *(_QWORD *)(*v12 + 8) = a1[1] + *a1 * v10;
          *(_QWORD *)(*v12 + 16) = a1[1] - 1LL + *a1 * (v10 + 1);
        }
        result = RtlpSetBlockInfo(*v12, a2, a3, a4);
      }
      ++v10;
      ++v12;
    }
  }
  return result;
}
