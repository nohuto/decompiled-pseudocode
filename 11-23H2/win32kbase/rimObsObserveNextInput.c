/*
 * XREFs of rimObsObserveNextInput @ 0x1C01AE614
 * Callers:
 *     NtRIMObserveNextInput @ 0x1C0174E90 (NtRIMObserveNextInput.c)
 *     RIMObserveNextInput @ 0x1C0179C10 (RIMObserveNextInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00591BC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     RawInputManagerInputObserverObjectResolveHandle @ 0x1C0191C28 (RawInputManagerInputObserverObjectResolveHandle.c)
 *     rimObsPopInputMessage @ 0x1C01AE850 (rimObsPopInputMessage.c)
 */

__int64 __fastcall rimObsObserveNextInput(char *a1, __int64 a2)
{
  unsigned int v2; // esi
  int v4; // ebx
  unsigned int *v5; // rdi
  char *v6; // rbp
  int v7; // eax
  int v8; // edx
  int v9; // r8d
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  v2 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      1,
      33,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      (char)a1);
  Object = 0LL;
  v4 = RawInputManagerInputObserverObjectResolveHandle(a1, a2, v2, &Object);
  if ( v4 >= 0 )
  {
    v5 = (unsigned int *)Object;
    v6 = (char *)Object + 176;
    RIMLockExclusive((__int64)Object + 176);
    v7 = rimObsPopInputMessage(v5, v2, *((_QWORD *)v5 + 12), v5[26]);
    v4 = v7;
    if ( v7 < 0 )
    {
      if ( v7 == -2147483622 )
      {
        LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v8,
            v9,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            1,
            35,
            (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
        }
        v5[22] = 1;
        v4 = 0;
      }
    }
    else
    {
      LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v8,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          1,
          34,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
          *((_QWORD *)v5 + 10));
      ZwSetEvent(*((HANDLE *)v5 + 10), 0LL);
    }
    *((_QWORD *)v6 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v6, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v5);
  }
  return (unsigned int)v4;
}
