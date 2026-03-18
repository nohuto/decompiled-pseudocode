/*
 * XREFs of ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z @ 0x1801A845C
 * Callers:
 *     ?SetBooleanValue@DataSourceProxy@@MEAAJI_N@Z @ 0x1801A8380 (-SetBooleanValue@DataSourceProxy@@MEAAJI_N@Z.c)
 *     ?SetColorValue@DataSourceProxy@@MEAAJIMMMM@Z @ 0x1802723C0 (-SetColorValue@DataSourceProxy@@MEAAJIMMMM@Z.c)
 *     ?SetMatrix3x2Value@DataSourceProxy@@MEAAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180272430 (-SetMatrix3x2Value@DataSourceProxy@@MEAAJIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetMatrix4x4Value@DataSourceProxy@@MEAAJIAEBU_D3DMATRIX@@@Z @ 0x180272480 (-SetMatrix4x4Value@DataSourceProxy@@MEAAJIAEBU_D3DMATRIX@@@Z.c)
 *     ?SetQuaternionValue@DataSourceProxy@@MEAAJIMMMM@Z @ 0x1802724F0 (-SetQuaternionValue@DataSourceProxy@@MEAAJIMMMM@Z.c)
 *     ?SetScalarValue@DataSourceProxy@@MEAAJIM@Z @ 0x180272560 (-SetScalarValue@DataSourceProxy@@MEAAJIM@Z.c)
 *     ?SetVector2Value@DataSourceProxy@@MEAAJIMM@Z @ 0x1802725B0 (-SetVector2Value@DataSourceProxy@@MEAAJIMM@Z.c)
 *     ?SetVector3Value@DataSourceProxy@@MEAAJIMMM@Z @ 0x180272610 (-SetVector3Value@DataSourceProxy@@MEAAJIMMM@Z.c)
 *     ?SetVector4Value@DataSourceProxy@@MEAAJIMMMM@Z @ 0x180272670 (-SetVector4Value@DataSourceProxy@@MEAAJIMMMM@Z.c)
 * Callees:
 *     ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x1800163B0 (-GetTargetResource@-$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ.c)
 *     ?InvalidateAnimationSources@CDataSourceReader@@QEAAXI@Z @ 0x1801A878C (-InvalidateAnimationSources@CDataSourceReader@@QEAAXI@Z.c)
 */

void __fastcall DataSourceProxy::InvalidateReadersAnimationSources(DataSourceProxy *this, unsigned int a2)
{
  __int64 *v2; // rdi
  __int64 *i; // rbx
  CDataSourceReader *TargetResource; // rax

  v2 = (__int64 *)*((_QWORD *)this + 26);
  for ( i = (__int64 *)*((_QWORD *)this + 25); i != v2; ++i )
  {
    TargetResource = (CDataSourceReader *)CWeakReference<CGdiSpriteBitmap>::GetTargetResource(*i);
    if ( TargetResource )
      CDataSourceReader::InvalidateAnimationSources(TargetResource, a2);
  }
}
