/*
 * XREFs of ACPIBuildDevicePowerNodes @ 0x140020F04
 * Callers:
 *     ACPIBuildProcessDevicePhasePrx @ 0x14001FDA0 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1400213A0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x140048850 (ACPIBuildProcessDevicePhasePr3.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIIsEqualHandle @ 0x140015F98 (AMLIIsEqualHandle.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x140017568 (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     AMLIGetNameSpaceObject @ 0x140028510 (AMLIGetNameSpaceObject.c)
 *     WPP_RECORDER_SF_sqss @ 0x1400441C4 (WPP_RECORDER_SF_sqss.c)
 *     ACPIInitRemovePowerNodes @ 0x14004B6CC (ACPIInitRemovePowerNodes.c)
 *     WPP_RECORDER_SF_sLqss @ 0x14005ADBC (WPP_RECORDER_SF_sLqss.c)
 */

__int64 __fastcall ACPIBuildDevicePowerNodes(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3,
        int a4)
{
  unsigned int *v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rbp
  unsigned int v9; // r14d
  unsigned int v10; // esi
  __int64 Pool2; // r15
  __int64 v12; // rbp
  __int64 v13; // r14
  __int64 v14; // r8
  const char *v15; // rdx
  __int64 v16; // r8
  const char *v17; // rdx

  v4 = *(unsigned int **)(a3 + 32);
  v5 = 0;
  v6 = a4;
  v9 = 0;
  v10 = *v4;
  if ( !a4 )
  {
    if ( v10 < 2 )
      KeBugCheckEx(0xA5u, 5uLL, BugCheckParameter2, BugCheckParameter3, *v4);
    v9 = 2;
    v10 -= 2;
  }
  if ( v10 )
  {
    Pool2 = ExAllocatePool2(64LL, 56LL * v10, 1349542721LL);
    if ( Pool2 )
    {
      KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
      *(_QWORD *)(BugCheckParameter2 + 8 * v6 + 408) = Pool2;
      v12 = 5 * (v9 + 1LL);
      v13 = *(_QWORD *)(a3 + 32);
      if ( (int)AMLIGetNameSpaceObject(*(void **)(v13 + 8 * v12)) >= 0 )
      {
        v15 = byte_140075488;
        if ( BugCheckParameter2 )
        {
          v16 = *(_QWORD *)(BugCheckParameter2 + 8);
          if ( (v16 & 0x200000000000LL) != 0 && (v16 & 0x400000000000LL) != 0 )
            v15 = *(const char **)(BugCheckParameter2 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v15) = 2;
          WPP_RECORDER_SF_sqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v15, 10, 14);
        }
        KeBugCheckEx(0xA5u, 0x12uLL, BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(v13 + 8 * v12));
      }
      v17 = byte_140075488;
      if ( BugCheckParameter2 )
      {
        v14 = *(_QWORD *)(BugCheckParameter2 + 8);
        if ( (v14 & 0x200000000000LL) != 0 && (v14 & 0x400000000000LL) != 0 )
          v17 = *(const char **)(BugCheckParameter2 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sLqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v17, v14, 13);
      KeBugCheckEx(0xA5u, 6uLL, BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(v13 + 8 * v12));
    }
    return (unsigned int)-1073741670;
  }
  return v5;
}
