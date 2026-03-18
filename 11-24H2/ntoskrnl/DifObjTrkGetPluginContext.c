/*
 * XREFs of DifObjTrkGetPluginContext @ 0x140617CD0
 * Callers:
 *     DifObjTrkInsertItem @ 0x140617CF0 (DifObjTrkInsertItem.c)
 *     DifObjTrkQeuryInvokeDeleteRange @ 0x140617E90 (DifObjTrkQeuryInvokeDeleteRange.c)
 *     DifObjTrkRemoveItem @ 0x1406181C0 (DifObjTrkRemoveItem.c)
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
