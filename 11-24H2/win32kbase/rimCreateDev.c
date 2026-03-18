/*
 * XREFs of RIMCreateDev @ 0x1401D15BC
 * Callers:
 *     RIMAddInjectionDeviceOfType @ 0x1401D5450 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1401D60A0 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1401D65E0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1401EC448 (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     RIMDiscoverSpecificDevice @ 0x1401ED4D0 (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     rimCreateDev @ 0x140053478 (rimCreateDev.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140053560 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     rimDoRimDevChange @ 0x14005B4D0 (rimDoRimDevChange.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMGetMouseDeviceHardwareId @ 0x1400A7268 (RIMGetMouseDeviceHardwareId.c)
 *     RIMApiSetSetUserPTPEnabledPreference @ 0x1400A89C8 (RIMApiSetSetUserPTPEnabledPreference.c)
 *     RIMIsCurrentProcessTrusted @ 0x1400CFC20 (RIMIsCurrentProcessTrusted.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1400F0FD0 (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     ?ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z @ 0x140114A14 (-ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z.c)
 *     RIMFindInputDeviceForConfig @ 0x140127684 (RIMFindInputDeviceForConfig.c)
 *     RIMGetDeviceParent @ 0x140127E30 (RIMGetDeviceParent.c)
 *     rimQueueRimDevChangeAsyncWorkItem @ 0x14012EC64 (rimQueueRimDevChangeAsyncWorkItem.c)
 *     RIMFreeSpecificDevWorker @ 0x140133A58 (RIMFreeSpecificDevWorker.c)
 *     rimDereferenceDev @ 0x140133C98 (rimDereferenceDev.c)
 *     RIMMarkSiblingMouseDevice @ 0x14017C2B0 (RIMMarkSiblingMouseDevice.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMLoadDeviceLegacyInfo @ 0x1401D2038 (RIMLoadDeviceLegacyInfo.c)
 *     RIMCreateHidDesc @ 0x1401DBCC8 (RIMCreateHidDesc.c)
 *     RIMFindSiblingMouseDeviceWorker @ 0x1401DCD28 (RIMFindSiblingMouseDeviceWorker.c)
 *     RIMFindSiblingPointerDeviceForMouseWorker @ 0x1401DCF20 (RIMFindSiblingPointerDeviceForMouseWorker.c)
 *     RIMPopulateExtendedKeyboardDeviceProperties @ 0x1401E8AB8 (RIMPopulateExtendedKeyboardDeviceProperties.c)
 *     RIMPopulateExtendedMouseDeviceProperties @ 0x1401E8B38 (RIMPopulateExtendedMouseDeviceProperties.c)
 */

