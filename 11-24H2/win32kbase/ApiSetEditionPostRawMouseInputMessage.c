/*
 * XREFs of ApiSetEditionPostRawMouseInputMessage @ 0x1400EC370
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x14005E1E8 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1400EC31C (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 * Callees:
 *     IsEditionPostRawMouseInputMessageSupported @ 0x1400EF5AC (IsEditionPostRawMouseInputMessageSupported.c)
 *     EditionPostRawMouseInputMessage @ 0x1400EF7C8 (EditionPostRawMouseInputMessage.c)
 */

__int64 __fastcall ApiSetEditionPostRawMouseInputMessage(int a1, int a2, int a3, int a4, __int64 a5)
{
  unsigned int v9; // ebx

  v9 = 0;
  if ( (int)IsEditionPostRawMouseInputMessageSupported() >= 0 )
    return (unsigned int)EditionPostRawMouseInputMessage(a1, a2, a3, a4, a5);
  return v9;
}
