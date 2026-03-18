/*
 * XREFs of RIMOnTimerNotification @ 0x1C017A200
 * Callers:
 *     ?OnTimerNotification@CBaseInput@@AEAAJXZ @ 0x1C00E4F80 (-OnTimerNotification@CBaseInput@@AEAAJXZ.c)
 *     NtRIMOnTimerNotification @ 0x1C0174ED0 (NtRIMOnTimerNotification.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00751C0 (RawInputManagerObjectResolveHandle.c)
 *     RIMEndAllStaleContacts @ 0x1C00E2C2E (RIMEndAllStaleContacts.c)
 */

__int64 __fastcall RIMOnTimerNotification(char *a1)
{
  bool v2; // dl
  int v3; // esi
  union _LARGE_INTEGER v4; // rbx
  bool v5; // dl
  bool v6; // dl
  char v7; // dl
  union _LARGE_INTEGER DueTime; // [rsp+78h] [rbp+10h] BYREF

  DueTime.QuadPart = 0LL;
  v2 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      75,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
  v3 = RawInputManagerObjectResolveHandle(a1, 3u, 1, (PVOID *)&DueTime);
  if ( v3 >= 0 )
  {
    v4 = DueTime;
    RIMLockExclusive(DueTime.QuadPart + 104);
    if ( *(_BYTE *)(v4.QuadPart + 81) || *(_BYTE *)(v4.QuadPart + 82) )
    {
      v3 = -1073741637;
      v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v6,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (_DWORD)gRimLog,
          3,
          1,
          77,
          (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
    }
    else
    {
      RIMLockExclusive(v4.QuadPart + 760);
      v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v5,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (_DWORD)gRimLog,
          4,
          1,
          76,
          (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
      RIMEndAllStaleContacts((struct RawInputManagerObject *)v4.QuadPart);
      if ( *(_DWORD *)(v4.QuadPart + 464) )
      {
        DueTime.QuadPart = -1000000LL;
        ZwSetTimer(*(HANDLE *)(v4.QuadPart + 336), &DueTime, 0LL, 0LL, 0, 0, 0LL);
      }
      else
      {
        ZwCancelTimer(*(HANDLE *)(v4.QuadPart + 336), 0LL);
        *(_DWORD *)(v4.QuadPart + 468) = 0;
      }
      *(_QWORD *)(v4.QuadPart + 768) = 0LL;
      ExReleasePushLockExclusiveEx(v4.QuadPart + 760, 0LL);
      KeLeaveCriticalRegion();
    }
    *(_QWORD *)(v4.QuadPart + 112) = 0LL;
    ExReleasePushLockExclusiveEx(v4.QuadPart + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject((PVOID)v4.QuadPart);
  }
  v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v7,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x4Eu,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids,
      v3);
  return (unsigned int)v3;
}
