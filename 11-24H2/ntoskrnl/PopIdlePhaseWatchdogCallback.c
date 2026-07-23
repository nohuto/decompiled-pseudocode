/*
 * XREFs of PopIdlePhaseWatchdogCallback @ 0x1404BA980
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopPdcSnapDiagnosticContext @ 0x1406F9640 (PopPdcSnapDiagnosticContext.c)
 *     PopPowerAggregatorSnapDiagnosticContext @ 0x1407581B4 (PopPowerAggregatorSnapDiagnosticContext.c)
 *     PopSnapSystemIdleContext @ 0x140A6E360 (PopSnapSystemIdleContext.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140AA4BD0 (DbgkWerCaptureLiveKernelDump.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopIdlePhaseWatchdogCallback(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r12d
  PVOID v8; // rbx
  PVOID v9; // rdi
  PVOID v10; // r14
  PVOID v11; // r15
  PVOID v12; // rsi
  unsigned int v13; // eax
  PVOID v15[2]; // [rsp+58h] [rbp-69h] BYREF
  PVOID v16[2]; // [rsp+68h] [rbp-59h]
  PVOID v17[2]; // [rsp+78h] [rbp-49h]
  PVOID P; // [rsp+88h] [rbp-39h] BYREF
  int v19; // [rsp+90h] [rbp-31h]
  PVOID v20; // [rsp+98h] [rbp-29h] BYREF
  _BYTE v21[8]; // [rsp+A0h] [rbp-21h] BYREF
  PVOID v22; // [rsp+A8h] [rbp-19h]
  PVOID v23; // [rsp+B0h] [rbp-11h]
  PVOID v24; // [rsp+B8h] [rbp-9h]
  PVOID v25; // [rsp+C0h] [rbp-1h]
  PVOID v26; // [rsp+C8h] [rbp+7h]
  PVOID v27[7]; // [rsp+D0h] [rbp+Fh] BYREF

  v6 = 0;
  *(_OWORD *)v15 = 0LL;
  *(_OWORD *)v16 = 0LL;
  *(_OWORD *)v17 = 0LL;
  memset_0(&P, 0, 0x50uLL);
  PopPdcSnapDiagnosticContext(v15);
  v8 = v15[0];
  v9 = v15[1];
  v10 = v16[1];
  v11 = v17[0];
  v12 = v17[1];
  v22 = v15[0];
  v23 = v15[1];
  v24 = v16[1];
  v25 = v17[0];
  v26 = v17[1];
  if ( ((__int64)v16[0] & 0xFFFFFFDF) != 0 )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&xmmword_140F07948);
    P = qword_140F07958;
    v19 = dword_140F07960;
    dword_140F07960 = 0;
    qword_140F07958 = 0LL;
    PopReleaseRwLock((signed __int64 *)&xmmword_140F07948);
    PopSnapSystemIdleContext(&v20, v21);
    PopPowerAggregatorSnapDiagnosticContext(v27);
    v13 = DbgkWerCaptureLiveKernelDump((unsigned int)L"IdlePhaseWatchdog", a2, a3, a4, a5, a6, 0LL, 0LL, 0);
    v12 = v26;
    v6 = v13;
    v11 = v25;
    v10 = v24;
    v9 = v23;
    v8 = v22;
  }
  if ( P )
    ExFreePoolWithTag(P, 0x67696450u);
  if ( v20 )
    ExFreePoolWithTag(v20, 0x67696450u);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x54445050u);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x54445050u);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x54445050u);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x54445050u);
  if ( v12 )
    ExFreePoolWithTag(v12, 0x54445050u);
  if ( v27[0] )
    ExFreePoolWithTag(v27[0], 0x67696450u);
  return v6;
}
