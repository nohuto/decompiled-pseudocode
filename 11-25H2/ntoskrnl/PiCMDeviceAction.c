/*
 * XREFs of PiCMDeviceAction @ 0x14095EA0C
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C5B30 (PiCMHandleIoctl.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x140441F70 (PiControlFreeUserModeCallersBuffer.c)
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     PnpRequestDeviceAction @ 0x14046E128 (PnpRequestDeviceAction.c)
 *     PnpCancelDeviceActionRequest @ 0x1405A39C0 (PnpCancelDeviceActionRequest.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x1405A3A70 (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PiCMSetProblem @ 0x140725498 (PiCMSetProblem.c)
 *     _CmIsRootDevice @ 0x140932574 (_CmIsRootDevice.c)
 *     PiCMCaptureObjectInputData @ 0x140934730 (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x140934C74 (PiCMReturnBasicResultData.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140934F70 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     _CmValidateDeviceName @ 0x14095AE80 (_CmValidateDeviceName.c)
 *     PiAuDoesClientHaveAccess @ 0x14095D51C (PiAuDoesClientHaveAccess.c)
 *     PiAuDoesClientHavePrivilege @ 0x14095EC5C (PiAuDoesClientHavePrivilege.c)
 *     PnpDeleteDeviceActionRequest @ 0x14096DC14 (PnpDeleteDeviceActionRequest.c)
 *     _CmGetDeviceStatus @ 0x1409A9004 (_CmGetDeviceStatus.c)
 *     PiQueueDeviceRequest @ 0x140AB40E8 (PiQueueDeviceRequest.c)
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
  __int64 v24; // [rsp+48h] [rbp-49h] BYREF
  PVOID P; // [rsp+50h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-39h] BYREF
  int v27; // [rsp+68h] [rbp-29h] BYREF
  int v28; // [rsp+6Ch] [rbp-25h] BYREF
  __int128 v29; // [rsp+70h] [rbp-21h] BYREF
  PCWSTR SourceString[2]; // [rsp+80h] [rbp-11h]
  __int64 v31; // [rsp+90h] [rbp-1h]
  struct _KEVENT Event; // [rsp+98h] [rbp+7h] BYREF

  v24 = 0LL;
  v28 = 0;
  v27 = 0;
  v31 = 0LL;
  v8 = 0;
  DestinationString = 0LL;
  *a6 = 0;
  v29 = 0LL;
  *(_OWORD *)SourceString = 0LL;
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v29);
  v10 = SourceString[0];
  inited = v9;
  if ( v9 >= 0 )
  {
    if ( !SourceString[0] || DWORD2(v29) != 1 || !a3 || a4 < 8 )
    {
      inited = -1073741811;
      goto LABEL_7;
    }
    if ( HIDWORD(SourceString[1]) == 1 )
    {
      v13 = DWORD1(v29);
      if ( (unsigned int)(DWORD1(v29) - 1) > 5 )
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
      v8 = DWORD1(v29);
      if ( (unsigned int)(DWORD1(v29) - 1) > 1 )
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
                    LODWORD(v24) = -1073741811;
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
                inited = PnpRequestDeviceAction(v18, 0x15u, 0, 0LL, (__int64)&Event, (__int64)&v24, (__int64 *)&P);
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
              inited = v24;
          }
LABEL_7:
          inited = PiCMReturnBasicResultData(inited, v31, a3, a4, a6);
          goto LABEL_8;
        }
        goto LABEL_42;
      }
      if ( !PiAuDoesClientHaveAccess(0x20u) || !(unsigned __int8)PiAuDoesClientHavePrivilege(10LL) )
        goto LABEL_42;
      if ( CmIsRootDevice(v10) )
        goto LABEL_13;
      LODWORD(v24) = CmGetDeviceStatus(
                       PiPnpRtlCtx,
                       (_DWORD)v10,
                       0,
                       (unsigned int)&v24 + 4,
                       (__int64)&v28,
                       (__int64)&v27);
      if ( (int)v24 >= 0 )
      {
        if ( (v24 & 0x800000000LL) != 0 )
          goto LABEL_7;
        if ( (v24 & 0x40000000000LL) != 0 )
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
