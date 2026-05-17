/*
 * XREFs of RtlAllocateAndInitializeSidEx @ 0x18013A5D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlLengthRequiredSid @ 0x180060A20 (RtlLengthRequiredSid.c)
 */

__int64 __fastcall RtlAllocateAndInitializeSidEx(__int64 a1, unsigned __int8 a2, _DWORD *a3, __int64 *a4)
{
  __int64 v4; // rsi
  int v9; // ebx
  unsigned int v10; // eax
  __int64 Heap; // rax
  __int64 v12; // r8
  __int64 v13; // rdx

  v4 = a2;
  if ( a2 > 0xFu )
    return 3221225485LL;
  v9 = NtdllBaseTag;
  v10 = RtlLengthRequiredSid(a2);
  Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, v9 + 1310720, v10);
  if ( !Heap )
    return 3221225495LL;
  *(_BYTE *)Heap = 1;
  *(_DWORD *)(Heap + 2) = *(_DWORD *)a1;
  *(_WORD *)(Heap + 6) = *(_WORD *)(a1 + 4);
  *(_BYTE *)(Heap + 1) = v4;
  if ( (_BYTE)v4 )
  {
    v12 = v4;
    v13 = Heap - (_QWORD)a3;
    do
    {
      *(_DWORD *)((char *)a3 + v13 + 8) = *a3;
      ++a3;
      --v12;
    }
    while ( v12 );
  }
  *a4 = Heap;
  return 0LL;
}
