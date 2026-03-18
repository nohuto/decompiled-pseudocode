/*
 * XREFs of ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x1402F37B8
 * Callers:
 *     ?ConvertGdiRgnToRects@DDAMetaData@@AEAAHXZ @ 0x1402F28CC (-ConvertGdiRgnToRects@DDAMetaData@@AEAAHXZ.c)
 *     ?GetDirtyRects@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z @ 0x1402F2AF8 (-GetDirtyRects@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z.c)
 *     ?AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1402F2EBC (-AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?DoesRectOverlapWithExistingDirty@DDAMetaData@@AEAA?AW4RECT_OVERLAP@@PEAUtagRECT@@0@Z @ 0x1402F3448 (-DoesRectOverlapWithExistingDirty@DDAMetaData@@AEAA-AW4RECT_OVERLAP@@PEAUtagRECT@@0@Z.c)
 *     ?ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ @ 0x1402F3868 (-ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ.c)
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1402F4144 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

struct tagRECT *__fastcall DDAMetaData::GetDirtyRectData(DDAMetaData *this, int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edx
  unsigned int v4; // r14d
  unsigned int *v5; // rdi
  void *v7; // rax
  void *v8; // rcx
  void *v9; // rsi
  void *v10; // rbp
  unsigned int v11; // eax

  v2 = *((_QWORD *)this + 4);
  v3 = 16 * a2 + 36;
  v4 = v3;
  v5 = (unsigned int *)(v2 + 8);
  if ( *(_DWORD *)(v2 + 12) < v3 )
  {
    v7 = (void *)operator new[](v3, 0x674D444Fu, 256LL);
    v8 = *(void **)v2;
    v9 = 0LL;
    v10 = v7;
    if ( v7 )
    {
      memmove(v7, *(const void **)v2, *v5);
      v8 = *(void **)v2;
      v9 = v10;
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
    *(_QWORD *)v2 = v9;
    v11 = v9 != 0LL ? v4 : 0;
    *v5 = v11;
    *(_DWORD *)(v2 + 12) = v11;
  }
  else
  {
    *v5 = v3;
  }
  return (struct tagRECT *)((*(_QWORD *)v2 + 32LL) & -(__int64)(*(_QWORD *)v2 != 0LL));
}