__int64 __fastcall RIMCreateDev(
        struct RawInputManagerObject *a1,
        unsigned int a2,
        const UNICODE_STRING *a3,
        int a4,
        int a5,
        __int64 a6,
        _QWORD *a7)
{
  int v7; // r12d
  char *v8; // r13
  _QWORD *Dev; // rdi
  __int64 v14; // rax
  char v15; // r15
  char v16; // r12
  const wchar_t *Buffer; // rbx
  __int64 UserSessionState; // rax
  __int64 v19; // rbx
  char *v20; // rcx
  PVOID v21; // rcx
  struct _KEVENT *v22; // rax
  char v23; // bl
  bool v24; // r15
  int v25; // edx
  int v26; // r8d
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  bool v31; // zf
  PVOID v32; // r15
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int16 v35; // dx
  int v36; // eax
  struct RIMDEV *v37; // rcx
  CTouchProcessor *v38; // rcx
  char v39; // bl
  bool v40; // r15
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  __int64 v44; // rbx
  int v45; // eax
  PVOID v46; // r15
  __int64 v47; // rax
  _QWORD *v48; // rcx
  __int64 v49; // rcx
  _QWORD *v50; // rbx
  __int16 v52; // [rsp+30h] [rbp-30h]
  PVOID Object[2]; // [rsp+50h] [rbp-10h] BYREF
  int v54; // [rsp+A8h] [rbp+48h] BYREF
  int v55; // [rsp+B8h] [rbp+58h] BYREF

  v7 = a5;
  v8 = 0LL;
  if ( a2 > 2 )
  {
    v54 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 296);
  }
  if ( (a4 || v7) && a4 == v7 )
  {
    v54 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 297);
  }
  Dev = rimCreateDev((int)a1, a2, (int)a3, a4);
  if ( !Dev )
    return 3221225495LL;
  if ( a3->Buffer )
  {
    v14 = Win32AllocPoolZInitImpl(256LL, a3->MaximumLength, 0x70707352u);
    Dev[25] = v14;
    if ( !v14 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v15 = 0;
      }
      v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Buffer = a3->Buffer;
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        WPP_RECORDER_AND_TRACE_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v15,
          v16,
          *(_QWORD *)(UserSessionState + 19392),
          2u,
          1u,
          0xDu,
          (__int64)&WPP_0b7b67ba98653d08fb379134e851684c_Traceguids,
          Buffer);
      }
      goto LABEL_111;
    }
    *((_WORD *)Dev + 97) = a3->MaximumLength;
    RtlCopyUnicodeString((PUNICODE_STRING)Dev + 12, a3);
  }
  *((_DWORD *)Dev + 12) = a2;
  if ( a4 )
    *((_DWORD *)Dev + 42) |= 0x20u;
  v19 = a6;
  if ( v7 )
  {
    if ( !a6 )
    {
      v54 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 328);
    }
    *((_DWORD *)Dev + 42) |= 0x2000u;
    *(_OWORD *)(Dev + 47) = *(_OWORD *)(v19 + 100);
    *((_DWORD *)Dev + 330) = *(_DWORD *)(v19 + 120);
    Dev[166] = *(_QWORD *)(v19 + 128);
    if ( (unsigned int)RIMIsCurrentProcessTrusted() )
    {
      v20 = (char *)Dev[166];
      *((_DWORD *)Dev + 42) |= 0x4000u;
      Object[0] = 0LL;
      if ( (int)RawInputManagerDeviceObjectResolveHandle(v20, 1u, 1, Object) >= 0 )
      {
        v21 = Object[0];
        if ( (*((_DWORD *)Object[0] + 60) & 0x2000) == 0 )
        {
          *((_DWORD *)Dev + 42) |= 0x8000u;
          *((_DWORD *)Dev + 97) = 1;
        }
        ObfDereferenceObject(v21);
      }
    }
    v22 = (struct _KEVENT *)Win32AllocPoolZInitImpl(64LL, 0x18uLL, 0x76656B52u);
    Dev[45] = v22;
    if ( !v22 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v23 = 0;
      }
      v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v23 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_111;
      v27 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
      v52 = 14;
      goto LABEL_110;
    }
  }
  else
  {
    v22 = (struct _KEVENT *)Win32AllocPoolZInitImpl(64LL, 0x18uLL, 0x76656B52u);
    Dev[42] = v22;
    if ( !v22 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v23 = 0;
      }
      v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v23 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_111;
      v27 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
      v52 = 15;
LABEL_110:
      LOBYTE(v26) = v24;
      LOBYTE(v25) = v23;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v25,
        v26,
        v27,
        2,
        1,
        v52,
        (__int64)&WPP_0b7b67ba98653d08fb379134e851684c_Traceguids);
