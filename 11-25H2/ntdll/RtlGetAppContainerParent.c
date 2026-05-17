/*
 * XREFs of RtlGetAppContainerParent @ 0x180084AF0
 * Callers:
 *     RtlDefaultNpAcl @ 0x180065B00 (RtlDefaultNpAcl.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180084060 (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlCompareMemory @ 0x1801674A0 (RtlCompareMemory.c)
 */

__int64 __fastcall RtlGetAppContainerParent(__int64 a1, __int64 *a2)
{
  __int64 Heap; // rax
  _DWORD *v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r8

  *a2 = 0LL;
  if ( *(_BYTE *)(a1 + 1) < 2u
    || *(_BYTE *)a1 != 1
    || RtlCompareMemory((const void *)(a1 + 2), &RtlpAppPackageAuthority, 6uLL) != 6
    || *(_DWORD *)(a1 + 8) != 2
    || *(_BYTE *)(a1 + 1) != 12 )
  {
    return 3221225485LL;
  }
  Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, 0x28uLL);
  if ( !Heap )
    return 3221225626LL;
  *(_WORD *)Heap = 2049;
  v6 = (_DWORD *)(Heap + 8);
  v7 = a1 - Heap;
  *(_DWORD *)(Heap + 2) = RtlpAppPackageAuthority;
  v8 = 8LL;
  *(_WORD *)(Heap + 6) = 3840;
  do
  {
    *v6 = *(_DWORD *)((char *)v6 + v7);
    ++v6;
    --v8;
  }
  while ( v8 );
  *a2 = Heap;
  return 0LL;
}
