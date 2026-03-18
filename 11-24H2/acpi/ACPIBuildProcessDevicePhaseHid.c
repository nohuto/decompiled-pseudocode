/*
 * XREFs of ACPIBuildProcessDevicePhaseHid @ 0x14004A1E0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x14001E380 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseHid(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // r15
  unsigned int v3; // edi
  unsigned int v5; // ebp
  const char *v6; // r12
  __int64 v7; // r14
  const char *v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rdx
  const char *v11; // rax
  const char *v12; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = 0;
  v3 = 0;
  v5 = 0;
  v6 = *(const char **)(v1 + 608);
  while ( 1 )
  {
    v7 = 4LL * v5;
    v8 = (&AcpiInternalDeviceFlagTable)[v7];
    if ( !v8 )
      break;
    if ( strstr(v6, v8) )
    {
      _InterlockedOr64((volatile signed __int64 *)(v1 + 8), (unsigned __int64)(&AcpiInternalDeviceFlagTable)[v7 + 1]);
      _InterlockedOr64((volatile signed __int64 *)(v1 + 1120), (unsigned __int64)(&AcpiInternalDeviceFlagTable)[v7 + 2]);
      v2 = 1;
      break;
    }
    ++v5;
  }
  _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x200000000000uLL);
  v9 = AMLIGetNamedChild(*(__int64 **)(v1 + 760), 1145652063);
  if ( !v9 || v2 )
  {
    *(_DWORD *)(a1 + 32) = 10;
  }
  else
  {
    AMLIDereferenceHandleEx((__int64)v9);
    *(_DWORD *)(a1 + 32) = 9;
    v3 = ACPIGet(v1, 1145652063, 671613191, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, a1 + 128, 0LL);
  }
  v10 = *(_QWORD *)(v1 + 8);
  v11 = byte_1400753E8;
  v12 = byte_1400753E8;
  if ( (v10 & 0x200000000000LL) != 0 )
  {
    v11 = *(const char **)(v1 + 608);
    if ( (v10 & 0x400000000000LL) != 0 )
      v12 = *(const char **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x28u,
      (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
      v3,
      v1,
      v11,
      v12);
  if ( v3 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL, v3, 0LL, a1);
  return v3;
}
