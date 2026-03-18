/*
 * XREFs of ACPIBuildProcessRunMethodPhaseCheckDep @ 0x14001E030
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x140010934 (AMLIAsyncEvalObject.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x14001E380 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseCheckDep(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // si
  unsigned int v4; // edi
  const char *v5; // rax
  const char *v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // [rsp+40h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 5;
  *(_OWORD *)(a1 + 88) = 0LL;
  v2 = 0;
  *(_OWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  v4 = 0;
  if ( (*(_BYTE *)(v1 + 1120) & 0x20) == 0 )
  {
    v9 = *(_QWORD *)(a1 + 56);
    if ( v9 )
    {
      AMLIDereferenceHandleEx(v9);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    v10 = AMLIGetNamedChild(*(__int64 **)(v1 + 760), 1346716767);
    *(_QWORD *)(a1 + 56) = v10;
    if ( v10 )
    {
      v4 = AMLIAsyncEvalObject(v10, a1 + 88, 0, 0LL, ACPIBuildCompleteMustSucceed, a1);
    }
    else
    {
      KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
      _InterlockedOr64((volatile signed __int64 *)(v1 + 1120), 0x20uLL);
      KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
    }
  }
  v5 = byte_140075488;
  v6 = byte_140075488;
  if ( v1 )
  {
    v7 = *(_QWORD *)(v1 + 8);
    v2 = v1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v5 = *(const char **)(v1 + 608);
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = *(const char **)(v1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = (__int64)v6;
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v6,
      6,
      61,
      (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
      v4,
      v2,
      (__int64)v5,
      v11);
  }
  if ( v4 != 259 )
    ACPIBuildCompleteMustSucceed(0LL);
  return v4;
}
