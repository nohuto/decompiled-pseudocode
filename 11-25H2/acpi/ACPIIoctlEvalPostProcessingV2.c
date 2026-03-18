/*
 * XREFs of ACPIIoctlEvalPostProcessingV2 @ 0x14003A8D8
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1400101A0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x140042CD0 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethodCompletion @ 0x140047640 (ACPIIoctlAsyncEvalControlMethodCompletion.c)
 *     ACPIIoctlEvalControlMethod @ 0x1400509E4 (ACPIIoctlEvalControlMethod.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferSizeV2 @ 0x14003A9B8 (ACPIIoctlCalculateOutputBufferSizeV2.c)
 *     ACPIIoctlCalculateOutputBufferV2 @ 0x14003AAC0 (ACPIIoctlCalculateOutputBufferV2.c)
 */

__int64 __fastcall ACPIIoctlEvalPostProcessingV2(_QWORD *a1, __int64 a2, char a3)
{
  _DWORD *v3; // r14
  unsigned int v7; // edi
  __int64 v8; // r9
  __int64 v9; // r8
  int v10; // eax
  unsigned int v11; // edx
  _DWORD *v12; // rcx
  int v14; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0LL;
  v7 = *(_DWORD *)(a1[23] + 8LL);
  if ( !v7
    || (v14 = 0,
        v15 = 0,
        (int)ACPIIoctlCalculateOutputBufferSizeV2(a2, (unsigned int)&v14, (unsigned int)&v15, a3, 1) < 0) )
  {
    a1[7] = 0LL;
    return 0LL;
  }
  v9 = 24LL;
  v10 = v14 + 12;
  v11 = v14 + 12;
  if ( (unsigned int)(v14 + 12) < 0x18 )
  {
    v10 = 24;
    v11 = 24;
  }
  if ( v7 >= 0x18 )
  {
    v12 = (_DWORD *)a1[3];
    v12[1] = v10;
    v3 = v12 + 3;
    v12[2] = v15;
    *v12 = 1265591617;
  }
  if ( v11 <= v7 )
  {
    LOBYTE(v8) = 1;
    a1[7] = v11;
    LOBYTE(v9) = a3;
    if ( (int)ACPIIoctlCalculateOutputBufferV2(a2, v3, v9, v8) < 0 )
      a1[7] = 0LL;
    return 0LL;
  }
  a1[7] = 24LL;
  return 2147483653LL;
}
