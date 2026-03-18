/*
 * XREFs of ACPIFanSetTripPoints @ 0x1400964E8
 * Callers:
 *     ACPIFanWorker @ 0x140048C80 (ACPIFanWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x14002AD3C (WPP_RECORDER_SF_Dqss.c)
 *     AMLIFreeDataBuffs @ 0x140040074 (AMLIFreeDataBuffs.c)
 *     WPP_RECORDER_SF_ddqss @ 0x1400456DC (WPP_RECORDER_SF_ddqss.c)
 *     ACPIAmliEvaluateDsm @ 0x1400B9FBC (ACPIAmliEvaluateDsm.c)
 */

__int64 __fastcall ACPIFanSetTripPoints(_QWORD *a1, int a2, int a3)
{
  __int64 Pool2; // rax
  void *v7; // rdi
  int v8; // esi
  __int64 v9; // rcx
  PVOID v10; // rdi
  __int64 v11; // rdx
  const char *v12; // rax
  const char *v13; // r8
  __int64 v14; // rdx
  const char *v15; // rax
  const char *v16; // r8
  __int128 v18; // [rsp+50h] [rbp-28h] BYREF
  PVOID P; // [rsp+98h] [rbp+20h] BYREF

  P = 0LL;
  Pool2 = ExAllocatePool2(256LL, 88LL, 1416651585LL);
  v7 = (void *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 32) = 4;
    *(_DWORD *)Pool2 = 2;
    *(_DWORD *)(Pool2 + 24) = a2;
    *(_DWORD *)(Pool2 + 72) = 4;
    *(_DWORD *)(Pool2 + 64) = a3;
    *(_WORD *)(Pool2 + 10) = 1;
    *(_WORD *)(Pool2 + 50) = 1;
    v9 = a1[95];
    v18 = FAN_EXTENSIONS_DSM_UUID;
    v8 = ACPIAmliEvaluateDsm(v9, (unsigned int)&v18, 0, 2, Pool2, (__int64)&P);
    ExFreePoolWithTag(v7, 0x54706341u);
    if ( v8 < 0 )
    {
      v14 = a1[1];
      v15 = byte_140075488;
      v16 = byte_140075488;
      if ( (v14 & 0x200000000000LL) != 0 )
      {
        v15 = (const char *)a1[76];
        if ( (v14 & 0x400000000000LL) != 0 )
          v16 = (const char *)a1[77];
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x10u,
          0x32u,
          (__int64)&WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
          v8,
          (char)a1,
          v15,
          v16);
    }
    else
    {
      v10 = P;
      if ( P )
      {
        AMLIFreeDataBuffs((__int64)P);
        ExFreePoolWithTag(v10, 0x52706341u);
      }
      v11 = a1[1];
      v12 = byte_140075488;
      v13 = byte_140075488;
      if ( (v11 & 0x200000000000LL) != 0 )
      {
        v12 = (const char *)a1[76];
        if ( (v11 & 0x400000000000LL) != 0 )
          v13 = (const char *)a1[77];
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x10u,
          0x31u,
          (__int64)&WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
          a2,
          a3,
          (char)a1,
          v12,
          v13);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
