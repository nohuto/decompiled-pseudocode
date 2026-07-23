/*
 * XREFs of PopDiagTraceIrpFinishTelemetry @ 0x1402E66B0
 * Callers:
 *     PopDiagTraceIrpFinish @ 0x1402E64EC (PopDiagTraceIrpFinish.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1402B92A8 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IoFindDeviceThatFailedIrp @ 0x1402F074C (IoFindDeviceThatFailedIrp.c)
 *     PopComputeWatchdogTimeout @ 0x140314F34 (PopComputeWatchdogTimeout.c)
 *     PopDiagGetDriverName @ 0x1403CBCB8 (PopDiagGetDriverName.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceIrpFinishTelemetry(__int64 a1)
{
  const wchar_t *v1; // r13
  __int64 v3; // rbx
  KIRQL v4; // r9
  __int64 v5; // r8
  __int64 v6; // r14
  bool v7; // di
  unsigned __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 DeviceThatFailedIrp; // rax
  int DriverName; // eax
  const wchar_t *v14; // rcx
  int v15; // r9d
  int v16; // r10d
  int v17; // r11d
  int v18; // [rsp+38h] [rbp-D0h] BYREF
  int v19; // [rsp+3Ch] [rbp-CCh] BYREF
  int v20; // [rsp+40h] [rbp-C8h] BYREF
  int v21; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v22; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+68h] [rbp-A0h] BYREF
  int *v27; // [rsp+88h] [rbp-80h]
  __int64 v28; // [rsp+90h] [rbp-78h]
  __int64 *v29; // [rsp+98h] [rbp-70h]
  __int64 v30; // [rsp+A0h] [rbp-68h]
  __int64 *v31; // [rsp+A8h] [rbp-60h]
  __int64 v32; // [rsp+B0h] [rbp-58h]
  _BYTE v33[16]; // [rsp+B8h] [rbp-50h] BYREF
  int *v34; // [rsp+C8h] [rbp-40h]
  __int64 v35; // [rsp+D0h] [rbp-38h]
  int *v36; // [rsp+D8h] [rbp-30h]
  __int64 v37; // [rsp+E0h] [rbp-28h]
  int *v38; // [rsp+E8h] [rbp-20h]
  __int64 v39; // [rsp+F0h] [rbp-18h]
  __int64 *v40; // [rsp+F8h] [rbp-10h]
  __int64 v41; // [rsp+100h] [rbp-8h]
  __int64 *v42; // [rsp+108h] [rbp+0h]
  __int64 v43; // [rsp+110h] [rbp+8h]
  _BYTE v44[128]; // [rsp+118h] [rbp+10h] BYREF

  v1 = &SourceString;
  v3 = *(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200);
  v18 = *(_DWORD *)(a1 + 48);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 288));
  v5 = *(_QWORD *)(v3 + 48);
  v6 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  v7 = 0;
  v8 = (MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] - v5) / 0x2710uLL;
  if ( v5 && *(_DWORD *)(v3 + 296) == 1 )
    v7 = (unsigned int)v8 >= 0x1388;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 288), v4);
  if ( v7 )
  {
    if ( v18 < 0 && !*(_DWORD *)(v3 + 188) )
    {
      DeviceThatFailedIrp = IoFindDeviceThatFailedIrp(a1, v9, v10, v11);
      DriverName = PopDiagGetDriverName(DeviceThatFailedIrp, v44);
      v14 = (const wchar_t *)v44;
      if ( DriverName < 0 )
        v14 = &SourceString;
      v1 = v14;
    }
    PopComputeWatchdogTimeout(v3);
    if ( (unsigned int)dword_140E07680 > 5 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_140E07680, 0x400000000000LL) )
      {
        v18 = v8;
        v27 = &v18;
        v23 = *(_QWORD *)(v3 + 48);
        v29 = &v23;
        v31 = &v24;
        v28 = 4LL;
        v30 = 8LL;
        v24 = v6;
        v32 = 8LL;
        tlgCreate1Sz_wchar_t((__int64)v33, v1);
        v19 = v15;
        v34 = &v19;
        v20 = *(_DWORD *)(v3 + 188);
        v35 = 4LL;
        v36 = &v20;
        v37 = 4LL;
        v38 = &v21;
        v40 = &v22;
        v42 = &v25;
        v21 = v16;
        v39 = 4LL;
        LODWORD(v22) = v17;
        v41 = 4LL;
        v25 = 0x1000000LL;
        v43 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E07680,
          (unsigned __int8 *)word_14004B79A,
          0LL,
          0LL,
          0xBu,
          &v26);
      }
    }
  }
}
