/*
 * XREFs of ACPIBuildProcessThermalZoneUid @ 0x140059F80
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x14001E380 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 */

__int64 __fastcall ACPIBuildProcessThermalZoneUid(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 *v3; // rax
  unsigned int v4; // eax
  __int64 v5; // rdx
  const char *v6; // rcx
  unsigned int v7; // edi
  const char *v8; // rax

  v1 = *(_QWORD *)(a1 + 40);
  _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x400000000000uLL);
  v3 = AMLIGetNamedChild(*(__int64 **)(v1 + 760), 1145653343);
  if ( !v3 )
    KeBugCheckEx(0xA5u, 0xDuLL, v1, 0x4449485FuLL, 0LL);
  AMLIDereferenceHandleEx((__int64)v3);
  *(_DWORD *)(a1 + 32) = 7;
  v4 = ACPIGet(v1, 1145653343, 671612966, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + 608, 0LL);
  v5 = *(_QWORD *)(v1 + 8);
  v6 = byte_1400753E8;
  v7 = v4;
  v8 = byte_1400753E8;
  if ( (v5 & 0x200000000000LL) != 0 )
  {
    v6 = *(const char **)(v1 + 608);
    if ( (v5 & 0x400000000000LL) != 0 )
      v8 = *(const char **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x50u,
      (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
      v7,
      v1,
      v6,
      v8);
  if ( v7 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL, v7, 0LL, a1);
  return v7;
}
