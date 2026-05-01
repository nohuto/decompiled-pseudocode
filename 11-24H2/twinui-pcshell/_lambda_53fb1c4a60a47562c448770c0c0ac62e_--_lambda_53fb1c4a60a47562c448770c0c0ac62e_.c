/*
 * XREFs of _lambda_53fb1c4a60a47562c448770c0c0ac62e_::_lambda_53fb1c4a60a47562c448770c0c0ac62e_ @ 0x1803095BC
 * Callers:
 *     ?SetBackgroundColor@CFrameApplicationPresentation@@UEAAJK@Z @ 0x18030ABC0 (-SetBackgroundColor@CFrameApplicationPresentation@@UEAAJK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_53fb1c4a60a47562c448770c0c0ac62e_::_lambda_53fb1c4a60a47562c448770c0c0ac62e_(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = *a3;
  result = a1;
  *(_QWORD *)a1 = a2;
  return result;
}
