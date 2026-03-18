/*
 * XREFs of ACPIIsPowerNodeMissingDependencies @ 0x140028978
 * Callers:
 *     ACPIDevicePowerProcessPhase3 @ 0x140027DFC (ACPIDevicePowerProcessPhase3.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x140028510 (AMLIGetNameSpaceObject.c)
 *     WPP_RECORDER_SF_sL @ 0x14005AC40 (WPP_RECORDER_SF_sL.c)
 */

char __fastcall ACPIIsPowerNodeMissingDependencies(__int64 a1)
{
  int v1; // eax
  char v2; // bl
  __int64 v4; // rbp
  unsigned int v6; // edi
  unsigned int v7; // r12d
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r14
  int v11; // eax
  int v12; // edx
  KIRQL v13; // al
  __int64 v14; // r15
  __int64 v15; // r14
  int v16; // r14d
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 16);
  v2 = 0;
  v17 = 0LL;
  if ( (v1 & 0x1000) == 0 )
    return 0;
  v4 = *(_QWORD *)(a1 + 96);
  if ( !v4 )
    return 0;
  v6 = 0;
  v7 = **(_DWORD **)(v4 + 32);
  while ( v6 < v7 )
  {
    v8 = *(_QWORD *)(v4 + 32);
    v9 = v6 + 1LL;
    v10 = 5 * v9;
    v11 = AMLIGetNameSpaceObject(*(_BYTE **)(v8 + 40 * v9), *(__int64 **)(a1 + 32), &v17, 0);
    if ( v11 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sL(
          WPP_GLOBAL_Control->DeviceExtension,
          v12,
          21,
          43,
          (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
          *(_QWORD *)(v8 + 8 * v10),
          v11);
      return v2;
    }
    v13 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v14 = v17;
    v15 = *(_QWORD *)(*(_QWORD *)v17 + 104LL);
    if ( v15 )
      v16 = *(_DWORD *)(v15 + 368);
    else
      v16 = 0;
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v13);
    AMLIDereferenceHandleEx(v14);
    if ( v16 != 3 )
      return 1;
    ++v6;
  }
  return v2;
}
