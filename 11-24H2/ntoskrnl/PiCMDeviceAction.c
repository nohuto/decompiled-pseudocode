/*
 * XREFs of PiCMDeviceAction @ 0x140A80158
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C13C0 (PiCMHandleIoctl.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x140438B40 (PiControlFreeUserModeCallersBuffer.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     PnpRequestDeviceAction @ 0x140467508 (PnpRequestDeviceAction.c)
 *     PnpCancelDeviceActionRequest @ 0x1405A41C0 (PnpCancelDeviceActionRequest.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x1405A4270 (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PiCMSetProblem @ 0x14072F6C4 (PiCMSetProblem.c)
 *     _CmValidateDeviceName @ 0x1408B59E0 (_CmValidateDeviceName.c)
 *     PiAuDoesClientHaveAccess @ 0x1408B9FF8 (PiAuDoesClientHaveAccess.c)
 *     _CmGetDeviceStatus @ 0x1408BA218 (_CmGetDeviceStatus.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1408BB740 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiCMCaptureObjectInputData @ 0x1408BC4E0 (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x1408BCA94 (PiCMReturnBasicResultData.c)
 *     _CmIsRootDevice @ 0x140928D54 (_CmIsRootDevice.c)
 *     PnpDeleteDeviceActionRequest @ 0x1409ECFD4 (PnpDeleteDeviceActionRequest.c)
 *     PiAuDoesClientHavePrivilege @ 0x140A803A8 (PiAuDoesClientHavePrivilege.c)
 *     PiQueueDeviceRequest @ 0x140AB2974 (PiQueueDeviceRequest.c)
 */

