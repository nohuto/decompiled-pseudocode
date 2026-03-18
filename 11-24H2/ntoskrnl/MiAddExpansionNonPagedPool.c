/*
 * XREFs of MiAddExpansionNonPagedPool @ 0x14067C9FC
 * Callers:
 *     MiFreeLargeInitializationCodePages @ 0x14066ADD0 (MiFreeLargeInitializationCodePages.c)
 *     MiInitializeNonPagedPool @ 0x140C53CA4 (MiInitializeNonPagedPool.c)
 * Callees:
 *     MiChangePageAttribute @ 0x14021F58C (MiChangePageAttribute.c)
 *     MI_NODE_FROM_PFN @ 0x1402245F0 (MI_NODE_FROM_PFN.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiSetPfnContainingFrame @ 0x1402E6800 (MiSetPfnContainingFrame.c)
 *     MiReturnPhysicalPoolPages @ 0x1402EA2D4 (MiReturnPhysicalPoolPages.c)
 *     MiInsertPageChainHead @ 0x14039EC34 (MiInsertPageChainHead.c)
 *     MiSetPfnIdentity @ 0x1403A00D0 (MiSetPfnIdentity.c)
 *     MiClearPfnReuseFields @ 0x1403A1D30 (MiClearPfnReuseFields.c)
 */

void __fastcall MiAddExpansionNonPagedPool(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 DemandZeroPte; // rdi
  __int64 v4; // rdx
  __int64 v5; // rsi
  int v6; // ebx
  unsigned __int8 v7; // r14
  __int128 v8; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h]
  int v10; // [rsp+68h] [rbp+10h]
  int v11; // [rsp+68h] [rbp+10h]
  int v12; // [rsp+68h] [rbp+10h]

  v2 = a2;
  if ( a2 )
  {
    DemandZeroPte = MiMakeDemandZeroPte(4);
    v5 = 48 * v4 - 0x220000000000LL;
    v9 = 0LL;
    v6 = -1;
    v8 = 0LL;
    do
    {
      if ( v6 != (unsigned int)MI_NODE_FROM_PFN(v5) )
      {
        MiReturnPhysicalPoolPages((__int64)&v8, 0);
        v6 = MI_NODE_FROM_PFN(v5);
      }
      v7 = MiLockPageInline(v5);
      MiClearPfnReuseFields(v5);
      HIWORD(v10) = HIWORD(*(_DWORD *)(v5 + 32));
      LOWORD(v10) = 0;
      *(_DWORD *)(v5 + 32) = v10;
      *(_QWORD *)(v5 + 24) &= 0xC000000000000000uLL;
      *(_QWORD *)(v5 + 16) = DemandZeroPte;
      MiSetPfnIdentity(v5, 0);
      v11 = *(_DWORD *)(v5 + 32);
      HIBYTE(v11) |= 0x10u;
      *(_DWORD *)(v5 + 32) = v11;
      MiSetPfnContainingFrame(v5, 0LL);
      if ( (HIWORD(*(_DWORD *)(v5 + 32)) & 0xC0) != 0x40 )
        MiChangePageAttribute(v5, 1u);
      *(_QWORD *)(v5 + 8) = -8LL;
      v12 = *(_DWORD *)(v5 + 32);
      BYTE2(v12) = BYTE2(v12) & 0xF8 | 5;
      *(_DWORD *)(v5 + 32) = v12;
      MiUnlockPage(v5, v7);
      MiInsertPageChainHead((__int64 *)&v8, (__int64 *)v5);
      v5 += 48LL;
      --v2;
    }
    while ( v2 );
    MiReturnPhysicalPoolPages((__int64)&v8, 0);
  }
}
