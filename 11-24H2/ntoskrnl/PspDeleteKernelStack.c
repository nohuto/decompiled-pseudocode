/*
 * XREFs of PspDeleteKernelStack @ 0x14021F670
 * Callers:
 *     KeEnumerateKernelStackSegments @ 0x14021F4D8 (KeEnumerateKernelStackSegments.c)
 * Callees:
 *     MmDeleteKernelStack @ 0x14021FA40 (MmDeleteKernelStack.c)
 *     KiDeleteKernelShadowStack @ 0x140A12CA4 (KiDeleteKernelShadowStack.c)
 *     KeResetKernelShadowStackRstorssp @ 0x140A98570 (KeResetKernelShadowStackRstorssp.c)
 */

__int64 __fastcall PspDeleteKernelStack(__int64 a1, __int64 *a2)
{
  int v3; // edi
  int v4; // eax
  __int64 result; // rax
  int v6; // r10d
  _DWORD v7[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+38h] [rbp-30h]
  __int64 v9; // [rsp+40h] [rbp-28h]
  __int64 v10; // [rsp+48h] [rbp-20h]
  __int128 v11; // [rsp+50h] [rbp-18h]
  __int64 v12; // [rsp+70h] [rbp+8h] BYREF

  v3 = a1;
  if ( (*(_DWORD *)(a1 + 116) & 0x800000) == 0 || (v4 = 8, a2[2] != *(_QWORD *)(a1 + 96)) )
    v4 = 2;
  v8 = 0LL;
  v7[0] = v4;
  v10 = *a2;
  v11 = 0LL;
  v7[1] = 5;
  v9 = a1;
  MmDeleteKernelStack(v7);
  result = a2[6];
  if ( result )
  {
    v6 = a2[5] & 7;
    v12 = a2[6];
    if ( v6 == 2 )
    {
      KeResetKernelShadowStackRstorssp(&v12, a2[7]);
      result = v12;
    }
    return KiDeleteKernelShadowStack(v3, a2[4], v6, 0, result);
  }
  return result;
}
