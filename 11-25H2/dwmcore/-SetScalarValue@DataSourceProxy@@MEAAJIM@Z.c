/*
 * XREFs of ?SetScalarValue@DataSourceProxy@@MEAAJIM@Z @ 0x18027CC70
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z @ 0x1801CFFBC (-InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z.c)
 *     ?CheckAndReportError@DataSourceProxy@@AEAAJJ@Z @ 0x1801D0014 (-CheckAndReportError@DataSourceProxy@@AEAAJJ@Z.c)
 *     ??$SetProperty@M@DataSourcePropertySet@@QEAAJIPEBMW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18027B930 (--$SetProperty@M@DataSourcePropertySet@@QEAAJIPEBMW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall DataSourceProxy::SetScalarValue(DataSourceProxy *this, unsigned int a2, float a3)
{
  int v5; // eax
  float v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  v5 = DataSourcePropertySet::SetProperty<float>((__int64)this + 64, a2, (int *)&v7);
  if ( (int)DataSourceProxy::CheckAndReportError(this, v5) >= 0 )
    DataSourceProxy::InvalidateReadersAnimationSources(this, a2);
  return 0LL;
}
