/*
 * XREFs of ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAXPEAV?$DynArrayIA@UtagRECT@@$03$0A@@@@Z @ 0x18020C49C
 * Callers:
 *     ?GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1802AB6C0 (-GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CCont.c)
 *     ?Present@CCompSwapChain@@QEAAJII@Z @ 0x1802D1160 (-Present@CCompSwapChain@@QEAAJII@Z.c)
 * Callees:
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180084294 (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x180084360 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18019E7F0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x18020C65C (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CRegion::AppendAllRectangles<DynArrayIA<tagRECT,4,0>>(int **a1, __int64 a2)
{
  unsigned int RectangleCount; // eax
  unsigned int v5; // esi
  int v6; // eax
  FastRegion::Internal::CRgnData *v7; // rcx
  int v8; // r10d
  int v9; // r11d
  __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // r8d
  _BYTE v13[8]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]
  int *v15; // [rsp+30h] [rbp-28h]
  __int64 v16; // [rsp+38h] [rbp-20h]
  int v17; // [rsp+40h] [rbp-18h]
  void *retaddr; // [rsp+58h] [rbp+0h]

  RectangleCount = FastRegion::CRegion::GetRectangleCount(a1);
  v5 = *(_DWORD *)(a2 + 24);
  v6 = DynArrayImpl<0>::AddMultiple(a2, 16LL, RectangleCount);
  if ( v6 < 0 )
    ModuleFailFastForHRESULT(v6, retaddr);
  FastRegion::CRegion::BeginIterator(a1, (__int64)v13);
  while ( (unsigned __int64)v15 < v14 )
  {
    v7 = *(FastRegion::Internal::CRgnData **)a2;
    v8 = *v15;
    v9 = v15[2];
    v10 = 2 * v17;
    v11 = 2LL * v5;
    v12 = *(_DWORD *)(v16 + 4 * v10 + 4);
    *((_DWORD *)v7 + 2 * v11) = *(_DWORD *)(v16 + 4 * v10);
    *((_DWORD *)v7 + 2 * v11 + 1) = v8;
    *((_DWORD *)v7 + 2 * v11 + 2) = v12;
    *((_DWORD *)v7 + 2 * v11 + 3) = v9;
    FastRegion::Internal::CRgnData::StepIterator(v7, (struct FastRegion::CRegion::Iterator *)v13);
    ++v5;
  }
}
