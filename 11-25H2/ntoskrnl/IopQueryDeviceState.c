/*
 * XREFs of IopQueryDeviceState @ 0x140833D10
 * Callers:
 *     IopMarkDeviceToBeReset @ 0x140715420 (IopMarkDeviceToBeReset.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     IopSynchronousCall @ 0x140834D44 (IopSynchronousCall.c)
 */

__int64 __fastcall IopQueryDeviceState(int a1, _DWORD *a2)
{
  __int64 result; // rax
  _WORD v5[44]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v6; // [rsp+A0h] [rbp+18h] BYREF

  v6 = 0LL;
  memset_0(v5, 0, 0x48uLL);
  v5[0] = 5147;
  result = IopSynchronousCall(a1, (unsigned int)v5, -1073741637, 0, (__int64)&v6);
  if ( (int)result >= 0 )
  {
    if ( a2 )
      *a2 = v6;
  }
  return result;
}
