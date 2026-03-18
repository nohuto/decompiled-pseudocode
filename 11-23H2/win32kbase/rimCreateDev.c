/*
 * XREFs of RIMCreateDev @ 0x1C00C874C
 * Callers:
 *     RIMAddInjectionDeviceOfType @ 0x1C00063E0 (RIMAddInjectionDeviceOfType.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1C00757A4 (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0175C40 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0176360 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDiscoverSpecificDevice @ 0x1C01A35D0 (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     rimDoRimDevChange @ 0x1C0003BFC (rimDoRimDevChange.c)
 *     Win32AllocPoolZInit @ 0x1C004F080 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     RIMGetMouseDeviceHardwareId @ 0x1C006CAE0 (RIMGetMouseDeviceHardwareId.c)
 *     RIMGetDeviceParent @ 0x1C006CE24 (RIMGetDeviceParent.c)
 *     RIMLoadDeviceLegacyInfo @ 0x1C006D4E4 (RIMLoadDeviceLegacyInfo.c)
 *     RIMPopulateExtendedMouseDeviceProperties @ 0x1C006D7B8 (RIMPopulateExtendedMouseDeviceProperties.c)
 *     RIMIsCurrentProcessTrusted @ 0x1C006F020 (RIMIsCurrentProcessTrusted.c)
 *     RIMFreeSpecificDevWorker @ 0x1C0071424 (RIMFreeSpecificDevWorker.c)
 *     rimDereferenceDev @ 0x1C0072404 (rimDereferenceDev.c)
 *     rimCreateDev @ 0x1C0072CC8 (rimCreateDev.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0072E20 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1C007327C (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00742F0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     rimQueueRimDevChangeAsyncWorkItem @ 0x1C0076D60 (rimQueueRimDevChangeAsyncWorkItem.c)
 *     ?ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z @ 0x1C0078B5C (-ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z.c)
 *     RIMCreateHidDesc @ 0x1C007EF3C (RIMCreateHidDesc.c)
 *     Win32AllocPoolNonPagedZInit @ 0x1C00AEAD0 (Win32AllocPoolNonPagedZInit.c)
 *     RIMFindSiblingPointerDeviceForMouseWorker @ 0x1C00BDCE8 (RIMFindSiblingPointerDeviceForMouseWorker.c)
 *     RIMPopulateExtendedKeyboardDeviceProperties @ 0x1C00C33A0 (RIMPopulateExtendedKeyboardDeviceProperties.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFindInputDeviceForConfig @ 0x1C0180D88 (RIMFindInputDeviceForConfig.c)
 *     RIMFindSiblingMouseDeviceWorker @ 0x1C0180E7C (RIMFindSiblingMouseDeviceWorker.c)
 *     RIMMarkSiblingMouseDevice @ 0x1C01824F0 (RIMMarkSiblingMouseDevice.c)
 *     RIMApiSetSetUserPTPEnabledPreference @ 0x1C0192B28 (RIMApiSetSetUserPTPEnabledPreference.c)
 */

__int64 __fastcall RIMCreateDev(
        _QWORD *Object,
        unsigned int a2,
        const UNICODE_STRING *a3,
        int a4,
        int a5,
        __int64 a6,
        struct _UNICODE_STRING **a7)
{
  int v7; // r12d
  char *v8; // r13
  char v11; // r14
  __int64 v13; // rdx
  struct _UNICODE_STRING *Dev; // rdi
  __int64 v15; // r8
  __int64 v16; // rax
  char v17; // dl
  __int64 v18; // rcx
  __int64 v19; // rbx
  char *v20; // rcx
  PVOID v21; // rcx
  struct _KEVENT *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  PDEVICE_OBJECT v25; // rcx
  __int16 v26; // r9
  WCHAR *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r9
  bool v30; // zf
  PVOID v31; // r14
  __int64 v32; // rbx
  PWSTR Buffer; // rcx
  WCHAR v34; // dx
  int v35; // eax
  char *v36; // rcx
  __int64 v37; // rdx
  PDEVICE_OBJECT v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rbx
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // eax
  PVOID v45; // r14
  int v46; // edx
  int v47; // r8d
  char v48; // dl
  char v49; // r8
  __int64 v50; // rax
  struct _UNICODE_STRING **v51; // rcx
  PWSTR v52; // rcx
  _QWORD *v53; // rbx
  __int64 v55; // rdx
  __int64 v56; // r8
  PVOID Objecta[2]; // [rsp+50h] [rbp-10h] BYREF
  int v58; // [rsp+A8h] [rbp+48h] BYREF
  int v59; // [rsp+B8h] [rbp+58h] BYREF

