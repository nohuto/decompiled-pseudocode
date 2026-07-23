/*
 * XREFs of PfpCopyUserPfnPrioRequest @ 0x1408F61E0
 * Callers:
 *     PfpPfnPrioRequest @ 0x1408F5FDC (PfpPfnPrioRequest.c)
 * Callees:
 *     MmGetHighestPhysicalPage @ 0x1404684E4 (MmGetHighestPhysicalPage.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpCopyUserPfnPrioRequest(__int64 a1, int a2, int a3, _QWORD *a4, char a5, int a6)
{
  unsigned int v9; // r15d
  _QWORD *v10; // r14
  unsigned __int64 v11; // rdi
  unsigned int v12; // r8d
  unsigned int v13; // r10d
  __int64 Pool2; // rax
  size_t v15; // r8
  void *v16; // rcx
  unsigned __int64 i; // rdx

  v9 = 0;
  v10 = 0LL;
  if ( a5 && a2 && (a1 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  v11 = *(_QWORD *)(a1 + 8);
  if ( v11 > 0xFFFFFFFF || 24 * (v11 + 8) > 0xFFFFFFFF || !v11 || v11 > MmGetHighestPhysicalPage(0) + 1 || v12 > v13 )
  {
LABEL_24:
    v9 = -1073741811;
    goto LABEL_21;
  }
  Pool2 = ExAllocatePool2(0x40uLL, v12, 0x42506650u);
  v10 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_OWORD *)Pool2 = *(_OWORD *)a1;
    *(_OWORD *)(Pool2 + 16) = *(_OWORD *)(a1 + 16);
    *(_OWORD *)(Pool2 + 32) = *(_OWORD *)(a1 + 32);
    *(_OWORD *)(Pool2 + 48) = *(_OWORD *)(a1 + 48);
    *(_OWORD *)(Pool2 + 64) = *(_OWORD *)(a1 + 64);
    *(_OWORD *)(Pool2 + 80) = *(_OWORD *)(a1 + 80);
    *(_OWORD *)(Pool2 + 96) = *(_OWORD *)(a1 + 96);
    *(_OWORD *)(Pool2 + 112) = *(_OWORD *)(a1 + 112);
    *(_OWORD *)(Pool2 + 128) = *(_OWORD *)(a1 + 128);
    *(_OWORD *)(Pool2 + 144) = *(_OWORD *)(a1 + 144);
    *(_OWORD *)(Pool2 + 160) = *(_OWORD *)(a1 + 160);
    *(_OWORD *)(Pool2 + 176) = *(_OWORD *)(a1 + 176);
    if ( *(_DWORD *)Pool2 == 1
      && ((unsigned int)(a3 - 6) > 1 || (*(_DWORD *)(Pool2 + 4) & 0xFFFFFFFE) == 0)
      && *(_QWORD *)(Pool2 + 8) == v11 )
    {
      v15 = (unsigned int)(24 * v11);
      v16 = (void *)(Pool2 + 192);
      if ( a6 )
      {
        memset_0(v16, 0, v15);
        for ( i = 0LL; i < v11; ++i )
          v10[3 * i + 25] = *(_QWORD *)(24 * i + a1 + 200);
      }
      else
      {
        memmove(v16, (const void *)(a1 + 192), v15);
      }
      *a4 = v10;
      v10 = 0LL;
      goto LABEL_21;
    }
    goto LABEL_24;
  }
  v9 = -1073741670;
LABEL_21:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return v9;
}
