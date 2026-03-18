/*
 * XREFs of MouseMove @ 0x140213080
 * Callers:
 *     ?xxxMKMouseMove@@YAHG@Z @ 0x1401F5AF0 (-xxxMKMouseMove@@YAHG@Z.c)
 *     ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F5C60 (-xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F5DA0 (-xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140060F70 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z @ 0x14021BB04 (-AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z.c)
 */

void __fastcall MouseMove(__int64 a1, int a2)
{
  int v3; // edi
  CMouseProcessor *MouseProcessor; // rax

  v3 = a1;
  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor(a1);
  if ( MouseProcessor )
    CMouseProcessor::AccessibilityMouseMove(MouseProcessor, v3, a2);
}
