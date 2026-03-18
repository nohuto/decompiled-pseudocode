/*
 * XREFs of ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x1801C31C0
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18000D0B0 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180034A90 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800387D0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x1801A4480 (-NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z.c)
 * Callees:
 *     <none>
 */

struct D2D_SIZE_F __fastcall CVisual::GetRelativeLayoutSizeInternal(CVisual *this, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  int v5; // ecx
  int *v6; // r8

  if ( (*(_DWORD *)(*((_QWORD *)this + 28) + 4LL) & 0x20000000) != 0 )
  {
    *a2 = 0LL;
    v4 = *((_QWORD *)this + 28);
    v5 = *(_DWORD *)(v4 + 12);
    v6 = (int *)(v4 + 12);
    if ( (v5 & 0x7F000000) != 0x3000000 )
    {
      do
      {
        v6 = (int *)((char *)v6 + (v5 & 0xFFFFFF) + 4);
        v5 = *v6;
      }
      while ( (*v6 & 0x7F000000) != 0x3000000 );
    }
    v2 = *(_QWORD *)(v6 + 1);
  }
  else
  {
    v2 = 0LL;
  }
  *a2 = v2;
  return (struct D2D_SIZE_F)a2;
}
