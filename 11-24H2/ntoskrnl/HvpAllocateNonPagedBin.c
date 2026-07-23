/*
 * XREFs of HvpAllocateNonPagedBin @ 0x140A588D8
 * Callers:
 *     HvpAddBin @ 0x140968D94 (HvpAddBin.c)
 *     HvpDropPagedBins @ 0x140A586B8 (HvpDropPagedBins.c)
 *     HvpAllocateBin @ 0x140A58878 (HvpAllocateBin.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpReleaseGlobalQuota @ 0x140882D70 (CmpReleaseGlobalQuota.c)
 *     CmpClaimGlobalQuota @ 0x140882FDC (CmpClaimGlobalQuota.c)
 *     MmAllocateIndependentPagesEx @ 0x140A8536C (MmAllocateIndependentPagesEx.c)
 */

__int64 __fastcall HvpAllocateNonPagedBin(__int64 a1, __int64 a2, _QWORD *a3)
{
  size_t v3; // rdi
  unsigned int v5; // ebx
  void *IndependentPages; // rax
  void *v7; // rsi

  v3 = (unsigned int)a2;
  v5 = 0;
  if ( CmpClaimGlobalQuota((unsigned int)a2, a2) )
  {
    IndependentPages = (void *)MmAllocateIndependentPagesEx(v3, 0xFFFFFFFFLL, 0LL, 0LL);
    v7 = IndependentPages;
    if ( IndependentPages )
    {
      memset_0(IndependentPages, 0, v3);
      *a3 = v7;
    }
    else
    {
      v5 = -1073741670;
      CmpReleaseGlobalQuota(v3);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
