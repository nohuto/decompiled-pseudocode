/*
 * XREFs of ?Find@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCPickerHostContext@@PEAU3@@Z @ 0x1800177B0
 * Callers:
 *     ?DestroyPickerHostContext@PickerHostContextManager@@YAXPEAVCPickerHostContext@@@Z @ 0x18003CBE4 (-DestroyPickerHostContext@PickerHostContextManager@@YAXPEAVCPickerHostContext@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::Find(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *result; // rax

  for ( result = (_QWORD *)PickerHostContextManager::s_PickerHostContextList;
        result && result[2] != *a2;
        result = (_QWORD *)*result )
  {
    ;
  }
  return result;
}
