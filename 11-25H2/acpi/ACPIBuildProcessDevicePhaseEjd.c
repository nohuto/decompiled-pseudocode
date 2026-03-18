/*
 * XREFs of ACPIBuildProcessDevicePhaseEjd @ 0x140029280
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIBuildCompleteGeneric @ 0x14001FA50 (ACPIBuildCompleteGeneric.c)
 *     ACPIDockIsDockDevice @ 0x1400284D4 (ACPIDockIsDockDevice.c)
 *     WPP_RECORDER_SF_qss @ 0x14003E0C4 (WPP_RECORDER_SF_qss.c)
 *     ACPIBuildDockExtension @ 0x140058480 (ACPIBuildDockExtension.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseEjd(__int64 a1)
{
  ULONG_PTR v1; // rbx
  unsigned int v3; // edi
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  const char *v7; // rax
  const char *v8; // r8
  __int64 v9; // r8
  const char *v10; // rax
  const char *v11; // rdx

  v1 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  *(_DWORD *)(a1 + 32) = (*(_BYTE *)(v1 + 8) & 2) != 0 ? 16 : 26;
  if ( *(_QWORD *)(a1 + 56) )
  {
    dword_140089138 = 0;
    pszDest = 0;
    FreeDataBuffs(a1 + 80, 1u);
    KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
    v4 = (_QWORD *)qword_14008B328;
    v5 = (_QWORD *)(v1 + 848);
    if ( *(__int64 **)qword_14008B328 != &AcpiUnresolvedEjectList )
      __fastfail(3u);
    *(_QWORD *)(v1 + 856) = qword_14008B328;
    *v5 = &AcpiUnresolvedEjectList;
    *v4 = v5;
    qword_14008B328 = v1 + 848;
    KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  }
  if ( ACPIDockIsDockDevice() )
  {
    if ( !*((_BYTE *)AcpiInformation + 132) )
    {
      v6 = *(_QWORD *)(v1 + 8);
      v7 = byte_140075488;
      v8 = byte_140075488;
      if ( (v6 & 0x200000000000LL) != 0 )
      {
        v7 = *(const char **)(v1 + 608);
        if ( (v6 & 0x400000000000LL) != 0 )
          v8 = *(const char **)(v1 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_qss(
          WPP_GLOBAL_Control->DeviceExtension,
          v6,
          6,
          38,
          (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
          v1,
          (__int64)v7,
          (__int64)v8);
      }
      KeBugCheckEx(0xA5u, 0xCuLL, v1, *(_QWORD *)(a1 + 56), 0LL);
    }
    KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
    v3 = ACPIBuildDockExtension(*(_QWORD *)(v1 + 760));
    KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  }
  v9 = *(_QWORD *)(v1 + 8);
  v10 = byte_140075488;
  v11 = byte_140075488;
  if ( (v9 & 0x200000000000LL) != 0 )
  {
    v10 = *(const char **)(v1 + 608);
    if ( (v9 & 0x400000000000LL) != 0 )
      v11 = *(const char **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x27u,
      (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
      v3,
      v1,
      v10,
      v11);
  ACPIBuildCompleteGeneric(0LL, v3, 0LL, a1);
  return v3;
}
