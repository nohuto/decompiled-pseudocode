/*
 * XREFs of ACPIConvertDependenciesToPnpReservations @ 0x140054EE4
 * Callers:
 *     ACPIAddInitializationDependencies @ 0x140046D58 (ACPIAddInitializationDependencies.c)
 * Callees:
 *     AMLIGetNameSpaceObject @ 0x140028510 (AMLIGetNameSpaceObject.c)
 *     ACPIReserveDependencies @ 0x14005A964 (ACPIReserveDependencies.c)
 *     WPP_RECORDER_SF_sL @ 0x14005AC40 (WPP_RECORDER_SF_sL.c)
 */

__int64 __fastcall ACPIConvertDependenciesToPnpReservations(__int64 a1, __int64 *a2, __int64 a3)
{
  int v3; // ebx
  unsigned int v7; // edi
  unsigned int v8; // ebp
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rsi
  int v12; // edx
  int v13; // r9d
  __int64 v15; // [rsp+80h] [rbp+18h] BYREF

  v3 = 0;
  v15 = 0LL;
  v7 = 0;
  v8 = **(_DWORD **)(a3 + 32);
  while ( v7 < v8 )
  {
    v9 = *(_QWORD *)(a3 + 32);
    v10 = v7 + 1LL;
    v11 = 5 * v10;
    v3 = AMLIGetNameSpaceObject(*(_BYTE **)(v9 + 40 * v10), a2, &v15, 0);
    if ( v3 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)v3;
      v13 = 21;
      goto LABEL_10;
    }
    v3 = ACPIReserveDependencies(a1);
    if ( v3 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)v3;
      v13 = 22;
LABEL_10:
      WPP_RECORDER_SF_sL(
        WPP_GLOBAL_Control->DeviceExtension,
        v12,
        21,
        v13,
        (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
        *(_QWORD *)(v9 + 8 * v11),
        v3);
      return (unsigned int)v3;
    }
    ++v7;
  }
  return (unsigned int)v3;
}
