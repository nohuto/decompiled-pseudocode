/*
 * XREFs of RIMIsInteractiveCtrl @ 0x140151E50
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x1400C8E60 (RIMIDECreateHIDDesc.c)
 *     RIMAllocateHidDesc @ 0x1401DAB28 (RIMAllocateHidDesc.c)
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
