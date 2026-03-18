/*
 * XREFs of HalpInterruptPowerChange @ 0x140557250
 * Callers:
 *     HalpInterruptPowerComponentActiveCallback @ 0x1405572F0 (HalpInterruptPowerComponentActiveCallback.c)
 *     HalpInterruptPowerComponentIdleCallback @ 0x140557310 (HalpInterruptPowerComponentIdleCallback.c)
 *     HalpInterruptPowerCriticalTransitionCallback @ 0x140557350 (HalpInterruptPowerCriticalTransitionCallback.c)
 * Callees:
 *     HalpInterruptRestoreController @ 0x14049CA1C (HalpInterruptRestoreController.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     HalpInterruptInitializeController @ 0x1405564D4 (HalpInterruptInitializeController.c)
 */

__int64 __fastcall HalpInterruptPowerChange(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 result; // rax
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9

  v4 = *(_DWORD *)(BugCheckParameter3 + 248);
  if ( (_BYTE)a2 )
  {
    result = v4 & 0xFFFFFFFB;
    *(_DWORD *)(BugCheckParameter3 + 248) = result;
    if ( (result & 2) == 0 )
    {
      v7 = HalpInterruptInitializeController(BugCheckParameter3, a2, a3, a4);
      if ( v7 < 0 )
        KeBugCheckEx(0x5Cu, 0x204uLL, HalpInterruptLastProblem, BugCheckParameter3, v7);
      result = HalpInterruptRestoreController(BugCheckParameter3, 0, v8, v9);
      if ( (int)result < 0 )
        KeBugCheckEx(0x5Cu, 0x204uLL, HalpInterruptLastProblem, BugCheckParameter3, (int)result);
    }
  }
  else
  {
    result = v4 & 0xFFFFFFFA | 4;
    *(_DWORD *)(BugCheckParameter3 + 248) = result;
  }
  return result;
}
