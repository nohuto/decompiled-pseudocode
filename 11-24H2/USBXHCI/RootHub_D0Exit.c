/*
 * XREFs of RootHub_D0Exit @ 0x140038974
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1400379B0 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     RootHub_AcquireReadModifyWriteLock @ 0x14000BED4 (RootHub_AcquireReadModifyWriteLock.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x14000C924 (RootHub_ReleaseReadModifyWriteLock.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x14000CA5C (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     RootHub_DumpPortData @ 0x14000CF98 (RootHub_DumpPortData.c)
 *     XilRegister_ReadUlong @ 0x14000D210 (XilRegister_ReadUlong.c)
 *     RootHub_HandleResumedPorts @ 0x14001946C (RootHub_HandleResumedPorts.c)
 *     Controller_NotifyPortStateToPep @ 0x14001A364 (Controller_NotifyPortStateToPep.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     XilRegister_WriteUlong @ 0x14001BA28 (XilRegister_WriteUlong.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall RootHub_D0Exit(_QWORD *a1, int a2, int a3)
{
  int v4; // ebx
  __int64 v6; // r13
  int v7; // r14d
  unsigned int v8; // ebp
  int v9; // eax
  int v10; // edx
  __int16 Ulong; // ax
  int v12; // eax
  __int64 v13; // rdx
  unsigned int *v14; // rbx
  int v15; // eax
  unsigned int *v16; // rbx
  __int16 v17; // ax

  v4 = a2;
  v6 = *(_QWORD *)(a1[1] + 88LL);
  RootHub_HandleResumedPorts((__int64)a1);
  v7 = 2;
  if ( *((_DWORD *)a1 + 4) )
  {
    v8 = 0;
    do
    {
      if ( v4 != 5 )
      {
        v9 = RootHub_WaitForPendingU3TransitionCompletion(a1, v8 + 1, (*(_QWORD *)(a1[1] + 736LL) & 0x4000000LL) != 0);
        if ( v9 < 0 && a3 == 7 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v10) = 5;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(a1[1] + 72LL),
              v10,
              11,
              34,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
              v9);
          }
          ((void (__fastcall *)(__int64, _QWORD))qword_14006BD90)(UcxDriverGlobals, *a1);
        }
        Ulong = XilRegister_ReadUlong(*(_QWORD *)(a1[1] + 88LL), (unsigned int *)(a1[5] + 16LL * v8));
        if ( (Ulong & 0x201) == 0x201 )
        {
          v12 = Ulong & 0x1E0;
          if ( v12 != 128 && ((v12 - 192) & 0xFFFFFF7F) != 0 )
            v7 = 1;
        }
      }
      v13 = a1[1];
      if ( (*(_QWORD *)(v13 + 736) & 0x40000000LL) != 0 )
      {
        v14 = (unsigned int *)(a1[5] + 16LL * v8);
        RootHub_AcquireReadModifyWriteLock((__int64)a1, v8);
        v15 = XilRegister_ReadUlong(v6, v14);
        if ( a3 != 7 || (v15 & 0x20000) == 0 )
          XilRegister_WriteUlong(v6, v14, v15 & 0xE00C200 | 0x20000);
        RootHub_ReleaseReadModifyWriteLock((__int64)a1, v8);
        v13 = a1[1];
      }
      if ( (*(_DWORD *)(a1[6] + 120LL * v8 + 64) & 2) != 0
        || (a3 == 3 || a3 == 4 || (unsigned int)(a3 - 5) <= 1) && (*(_QWORD *)(v13 + 736) & 0x20000000LL) != 0 )
      {
        v16 = (unsigned int *)(a1[5] + 16LL * v8);
        RootHub_AcquireReadModifyWriteLock((__int64)a1, v8);
        v17 = XilRegister_ReadUlong(v6, v16);
        XilRegister_WriteUlong(v6, v16, v17 & 0xC200);
        RootHub_ReleaseReadModifyWriteLock((__int64)a1, v8);
      }
      RootHub_DumpPortData(a1[5] + 16LL * v8, a1[1]);
      v4 = a2;
      *(_BYTE *)(a1[6] + 120LL * v8++ + 18) = 0;
    }
    while ( v8 + 1 <= *((_DWORD *)a1 + 4) );
  }
  return Controller_NotifyPortStateToPep(a1[1], v7);
}
