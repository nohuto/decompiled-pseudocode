/*
 * XREFs of RtlpMuiRegCreateLanguageConfigList @ 0x180034D6C
 * Callers:
 *     RtlpLoadLanguageConfigList @ 0x1800347C0 (RtlpLoadLanguageConfigList.c)
 *     RtlpPopulateLanguageConfigList @ 0x180034DF0 (RtlpPopulateLanguageConfigList.c)
 *     RtlpMuiRegDupLanguageConfigList @ 0x1800EC278 (RtlpMuiRegDupLanguageConfigList.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlpMuiRegCreateLanguageConfigList(int a1)
{
  __int64 v1; // rax
  __int16 v2; // di
  unsigned __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 Heap; // rcx

  v1 = 4LL;
  if ( a1 >= 1 )
    v1 = (unsigned int)a1;
  v2 = v1;
  v3 = 12 * v1;
  if ( v3 > 0xFFFFFFFF )
    return 0LL;
  v4 = v3 + 16;
  if ( (unsigned int)v3 >= 0xFFFFFFF0 )
    return 0LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v4);
  if ( Heap )
  {
    *(_WORD *)(Heap + 4) = 0;
    *(_QWORD *)(Heap + 8) = Heap + 16;
    *(_DWORD *)Heap = v4;
    *(_WORD *)(Heap + 6) = v2;
  }
  return Heap;
}