LABEL_111:
      *(_BYTE *)(Dev[4] + 9LL) = 1;
      RIMFreeSpecificDevWorker((__int64)a1, (__int64)Dev);
      rimDereferenceDev((__int64)Dev);
      return 3221225495LL;
    }
  }
  KeInitializeEvent(v22, SynchronizationEvent, 0);
  *((_DWORD *)Dev + 42) |= 0x20000u;
  if ( *((_DWORD *)Dev + 12) == 2 )
  {
    v29 = RIMCreateHidDesc(a1, Dev, v19);
    Dev[55] = v29;
    if ( !v29 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v23 = 0;
      }
      v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v23 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_111;
      v27 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
      v52 = 16;
      goto LABEL_110;
    }
    v31 = (Dev[21] & 0x2000) == 0;
    v32 = 0LL;
    Object[0] = 0LL;
    if ( v31 )
    {
      v33 = W32GetUserSessionState(v30);
      RIMLockExclusive(v33 + 56);
      v34 = Dev[55];
      *((_DWORD *)Dev + 581) |= 1u;
      if ( *(_WORD *)(v34 + 42) == 13 )
      {
        v35 = *(_WORD *)(v34 + 40);
        if ( (unsigned __int16)(v35 - 1) <= 1u || (unsigned __int16)(v35 - 4) <= 1u )
        {
          v36 = RIMFindSiblingMouseDeviceWorker(v34, Dev, Object);
          v32 = Object[0];
          if ( v36 )
          {
            v37 = (struct RIMDEV *)((char *)Object[0] + 72);
            if ( !Object[0] )
              v37 = 0LL;
            RIMMarkSiblingMouseDevice(v37, *(_WORD *)(Dev[55] + 40LL));
          }
        }
      }
      RIMUnlockExclusive(v33 + 56);
      if ( v32 )
        ObfDereferenceObject(v32);
    }
  }
  if ( !*((_DWORD *)Dev + 12) )
  {
    if ( v7 )
    {
      *((_WORD *)Dev + 432) = 32;
    }
    else
    {
      if ( !(unsigned int)RIMGetDeviceParent(0LL, (__int64)Dev, v28) )
      {
        v38 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v39 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v39 = 0;
        }
        v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v41 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v42) = v40;
          LOBYTE(v43) = v39;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v43,
            v42,
            *(_QWORD *)(v41 + 19392),
            3,
            1,
            17,
            (__int64)&WPP_0b7b67ba98653d08fb379134e851684c_Traceguids);
        }
      }
      Object[0] = 0LL;
      v44 = W32GetUserSessionState(v38);
      RIMLockExclusive(v44 + 56);
      *((_DWORD *)Dev + 581) |= 1u;
      v45 = RIMFindSiblingPointerDeviceForMouseWorker(Dev, Object);
      v46 = Object[0];
      if ( v45 )
      {
        if ( Object[0] )
          v8 = (char *)Object[0] + 72;
        if ( *((_DWORD *)v8 + 12) != 2 )
        {
          v54 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 491);
        }
        RIMMarkSiblingMouseDevice((struct RIMDEV *)Dev, *(_WORD *)(*((_QWORD *)v8 + 55) + 40LL));
      }
      RIMUnlockExclusive(v44 + 56);
      if ( v46 )
        ObfDereferenceObject(v46);
      else
        RIMLoadDeviceLegacyInfo((struct DEVICEINFO *)Dev);
      RIMGetMouseDeviceHardwareId((__int64)Dev);
      RIMPopulateExtendedMouseDeviceProperties((struct RIMDEV *)Dev);
    }
  }
  if ( *((_DWORD *)Dev + 12) == 1 && !v7 )
    RIMPopulateExtendedKeyboardDeviceProperties((struct RIMDEV *)Dev);
  *((_DWORD *)Dev + 46) |= 0x20u;
  if ( (int)ObfReferenceObject(a1) < 0 )
    goto LABEL_111;
  Dev[40] = a1;
  v47 = *((_QWORD *)a1 + 53);
  if ( v47 )
  {
    do
    {
      v48 = (_QWORD *)(v47 + 40);
      v47 = *(_QWORD *)(v47 + 40);
    }
    while ( v47 );
    *v48 = Dev;
  }
  else
  {
    *((_QWORD *)a1 + 53) = Dev;
  }
  if ( !*((_QWORD *)a1 + 104) || *((_DWORD *)a1 + 264) || !v7 )
  {
    if ( v7 || (Dev[21] & 0x20) != 0 )
      rimDoRimDevChange((__int64)a1, (__int64)Dev, 1u);
    else
      rimQueueRimDevChangeAsyncWorkItem(a1, (__int64)Dev, 1);
  }
  if ( (Dev[21] & 0x1000) != 0 )
  {
    v49 = Dev[55];
    v55 = 0;
    v54 = 0;
    Object[0] = 0LL;
    if ( (unsigned int)RIMFindInputDeviceForConfig(v49, (__int64)a1, (int)Dev, &v55, &v54, Object) )
    {
      if ( !v54 )
      {
        v50 = Object[0];
        if ( *(_DWORD *)(*((_QWORD *)Object[0] + 57) + 24LL) != 7 )
        {
          v54 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 632);
        }
        RIMApiSetSetUserPTPEnabledPreference((__int64)v50, v50[55], (__int64)a1);
      }
    }
  }
  if ( !*((_QWORD *)a1 + 104) && !*((_DWORD *)a1 + 264) && v7 )
    rimDoRimDevChange((__int64)a1, (__int64)Dev, 2u);
  RimTelemetry::ReportRimDevice(1, -__CFSHR__(*((_DWORD *)Dev + 46), 8), (struct RIMDEV *const)Dev);
  *a7 = Dev;
  return 0LL;
}
