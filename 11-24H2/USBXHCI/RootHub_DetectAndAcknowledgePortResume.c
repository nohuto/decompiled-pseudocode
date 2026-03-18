/*
 * XREFs of RootHub_DetectAndAcknowledgePortResume @ 0x14000B478
 * Callers:
 *     RootHub_HandlePortStatusChangeEvent @ 0x140009CC0 (RootHub_HandlePortStatusChangeEvent.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x140037740 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     RootHub_WdfEvtTimerPortOperationPendingTimerDpc @ 0x14004AA40 (RootHub_WdfEvtTimerPortOperationPendingTimerDpc.c)
 * Callees:
 *     DynamicLock_Acquire @ 0x14000BF40 (DynamicLock_Acquire.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x14000C924 (RootHub_ReleaseReadModifyWriteLock.c)
 *     DynamicLock_Release @ 0x14000C970 (DynamicLock_Release.c)
 *     XilRegister_ReadUlong @ 0x14000D210 (XilRegister_ReadUlong.c)
 *     Controller_RaiseAndTrackIrql @ 0x14000DA20 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000DC30 (Controller_LowerAndTrackIrql.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     XilRegister_WriteUlong @ 0x14001BA28 (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x14001D070 (RootHub_RestoreU1U2Timeouts.c)
 *     WPP_RECORDER_SF_dDd @ 0x140031B34 (WPP_RECORDER_SF_dDd.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

char __fastcall RootHub_DetectAndAcknowledgePortResume(_QWORD *a1, unsigned int a2, char a3)
{
  unsigned int v3; // r12d
  __int64 v4; // r14
  __int64 v6; // r15
  __int64 v8; // rsi
  char v9; // bp
  __int64 v10; // r15
  __int64 v11; // rbx
  int v12; // edx
  int Ulong; // ebx
  __int64 v14; // rcx
  char v15; // bl
  char v17; // al
  int v18; // edx
  int v19; // r8d
  int v20; // r9d
  unsigned __int16 v21; // r15
  unsigned int v22; // ebx
  char v23; // al
  int v24; // edx
  __int64 v25; // [rsp+80h] [rbp+8h]
  char v26; // [rsp+88h] [rbp+10h]

  v3 = a2 - 1;
  v4 = a1[6];
  v6 = a2 - 1;
  v8 = 120 * v6;
  v9 = 0;
  v10 = a1[5] + 16 * v6;
  v25 = *(_QWORD *)(a1[1] + 88LL);
  v26 = 0;
  if ( KeGetCurrentIrql() == 2 && *(_BYTE *)(a1[1] + 1001LL) )
  {
    Controller_LowerAndTrackIrql();
    v9 = 1;
  }
  v11 = a1[6];
  DynamicLock_Acquire(*(_QWORD *)(v8 + v11 + 24));
  *(_BYTE *)(v8 + v11 + 32) = v9;
  Ulong = XilRegister_ReadUlong(v25, v10);
  if ( *(_BYTE *)(v8 + v4 + 13) == 3
    && (Ulong & 0x1E0) == 0
    && (Ulong & 0x400000) != 0
    && (*(_QWORD *)(a1[1] + 736LL) & 0x80000LL) != 0 )
  {
    RootHub_RestoreU1U2Timeouts(a1, a2);
  }
  if ( (Ulong & 0x1E0) == 0x1E0 && (a3 || (Ulong & 0x400000) != 0) )
  {
    v26 = 1;
    if ( *(_BYTE *)(v8 + v4 + 18) != 1 )
    {
      v17 = *(_BYTE *)(v8 + v4 + 13);
      *(_BYTE *)(v8 + v4 + 18) = 1;
      if ( v17 == 2 )
      {
        RootHub_ReleaseReadModifyWriteLock(a1, v3);
        if ( *(int *)(v8 + v4 + 48) > 0 )
          v21 = *(_WORD *)(v8 + v4 + 52);
        else
          v21 = 50;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dDd(*(_QWORD *)(a1[1] + 72LL), v18, v19, v20);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 2552))(
          WdfDriverGlobals,
          *(_QWORD *)(v8 + v4 + 40),
          -10000LL * v21);
        return v26;
      }
      if ( v17 == 3 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = 3;
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(a1[1] + 72LL),
            v12,
            11,
            210,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            a2,
            Ulong);
        }
        v22 = Ulong & 0xE40C200 | 0x10000;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1[1] + 72LL),
            v12,
            11,
            211,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            v22);
        }
        XilRegister_WriteUlong(v25, v10, v22);
        v23 = XilRegister_ReadUlong(v25, v10);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v24) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1[1] + 72LL),
            v24,
            11,
            212,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            v23);
        }
      }
    }
  }
  v14 = a1[6];
  v15 = *(_BYTE *)(v8 + v14 + 32);
  *(_BYTE *)(v8 + v14 + 32) = 0;
  DynamicLock_Release(*(_QWORD *)(v8 + v14 + 24));
  if ( v15 )
    Controller_RaiseAndTrackIrql(a1[1]);
  return v26;
}
