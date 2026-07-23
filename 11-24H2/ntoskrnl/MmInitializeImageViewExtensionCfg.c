/*
 * XREFs of MmInitializeImageViewExtensionCfg @ 0x140C5641C
 * Callers:
 *     MmInitializeImageViewExtension @ 0x140C56360 (MmInitializeImageViewExtension.c)
 * Callees:
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiGetSlabPage @ 0x14021CE24 (MiGetSlabPage.c)
 *     MiInitializePfn @ 0x14024B260 (MiInitializePfn.c)
 *     MiDecrementShareCountEx @ 0x14024D2E0 (MiDecrementShareCountEx.c)
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiAcquireNonPagedResources @ 0x14033A560 (MiAcquireNonPagedResources.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MiAllocateCombineBlock @ 0x140345874 (MiAllocateCombineBlock.c)
 *     MiMapSinglePage @ 0x1403F14B0 (MiMapSinglePage.c)
 *     MxInstallMoreMemory @ 0x14066D8C0 (MxInstallMoreMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PsInitializeScpCfgPages @ 0x140C386CC (PsInitializeScpCfgPages.c)
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
  char *CombineBlock; // rax
  char *v12; // r15
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int8 v17; // si
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rcx
  int v22; // [rsp+20h] [rbp-88h]
  int v24; // [rsp+34h] [rbp-74h]
  int v25; // [rsp+38h] [rbp-70h]
  __int64 v26; // [rsp+40h] [rbp-68h]
  __int128 v27; // [rsp+48h] [rbp-60h] BYREF
  _OWORD v28[2]; // [rsp+58h] [rbp-50h] BYREF

  v27 = 0LL;
  memset(v28, 0, sizeof(v28));
  v1 = MiReservePtes((__int64)&qword_140E376A8, 4u);
  v2 = (_QWORD *)v1;
  if ( !v1 )
    goto LABEL_14;
  v26 = v1 << 25 >> 16;
  MiInitializePageColorBase(0LL, 3, 0, (__int64)&v27);
  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)v27, 1u);
  v4 = *((_QWORD *)&v27 + 1);
  v25 = 0;
  v5 = v3 % *(&MiState + ((*((_QWORD *)&v27 + 1) >> 16) & 3LL) + 1120);
  v6 = a1;
  v7 = DWORD2(v27) ^ v5;
  v8 = DWORD2(v27) ^ (unsigned __int8)(BYTE8(v27) ^ v5);
  for ( i = 0LL; i < 32; i += 8LL )
  {
    if ( (int)MiAcquireNonPagedResources(&MiSystemPartition, 1uLL, 0LL, 0LL) < 0 )
      goto LABEL_14;
    SlabPage = MiGetSlabPage((__int64)&MiSystemPartition, 7, v8, 2u, (__int64 *)0xFFFFFFFFFFFFFFFFLL, 0);
    if ( SlabPage == -1 )
    {
      SlabPage = MiGetPage((__int64)&MiSystemPartition, v8, 0);
      if ( SlabPage == -1 )
        goto LABEL_14;
    }
    CombineBlock = (char *)MiAllocateCombineBlock((__int64)&unk_140E3CF98);
    v12 = CombineBlock;
    if ( !CombineBlock )
      goto LABEL_14;
    memset_0(CombineBlock, 0, 0x48uLL);
    v13 = 48 * SlabPage - 0x220000000000LL;
    v17 = MiLockPageInline(v13, v14, v15, v16);
    MiInitializePfn(v13, (_KPROCESS *)(v12 + 32), 3uLL, 7);
    *(_QWORD *)(v13 + 8) &= ~0x8000000000000000uLL;
    *((_QWORD *)v12 + 4) = MiMakeValidPte((unsigned __int64)(v12 + 32), SlabPage, 3);
    v24 = *(_DWORD *)(v13 + 32);
    LOWORD(v24) = v24 + 1;
    *(_DWORD *)(v13 + 32) = v24;
    MiDecrementShareCountEx(v13, 0LL, v18, v19);
    MiUnlockPage(v13, v17);
    *((_QWORD *)v12 + 5) = 1LL;
    v20 = v25 + v26;
    *((_QWORD *)v12 + 7) = 1LL;
    *((_QWORD *)v12 + 6) = 0x1000000000000000LL;
    *((_QWORD *)v12 + 3) = 1LL;
    *(_QWORD *)((char *)v28 + i) = v20;
    MiMapSinglePage(v20, SlabPage, 1073741856, 0);
    v6 = a1;
    if ( a1 )
      *(_QWORD *)((char *)&MiState + i + 3448) = v12;
    else
      *(_QWORD *)((char *)&MiState + i + 3480) = v12;
    v25 += 4096;
  }
  if ( (int)PsInitializeScpCfgPages((__int64)v28, v7, v4, qword_140E2DBC8, v22, v6) < 0 )
LABEL_14:
    MxInstallMoreMemory(49);
  return MiReleasePtes((__int64)&qword_140E376A8, v2, 4u);
}
