/*
 * XREFs of ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x14034C8F4
 * Callers:
 *     ?ConvertGdiRgnToRects@DDAMetaData@@AEAAHXZ @ 0x14034BA08 (-ConvertGdiRgnToRects@DDAMetaData@@AEAAHXZ.c)
 *     ?GetDirtyRects@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z @ 0x14034BC34 (-GetDirtyRects@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z.c)
 *     ?AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x14034BFF8 (-AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?DoesRectOverlapWithExistingDirty@DDAMetaData@@AEAA?AW4RECT_OVERLAP@@PEAUtagRECT@@0@Z @ 0x14034C584 (-DoesRectOverlapWithExistingDirty@DDAMetaData@@AEAA-AW4RECT_OVERLAP@@PEAUtagRECT@@0@Z.c)
 *     ?ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ @ 0x14034C9A4 (-ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ.c)
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x14034CE60 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 */

struct tagRECT *__fastcall DDAMetaData::GetDirtyRectData(DDAMetaData *this, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v5; // edx
  unsigned int v6; // r14d
  unsigned int *v7; // rdi
  void *v9; // rax
  void *v10; // rcx
  void *v11; // rsi
  void *v12; // rbp
  unsigned int v13; // eax

  v4 = *((_QWORD *)this + 4);
  v5 = 16 * a2 + 36;
  v6 = v5;
  v7 = (unsigned int *)(v4 + 8);
  if ( *(_DWORD *)(v4 + 12) < v5 )
  {
    v9 = (void *)operator new[](v5, 0x674D444Fu, 256LL, a4);
    v10 = *(void **)v4;
    v11 = 0LL;
    v12 = v9;
    if ( v9 )
    {
      memmove(v9, *(const void **)v4, *v7);
      v10 = *(void **)v4;
      v11 = v12;
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
    *(_QWORD *)v4 = v11;
    v13 = v11 != 0LL ? v6 : 0;
    *v7 = v13;
    *(_DWORD *)(v4 + 12) = v13;
  }
  else
  {
    *v7 = v5;
  }
  return (struct tagRECT *)((*(_QWORD *)v4 + 32LL) & -(__int64)(*(_QWORD *)v4 != 0LL));
}
