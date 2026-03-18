/*
 * XREFs of RootHub_DetectAndAcknowledgePortResume @ 0x140008F4C
 * Callers:
 *     RootHub_HandlePortStatusChangeEvent @ 0x14000AEBC (RootHub_HandlePortStatusChangeEvent.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x140038940 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     RootHub_WdfEvtTimerPortOperationPendingTimerDpc @ 0x14004B350 (RootHub_WdfEvtTimerPortOperationPendingTimerDpc.c)
 * Callees:
 *     DynamicLock_Acquire @ 0x1400087C0 (DynamicLock_Acquire.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x140008E18 (RootHub_ReleaseReadModifyWriteLock.c)
 *     DynamicLock_Release @ 0x140008E60 (DynamicLock_Release.c)
 *     XilRegister_ReadUlong @ 0x1400099C0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x14000B858 (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     Controller_LowerAndTrackIrql @ 0x140019630 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x14001C700 (Controller_RaiseAndTrackIrql.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x140028598 (RootHub_RestoreU1U2Timeouts.c)
 *     WPP_RECORDER_SF_dDd @ 0x140033074 (WPP_RECORDER_SF_dDd.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

char __fastcall RootHub_DetectAndAcknowledgePortResume(_QWORD *a1, unsigned int a2, char a3)
{
  unsigned int v3; // r12d
  __int64 v4; // r14
  __int64 v6; // r15
  __int64 v8; // rsi
  char v9; // bp
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rbx
  int v13; // edx
  int Ulong; // ebx
  __int64 v15; // rcx
  char v16; // bl
  char v18; // al
  int v19; // edx
  int v20; // r8d
  int v21; // r9d
  unsigned __int16 v22; // r15
  unsigned int v23; // ebx
  char v24; // al
  int v25; // edx
  __int64 v26; // [rsp+80h] [rbp+8h]
  char v27; // [rsp+88h] [rbp+10h]

  v3 = a2 - 1;
  v4 = a1[6];
  v6 = a2 - 1;
  v8 = 120 * v6;
  v9 = 0;
  v10 = a1[5] + 16 * v6;
  v26 = *(_QWORD *)(a1[1] + 88LL);
  v27 = 0;
  if ( KeGetCurrentIrql() == 2 )
  {
    v11 = a1[1];
    if ( *(_BYTE *)(v11 + 1001) )
    {
      Controller_LowerAndTrackIrql(v11);
      v9 = 1;
    }
  }
  v12 = a1[6];
  DynamicLock_Acquire(*(_QWORD *)(v8 + v12 + 24));
  *(_BYTE *)(v8 + v12 + 32) = v9;
  Ulong = XilRegister_ReadUlong(v26, v10);
  if ( *(_BYTE *)(v8 + v4 + 13) == 3
    && (Ulong & 0x1E0) == 0
    && (Ulong & 0x400000) != 0
    && (*(_QWORD *)(a1[1] + 736LL) & 0x80000LL) != 0 )
  {
    RootHub_RestoreU1U2Timeouts(a1, a2);
  }
  if ( (Ulong & 0x1E0) == 0x1E0 && (a3 || (Ulong & 0x400000) != 0) )
  {
    v27 = 1;
    if ( *(_BYTE *)(v8 + v4 + 18) != 1 )
    {
      v18 = *(_BYTE *)(v8 + v4 + 13);
      *(_BYTE *)(v8 + v4 + 18) = 1;
      if ( v18 == 2 )
      {
        RootHub_ReleaseReadModifyWriteLock((__int64)a1, v3);
        if ( *(int *)(v8 + v4 + 48) > 0 )
          v22 = *(_WORD *)(v8 + v4 + 52);
        else
          v22 = 50;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dDd(*(_QWORD *)(a1[1] + 72LL), v19, v20, v21);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 2552))(
          WdfDriverGlobals,
          *(_QWORD *)(v8 + v4 + 40),
          -10000LL * v22);
        return v27;
      }
      if ( v18 == 3 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v13) = 3;
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(a1[1] + 72LL),
            v13,
            11,
            210,
            (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
            a2,
            Ulong);
        }
        v23 = Ulong & 0xE40C200 | 0x10000;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v13) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1[1] + 72LL),
            v13,
            11,
            211,
            (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
            v23);
        }
        XilRegister_WriteUlong(v26, v10, v23);
        v24 = XilRegister_ReadUlong(v26, v10);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v25) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1[1] + 72LL),
            v25,
            11,
            212,
            (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
            v24);
        }
      }
    }
  }
  v15 = a1[6];
  v16 = *(_BYTE *)(v8 + v15 + 32);
  *(_BYTE *)(v8 + v15 + 32) = 0;
  DynamicLock_Release(*(_QWORD *)(v8 + v15 + 24));
  if ( v16 )
    Controller_RaiseAndTrackIrql(a1[1]);
  return v27;
}
