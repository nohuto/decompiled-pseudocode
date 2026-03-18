/*
 * XREFs of ACPIBuildProcessThermalZoneDep @ 0x1400598C0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x140010934 (AMLIAsyncEvalObject.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x14001E380 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 */

__int64 __fastcall ACPIBuildProcessThermalZoneDep(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  __int64 v4; // rcx
  __int64 *v5; // rax
  char v6; // r8
  const char *v7; // rax
  const char *v8; // rdx
  __int64 v9; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  *(_OWORD *)(a1 + 80) = 0LL;
  v2 = 0;
  *(_OWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_DWORD *)(a1 + 32) = 5;
  if ( (*(_BYTE *)(v1 + 1120) & 0x20) == 0 )
  {
    v4 = *(_QWORD *)(a1 + 56);
    if ( v4 )
    {
      AMLIDereferenceHandleEx(v4);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    v5 = AMLIGetNamedChild(*(__int64 **)(v1 + 760), 1346716767);
    *(_QWORD *)(a1 + 56) = v5;
    if ( v5 )
      v2 = AMLIAsyncEvalObject(v5, a1 + 80, 0, 0LL, ACPIBuildCompleteMustSucceed, a1);
    else
      _InterlockedOr64((volatile signed __int64 *)(v1 + 1120), 0x20uLL);
  }
  v6 = 0;
  v7 = byte_140075488;
  v8 = byte_140075488;
  if ( v1 )
  {
    v9 = *(_QWORD *)(v1 + 8);
    v6 = v1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v7 = *(const char **)(v1 + 608);
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = *(const char **)(v1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x4Bu,
      (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
      v2,
      v6,
      v7,
      v8);
  if ( v2 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL, v2, 0LL, a1);
  return v2;
}
