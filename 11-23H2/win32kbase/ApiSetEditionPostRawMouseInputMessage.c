/*
 * XREFs of ApiSetEditionPostRawMouseInputMessage @ 0x1C02074C0
 * Callers:
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C01F9068 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     IsEditionPostRawMouseInputMessageSupported @ 0x1C02330CC (IsEditionPostRawMouseInputMessageSupported.c)
 */

__int64 __fastcall ApiSetEditionPostRawMouseInputMessage(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v9; // ebx

  v9 = 0;
  if ( (int)IsEditionPostRawMouseInputMessageSupported() >= 0 && qword_1C0296C18 )
    return (unsigned int)qword_1C0296C18(a1, a2, a3, a4, a5);
  return v9;
}
