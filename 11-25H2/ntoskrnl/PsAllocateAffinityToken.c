/*
 * XREFs of PsAllocateAffinityToken @ 0x1404D0E40
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x1409F3FBC (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PsAllocateAffinityToken(__int64 *a1)
{
  __int64 Pool2; // rax
  __int64 v3; // rbx
  __int64 v5; // rcx
  unsigned int v6; // eax

  Pool2 = ExAllocatePool2(0x40uLL);
  v3 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v5 = Pool2 + 32;
  *(_QWORD *)(Pool2 + 24) = Pool2 + 32;
  v6 = (unsigned __int16)KiMaximumGroups;
  *(_DWORD *)(v5 + 4) = 0;
  *(_WORD *)v5 = 1;
  *(_WORD *)(v5 + 2) = v6;
  memset_0((void *)(v5 + 8), 0, 8LL * v6);
  *(_QWORD *)v3 = 0LL;
  *(_OWORD *)(v3 + 8) = 0LL;
  *a1 = v3;
  return 0LL;
}