  v7 = a5;
  v8 = 0LL;
  v11 = a2;
  if ( a2 > 2 )
  {
    v58 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 281LL);
  }
  if ( (a4 || v7) && a4 == v7 )
  {
    v58 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 282LL);
  }
  Dev = (struct _UNICODE_STRING *)rimCreateDev((int)Object, a2, (int)a3, a4);
  if ( !Dev )
    return 3221225495LL;
  if ( a3->Buffer )
  {
    v16 = Win32AllocPoolZInit(a3->MaximumLength, 0x70707352u);
    Dev[13].Buffer = (PWSTR)v16;
    if ( !v16 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (v17 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        v17 = 0;
      }
      if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_S(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v17,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gRimLog,
          2u,
          1u,
          0xDu,
          (__int64)&WPP_0d2ee50f2455342177054e7d919ede81_Traceguids,
          a3->Buffer);
      goto LABEL_111;
    }
    Dev[13].MaximumLength = a3->MaximumLength;
    RtlCopyUnicodeString(Dev + 13, a3);
  }
  LOBYTE(Dev[3].Length) = v11;
  v18 = 32LL;
  if ( a4 )
    LODWORD(Dev[11].Buffer) |= 0x20u;
  v19 = a6;
  if ( v7 )
  {
    if ( !a6 )
    {
      v58 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 314LL);
    }
    LODWORD(Dev[11].Buffer) |= 0x2000u;
    Dev[24].Buffer = *(PWSTR *)(v19 + 116);
    *(_DWORD *)&Dev[25].Length = *(_DWORD *)(v19 + 124);
    HIDWORD(Dev[82].Buffer) = *(_DWORD *)(v19 + 132);
    *(_QWORD *)&Dev[83].Length = *(_QWORD *)(v19 + 136);
    if ( (unsigned int)RIMIsCurrentProcessTrusted(v18, v13, v15) )
    {
      v20 = *(char **)&Dev[83].Length;
      LODWORD(Dev[11].Buffer) |= 0x4000u;
      Objecta[0] = 0LL;
      if ( (int)RawInputManagerDeviceObjectResolveHandle(v20, 1u, 1, Objecta) >= 0 )
      {
        v21 = Objecta[0];
        if ( (*((_DWORD *)Objecta[0] + 64) & 0x2000) == 0 )
          LODWORD(Dev[11].Buffer) |= 0x8000u;
        ObfDereferenceObject(v21);
      }
    }
    v22 = (struct _KEVENT *)Win32AllocPoolNonPagedZInit(0x18uLL, 0x76656B52u);
    Dev[23].Buffer = (PWSTR)v22;
    if ( !v22 )
    {
      v25 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v23) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v23) = 0;
      }
      LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v23 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_111;
      v26 = 14;
      goto LABEL_110;
    }
  }
  else
  {
    v22 = (struct _KEVENT *)Win32AllocPoolNonPagedZInit(0x18uLL, 0x76656B52u);
    *(_QWORD *)&Dev[22].Length = v22;
    if ( !v22 )
    {
      v25 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v23) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v23) = 0;
      }
      LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v23 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_111;
      v26 = 15;
LABEL_110:
      WPP_RECORDER_AND_TRACE_SF_(
        v25->AttachedDevice,
        v23,
        v24,
        (_DWORD)gRimLog,
        2,
        1,
        v26,
        (__int64)&WPP_0d2ee50f2455342177054e7d919ede81_Traceguids);
