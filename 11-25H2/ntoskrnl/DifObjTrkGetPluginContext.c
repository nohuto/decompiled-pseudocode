/*
 * XREFs of DifObjTrkGetPluginContext @ 0x14060BD10
 * Callers:
 *     DifObjTrkInsertItem @ 0x14060BD30 (DifObjTrkInsertItem.c)
 *     DifObjTrkQeuryInvokeDeleteRange @ 0x14060BED0 (DifObjTrkQeuryInvokeDeleteRange.c)
 *     DifObjTrkRemoveItem @ 0x14060C200 (DifObjTrkRemoveItem.c)
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
