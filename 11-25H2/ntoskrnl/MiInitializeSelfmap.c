/*
 * XREFs of MiInitializeSelfmap @ 0x14040F5E4
 * Callers:
 *     MiAllocateProcessShadow @ 0x140A47EB0 (MiAllocateProcessShadow.c)
 *     MiAllocateTopLevelPage @ 0x140A480DC (MiAllocateTopLevelPage.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14040FDB8 (MiUnmapPageInHyperSpaceWorker.c)
 */

__int64 __fastcall MiInitializeSelfmap(__int64 a1)
{
  ULONG_PTR v2; // rbx
  __int64 v3; // rdx
  ULONG_PTR *v4; // rdi
  unsigned __int8 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  v2 = MiMakeValidPte(0LL, a1, -1879048188) & 0xFFFFFFFFFFFFFEFFuLL;
  v4 = (ULONG_PTR *)(MiMapPageInHyperSpaceWorker(a1, &v6, 0x80000000) + 3944);
  if ( _bittest64(&MiFlags, 0x24u) && (v2 & 0x20) == 0 && (unsigned __int64)v4 >= 0xFFFFF6C000000000uLL )
    MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v4, v2, 128);
  LOBYTE(v3) = v6;
  *v4 = v2;
  return MiUnmapPageInHyperSpaceWorker(v4, v3, 0x80000000LL);
}
