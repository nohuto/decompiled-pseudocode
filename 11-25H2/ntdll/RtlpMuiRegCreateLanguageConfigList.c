/*
 * XREFs of RtlpMuiRegCreateLanguageConfigList @ 0x18008C6FC
 * Callers:
 *     RtlpMuiRegDupLanguageConfigList @ 0x18008743C (RtlpMuiRegDupLanguageConfigList.c)
 *     RtlpLoadLanguageConfigList @ 0x18008C150 (RtlpLoadLanguageConfigList.c)
 *     RtlpPopulateLanguageConfigList @ 0x18008C780 (RtlpPopulateLanguageConfigList.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
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
  Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, v4);
  if ( Heap )
  {
    *(_WORD *)(Heap + 4) = 0;
    *(_QWORD *)(Heap + 8) = Heap + 16;
    *(_DWORD *)Heap = v4;
    *(_WORD *)(Heap + 6) = v2;
  }
  return Heap;
}
