/*
 * XREFs of MiAddExpansionNonPagedPool @ 0x14067DBDC
 * Callers:
 *     MiFreeLargeInitializationCodePages @ 0x14066BFA0 (MiFreeLargeInitializationCodePages.c)
 *     MiInitializeNonPagedPool @ 0x140C55E34 (MiInitializeNonPagedPool.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x140216B00 (MiSetPfnIdentity.c)
 *     MiClearPfnReuseFields @ 0x140218960 (MiClearPfnReuseFields.c)
 *     MiInsertPageChainHead @ 0x14021CD10 (MiInsertPageChainHead.c)
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MI_NODE_FROM_PFN @ 0x140251340 (MI_NODE_FROM_PFN.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     MiReturnPhysicalPoolPages @ 0x14034B914 (MiReturnPhysicalPoolPages.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 */

void __fastcall MiAddExpansionNonPagedPool(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 DemandZeroPte; // rdi
  __int64 v4; // rdx
  __int64 v5; // rsi
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int8 v10; // r14
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h]
  int v13; // [rsp+68h] [rbp+10h]
  int v14; // [rsp+68h] [rbp+10h]
  int v15; // [rsp+68h] [rbp+10h]

  v2 = a2;
  if ( a2 )
  {
    DemandZeroPte = MiMakeDemandZeroPte(4);
    v5 = 48 * v4 - 0x220000000000LL;
    v12 = 0LL;
    v6 = -1;
    v11 = 0LL;
    do
    {
      if ( v6 != (unsigned int)MI_NODE_FROM_PFN(v5) )
      {
        MiReturnPhysicalPoolPages((__int64)&v11, 0LL);
        v6 = MI_NODE_FROM_PFN(v5);
      }
      v10 = MiLockPageInline(v5, v7, v8, v9);
      MiClearPfnReuseFields(v5);
      HIWORD(v13) = HIWORD(*(_DWORD *)(v5 + 32));
      LOWORD(v13) = 0;
      *(_DWORD *)(v5 + 32) = v13;
      *(_QWORD *)(v5 + 24) &= 0xC000000000000000uLL;
      *(_QWORD *)(v5 + 16) = DemandZeroPte;
      MiSetPfnIdentity(v5, 0);
      v14 = *(_DWORD *)(v5 + 32);
      HIBYTE(v14) |= 0x10u;
      *(_DWORD *)(v5 + 32) = v14;
      MiSetPfnContainingFrame(v5, 0LL);
      if ( (HIWORD(*(_DWORD *)(v5 + 32)) & 0xC0) != 0x40 )
        MiChangePageAttribute(v5, 1u);
      *(_QWORD *)(v5 + 8) = -8LL;
      v15 = *(_DWORD *)(v5 + 32);
      BYTE2(v15) = BYTE2(v15) & 0xF8 | 5;
      *(_DWORD *)(v5 + 32) = v15;
      MiUnlockPage(v5, v10);
      MiInsertPageChainHead((__int64 *)&v11, (__int64 *)v5);
      v5 += 48LL;
      --v2;
    }
    while ( v2 );
    MiReturnPhysicalPoolPages((__int64)&v11, 0LL);
  }
}
