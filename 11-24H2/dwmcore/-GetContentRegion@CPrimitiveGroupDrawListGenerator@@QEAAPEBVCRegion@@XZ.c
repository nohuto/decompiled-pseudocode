/*
 * XREFs of ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x180172CD0
 * Callers:
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x180171F24 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 *     ?GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1802A1BA0 (-GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CCont.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z @ 0x1801724A0 (-AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?CMilRectLFromD2D_RECT_F@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180172828 (-CMilRectLFromD2D_RECT_F@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRe.c)
 *     ?Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ @ 0x1801F032C (-Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ.c)
 *     ?GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA?AVIterator@CPrimitiveBuffer@@I@Z @ 0x1801F0C5C (-GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA-AVIterator@CPrimitiveBuffer@@I@Z.c)
 *     ?reset@?$unique_ptr@VCRegion@@U?$default_delete@VCRegion@@@std@@@std@@QEAAXPEAVCRegion@@@Z @ 0x180227F24 (-reset@-$unique_ptr@VCRegion@@U-$default_delete@VCRegion@@@std@@@std@@QEAAXPEAVCRegion@@@Z.c)
 */

const struct CRegion *__fastcall CPrimitiveGroupDrawListGenerator::GetContentRegion(
        CPrimitiveGroupDrawListGenerator *this)
{
  char *v1; // rbx
  _DWORD *v4; // rax
  unsigned int i; // esi
  __int64 v6; // r11
  struct tagRECT *v7; // rax
  const struct FastRegion::Internal::CRgnData **v8; // rcx
  struct tagRECT v9; // [rsp+30h] [rbp-48h] BYREF
  int v10[4]; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v11[8]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v12; // [rsp+58h] [rbp-20h]

  v1 = (char *)this + 96;
  if ( !*((_QWORD *)this + 12) )
  {
    v4 = MIDL_user_allocate(0x48uLL);
    if ( v4 )
    {
      *(_QWORD *)v4 = v4 + 2;
      v4[2] = 0;
    }
    std::unique_ptr<CRegion>::reset(v1, v4);
    if ( *(_QWORD *)v1 )
    {
      for ( i = 0; i < *(_DWORD *)(*((_QWORD *)this + 2) + 8LL); ++i )
      {
        CPrimitiveGroupDrawListGenerator::GetIteratorForState(this, v11, i);
        if ( (*(_BYTE *)(v6 + 4) & 2) == 0 && *(_DWORD *)v6 && *(_DWORD *)(v6 + 40) < *((_DWORD *)this + 8) )
        {
          do
          {
            v7 = (struct tagRECT *)CMilRectLFromD2D_RECT_F(v10, v12);
            v8 = *(const struct FastRegion::Internal::CRgnData ***)v1;
            v9 = *v7;
            CRegion::AddRectangle(v8, &v9);
          }
          while ( CPrimitiveBuffer::Iterator::Step((CPrimitiveBuffer::Iterator *)v11) );
        }
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x220u, 0LL);
      std::unique_ptr<CRegion>::reset(v1, 0LL);
    }
  }
  return *(const struct CRegion **)v1;
}
