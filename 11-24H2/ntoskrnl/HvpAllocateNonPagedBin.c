/*
 * XREFs of HvpAllocateNonPagedBin @ 0x140A60388
 * Callers:
 *     HvpAddBin @ 0x140980584 (HvpAddBin.c)
 *     HvpDropPagedBins @ 0x140A60168 (HvpDropPagedBins.c)
 *     HvpAllocateBin @ 0x140A60328 (HvpAllocateBin.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     CmpReleaseGlobalQuota @ 0x14087EEC0 (CmpReleaseGlobalQuota.c)
 *     CmpClaimGlobalQuota @ 0x14087F12C (CmpClaimGlobalQuota.c)
 *     MmAllocateIndependentPagesEx @ 0x140A88F6C (MmAllocateIndependentPagesEx.c)
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
