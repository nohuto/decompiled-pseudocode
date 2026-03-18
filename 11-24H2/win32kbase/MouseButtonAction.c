/*
 * XREFs of MouseButtonAction @ 0x140213040
 * Callers:
 *     ?xxxMKButtonSetState@@YAHG@Z @ 0x1401F5A40 (-xxxMKButtonSetState@@YAHG@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140060F70 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x14021B980 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 */

__int64 __fastcall MouseButtonAction(__int64 a1, unsigned int a2)
{
  unsigned int v3; // edi
  __int64 result; // rax

  v3 = a1;
  result = anonymous_namespace_::GetMouseProcessor(a1);
  if ( result )
    return CMouseProcessor::AccessibilityMouseButtonAction(result, v3, a2);
  return result;
}
