/*
 * XREFs of TtmInitCurrentSession @ 0x14099D6C8
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     TtmpAcquireSessionLock @ 0x1406F53C8 (TtmpAcquireSessionLock.c)
 *     TtmiUpdateActiveTerminalCount @ 0x14076A484 (TtmiUpdateActiveTerminalCount.c)
 *     TtmiLogSessionDeviceAssignmentPolicySet @ 0x14076DF5C (TtmiLogSessionDeviceAssignmentPolicySet.c)
 *     TtmiCreateTerminal @ 0x14076F708 (TtmiCreateTerminal.c)
 *     TtmiLogInitCurrentSessionStart @ 0x14099D910 (TtmiLogInitCurrentSessionStart.c)
 *     TtmiLogError @ 0x14099E04C (TtmiLogError.c)
 *     TtmiLogInitCurrentSessionStop @ 0x14099E248 (TtmiLogInitCurrentSessionStop.c)
 *     PoRegisterPowerSettingCallback @ 0x140A646B0 (PoRegisterPowerSettingCallback.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 TtmInitCurrentSession()
{
  int SessionId; // edi
  unsigned int v1; // edi
  __int64 v2; // rdx
  _DWORD *Pool2; // rax
  __int64 v4; // rbx
  _QWORD *v5; // rax
  int v6; // eax
  int DeferredContext; // [rsp+40h] [rbp+8h] BYREF

  TtmiLogInitCurrentSessionStart();
  SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  TtmpAcquireSessionLock();
  if ( TtmpSession )
  {
    v1 = -1073741637;
    v2 = 1209LL;
LABEL_3:
    TtmiLogError("TtmInitCurrentSession", v2, 0xFFFFFFFFLL, v1);
    goto LABEL_13;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL, 0x120uLL, 0x536D7454u);
  v4 = (__int64)Pool2;
  if ( !Pool2 )
  {
    v1 = -1073741670;
    v2 = 1218LL;
    goto LABEL_3;
  }
  Pool2[2] = 1;
  *Pool2 = SessionId;
  v5 = Pool2 + 10;
  v5[1] = v5;
  *v5 = v5;
  *(_QWORD *)(v4 + 88) = v4 + 80;
  *(_QWORD *)(v4 + 80) = v4 + 80;
  *(_QWORD *)(v4 + 64) = v4 + 72;
  *(_DWORD *)(v4 + 56) = 32;
  *(_DWORD *)(v4 + 112) = 0;
  *(_DWORD *)(v4 + 116) = 0;
  *(_QWORD *)(v4 + 104) = v4 + 96;
  *(_QWORD *)(v4 + 96) = v4 + 96;
  *(_DWORD *)(v4 + 120) = 1;
  *(_QWORD *)(v4 + 136) = v4 + 128;
  *(_QWORD *)(v4 + 128) = v4 + 128;
  *(_QWORD *)(v4 + 152) = v4 + 144;
  *(_QWORD *)(v4 + 144) = v4 + 144;
  *(_QWORD *)(v4 + 168) = v4 + 160;
  *(_QWORD *)(v4 + 160) = v4 + 160;
  *(_QWORD *)(v4 + 184) = v4 + 176;
  *(_QWORD *)(v4 + 176) = v4 + 176;
  *(_DWORD *)(v4 + 4) |= 0x800u;
  TtmiLogSessionDeviceAssignmentPolicySet(1);
  *(_DWORD *)(v4 + 224) = 0;
  *(_QWORD *)(v4 + 192) = 0LL;
  *(_QWORD *)(v4 + 208) = TtmpSessionWorker;
  *(_QWORD *)(v4 + 216) = v4;
  *(_DWORD *)(v4 + 4) |= 8u;
  *(_DWORD *)(v4 + 76) = 1;
  v6 = TtmiCreateTerminal(v4, 2031619LL, 0, (_QWORD *)(v4 + 24), &DeferredContext, (_QWORD *)(v4 + 32));
  v1 = v6;
  if ( v6 >= 0 )
  {
    TtmiUpdateActiveTerminalCount((_DWORD *)v4, 0, 0);
    *(_BYTE *)(v4 + 240) = 1;
    if ( PoRegisterPowerSettingCallback(
           0LL,
           &GUID_VIDEO_DIM_TIMEOUT,
           (PPOWER_SETTING_CALLBACK)TtmpTerminal0PowerSettingCallback,
           (PVOID)v4,
           (PVOID *)(v4 + 248)) >= 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    if ( PoRegisterPowerSettingCallback(
           0LL,
           &GUID_CONSOLE_VIDEO_TIMEOUT,
           (PPOWER_SETTING_CALLBACK)TtmpTerminal0PowerSettingCallback,
           (PVOID)v4,
           (PVOID *)(v4 + 256)) >= 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    *(_DWORD *)(v4 + 272) = 0;
    *(_QWORD *)(v4 + 280) = 0LL;
    *(_DWORD *)(v4 + 276) = 0;
    v1 = 0;
    TtmpSession = v4;
  }
  else
  {
    TtmiLogError("TtmInitCurrentSession", 1291LL, (unsigned int)v6, (unsigned int)v6);
    ExFreePoolWithTag((PVOID)v4, 0x536D7454u);
  }
LABEL_13:
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegion();
  TtmiLogInitCurrentSessionStop(v1);
  return v1;
}
