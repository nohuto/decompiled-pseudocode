/*
 * XREFs of MiInitializeDummyPages @ 0x140C4F7E0
 * Callers:
 *     MiInitNucleus @ 0x140C4F298 (MiInitNucleus.c)
 * Callees:
 *     MiFillPhysicalPages @ 0x14021EFA0 (MiFillPhysicalPages.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiIncreaseUsedPtesInPfn @ 0x140396FF4 (MiIncreaseUsedPtesInPfn.c)
 *     MiAllocateDummyPage @ 0x140C4EBD8 (MiAllocateDummyPage.c)
 */

__int64 MiInitializeDummyPages()
{
  unsigned int v0; // ebp
  __int64 *v1; // r15
  __int64 DemandZeroPte; // rbx
  __int64 *v3; // r12
  int i; // edi
  __int64 v5; // r8
  __int64 DummyPage; // r14
  __int64 v7; // rsi
  unsigned __int64 v8; // r9
  unsigned __int8 v9; // r11
  int v10; // r8d
  unsigned __int64 ValidPte; // rax
  __int64 result; // rax
  int v13; // [rsp+60h] [rbp+8h]
  int v14; // [rsp+60h] [rbp+8h]
  int v15; // [rsp+60h] [rbp+8h]
  unsigned int v16; // [rsp+68h] [rbp+10h]

  v0 = 0;
  v1 = &qword_140E37370;
  v16 = 0;
  DemandZeroPte = MiMakeDemandZeroPte(1);
  do
  {
    v3 = v1 - 6;
    for ( i = 0; i <= 3; ++i )
    {
      DummyPage = MiAllocateDummyPage();
      v7 = 48 * DummyPage - 0x220000000000LL;
      *(_QWORD *)(v7 + 16) = DemandZeroPte;
      if ( i )
      {
        MiLockPageInline(v7);
        v13 = *(_DWORD *)(v7 + 32);
        BYTE2(v13) &= ~0x20u;
        *(_DWORD *)(v7 + 32) = v13;
        v14 = *(_DWORD *)(v7 + 32);
        BYTE2(v14) &= ~8u;
        *(_DWORD *)(v7 + 32) = v14;
        v15 = *(_DWORD *)(v7 + 32);
        BYTE2(v15) = BYTE2(v15) & 0xF8 | 5;
        *(_DWORD *)(v7 + 32) = v15;
        HIWORD(v15) = HIWORD(*(_DWORD *)(v7 + 32));
        LOWORD(v15) = 1;
        *(_DWORD *)(v7 + 32) = v15;
        *(_QWORD *)(v7 + 24) = *(_QWORD *)(v7 + 24) & 0xC000000000000000uLL | 0x201;
        MiIncreaseUsedPtesInPfn(v7, 512);
        MiUnlockPage(v7, v9);
        v10 = 134217729;
        if ( i == 1 )
          v10 = 1;
        ValidPte = MiMakeValidPte(
                     (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                     *(v3 - 1),
                     v10);
        if ( (MiFlags & 0x2000000) == 0 && ((unsigned __int8)(1 << i) & (unsigned __int8)byte_140E2DAC9) != 0 )
          ValidPte &= ~0x20uLL;
        if ( i == 2 )
          *v1 = ValidPte;
        v8 = ValidPte;
      }
      else
      {
        v8 = -(__int64)(v0 != 0);
      }
      result = MiFillPhysicalPages(0LL, DummyPage, v5, v8);
      *v3++ = DummyPage;
    }
    v1 += 7;
    v0 = v16 + 1;
    v16 = v0;
  }
  while ( v0 < 2 );
  return result;
}
