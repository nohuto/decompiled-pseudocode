/*
 * XREFs of rimObsUpdateInputObserverRegistration @ 0x1C01AF6CC
 * Callers:
 *     NtRIMUpdateInputObserverRegistration @ 0x1C0175730 (NtRIMUpdateInputObserverRegistration.c)
 *     RIMUpdateInputObserverRegistration @ 0x1C017B130 (RIMUpdateInputObserverRegistration.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00591BC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RawInputManagerInputObserverObjectResolveHandle @ 0x1C0191C28 (RawInputManagerInputObserverObjectResolveHandle.c)
 *     rimObsCheckForRegistrationConflicts @ 0x1C01AC584 (rimObsCheckForRegistrationConflicts.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddq @ 0x1C01AC938 (WPP_RECORDER_AND_TRACE_SF_dddq.c)
 *     WPP_RECORDER_AND_TRACE_SF_qD @ 0x1C01ACA50 (WPP_RECORDER_AND_TRACE_SF_qD.c)
 */

__int64 __fastcall rimObsUpdateInputObserverRegistration(
        char *Handle,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        KPROCESSOR_MODE PreviousMode)
{
  unsigned int v6; // r14d
  char v8; // bl
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // esi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  _DWORD *v15; // rdi
  int v16; // edx
  int v17; // r8d
  unsigned int v18; // eax
  unsigned int v19; // r13d
  unsigned int v20; // ecx
  char v21; // dl
  __int64 v22; // r9
  int v23; // ebp
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  int v30; // [rsp+20h] [rbp-78h]
  int v31; // [rsp+28h] [rbp-70h]
  int v32; // [rsp+30h] [rbp-68h]
  int v33; // [rsp+38h] [rbp-60h]
  __int64 v34; // [rsp+40h] [rbp-58h]
  PVOID Object; // [rsp+60h] [rbp-38h] BYREF
  unsigned int v36; // [rsp+B8h] [rbp+20h]

  v36 = a4;
  v6 = a2;
  v8 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    HIDWORD(v34) = HIDWORD(Handle);
    WPP_RECORDER_AND_TRACE_SF_qD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      a4,
      v30,
      v31,
      v32,
      v33);
  }
  Object = 0LL;
  v11 = RawInputManagerInputObserverObjectResolveHandle(Handle, a2, PreviousMode, &Object);
  if ( v11 >= 0 )
  {
    v14 = SGDGetUserSessionState(v10, v9, v12, v13);
    RIMLockExclusive(v14 + 256);
    v15 = Object;
    RIMLockExclusive((__int64)Object + 176);
    v18 = v15[28];
    v19 = v15[27];
    v20 = v15[29];
    LODWORD(Object) = v18;
    if ( v36 >= 0x30 )
    {
      v15[27] = 3;
      v15[28] = 0;
      if ( rimObsCheckForRegistrationConflicts(v6, v19, v18, v20) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v8 = 0;
        }
        if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v23 = (int)Object;
        }
        else
        {
          v23 = (int)Object;
          WPP_RECORDER_AND_TRACE_SF_dddq(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v8,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            v22,
            v30,
            v31,
            v32,
            v33);
        }
        v15[27] = v19;
        v15[28] = v23;
        v15[30] = v6;
        if ( a3 )
        {
          *((_QWORD *)v15 + 12) = a3;
          v15[26] = v36;
        }
        goto LABEL_41;
      }
      v11 = -1073741823;
    }
    else
    {
      v21 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v34) = v36;
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v21,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
          3u,
          1u,
          0x28u,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
          v34);
      }
      v11 = -1073741789;
    }
    LOBYTE(v16) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v16,
        v17,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        1,
        42,
        (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
        (char)Handle);
    }
    ObCloseHandle(Handle, PreviousMode);
LABEL_41:
    *((_QWORD *)v15 + 23) = 0LL;
    ExReleasePushLockExclusiveEx(v15 + 44, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v15);
    v28 = SGDGetUserSessionState(v25, v24, v26, v27);
    *(_QWORD *)(v28 + 264) = 0LL;
    ExReleasePushLockExclusiveEx(v28 + 256, 0LL);
    KeLeaveCriticalRegion();
    return (unsigned int)v11;
  }
  LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
  if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      v12,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      3,
      1,
      43,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      (char)Handle);
  }
  return (unsigned int)v11;
}
