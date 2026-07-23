/*
 * XREFs of CsrAllocateCaptureBuffer @ 0x1800240C0
 * Callers:
 *     CsrpClientConnectToServer @ 0x180023D80 (CsrpClientConnectToServer.c)
 *     CsrCaptureMessageMultiUnicodeStringsInPlace @ 0x180023E50 (CsrCaptureMessageMultiUnicodeStringsInPlace.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

_DWORD *__fastcall CsrAllocateCaptureBuffer(unsigned int a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // esi
  _DWORD *Heap; // rax
  _DWORD *v5; // rdi
  _DWORD *result; // rax

  v2 = a1;
  if ( LdrpIsSecureProcess )
    return 0LL;
  if ( a2 >= 0x7FFFFFDC )
    return 0LL;
  if ( a1 > 0xFFFFFFF )
    return 0LL;
  if ( 8 * a1 >= 2147483612 - a2 )
    return 0LL;
  if ( a1 + 1 >= (2147483612 - a2 - 8 * a1) / 3 )
    return 0LL;
  v3 = (a2 + 35 + 11 * a1) & 0xFFFFFFFC;
  Heap = RtlAllocateHeap(CsrPortHeap, CsrPortBaseTag, v3);
  v5 = Heap;
  if ( !Heap )
    return 0LL;
  Heap[4] = 0;
  *Heap = v3;
  memset_thunk_772440563353939046(Heap + 8, 0, 8 * v2);
  result = v5;
  *((_QWORD *)v5 + 3) = &v5[2 * v2 + 8];
  return result;
}