LABEL_111:
      *(_BYTE *)(*(_QWORD *)&Dev[2].Length + 9LL) = 1;
      RIMFreeSpecificDevWorker((__int64)Object, (__int64)Dev);
      rimDereferenceDev((__int64)Dev, v55, v56);
      return 3221225495LL;
    }
  }
  KeInitializeEvent(v22, SynchronizationEvent, 0);
  LODWORD(Dev[11].Buffer) |= 0x20000u;
  if ( LOBYTE(Dev[3].Length) == 2 )
  {
    v27 = (WCHAR *)RIMCreateHidDesc((__int64)Object, (__int64)Dev, v19);
    Dev[28].Buffer = v27;
    if ( !v27 )
    {
      v25 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v23) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v23) = 0;
      }
      LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v23 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_111;
      v26 = 16;
      goto LABEL_110;
    }
    v30 = ((__int64)Dev[11].Buffer & 0x2000) == 0;
    v31 = 0LL;
    Objecta[0] = 0LL;
    if ( v30 )
    {
      v32 = SGDGetUserSessionState(v28, v23, v24, v29);
      RIMLockExclusive(v32 + 240);
      Buffer = Dev[28].Buffer;
      *(_DWORD *)(&Dev[145].MaximumLength + 1) |= 1u;
      if ( Buffer[21] == 13 )
      {
        v34 = Buffer[20];
        if ( (unsigned __int16)(v34 - 1) <= 1u || (unsigned __int16)(v34 - 4) <= 1u )
        {
          v35 = RIMFindSiblingMouseDeviceWorker(Buffer, Dev, Objecta);
          v31 = Objecta[0];
          if ( v35 )
          {
            v36 = (char *)Objecta[0] + 72;
            if ( !Objecta[0] )
              v36 = 0LL;
            RIMMarkSiblingMouseDevice(v36, Dev[28].Buffer[20]);
          }
        }
      }
      CInpPushLock::UnLockExclusive((CInpPushLock *)(v32 + 240));
      if ( v31 )
        ObfDereferenceObject(v31);
    }
  }
  if ( !LOBYTE(Dev[3].Length) )
  {
    if ( v7 )
    {
      Dev[55].Length = 32;
    }
    else
    {
      if ( !(unsigned int)RIMGetDeviceParent(0LL, (__int64)Dev, v24) )
      {
        v38 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v37) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
        {
          LOBYTE(v37) = 0;
        }
        LOBYTE(v39) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v37,
            v39,
            (_DWORD)gRimLog,
            3,
            1,
            17,
            (__int64)&WPP_0d2ee50f2455342177054e7d919ede81_Traceguids);
      }
      Objecta[0] = 0LL;
      v41 = SGDGetUserSessionState(v38, v37, v39, v40);
      RIMLockExclusive(v41 + 240);
      *(_DWORD *)(&Dev[145].MaximumLength + 1) |= 1u;
      v44 = RIMFindSiblingPointerDeviceForMouseWorker((__int64)Dev, Objecta, v42, v43);
      v45 = Objecta[0];
      if ( v44 )
      {
        if ( Objecta[0] )
          v8 = (char *)Objecta[0] + 72;
        if ( v8[48] != 2 )
        {
          v58 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 474LL);
        }
        RIMMarkSiblingMouseDevice(Dev, *(unsigned __int16 *)(*((_QWORD *)v8 + 57) + 40LL));
      }
      CInpPushLock::UnLockExclusive((CInpPushLock *)(v41 + 240));
      if ( v45 )
        ObfDereferenceObject(v45);
      else
        RIMLoadDeviceLegacyInfo((struct DEVICEINFO *)Dev, v46, v47);
      RIMGetMouseDeviceHardwareId((__int64)Dev, v48, v49);
      RIMPopulateExtendedMouseDeviceProperties((__int64)Dev);
    }
  }
  if ( LOBYTE(Dev[3].Length) == 1 && !v7 )
    RIMPopulateExtendedKeyboardDeviceProperties((__int64)Dev, v23, v24);
  LODWORD(Dev[12].Buffer) |= 0x20u;
  if ( (int)ObfReferenceObject(Object) < 0 )
    goto LABEL_111;
  *(_QWORD *)&Dev[21].Length = Object;
  v50 = Object[53];
  if ( v50 )
  {
    do
    {
      v51 = (struct _UNICODE_STRING **)(v50 + 40);
      v50 = *(_QWORD *)(v50 + 40);
    }
    while ( v50 );
    *v51 = Dev;
  }
  else
  {
    Object[53] = Dev;
  }
  if ( !Object[104] || *((_DWORD *)Object + 264) || !v7 )
  {
    if ( v7 || ((__int64)Dev[11].Buffer & 0x20) != 0 )
      rimDoRimDevChange((__int64)Object, (__int64)Dev, 1u);
    else
      rimQueueRimDevChangeAsyncWorkItem(Object, (__int64)Dev, 1);
  }
  if ( ((__int64)Dev[11].Buffer & 0x1000) != 0 )
  {
    v52 = Dev[28].Buffer;
    v59 = 0;
    v58 = 0;
    Objecta[0] = 0LL;
    if ( (unsigned int)RIMFindInputDeviceForConfig(
                         (_DWORD)v52,
                         (_DWORD)Object,
                         (_DWORD)Dev,
                         (unsigned int)&v59,
                         (__int64)&v58,
                         (__int64)Objecta) )
    {
      if ( !v58 )
      {
        v53 = Objecta[0];
        if ( *(_DWORD *)(*((_QWORD *)Objecta[0] + 59) + 24LL) != 7 )
        {
          v58 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 617LL);
        }
        RIMApiSetSetUserPTPEnabledPreference(v53, v53[57], Object);
      }
    }
  }
  if ( !Object[104] && !*((_DWORD *)Object + 264) && v7 )
    rimDoRimDevChange((__int64)Object, (__int64)Dev, 2u);
  RimTelemetry::ReportRimDevice(1, -__CFSHR__(Dev[12].Buffer, 8), (struct RIMDEV *const)Dev);
  *a7 = Dev;
  return 0LL;
}
