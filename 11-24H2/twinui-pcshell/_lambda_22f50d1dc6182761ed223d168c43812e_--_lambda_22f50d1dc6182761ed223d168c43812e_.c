/*
 * XREFs of _lambda_22f50d1dc6182761ed223d168c43812e_::_lambda_22f50d1dc6182761ed223d168c43812e_ @ 0x1804EBCBC
 * Callers:
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIObjectArray@@PEAUIImmersiveMonitor@@1PEAUIPresentationRequestedArgs@@W4SHELL_POSITIONER_TYPE@@3@Z @ 0x1804ECBA4 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIObjectArray@@PEAUIImmersiveMonitor@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_22f50d1dc6182761ed223d168c43812e_::_lambda_22f50d1dc6182761ed223d168c43812e_(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _DWORD *a4,
        _QWORD *a5)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = *a3;
  *(_DWORD *)(a1 + 12) = *a4;
  *(_QWORD *)a1 = a2;
  result = a1;
  *(_QWORD *)(a1 + 16) = *a5;
  return result;
}
