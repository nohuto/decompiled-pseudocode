/*
 * XREFs of UsbhSshResumePort @ 0x1400124DC
 * Callers:
 *     UsbhSshResumeDownstream @ 0x14001DC6C (UsbhSshResumeDownstream.c)
 * Callees:
 *     UsbhLatchPdo @ 0x14000ABA0 (UsbhLatchPdo.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x140010ED0 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x140012820 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhEtwLogHubIrpEvent @ 0x140018260 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhUnlatchPdo @ 0x140020FA0 (UsbhUnlatchPdo.c)
 *     UsbhSshPropagateResume @ 0x140023FC8 (UsbhSshPropagateResume.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     UsbhPCE_ResumeTimeout @ 0x140043688 (UsbhPCE_ResumeTimeout.c)
 */

__int64 __fastcall UsbhSshResumePort(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r14d
  KSPIN_LOCK *v7; // r13
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  KIRQL v20; // al
  KSPIN_LOCK *v21; // rcx
  int v22; // r10d
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v26 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      20,
      (__int64)&WPP_148060912b253a30310845788bec287b_Traceguids);
  v7 = (KSPIN_LOCK *)FdoExt(a1);
  v8 = UsbhLatchPdo(a1, *(_WORD *)(a3 + 4), 0LL, 0x536C6267u);
  v9 = *(unsigned __int16 *)(a3 + 4);
  v10 = v8;
  if ( v8 )
  {
    if ( (UsbhLogMask & 0x10000) != 0 )
    {
      if ( a1 )
      {
        v14 = *(_QWORD *)(a1 + 64);
        if ( v14 )
        {
          v15 = *(_QWORD *)(v14 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
          *(_DWORD *)v15 = 844264307;
          *(_QWORD *)(v15 + 8) = 0LL;
          *(_QWORD *)(v15 + 16) = v9;
          *(_QWORD *)(v15 + 24) = v8;
        }
      }
    }
    v16 = *(unsigned __int16 *)(a3 + 4);
    if ( (UsbhLogMask & 0x10000) != 0 )
    {
      if ( a1 )
      {
        v17 = *(_QWORD *)(a1 + 64);
        if ( v17 )
        {
          v18 = *(_QWORD *)(v17 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
          *(_DWORD *)v18 = 861041523;
          *(_QWORD *)(v18 + 8) = 0LL;
          *(_QWORD *)(v18 + 16) = 0LL;
          *(_QWORD *)(v18 + 24) = v16;
        }
      }
    }
    while ( 1 )
    {
      v19 = UsbhFdoCheckUpstreamConnectionState(a1, &v26, v16);
      if ( (v19 & 0xC0000000) == 0xC0000000 )
        break;
      v20 = KeAcquireSpinLockRaiseToDpc(v7 + 618);
      v21 = v7 + 618;
      if ( *(_DWORD *)(a3 + 696) != 3 )
      {
        KeReleaseSpinLock(v21, v20);
        v22 = 0;
        goto LABEL_21;
      }
      KeReleaseSpinLock(v21, v20);
      v22 = UsbhWaitEventWithTimeoutEx(a1, (void *)(a3 + 712), 500, 1936937556, 0, 0LL);
      if ( v22 != 258 )
        goto LABEL_21;
      UsbhPCE_ResumeTimeout(a1, a2, *(unsigned __int16 *)(a3 + 4));
    }
    Log(a1, 0x10000, 1936937560, *(unsigned __int16 *)(a3 + 4), v19);
LABEL_21:
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_PORT, *(unsigned __int16 *)(a3 + 4), v22);
    v3 = UsbhSshPropagateResume(a1, a2, v10);
    v23 = *(unsigned __int16 *)(a3 + 4);
    if ( (UsbhLogMask & 0x10000) != 0 )
    {
      if ( a1 )
      {
        v24 = *(_QWORD *)(a1 + 64);
        if ( v24 )
        {
          v25 = *(_QWORD *)(v24 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 880)) & *(_DWORD *)(v24 + 884));
          *(_QWORD *)(v25 + 8) = 0LL;
          *(_DWORD *)v25 = 877818739;
          *(_QWORD *)(v25 + 16) = v23;
          *(_QWORD *)(v25 + 24) = v10;
        }
      }
    }
    UsbhUnlatchPdo(a1, v10, 0LL, 1399612007LL);
  }
  else if ( (UsbhLogMask & 0x10000) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v12 = 894595955;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = v9;
        *(_QWORD *)(v12 + 24) = 0LL;
      }
    }
  }
  return v3;
}
