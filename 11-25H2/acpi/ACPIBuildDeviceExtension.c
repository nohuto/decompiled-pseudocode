/*
 * XREFs of ACPIBuildDeviceExtension @ 0x140047880
 * Callers:
 *     OSNotifyCreateDevice @ 0x1400165E0 (OSNotifyCreateDevice.c)
 *     ACPIBuildThermalZoneExtension @ 0x140052428 (ACPIBuildThermalZoneExtension.c)
 *     ACPIBuildFixedButtonExtension @ 0x140055594 (ACPIBuildFixedButtonExtension.c)
 *     ACPIBuildDockExtension @ 0x140058480 (ACPIBuildDockExtension.c)
 *     ACPIBuildProcessorExtension @ 0x14005A0E8 (ACPIBuildProcessorExtension.c)
 * Callees:
 *     AMLIReferenceHandleEx @ 0x140015FC0 (AMLIReferenceHandleEx.c)
 *     WPP_RECORDER_SF_d @ 0x14003A7DC (WPP_RECORDER_SF_d.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall ACPIBuildDeviceExtension(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rcx
  char *v8; // rax
  char *v9; // rbx
  _QWORD *v10; // rdx
  _QWORD *v11; // rax

  if ( a1 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
    if ( v6 )
    {
      if ( *(_QWORD *)(v6 + 792) != a2 )
        return 3221225486LL;
      *a3 = 0LL;
      return 0LL;
    }
  }
  v8 = (char *)ExAllocateFromNPagedLookasideList(&DeviceExtensionLookAsideList);
  v9 = v8;
  if ( v8 )
  {
    memset(v8, 0, 0x468uLL);
    *((_QWORD *)v9 + 95) = a1;
    ++*((_DWORD *)v9 + 183);
    ++*((_DWORD *)v9 + 182);
    if ( a1 )
      AMLIReferenceHandleEx(a1);
    *((_QWORD *)v9 + 3) = 0LL;
    *((_DWORD *)v9 + 92) = 0;
    *((_DWORD *)v9 + 127) = 0;
    *((_DWORD *)v9 + 134) = 0;
    *((_DWORD *)v9 + 135) = 0;
    *((_DWORD *)v9 + 132) = 4;
    *((_DWORD *)v9 + 133) = 4;
    *((_DWORD *)v9 + 4) = 1599293264;
    *((_QWORD *)v9 + 1) = 10LL;
    *((_DWORD *)v9 + 128) = 1;
    *((_DWORD *)v9 + 129) = 1;
    *((_DWORD *)v9 + 130) = 1;
    *((_DWORD *)v9 + 131) = 1;
    *((_DWORD *)v9 + 137) = 1;
    *((_QWORD *)v9 + 101) = v9 + 800;
    *((_QWORD *)v9 + 100) = v9 + 800;
    *((_QWORD *)v9 + 105) = v9 + 832;
    *((_QWORD *)v9 + 104) = v9 + 832;
    *((_QWORD *)v9 + 107) = v9 + 848;
    *((_QWORD *)v9 + 106) = v9 + 848;
    *((_QWORD *)v9 + 71) = v9 + 560;
    *((_QWORD *)v9 + 70) = v9 + 560;
    *((_QWORD *)v9 + 74) = v9 + 584;
    *((_QWORD *)v9 + 73) = v9 + 584;
    *((_QWORD *)v9 + 109) = v9 + 864;
    *((_QWORD *)v9 + 108) = v9 + 864;
    *a3 = v9;
    KeInitializeEvent((PRKEVENT)(v9 + 904), SynchronizationEvent, 1u);
    ExInitializeRundownProtection((PEX_RUNDOWN_REF)v9 + 125);
    *((_QWORD *)v9 + 116) = 0LL;
    v9[936] = 0;
    *((_QWORD *)v9 + 99) = a2;
    if ( a2 )
    {
      _InterlockedAdd((volatile signed __int32 *)(a2 + 732), 1u);
      v10 = *(_QWORD **)(a2 + 808);
      v11 = v9 + 816;
      if ( *v10 != a2 + 800 )
        __fastfail(3u);
      *v11 = a2 + 800;
      *((_QWORD *)v9 + 103) = v10;
      *v10 = v11;
      *(_QWORD *)(a2 + 808) = v11;
      _InterlockedOr64((volatile signed __int64 *)(a2 + 8), 0x40000000000uLL);
    }
    if ( a1 )
      *(_QWORD *)(*(_QWORD *)a1 + 104LL) = v9;
    *((_DWORD *)v9 + 176) = -1;
    *((_QWORD *)v9 + 90) = v9 + 712;
    *((_QWORD *)v9 + 89) = v9 + 712;
    *(_QWORD *)v9 = &gAcpiTriageInfo;
    return 0LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x16u,
      0xAu,
      (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
      a1);
  return 3221225626LL;
}
