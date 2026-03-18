/*
 * XREFs of RIMUpdatePointerDeviceScalingInfo @ 0x1401E202C
 * Callers:
 *     rimSetDeviceDisplayConfig @ 0x1401E2D30 (rimSetDeviceDisplayConfig.c)
 *     ?MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1401F3E98 (-MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 * Callees:
 *     EngMulDiv @ 0x140053870 (EngMulDiv.c)
 *     rimConvertCoordinatesWithRounding @ 0x1400AFCF8 (rimConvertCoordinatesWithRounding.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMUpdatePointerDeviceScalingInfo(_DWORD *a1, _DWORD *a2, int *a3, __int64 a4)
{
  unsigned int v7; // r10d
  unsigned int v8; // r11d
  unsigned int v9; // r8d
  unsigned int v10; // r9d
  unsigned int v11; // ebp
  unsigned int v12; // r14d
  unsigned int v13; // r12d
  int v14; // eax
  unsigned int v15; // r13d
  unsigned int v16; // r10d
  int v17; // eax
  int *v18; // r15
  int v19; // ebp
  unsigned int v20; // r12d
  unsigned int v21; // r13d
  unsigned int v22; // eax
  int *v23; // r14
  unsigned int v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // ebp
  int v27; // r8d
  int v28; // eax
  unsigned int v29; // r12d
  unsigned int v30; // r8d
  INT v31; // r8d
  int v32; // r10d
  int v33; // eax
  unsigned int v34; // ecx
  int *v35; // rbp
  _DWORD *v36; // r8
  int v37; // edx
  __int64 result; // rax
  int v39; // ecx
  int v40; // ecx
  INT v41; // [rsp+30h] [rbp-58h]
  unsigned int v42; // [rsp+34h] [rbp-54h]
  unsigned int v44; // [rsp+98h] [rbp+10h]
  unsigned int v45; // [rsp+A0h] [rbp+18h]
  unsigned int v46; // [rsp+A8h] [rbp+20h]
  INT v47; // [rsp+A8h] [rbp+20h]

  if ( !a2[14] )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1419);
  if ( !a2[15] )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1420);
  if ( !a2[22] )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1421);
  if ( !a2[23] )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1422);
  v7 = a2[14];
  v8 = a2[15];
  v9 = a2[22];
  v10 = a2[23];
  *a3 = v7;
  a3[1] = v8;
  v11 = a2[35];
  v12 = a2[36];
  v13 = a2[37] - v11;
  v14 = a2[27];
  v15 = a2[38] - v12;
  v46 = v7;
  v42 = v8;
  v44 = v11;
  v45 = v12;
  if ( v14 == 4 )
  {
    v16 = v7 << 14;
    if ( v16 / v8 < (v9 << 14) / v10 )
      v17 = v16 / v9;
    else
      v17 = (v8 << 14) / v10;
    v7 = v46;
    v18 = a3 + 2;
    v19 = v17;
    v20 = v17 * v13;
    v21 = v17 * v15;
    v44 = (v44 * v17) >> 14;
    v22 = v12 * v17;
    v23 = a3 + 3;
    v24 = (v9 * v19) >> 14;
    v13 = v20 >> 14;
    v15 = v21 >> 14;
    v25 = v22 >> 14;
    a3[2] = v24;
    v26 = (v10 * v19) >> 14;
    a3[3] = v26;
  }
  else
  {
    v18 = a3 + 2;
    v23 = a3 + 3;
    if ( v14 == 2 )
    {
      *v18 = v9;
      v24 = v9;
      *v23 = v10;
      v26 = v10;
      goto LABEL_18;
    }
    *v18 = v7;
    *v23 = v8;
    v24 = v7;
    v27 = (v7 << 14) / v9;
    v28 = (v8 << 14) / v10;
    v29 = v27 * v13;
    v30 = v11 * v27;
    v26 = v8;
    v13 = v29 >> 14;
    v15 = (v28 * v15) >> 14;
    v25 = (v45 * v28) >> 14;
    v44 = v30 >> 14;
  }
  v45 = v25;
LABEL_18:
  v41 = 0;
  v47 = 0;
  if ( a4 )
  {
    v31 = 2 * v7;
    v32 = v7 - v24;
    v33 = -v32;
    if ( v32 > 0 )
      v33 = v32;
    v47 = EngMulDiv(v33 + 2 * v44, a1[2] - *a1, v31);
    v34 = v26 - v42;
    if ( (int)(v26 - v42) < 0 )
      v34 = v42 - v26;
    v41 = EngMulDiv(v34 + 2 * v45, a1[3] - a1[1], 2 * v42);
    v35 = a3 + 3;
  }
  else
  {
    v35 = v23;
  }
  *v18 = v13;
  *v23 = v15;
  if ( a4 )
  {
    v36 = a1;
    *(_OWORD *)a4 = *(_OWORD *)a1;
    if ( *a3 != *v18 )
    {
      if ( !(unsigned int)rimConvertCoordinatesWithRounding(0, *a3, 0, a1[2], *v18, (LONG *)(a4 + 8)) )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1553);
        v23 = v35;
      }
      v36 = a1;
    }
    v37 = a3[1];
    v35 = v23;
    if ( v37 != *v23 && !(unsigned int)rimConvertCoordinatesWithRounding(0, v37, 0, v36[3], *v23, (LONG *)(a4 + 12)) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1562);
    v18 = a3 + 2;
    *(_DWORD *)a4 += v47;
    *(_DWORD *)(a4 + 8) += v47;
    *(_DWORD *)(a4 + 4) += v41;
    *(_DWORD *)(a4 + 12) += v41;
  }
  result = (unsigned int)(a2[26] - 2);
  if ( (result & 0xFFFFFFFD) == 0 )
  {
    v39 = a3[1];
    a3[1] = *a3;
    result = (unsigned int)*v18;
    *a3 = v39;
    v40 = *v35;
    *v35 = result;
    *v18 = v40;
  }
  return result;
}
