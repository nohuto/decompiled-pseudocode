/*
 * XREFs of UserIsWindowOnDesktopAndComposed @ 0x14016A2B0
 * Callers:
 *     GreTransferDwmStateToSpriteState @ 0x1401325C8 (GreTransferDwmStateToSpriteState.c)
 *     GreTransferSpriteStateToDwmState @ 0x140169AB8 (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserIsWindowOnDesktopAndComposed(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rax

  v2 = a2;
  v3 = 0;
  LOBYTE(a2) = 1;
  v4 = HMValidateHandleNoSecure(a1, a2);
  if ( v4 && v2 == ***(_QWORD ***)(*(_QWORD *)(v4 + 24) + 8LL) )
    return (unsigned int)IsWindowDesktopComposed(v4) != 0;
  return v3;
}
