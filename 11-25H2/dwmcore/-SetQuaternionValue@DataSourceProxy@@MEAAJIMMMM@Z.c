/*
 * XREFs of ?SetQuaternionValue@DataSourceProxy@@MEAAJIMMMM@Z @ 0x18027CC00
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z @ 0x1801CFFBC (-InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z.c)
 *     ?CheckAndReportError@DataSourceProxy@@AEAAJJ@Z @ 0x1801D0014 (-CheckAndReportError@DataSourceProxy@@AEAAJJ@Z.c)
 *     ??$SetProperty@UD2DQuaternion@@@DataSourcePropertySet@@QEAAJIPEBUD2DQuaternion@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18027BB30 (--$SetProperty@UD2DQuaternion@@@DataSourcePropertySet@@QEAAJIPEBUD2DQuaternion@@W4DCOMPOSITION_E.c)
 */

__int64 __fastcall DataSourceProxy::SetQuaternionValue(
        DataSourceProxy *this,
        unsigned int a2,
        float a3,
        float a4,
        unsigned int a5,
        __int32 a6)
{
  int v8; // eax
  __m128i v10; // [rsp+20h] [rbp-18h] BYREF

  v10.m128i_i32[3] = a6;
  *(float *)v10.m128i_i32 = a3;
  *(__int64 *)((char *)v10.m128i_i64 + 4) = __PAIR64__(a5, LODWORD(a4));
  v8 = DataSourcePropertySet::SetProperty<D2DQuaternion>((__int64)this + 64, a2, &v10);
  if ( (int)DataSourceProxy::CheckAndReportError(this, v8) >= 0 )
    DataSourceProxy::InvalidateReadersAnimationSources(this, a2);
  return 0LL;
}
