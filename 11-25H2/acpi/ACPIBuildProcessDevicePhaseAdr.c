/*
 * XREFs of ACPIBuildProcessDevicePhaseAdr @ 0x1400294B0
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x14001E380 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIIsNamedChildPresent @ 0x140029050 (AMLIIsNamedChildPresent.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x140053814 (ACPIVerifyAndCopyFirmwareDependencies.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseAdr(__int64 a1)
{
  ULONG_PTR v1; // rdi
  const char *v2; // r14
  int v3; // ebp
  __int64 *v5; // rbx
  __int64 v6; // rcx
  char v7; // dl
  const char *v8; // rax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  const char *v13; // rdx
  const char *v14; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = byte_140075488;
  v3 = 0;
  if ( (*(_BYTE *)(v1 + 1120) & 0x20) != 0 )
  {
    if ( *(_QWORD *)(v1 + 648) && (*(_QWORD *)(v1 + 8) & 0x300000000000LL) == 0 )
      goto LABEL_25;
  }
  else
  {
    v11 = ACPIVerifyAndCopyFirmwareDependencies(*(_QWORD *)(v1 + 760));
    dword_140089138 = 0;
    pszDest = 0;
    v3 = v11;
    FreeDataBuffs(a1 + 80, 1u);
    if ( v3 >= 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v1 + 1120), 0x20uLL);
LABEL_25:
      *(_DWORD *)(a1 + 20) |= 0x20u;
      goto LABEL_3;
    }
    v12 = *(_QWORD *)(v1 + 8);
    v13 = byte_140075488;
    v14 = byte_140075488;
    if ( (v12 & 0x200000000000LL) != 0 )
    {
      v13 = *(const char **)(v1 + 608);
      if ( (v12 & 0x400000000000LL) != 0 )
        v14 = *(const char **)(v1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0x20u,
        (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
        v3,
        v1,
        v13,
        v14);
  }
LABEL_3:
  if ( (*(_QWORD *)(v1 + 8) & 0x100000000000LL) != 0 )
  {
    *(_DWORD *)(a1 + 32) = 10;
  }
  else if ( AMLIIsNamedChildPresent(*(__int64 **)(v1 + 760), 1145653343) )
  {
    if ( (*(_DWORD *)(a1 + 20) & 0x20) != 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x200000000000uLL);
      *(_DWORD *)(a1 + 32) = 16;
    }
    else
    {
      *(_DWORD *)(a1 + 32) = 6;
    }
  }
  else
  {
    v5 = AMLIGetNamedChild(*(__int64 **)(v1 + 760), 1380204895);
    if ( !v5 )
      KeBugCheckEx(0xA5u, 0xDuLL, v1, 0x5244415FuLL, 0LL);
    _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x100000000000uLL);
    v6 = *(_QWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 32) = 10;
    if ( v6 )
      AMLIDereferenceHandleEx(v6);
    *(_QWORD *)(a1 + 56) = v5;
    v3 = ACPIGet(v1, 1380204895, -1610349566, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + 608, 0LL);
  }
  v7 = 0;
  v8 = byte_140075488;
  if ( v1 )
  {
    v10 = *(_QWORD *)(v1 + 8);
    v7 = v1;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v2 = *(const char **)(v1 + 608);
      if ( (v10 & 0x400000000000LL) != 0 )
        v8 = *(const char **)(v1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x21u,
      (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
      v3,
      v7,
      v2,
      v8);
  if ( v3 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL, v3, 0LL, a1);
  return (unsigned int)v3;
}
