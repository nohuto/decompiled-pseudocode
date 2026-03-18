/*
 * XREFs of ACPIBuildProcessThermalZoneCheckType @ 0x140059470
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 *     AMLIReferenceHandleEx @ 0x140015FC0 (AMLIReferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x14001E380 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_Dqss @ 0x14002AD3C (WPP_RECORDER_SF_Dqss.c)
 *     ACPIBuildDelayedDependencyRequest @ 0x140052E00 (ACPIBuildDelayedDependencyRequest.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x140053814 (ACPIVerifyAndCopyFirmwareDependencies.c)
 */

__int64 __fastcall ACPIBuildProcessThermalZoneCheckType(__int64 a1)
{
  __int64 v1; // rdi
  const char *v2; // rbp
  ULONG_PTR v3; // r14
  __int64 v5; // rax
  const char **v6; // r15
  int v7; // eax
  int v8; // r12d
  __int64 v9; // rcx
  const char *v10; // r8
  const char *v11; // rdx
  unsigned int v12; // ebx
  __int64 *v13; // rbx
  char *Pool2; // rax
  __int64 v15; // rax
  const char *v16; // r8
  const char *v17; // rdx
  _DWORD *v18; // rax
  __int64 v19; // rax
  const char *v20; // rdx
  const char *v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // eax
  __int64 v25; // rcx
  const char *v26; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = byte_1400753E8;
  v3 = 0LL;
  v5 = *(_QWORD *)(v1 + 1120);
  v6 = (const char **)(v1 + 608);
  if ( (v5 & 0x20) != 0 )
  {
    if ( *(_QWORD *)(v1 + 648) && (v5 & 0x40) == 0 )
      *(_DWORD *)(a1 + 20) |= 0x20u;
  }
  else
  {
    v7 = ACPIVerifyAndCopyFirmwareDependencies(*(__int64 **)(v1 + 760), a1 + 80, (__int64 *)(v1 + 648));
    dword_1400890B8 = 0;
    pszDest = 0;
    v8 = v7;
    FreeDataBuffs(a1 + 80, 1u);
    if ( v8 >= 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v1 + 1120), 0x20uLL);
      *(_DWORD *)(a1 + 20) |= 0x20u;
    }
    else
    {
      v9 = *(_QWORD *)(v1 + 8);
      v10 = byte_1400753E8;
      v11 = byte_1400753E8;
      if ( (v9 & 0x200000000000LL) != 0 )
      {
        v10 = *v6;
        if ( (v9 & 0x400000000000LL) != 0 )
          v11 = *(const char **)(v1 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          6u,
          0x4Cu,
          (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
          v8,
          v1,
          v10,
          v11);
    }
  }
  if ( (*(_DWORD *)(a1 + 20) & 0x20) != 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x200000000000uLL);
    return (unsigned int)ACPIBuildDelayedDependencyRequest(a1, (__int64)&AcpiBuildThermalZoneList);
  }
  v13 = AMLIGetNamedChild(*(__int64 **)(v1 + 760), 1145653343);
  if ( v13 )
  {
    v22 = AMLIGetNamedChild(*(__int64 **)(v1 + 760), 1145656671);
    v23 = *(_QWORD *)(a1 + 56);
    v3 = (ULONG_PTR)v22;
    if ( v22 )
    {
      *(_DWORD *)(a1 + 32) = 6;
      if ( v23 )
        AMLIDereferenceHandleEx(v23);
      *(_QWORD *)(a1 + 56) = v3;
      AMLIReferenceHandleEx(v3);
      v24 = ACPIGet(v1, 1145656671, 671613062, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + 616, 0LL);
    }
    else
    {
      *(_DWORD *)(a1 + 32) = 7;
      if ( v23 )
        AMLIDereferenceHandleEx(v23);
      *(_QWORD *)(a1 + 56) = v13;
      AMLIReferenceHandleEx((__int64)v13);
      v3 = (ULONG_PTR)v13;
      v24 = ACPIGet(v1, 1145653343, 671612966, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + 608, 0LL);
    }
    v12 = v24;
    goto LABEL_37;
  }
  _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x20000uLL);
  Pool2 = (char *)ExAllocatePool2(64LL, 17LL, 1399874369LL);
  *v6 = Pool2;
  if ( !Pool2 )
  {
    v15 = *(_QWORD *)(v1 + 8);
    v16 = byte_1400753E8;
    v17 = byte_1400753E8;
    if ( (v15 & 0x200000000000LL) != 0 )
    {
      v16 = 0LL;
      if ( (v15 & 0x400000000000LL) != 0 )
        v17 = *(const char **)(v1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0x4Du,
        (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
        17,
        v1,
        v16,
        v17);
LABEL_21:
    v12 = -1073741670;
    goto LABEL_37;
  }
  strcpy(Pool2, "ACPI\\ThermalZone");
  v18 = (_DWORD *)ExAllocatePool2(64LL, 5LL, 1399874369LL);
  *(_QWORD *)(v1 + 616) = v18;
  if ( !v18 )
  {
    v19 = *(_QWORD *)(v1 + 8);
    v20 = byte_1400753E8;
    v21 = byte_1400753E8;
    if ( (v19 & 0x200000000000LL) != 0 )
    {
      v20 = *v6;
      if ( (v19 & 0x400000000000LL) != 0 )
        v21 = *(const char **)(v1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0x4Eu,
        (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
        5,
        v1,
        v20,
        v21);
    goto LABEL_21;
  }
  *v18 = *(_DWORD *)(**(_QWORD **)(v1 + 760) + 40LL);
  *(_BYTE *)(*(_QWORD *)(v1 + 616) + 4LL) = 0;
  _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x1E00000000000uLL);
  *(_DWORD *)(a1 + 32) = 0;
  v12 = 0;
LABEL_37:
  v25 = *(_QWORD *)(v1 + 8);
  v26 = byte_1400753E8;
  if ( (v25 & 0x200000000000LL) != 0 )
  {
    v2 = *v6;
    if ( (v25 & 0x400000000000LL) != 0 )
      v26 = *(const char **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x4Fu,
      (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
      v12,
      v1,
      v2,
      v26);
  if ( v12 == 259 )
    v12 = 0;
  else
    ACPIBuildCompleteMustSucceed(v3, v12, 0LL, a1);
  if ( v3 )
    AMLIDereferenceHandleEx(v3);
  return v12;
}
