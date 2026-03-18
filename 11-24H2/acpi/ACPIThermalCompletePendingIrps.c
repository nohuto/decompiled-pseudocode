/*
 * XREFs of ACPIThermalCompletePendingIrps @ 0x1400381F0
 * Callers:
 *     ACPIThermalLoopEx @ 0x140037A14 (ACPIThermalLoopEx.c)
 *     ACPIThermalStopZoneWorker @ 0x140069144 (ACPIThermalStopZoneWorker.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qqssdddd @ 0x140038BB8 (WPP_RECORDER_SF_qqssdddd.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     memmove @ 0x140070C40 (memmove.c)
 */

char __fastcall ACPIThermalCompletePendingIrps(__int64 a1)
{
  __int64 v1; // r15
  char v3; // di
  KIRQL v4; // al
  __int64 *v5; // r12
  __int64 *v6; // rbx
  __int64 *v7; // rsi
  __int64 v8; // r13
  _QWORD *v9; // rbx
  _QWORD *v10; // rcx
  IRP *v11; // rdi
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  const char *v14; // r15
  const char *v15; // rsi
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 **v20; // rcx
  __int64 **v21; // rax
  __int64 v23; // r13
  void *Pool2; // rax
  IRP *v25; // [rsp+30h] [rbp-51h]
  __int64 v26; // [rsp+38h] [rbp-49h]
  const char *v27; // [rsp+40h] [rbp-41h]
  const char *v28; // [rsp+48h] [rbp-39h]
  int Hour; // [rsp+50h] [rbp-31h]
  int Minute; // [rsp+58h] [rbp-29h]
  int Second; // [rsp+60h] [rbp-21h]
  int Milliseconds; // [rsp+68h] [rbp-19h]
  KIRQL v33; // [rsp+78h] [rbp-9h]
  _QWORD *v34; // [rsp+80h] [rbp-1h] BYREF
  __int64 *v35; // [rsp+88h] [rbp+7h]
  union _LARGE_INTEGER Time; // [rsp+90h] [rbp+Fh] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+98h] [rbp+17h] BYREF

  v1 = *(_QWORD *)(a1 + 200);
  v35 = (__int64 *)&v34;
  v3 = 0;
  v34 = &v34;
  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalLock);
  v5 = (__int64 *)AcpiThermalList;
  v33 = v4;
  if ( (__int64 *)AcpiThermalList == &AcpiThermalList )
    goto LABEL_5;
  do
  {
    v6 = v5;
    v7 = v5;
    v5 = (__int64 *)*v5;
    v8 = v6[2];
    if ( ACPIInternalGetDeviceExtension(*(_QWORD *)(v8 + 40)) != a1 )
      continue;
    v17 = *(_DWORD *)(v8 + 24);
    if ( v17 == 2703488 )
    {
      if ( !_InterlockedExchange64(v6 - 8, 0LL) )
        continue;
      *(_DWORD *)(a1 + 192) |= 0x20000000u;
      v18 = *(v6 - 18);
      *(_OWORD *)v18 = *(_OWORD *)v1;
      *(_OWORD *)(v18 + 16) = *(_OWORD *)(v1 + 16);
      *(_OWORD *)(v18 + 32) = *(_OWORD *)(v1 + 32);
      *(_OWORD *)(v18 + 48) = *(_OWORD *)(v1 + 48);
      *(_OWORD *)(v18 + 64) = *(_OWORD *)(v1 + 64);
      *(_QWORD *)(v18 + 80) = *(_QWORD *)(v1 + 80);
      *(_DWORD *)(v18 + 88) = *(_DWORD *)(v1 + 88);
      *(v6 - 14) = 92LL;
    }
    else if ( v17 == 2703512 )
    {
      v23 = *(v6 - 18);
      *(_OWORD *)v23 = 0LL;
      if ( *(_QWORD *)(v1 + 312) )
      {
        Pool2 = (void *)ExAllocatePool2(64LL, *(unsigned __int16 *)(v1 + 306), 1416651585LL);
        *(_QWORD *)(v23 + 8) = Pool2;
        if ( Pool2 )
        {
          *(_WORD *)v23 = *(_WORD *)(v1 + 304);
          *(_WORD *)(v23 + 2) = *(_WORD *)(v1 + 306);
          memmove(Pool2, *(const void **)(v1 + 312), *(unsigned __int16 *)(v1 + 306));
        }
      }
      *(v6 - 14) = 16LL;
    }
    else
    {
      *(v6 - 14) = 0LL;
    }
    *((_DWORD *)v6 - 30) = 0;
    v19 = *v7;
    if ( *(__int64 **)(*v7 + 8) != v7
      || (v20 = (__int64 **)v7[1], *v20 != v7)
      || (*v20 = (__int64 *)v19, *(_QWORD *)(v19 + 8) = v20, v21 = (__int64 **)v35, (_QWORD **)*v35 != &v34) )
    {
LABEL_23:
      __fastfail(3u);
    }
    v7[1] = (__int64)v35;
    *v7 = (__int64)&v34;
    *v21 = v7;
    v35 = v7;
  }
  while ( v5 != &AcpiThermalList );
  v4 = v33;
LABEL_5:
  KeReleaseSpinLock(&AcpiThermalLock, v4);
  v9 = v34;
  while ( v9 != &v34 )
  {
    v10 = (_QWORD *)*v9;
    v11 = (IRP *)(v9 - 21);
    v12 = v9;
    v9 = v10;
    if ( (_QWORD *)v10[1] != v12 )
      goto LABEL_23;
    v13 = (_QWORD *)v12[1];
    if ( (_QWORD *)*v13 != v12 )
      goto LABEL_23;
    *v13 = v10;
    v14 = byte_1400753E8;
    v10[1] = v13;
    v15 = byte_1400753E8;
    TimeFields = 0LL;
    Time.QuadPart = MEMORY[0xFFFFF78000000008];
    RtlTimeToTimeFields(&Time, &TimeFields);
    v16 = *(_QWORD *)(a1 + 8);
    if ( (v16 & 0x200000000000LL) != 0 )
    {
      v14 = *(const char **)(a1 + 608);
      if ( (v16 & 0x400000000000LL) != 0 )
        v15 = *(const char **)(a1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Milliseconds = TimeFields.Milliseconds;
      Second = TimeFields.Second;
      Minute = TimeFields.Minute;
      Hour = TimeFields.Hour;
      v28 = v15;
      v27 = v14;
      v26 = a1;
      v25 = v11;
      WPP_RECORDER_SF_qqssdddd(WPP_GLOBAL_Control->DeviceExtension, TimeFields.Second, TimeFields.Minute, 11);
    }
    IofCompleteRequest(v11, 0);
    v3 = 1;
  }
  return v3;
}
