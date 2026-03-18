/*
 * XREFs of NotifySetPointerGraphicDevice @ 0x140062E20
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140060F70 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?NotifySetPointerGraphicDevice@CMouseProcessor@@QEAAXW4SetPointerGraphicsResult@@@Z @ 0x14021DB68 (-NotifySetPointerGraphicDevice@CMouseProcessor@@QEAAXW4SetPointerGraphicsResult@@@Z.c)
 */

__int64 __fastcall NotifySetPointerGraphicDevice(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax

  v1 = a1;
  result = anonymous_namespace_::GetMouseProcessor(a1);
  if ( result )
    return CMouseProcessor::NotifySetPointerGraphicDevice(result, v1);
  return result;
}