__int64 __fastcall PiCMDeviceAction(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  int v8; // r15d
  int v9; // eax
  const WCHAR *v10; // r14
  int inited; // ebx
  int v13; // esi
  int v14; // r10d
  int v15; // r10d
  int v16; // esi
  _QWORD *v17; // rax
  void *v18; // rdi
  int v19; // esi
  int v20; // esi
  __int64 v21; // rdx
  _BOOL8 v22; // r8
  __int64 v23; // rdx
  unsigned int v24; // [rsp+38h] [rbp-59h]
  __int64 v25; // [rsp+48h] [rbp-49h] BYREF
  PVOID P; // [rsp+50h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-39h] BYREF
  int v28; // [rsp+68h] [rbp-29h] BYREF
  int v29; // [rsp+6Ch] [rbp-25h] BYREF
  __int128 v30; // [rsp+70h] [rbp-21h] BYREF
  PCWSTR SourceString[2]; // [rsp+80h] [rbp-11h]
  __int64 v32; // [rsp+90h] [rbp-1h]
  struct _KEVENT Event; // [rsp+98h] [rbp+7h] BYREF

  v25 = 0LL;
  v29 = 0;
  v28 = 0;
  v32 = 0LL;
  v8 = 0;
  DestinationString = 0LL;
  *a6 = 0;
  v30 = 0LL;
  *(_OWORD *)SourceString = 0LL;
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v30);
  v10 = SourceString[0];
  inited = v9;
  if ( v9 >= 0 )
  {
    if ( !SourceString[0] || DWORD2(v30) != 1 || !a3 || a4 < 8 )
    {
      inited = -1073741811;
      goto LABEL_7;
    }
    if ( HIDWORD(SourceString[1]) == 1 )
    {
      v13 = DWORD1(v30);
      if ( (unsigned int)(DWORD1(v30) - 1) > 5 )
        goto LABEL_13;
    }
    else
    {
      if ( HIDWORD(SourceString[1]) != 2 )
      {
LABEL_13:
        inited = -1073741811;
        goto LABEL_7;
      }
      v8 = DWORD1(v30);
      if ( (unsigned int)(DWORD1(v30) - 1) > 1 )
        inited = -1073741811;
      v13 = 0;
      if ( inited < 0 )
        goto LABEL_7;
    }
    inited = CmValidateDeviceName((unsigned int)(HIDWORD(SourceString[1]) - 1), SourceString[0]);
    if ( inited < 0 )
      goto LABEL_7;
    v15 = v14 - 1;
    if ( v15 )
    {
      if ( v15 != 1 )
        goto LABEL_13;
      if ( !PiAuDoesClientHaveAccess(0x20u) || !(unsigned __int8)PiAuDoesClientHavePrivilege(10LL) )
      {
LABEL_42:
        inited = -1073741790;
        goto LABEL_7;
      }
      inited = RtlInitUnicodeStringEx(&DestinationString, v10);
      if ( inited < 0 )
        goto LABEL_7;
      v21 = 9LL;
      v22 = v8 != 2;
    }
    else
    {
      if ( v13 != 1 && v13 != 2 )
      {
        if ( v13 != 3 && v13 != 4 && (unsigned int)(v13 - 5) > 1 )
          goto LABEL_13;
        if ( PiAuDoesClientHaveAccess(2u) && (unsigned __int8)PiAuDoesClientHavePrivilege(10LL) )
        {
          inited = RtlInitUnicodeStringEx(&DestinationString, v10);
          if ( inited >= 0 )
          {
            v16 = v13 - 3;
            if ( v16 )
            {
              v19 = v16 - 1;
              if ( v19 )
              {
                v20 = v19 - 1;
                if ( v20 )
                {
                  if ( v20 != 1 )
                  {
                    inited = -1073741811;
                    LODWORD(v25) = -1073741811;
                    goto LABEL_7;
                  }
                  v23 = 24LL;
                }
                else
                {
                  v23 = 23LL;
                }
              }
              else
              {
                v23 = 22LL;
              }
              inited = PiQueueDeviceRequest(&DestinationString, v23, 1LL);
            }
            else
            {
              P = 0LL;
              memset(&Event, 0, sizeof(Event));
              v17 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x43706E50u);
              v18 = v17;
              if ( v17 && *(_QWORD *)(v17[39] + 40LL) )
              {
                KeInitializeEvent(&Event, NotificationEvent, 0);
                inited = PnpRequestDeviceAction(v18, 0x15u, 0, 0LL, (__int64)&Event, (__int64)&v25, (__int64 *)&P);
                if ( inited >= 0 )
                {
                  inited = KeWaitForSingleObject(&Event, Executive, 0, 1u, 0LL);
                  if ( inited == 257 )
                  {
                    if ( (unsigned int)PnpRemoveDeviceActionRequestFromQueue(P) )
                    {
                      inited = -1073741536;
                    }
                    else
                    {
                      PnpCancelDeviceActionRequest((__int64)P);
                      inited = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                    }
                  }
                }
              }
              else
              {
                inited = -1073741810;
              }
              if ( P )
                PnpDeleteDeviceActionRequest(P);
              if ( v18 )
                ObfDereferenceObjectWithTag(v18, 0x43706E50u);
            }
            if ( inited >= 0 )
              inited = v25;
          }
LABEL_7:
          inited = PiCMReturnBasicResultData(inited, v32, a3, a4, a6);
          goto LABEL_8;
        }
        goto LABEL_42;
      }
      if ( !PiAuDoesClientHaveAccess(0x20u) || !(unsigned __int8)PiAuDoesClientHavePrivilege(10LL) )
        goto LABEL_42;
      if ( CmIsRootDevice(v10) )
        goto LABEL_13;
      LODWORD(v25) = CmGetDeviceStatus(*(__int64 *)&PiPnpRtlCtx, v10, 0, (_DWORD *)&v25 + 1, &v29, &v28, v24);
      if ( (int)v25 >= 0 )
      {
        if ( (v25 & 0x800000000LL) != 0 )
          goto LABEL_7;
        if ( (v25 & 0x40000000000LL) != 0 )
        {
          inited = PiCMSetProblem(v10, 0, 1);
          if ( inited < 0 )
            goto LABEL_7;
        }
      }
      inited = RtlInitUnicodeStringEx(&DestinationString, v10);
      if ( inited < 0 )
        goto LABEL_7;
      v21 = 16LL;
      if ( v13 != 1 )
        v21 = 12LL;
      v22 = 1LL;
    }
    inited = PiQueueDeviceRequest(&DestinationString, v21, v22);
    goto LABEL_7;
  }
LABEL_8:
  if ( v10 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)SourceString[0]);
  return (unsigned int)inited;
}
