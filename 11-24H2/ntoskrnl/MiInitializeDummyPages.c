/*
 * XREFs of MiInitializeDummyPages @ 0x140C51970
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiFillPhysicalPages @ 0x14024BCF0 (MiFillPhysicalPages.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiIncreaseUsedPtesInPfn @ 0x1403916FC (MiIncreaseUsedPtesInPfn.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiAllocateDummyPage @ 0x140C50D68 (MiAllocateDummyPage.c)
 */

__int64 MiInitializeDummyPages()
{
  unsigned int v0; // ebp
  __int64 *v1; // r15
  __int64 DemandZeroPte; // rbx
  __int64 *v3; // r12
  int i; // edi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 DummyPage; // r14
  __int64 v9; // rsi
  unsigned __int64 v10; // r9
  unsigned __int8 v11; // r11
  int v12; // r8d
  unsigned __int64 ValidPte; // rax
  __int64 result; // rax
  int v15; // [rsp+60h] [rbp+8h]
  int v16; // [rsp+60h] [rbp+8h]
  int v17; // [rsp+60h] [rbp+8h]
  unsigned int v18; // [rsp+68h] [rbp+10h]

  v0 = 0;
  v1 = &qword_140E374B0;
  v18 = 0;
  DemandZeroPte = MiMakeDemandZeroPte(1);
  do
  {
    v3 = v1 - 6;
    for ( i = 0; i <= 3; ++i )
    {
      DummyPage = MiAllocateDummyPage();
      v9 = 48 * DummyPage - 0x220000000000LL;
      *(_QWORD *)(v9 + 16) = DemandZeroPte;
      if ( i )
      {
        MiLockPageInline(v9, v5, v6, v7);
        v15 = *(_DWORD *)(v9 + 32);
        BYTE2(v15) &= ~0x20u;
        *(_DWORD *)(v9 + 32) = v15;
        v16 = *(_DWORD *)(v9 + 32);
        BYTE2(v16) &= ~8u;
        *(_DWORD *)(v9 + 32) = v16;
        v17 = *(_DWORD *)(v9 + 32);
        BYTE2(v17) = BYTE2(v17) & 0xF8 | 5;
        *(_DWORD *)(v9 + 32) = v17;
        HIWORD(v17) = HIWORD(*(_DWORD *)(v9 + 32));
        LOWORD(v17) = 1;
        *(_DWORD *)(v9 + 32) = v17;
        *(_QWORD *)(v9 + 24) = *(_QWORD *)(v9 + 24) & 0xC000000000000000uLL | 0x201;
        MiIncreaseUsedPtesInPfn(v9, 512);
        MiUnlockPage(v9, v11);
        v12 = 134217729;
        if ( i == 1 )
          v12 = 1;
        ValidPte = MiMakeValidPte(
                     (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                     *(v3 - 1),
                     v12);
        if ( (MiFlags & 0x2000000) == 0 && ((unsigned __int8)(1 << i) & (unsigned __int8)byte_140E2DC09) != 0 )
          ValidPte &= ~0x20uLL;
        if ( i == 2 )
          *v1 = ValidPte;
        v10 = ValidPte;
      }
      else
      {
        v10 = -(__int64)(v0 != 0);
      }
      result = MiFillPhysicalPages(0LL, DummyPage, v6, v10);
      *v3++ = DummyPage;
    }
    v1 += 7;
    v0 = v18 + 1;
    v18 = v0;
  }
  while ( v0 < 2 );
  return result;
}
