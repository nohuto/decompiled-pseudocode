/*
 * XREFs of EnumWindowsHelpers::LambdaEnumWindowsProc__lambda_4bda98b3a01c558fc217a4a30bde81e2___ @ 0x1801F27E0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_cab7c03a2b5ac7190be81e45414ea272_::operator() @ 0x1801F2814 (_lambda_cab7c03a2b5ac7190be81e45414ea272_--operator().c)
 */

_BOOL8 __fastcall EnumWindowsHelpers::LambdaEnumWindowsProc__lambda_4bda98b3a01c558fc217a4a30bde81e2___(
        HWND a1,
        __int64 a2)
{
  **(_DWORD **)a2 = lambda_cab7c03a2b5ac7190be81e45414ea272_::operator()(*(_QWORD *)(a2 + 8), a1);
  return **(_DWORD **)a2 >= 0;
}
