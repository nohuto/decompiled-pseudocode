/*
 * XREFs of RIMIsInteractiveCtrl @ 0x1C0182468
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C017F534 (RIMAllocateHidDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C01837E8 (RIMVirtAllocateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C019395C (RIMIDECreateHIDDesc.c)
 * Callees:
 *     <none>
 */

bool __fastcall RIMIsInteractiveCtrl(_WORD *a1)
{
  bool result; // al

  result = 0;
  if ( a1[1] == 1 )
    return *a1 == 14;
  return result;
}
