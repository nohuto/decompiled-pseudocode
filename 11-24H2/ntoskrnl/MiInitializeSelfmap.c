/*
 * XREFs of MiInitializeSelfmap @ 0x1404A6DD0
 * Callers:
 *     MiAllocateProcessShadow @ 0x140A5A1B0 (MiAllocateProcessShadow.c)
 *     MiAllocateTopLevelPage @ 0x140A5A2FC (MiAllocateTopLevelPage.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14021F1A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140266854 (MiUnmapPageInHyperSpaceWorker.c)
 */

__int64 __fastcall MiInitializeSelfmap(__int64 a1)
{
  ULONG_PTR v2; // rbx
  ULONG_PTR *v3; // rdi
  unsigned __int8 v4; // dl
  unsigned __int8 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  v2 = MiMakeValidPte(0LL, a1, -1879048188) & 0xFFFFFFFFFFFFFEFFuLL;
  v3 = (ULONG_PTR *)(MiMapPageInHyperSpaceWorker(a1, &v6, 0x80000000LL) + 3944);
  if ( _bittest64(&MiFlags, 0x24u) && (v2 & 0x20) == 0 && (unsigned __int64)v3 >= 0xFFFFF6C000000000uLL )
    MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v3, v2, 128);
  v4 = v6;
  *v3 = v2;
  return MiUnmapPageInHyperSpaceWorker((unsigned __int64)v3, v4, 0x80000000);
}
