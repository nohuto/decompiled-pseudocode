/*
 * XREFs of ACPIBuildProcessDevicePhasePrr @ 0x140049E60
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x14001E380 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIWriteEventLogEntry @ 0x140053A50 (ACPIWriteEventLogEntry.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x14005817C (ACPIBuildDeviceResetPowerNode.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePrr(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 v2; // rsi
  ULONG_PTR v3; // rdx
  unsigned int v4; // ebp
  unsigned int v6; // eax
  __int64 *v7; // rax
  __int64 v8; // rdx
  const char *v9; // rax
  const char *v10; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1 + 80;
  v3 = *(_QWORD *)(a1 + 56);
  v4 = 0;
  *(_DWORD *)(a1 + 32) = 0;
  if ( *(_QWORD *)(v1 + 448) )
  {
    if ( v3 )
    {
      dword_140089138 = 0;
      pszDest = 0;
LABEL_8:
      FreeDataBuffs(v2, 1u);
    }
  }
  else if ( v3 )
  {
    if ( *(_WORD *)(a1 + 82) == 4 )
    {
      v6 = ACPIBuildDeviceResetPowerNode(v1, v3);
      dword_140089138 = 0;
      v4 = v6;
      pszDest = 0;
      goto LABEL_8;
    }
    ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
  }
  v7 = AMLIGetNamedChild(*(__int64 **)(v1 + 760), 1414746719);
  v8 = *(_QWORD *)(v1 + 8);
  *(_QWORD *)(v1 + 496) = v7;
  v9 = byte_140075488;
  v10 = byte_140075488;
  if ( (v8 & 0x200000000000LL) != 0 )
  {
    v9 = *(const char **)(v1 + 608);
    if ( (v8 & 0x400000000000LL) != 0 )
      v10 = *(const char **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x2Fu,
      (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
      v4,
      v1,
      v9,
      v10);
  ACPIBuildCompleteMustSucceed(0LL, v4, 0LL, a1);
  return v4;
}
