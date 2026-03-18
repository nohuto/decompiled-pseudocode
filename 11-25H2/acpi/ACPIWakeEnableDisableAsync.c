/*
 * XREFs of ACPIWakeEnableDisableAsync @ 0x140032750
 * Callers:
 *     ACPIDeviceInitializePowerRequest @ 0x14001BA00 (ACPIDeviceInitializePowerRequest.c)
 *     ACPIDeviceCancelWaitWakeIrp @ 0x140032430 (ACPIDeviceCancelWaitWakeIrp.c)
 * Callees:
 *     AMLIAsyncEvalObject @ 0x140010934 (AMLIAsyncEvalObject.c)
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x140032D20 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIWakeEnableDisablePciDevice @ 0x1400330A8 (ACPIWakeEnableDisablePciDevice.c)
 *     WPP_RECORDER_SF_dqss @ 0x140033790 (WPP_RECORDER_SF_dqss.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall ACPIWakeEnableDisableAsync(
        __int64 a1,
        char a2,
        __int64 (__fastcall *a3)(__int64 *, _QWORD, _QWORD, __int64),
        __int64 a4)
{
  unsigned int v6; // r15d
  __int64 v7; // rdx
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rdi
  bool v11; // zf
  __int64 v12; // r8
  const char *v13; // rsi
  const char *v14; // r10
  const char *v15; // rcx
  char v16; // r11
  __int64 *v17; // r14
  _BYTE *v18; // rax
  __int64 v19; // r14
  KIRQL v20; // dl
  __int64 *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  int v25; // eax
  int v26; // ecx
  int v27; // r8d
  __int64 v28; // rcx
  const char *v29; // rax
  unsigned int v31; // eax
  __int64 v32; // rcx
  unsigned int v33; // edi
  const char *v34; // rax
  __int64 v35; // rax
  char v36; // r11
  __int64 v37; // rax
  const char *v38; // rcx
  __int64 *v40; // [rsp+58h] [rbp-F0h]
  __int64 v42; // [rsp+60h] [rbp-E8h]
  _QWORD v44[16]; // [rsp+70h] [rbp-D8h] BYREF

  v6 = 259;
  memset(v44, 0, 0x78uLL);
  v9 = *(_DWORD *)(a1 + 552);
  v10 = 0LL;
  v11 = a2 == 0;
  v12 = 0LL;
  v13 = byte_140075488;
  v14 = byte_140075488;
  v15 = byte_140075488;
  if ( !v11 )
  {
    v16 = v9 + 1;
    *(_DWORD *)(a1 + 552) = v9 + 1;
    if ( a1 )
    {
      v35 = *(_QWORD *)(a1 + 8);
      v12 = a1;
      if ( (v35 & 0x200000000000LL) != 0 )
      {
        v14 = *(const char **)(a1 + 608);
        if ( (v35 & 0x400000000000LL) != 0 )
          v15 = *(const char **)(a1 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_dqss(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        17,
        15,
        (__int64)&WPP_1095886ccac338778821f66e45f1cb69_Traceguids,
        v16,
        v12,
        (__int64)v14,
        (__int64)v15);
    }
    if ( *(_DWORD *)(a1 + 552) == 1 )
      goto LABEL_6;
    if ( _bittest64((const signed __int64 *)(a1 + 8), 0x3Bu) )
    {
      LOBYTE(v7) = 1;
LABEL_51:
      ACPIWakeEnableDisablePciDevice(a1, v7, v12, v8);
      goto LABEL_40;
    }
    goto LABEL_40;
  }
  v36 = v9 - 1;
  *(_DWORD *)(a1 + 552) = v9 - 1;
  if ( a1 )
  {
    v37 = *(_QWORD *)(a1 + 8);
    v12 = a1;
    if ( (v37 & 0x200000000000LL) != 0 )
    {
      v14 = *(const char **)(a1 + 608);
      if ( (v37 & 0x400000000000LL) != 0 )
        v15 = *(const char **)(a1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_dqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      17,
      16,
      (__int64)&WPP_1095886ccac338778821f66e45f1cb69_Traceguids,
      v36,
      v12,
      (__int64)v14,
      (__int64)v15);
  }
  if ( *(_DWORD *)(a1 + 552) )
  {
    if ( _bittest64((const signed __int64 *)(a1 + 8), 0x3Bu) )
    {
      v7 = 1LL;
      goto LABEL_51;
    }
LABEL_40:
    v17 = 0LL;
    goto LABEL_19;
  }
LABEL_6:
  v17 = *(__int64 **)(a1 + 456);
  v40 = v17;
  if ( v17 )
  {
    v18 = ExAllocateFromNPagedLookasideList(&XswContextLookAsideList);
    v19 = (__int64)v18;
    if ( v18 )
    {
      v18[24] = a2;
      *((_QWORD *)v18 + 4) = a3;
      *((_QWORD *)v18 + 5) = a4;
      *((_QWORD *)v18 + 2) = a1;
      *((_DWORD *)v18 + 7) = 1;
      v20 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
      v42 = *(_QWORD *)(a1 + 560);
      v21 = *(__int64 **)(a1 + 568);
      if ( *v21 != a1 + 560 )
        __fastfail(3u);
      *(_QWORD *)(v19 + 8) = v21;
      *(_QWORD *)v19 = a1 + 560;
      *v21 = v19;
      *(_QWORD *)(a1 + 568) = v19;
      KeReleaseSpinLock(&AcpiPowerLock, v20);
      v24 = *(_QWORD *)(a1 + 8);
      if ( v42 == a1 + 560 )
      {
        if ( (v24 & 0x800000000000000LL) != 0 && !*(_BYTE *)(v19 + 24) )
          ACPIWakeEnableDisablePciDevice(a1, 0LL, v22, v23);
        v25 = *(_DWORD *)(a1 + 600);
        WORD1(v44[0]) = 1;
        if ( (v25 & 0x40) != 0 )
        {
          v26 = *(_DWORD *)(a1 + 540);
          v27 = 3;
          WORD1(v44[5]) = 1;
          v44[2] = a2 != 0;
          LOBYTE(v10) = AcpiPowerLeavingS0 != 0;
          WORD1(v44[10]) = 1;
          v44[7] = v10;
          if ( v26 != 4 || (*(_DWORD *)(a1 + 8) & 0x800LL) != 0 )
            v44[12] = v26 - 1;
          else
            v44[12] = 4LL;
        }
        else
        {
          v27 = 1;
          LOBYTE(v10) = a2 != 0;
          v44[2] = v10;
        }
        v31 = AMLIAsyncEvalObject(v40, 0LL, v27, (__int64)v44, ACPIWakeEnableDisableAsyncCallBack, v19);
        v32 = *(_QWORD *)(a1 + 8);
        v33 = v31;
        v34 = byte_140075488;
        if ( (v32 & 0x200000000000LL) != 0 )
        {
          v13 = *(const char **)(a1 + 608);
          if ( (v32 & 0x400000000000LL) != 0 )
            v34 = *(const char **)(a1 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Lqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            0x11u,
            0x11u,
            (__int64)&WPP_1095886ccac338778821f66e45f1cb69_Traceguids,
            v33,
            a1,
            v13,
            v34);
        if ( v33 != 259 )
          ACPIWakeEnableDisableAsyncCallBack(v40, v33, 0LL, v19);
      }
      else
      {
        v38 = byte_140075488;
        if ( (v24 & 0x200000000000LL) != 0 )
        {
          v13 = *(const char **)(a1 + 608);
          if ( (v24 & 0x400000000000LL) != 0 )
            v38 = *(const char **)(a1 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Lqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            0x11u,
            0x12u,
            (__int64)&WPP_1095886ccac338778821f66e45f1cb69_Traceguids,
            3,
            a1,
            v13,
            v38);
      }
      return 259LL;
    }
    v17 = v40;
    v6 = -1073741670;
  }
  else if ( _bittest64((const signed __int64 *)(a1 + 8), 0x3Bu) )
  {
    LOBYTE(v7) = a2;
    ACPIWakeEnableDisablePciDevice(a1, v7, v12, v8);
  }
LABEL_19:
  v28 = *(_QWORD *)(a1 + 8);
  v29 = byte_140075488;
  if ( (v28 & 0x200000000000LL) != 0 )
  {
    v13 = *(const char **)(a1 + 608);
    if ( (v28 & 0x400000000000LL) != 0 )
      v29 = *(const char **)(a1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0x13u,
      (__int64)&WPP_1095886ccac338778821f66e45f1cb69_Traceguids,
      v6,
      a1,
      v13,
      v29);
  return a3(v17, v6, 0LL, a4);
}
