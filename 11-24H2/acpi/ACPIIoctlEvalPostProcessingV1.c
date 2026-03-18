/*
 * XREFs of ACPIIoctlEvalPostProcessingV1 @ 0x14001143C
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1400101A0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x140042CD0 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethodCompletion @ 0x140047640 (ACPIIoctlAsyncEvalControlMethodCompletion.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x140048F9C (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIIoctlEvalControlMethod @ 0x1400509E4 (ACPIIoctlEvalControlMethod.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x14003A458 (ACPIIoctlCalculateOutputBufferV1.c)
 *     ACPIIoctlCalculateOutputBufferSizeV1 @ 0x14003A5EC (ACPIIoctlCalculateOutputBufferSizeV1.c)
 */

__int64 __fastcall ACPIIoctlEvalPostProcessingV1(_QWORD *a1, __int64 a2, char a3)
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
        (int)ACPIIoctlCalculateOutputBufferSizeV1(a2, (unsigned int)&v14, (unsigned int)&v15, a3, 1) < 0) )
  {
    a1[7] = 0LL;
    return 0LL;
  }
  v9 = 20LL;
  v10 = v14 + 12;
  v11 = v14 + 12;
  if ( (unsigned int)(v14 + 12) < 0x14 )
  {
    v10 = 20;
    v11 = 20;
  }
  if ( v7 >= 0x14 )
  {
    v12 = (_DWORD *)a1[3];
    v12[1] = v10;
    v3 = v12 + 3;
    v12[2] = v15;
    *v12 = 1114596673;
  }
  if ( v11 <= v7 )
  {
    LOBYTE(v8) = 1;
    a1[7] = v11;
    LOBYTE(v9) = a3;
    if ( (int)ACPIIoctlCalculateOutputBufferV1(a2, v3, v9, v8) < 0 )
      a1[7] = 0LL;
    return 0LL;
  }
  a1[7] = 20LL;
  return 2147483653LL;
}
