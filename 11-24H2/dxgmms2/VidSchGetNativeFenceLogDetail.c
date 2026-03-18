/*
 * XREFs of VidSchGetNativeFenceLogDetail @ 0x140051100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall VidSchGetNativeFenceLogDetail(_QWORD *a1, _DWORD *a2, _DWORD *a3, _QWORD *a4, _QWORD *a5)
{
  _QWORD *result; // rax

  *a2 = *(_DWORD *)(a1[36] + 16LL);
  *a3 = *(_DWORD *)(a1[39] + 16LL);
  *a4 = *(_QWORD *)(a1[35] + 56LL);
  result = a5;
  *a5 = *(_QWORD *)(a1[38] + 56LL);
  return result;
}
