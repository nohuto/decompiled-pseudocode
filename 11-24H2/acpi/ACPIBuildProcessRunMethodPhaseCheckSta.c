/*
 * XREFs of ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1400175C0
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 *     ACPIBuildCompleteMustSucceed @ 0x14001E380 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIDeviceHasFirmwareDependencies @ 0x140038694 (ACPIDeviceHasFirmwareDependencies.c)
 *     WPP_RECORDER_SF_qss @ 0x14003E0C4 (WPP_RECORDER_SF_qss.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x140053814 (ACPIVerifyAndCopyFirmwareDependencies.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseCheckSta(__int64 a1)
{
  __int64 v1; // rbx
  const char *v2; // r14
  char v3; // si
  int v5; // ebp
  const char *v6; // rdx
  int v7; // edx
  const char *v8; // rcx
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rcx
  const char *v12; // rax
  int v13; // edx
  __int64 v14; // r8
  __int64 v15; // r10
  int v16; // eax
  __int64 v17; // rax
  const char *v18; // rcx
  __int64 v19; // [rsp+38h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 40);
  v2 = byte_1400753E8;
  v3 = 0;
  *(_DWORD *)(a1 + 32) = 6;
  v5 = 0;
  v6 = *(const char **)(v1 + 1120);
  if ( ((unsigned __int8)v6 & 0x20) != 0 )
  {
    if ( *(_QWORD *)(v1 + 648) && ((unsigned __int8)v6 & 0x40) == 0 )
      *(_DWORD *)(a1 + 20) |= 0x20u;
  }
  else
  {
    v16 = ACPIVerifyAndCopyFirmwareDependencies(*(_QWORD *)(v1 + 760));
    dword_1400890B8 = 0;
    pszDest = 0;
    v5 = v16;
    FreeDataBuffs(a1 + 88, 1u);
    if ( v5 < 0 )
    {
      v17 = *(_QWORD *)(v1 + 8);
      v6 = byte_1400753E8;
      v18 = byte_1400753E8;
      if ( (v17 & 0x200000000000LL) != 0 )
      {
        v6 = *(const char **)(v1 + 608);
        if ( (v17 & 0x400000000000LL) != 0 )
          v18 = *(const char **)(v1 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v19 = (__int64)v6;
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_Lqss(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v6,
          6,
          62,
          (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
          v5,
          v1,
          v19,
          (__int64)v18);
      }
    }
    else
    {
      *(_DWORD *)(a1 + 20) |= 0x20u;
      _InterlockedOr64((volatile signed __int64 *)(v1 + 1120), 0x20uLL);
    }
  }
  if ( (*(_DWORD *)(a1 + 84) & 8) != 0 )
  {
    if ( (*(_DWORD *)(v1 + 1120) & 0x2000LL) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v1 + 1120), 0xFFFFFFFFFFFFCFFFuLL);
    }
    else if ( (unsigned __int8)ACPIDeviceHasFirmwareDependencies(v1, v6, 0x200000000000LL) )
    {
      *(_DWORD *)(a1 + 32) = 0;
      _InterlockedOr64((volatile signed __int64 *)(v1 + 1120), 0x1000uLL);
      v11 = *(_QWORD *)(v1 + 8);
      v12 = byte_1400753E8;
      if ( (v11 & v14) != 0 )
      {
        v2 = *(const char **)(v1 + 608);
        if ( (v11 & 0x400000000000LL) != 0 )
          v12 = *(const char **)(v1 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 4;
        WPP_RECORDER_SF_qss(WPP_GLOBAL_Control->DeviceExtension, v13, 6, 63, v15, v1, (__int64)v2, (__int64)v12);
      }
      goto LABEL_16;
    }
  }
  if ( (*(_DWORD *)(a1 + 84) & 1) == 0 )
    goto LABEL_16;
  v5 = ACPIGet(v1, 1096045407, -1610348542, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, a1 + 128, 0LL);
  v8 = byte_1400753E8;
  if ( v1 )
  {
    v9 = *(_QWORD *)(v1 + 8);
    v3 = v1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v2 = *(const char **)(v1 + 608);
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = *(const char **)(v1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      6,
      64,
      (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
      v5,
      v3,
      (__int64)v2,
      (__int64)v8);
  }
  result = 259LL;
  if ( v5 != 259 )
  {
LABEL_16:
    ACPIBuildCompleteMustSucceed(0LL);
    return (unsigned int)v5;
  }
  return result;
}
