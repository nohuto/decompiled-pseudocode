/*
 * XREFs of DifObjTrkGetPluginContext @ 0x140616290
 * Callers:
 *     DifObjTrkInsertItem @ 0x1406162B0 (DifObjTrkInsertItem.c)
 *     DifObjTrkQeuryInvokeDeleteRange @ 0x140616450 (DifObjTrkQeuryInvokeDeleteRange.c)
 *     DifObjTrkRemoveItem @ 0x140616780 (DifObjTrkRemoveItem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DifObjTrkGetPluginContext(int a1)
{
  __int64 result; // rax

  result = DifPluginSettings[a1];
  if ( result )
    return *(_QWORD *)(result + 24);
  return result;
}
