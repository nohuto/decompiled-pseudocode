/*
 * XREFs of MmInitializeImageViewExtensionCfg @ 0x140C5428C
 * Callers:
 *     MmInitializeImageViewExtension @ 0x140C541D0 (MmInitializeImageViewExtension.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x140211200 (MiAcquireNonPagedResources.c)
 *     MiInitializePfn @ 0x14021E510 (MiInitializePfn.c)
 *     MiDecrementShareCountEx @ 0x140220590 (MiDecrementShareCountEx.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x14028DDA0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14028FF10 (MiReservePtes.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiInitializePageColorBase @ 0x1402EF8B0 (MiInitializePageColorBase.c)
 *     MiGetSlabPage @ 0x1402F3934 (MiGetSlabPage.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiAllocateCombineBlock @ 0x1402FA538 (MiAllocateCombineBlock.c)
 *     MiMapSinglePage @ 0x140314164 (MiMapSinglePage.c)
 *     MxInstallMoreMemory @ 0x14066C6F0 (MxInstallMoreMemory.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PsInitializeScpCfgPages @ 0x140C3658C (PsInitializeScpCfgPages.c)
 */

unsigned __int64 __fastcall MmInitializeImageViewExtensionCfg(char a1)
{
  __int64 v1; // rax
  _QWORD *v2; // r13
  unsigned __int32 v3; // eax
  __int64 v4; // r8
  ULONG v5; // et2
  char v6; // al
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 i; // r14
  __int64 SlabPage; // r12
  _QWORD *CombineBlock; // rax
  _QWORD *v12; // r15
  __int64 v13; // rbp
  unsigned __int8 v14; // si
  unsigned __int64 v15; // rcx
  int v17; // [rsp+20h] [rbp-88h]
  int v19; // [rsp+34h] [rbp-74h]
  int v20; // [rsp+38h] [rbp-70h]
  __int64 v21; // [rsp+40h] [rbp-68h]
  __int128 v22; // [rsp+48h] [rbp-60h] BYREF
  _OWORD v23[2]; // [rsp+58h] [rbp-50h] BYREF

  v22 = 0LL;
  memset(v23, 0, sizeof(v23));
  v1 = MiReservePtes((__int64)&qword_140E37568, 4u);
  v2 = (_QWORD *)v1;
  if ( !v1 )
    goto LABEL_14;
  v21 = v1 << 25 >> 16;
  MiInitializePageColorBase(0LL, 3, 0, (__int64)&v22);
  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)v22, 1u);
  v4 = *((_QWORD *)&v22 + 1);
  v20 = 0;
  v5 = v3 % *(&MiState + ((*((_QWORD *)&v22 + 1) >> 16) & 3LL) + 1120);
  v6 = a1;
  v7 = DWORD2(v22) ^ v5;
  v8 = DWORD2(v22) ^ (unsigned __int8)(BYTE8(v22) ^ v5);
  for ( i = 0LL; i < 32; i += 8LL )
  {
    if ( (int)MiAcquireNonPagedResources(&MiSystemPartition, 1uLL, 0LL, 0) < 0 )
      goto LABEL_14;
    SlabPage = MiGetSlabPage((__int64)&MiSystemPartition, 7, v8, 2u, (__int64 *)0xFFFFFFFFFFFFFFFFLL, 0);
    if ( SlabPage == -1 )
    {
      SlabPage = MiGetPage((__int64)&MiSystemPartition, v8, 0);
      if ( SlabPage == -1 )
        goto LABEL_14;
    }
    CombineBlock = (_QWORD *)MiAllocateCombineBlock((__int64)&unk_140E3CE58);
    v12 = CombineBlock;
    if ( !CombineBlock )
      goto LABEL_14;
    memset_0(CombineBlock, 0, 0x48uLL);
    v13 = 48 * SlabPage - 0x220000000000LL;
    v14 = MiLockPageInline(v13);
    MiInitializePfn(v13, v12 + 4, 3u, 7);
    *(_QWORD *)(v13 + 8) &= ~0x8000000000000000uLL;
    v12[4] = MiMakeValidPte((unsigned __int64)(v12 + 4), SlabPage, 3);
    v19 = *(_DWORD *)(v13 + 32);
    LOWORD(v19) = v19 + 1;
    *(_DWORD *)(v13 + 32) = v19;
    MiDecrementShareCountEx(v13, 0LL);
    MiUnlockPage(v13, v14);
    v12[5] = 1LL;
    v15 = v20 + v21;
    v12[7] = 1LL;
    v12[6] = 0x1000000000000000LL;
    v12[3] = 1LL;
    *(_QWORD *)((char *)v23 + i) = v15;
    MiMapSinglePage(v15, SlabPage, 1073741856, 0);
    v6 = a1;
    if ( a1 )
      *(_QWORD *)((char *)&MiState + i + 3448) = v12;
    else
      *(_QWORD *)((char *)&MiState + i + 3480) = v12;
    v20 += 4096;
  }
  if ( (int)PsInitializeScpCfgPages((__int64)v23, v7, v4, qword_140E2DA88, v17, v6) < 0 )
LABEL_14:
    MxInstallMoreMemory(49);
  return MiReleasePtes((__int64)&qword_140E37568, v2, 4u);
}
