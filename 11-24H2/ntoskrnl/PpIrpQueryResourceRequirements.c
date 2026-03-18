/*
 * XREFs of PpIrpQueryResourceRequirements @ 0x14098E6E8
 * Callers:
 *     IopQueryDeviceResources @ 0x14098DEA4 (IopQueryDeviceResources.c)
 *     PiQueryResourceRequirements @ 0x14098E5B0 (PiQueryResourceRequirements.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     IopSynchronousCall @ 0x1408BBC08 (IopSynchronousCall.c)
 */

__int64 __fastcall PpIrpQueryResourceRequirements(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  _WORD v5[44]; // [rsp+30h] [rbp-58h] BYREF

  *a2 = 0LL;
  memset_0(v5, 0, 0x48uLL);
  v5[0] = 2843;
  result = IopSynchronousCall(a1, (__int64)v5, -1073741637, 0LL, a2);
  if ( (int)result < 0 )
  {
    *a2 = 0LL;
  }
  else if ( !*a2 )
  {
    return 3221225659LL;
  }
  return result;
}
