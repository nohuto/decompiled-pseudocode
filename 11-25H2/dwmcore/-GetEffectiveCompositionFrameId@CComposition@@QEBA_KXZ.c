/*
 * XREFs of ?GetEffectiveCompositionFrameId@CComposition@@QEBA_KXZ @ 0x1801D0430
 * Callers:
 *     ?GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@IPEAVCExpressionValue@@@Z @ 0x1801CFB24 (-GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@IPEAVCExpressionValue@@@Z.c)
 *     ?InvalidateAnimationSources@CDataSourceReader@@QEAAXI@Z @ 0x1801D02EC (-InvalidateAnimationSources@CDataSourceReader@@QEAAXI@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CComposition::GetEffectiveCompositionFrameId(CComposition *this)
{
  unsigned __int64 result; // rax
  __int64 v2; // rcx

  result = *((_QWORD *)this + 111);
  if ( result == *((_QWORD *)this + 112) )
  {
    v2 = result + 1;
    result = 1LL;
    if ( v2 )
      return v2;
  }
  return result;
}
