/*
 * XREFs of HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x140016B00
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140001FE8 (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1400087B4 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000F5EC (McTemplateK0pqq_EtwWriteTransfer.c)
 *     EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper @ 0x140014938 (EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper.c)
 *     HUBPDO_GetHubName @ 0x140018BA0 (HUBPDO_GetHubName.c)
 *     HUBPDO_RecordFailure @ 0x14001A30C (HUBPDO_RecordFailure.c)
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x14001B790 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_ValidateURB @ 0x14001C760 (HUBPDO_ValidateURB.c)
 *     McTemplateK0pjq_EtwWriteTransfer @ 0x14001CB9C (McTemplateK0pjq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_q @ 0x14001DDC4 (WPP_RECORDER_SF_q.c)
 *     HUBUCX_GetControllerName @ 0x140027368 (HUBUCX_GetControllerName.c)
 *     HUBUCX_GetDeviceBusInfo @ 0x1400274BC (HUBUCX_GetDeviceBusInfo.c)
 *     HUBMISC_GenerateControllerSuffix @ 0x140030164 (HUBMISC_GenerateControllerSuffix.c)
 *     HUBMISC_VerifierDbgBreak @ 0x140033D80 (HUBMISC_VerifierDbgBreak.c)
 *     HUBMISC_WaitForSignal @ 0x140033EF8 (HUBMISC_WaitForSignal.c)
 *     HUBIDLE_AddEvent @ 0x14003FADC (HUBIDLE_AddEvent.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     memmove @ 0x140045DC0 (memmove.c)
 *     HUBPDO_RegisterPortPLDRCapability @ 0x140084E20 (HUBPDO_RegisterPortPLDRCapability.c)
 *     HUBPDO_UnregisterPortPLDRCapability @ 0x140085620 (HUBPDO_UnregisterPortPLDRCapability.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceWdmIrpPreprocess(__int64 a1, IRP *a2)
{
  unsigned int Status; // ebx
  __int64 v4; // rax
  int v5; // edx
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 v7; // rdi
  unsigned int LowPart; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  bool v16; // zf
  _IRP *MasterIrp; // rdx
  int v18; // r14d
  char v19; // dl
  unsigned int v20; // esi
  _IO_SECURITY_CONTEXT *v21; // r14
  __int64 v22; // rdx
  bool v23; // zf
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // r9d
  int v27; // edx
  __int64 v28; // rcx
  _IO_SECURITY_CONTEXT *SecurityContext; // r15
  __int64 v30; // rax
  _SECURITY_QUALITY_OF_SERVICE *v31; // rcx
  PVOID v32; // r9
  __int64 v35; // rcx
  unsigned __int16 *v36; // rcx
  unsigned int *v37; // rsi
  unsigned int v38; // ebx
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // rcx
  PVOID v40; // r9
  unsigned __int16 *v41; // rdx
  unsigned int AccessState_high; // ecx
  unsigned int v43; // ebx
  _IO_STACK_LOCATION *v44; // rax
  _IO_STACK_LOCATION *v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rax
  int v49; // eax
  unsigned __int16 v50; // r9
  unsigned __int8 v51; // dl
  int v52; // eax
  __int64 v53; // rcx
  unsigned int v54; // eax
  unsigned int v55; // eax
  unsigned int v56; // eax
  unsigned int v57; // eax
  unsigned int v58; // eax
  unsigned int v59; // eax
  unsigned int DeviceBusInfo; // eax
  int v61; // r9d
  __int64 v62; // rdx
  _IO_SECURITY_CONTEXT *v63; // rax
  _IO_STACK_LOCATION *v64; // rax
  _IO_STACK_LOCATION *v65; // rax
  __int64 v66; // rdx
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rax
  unsigned int v68; // eax
  unsigned int v69; // eax
  unsigned int v70; // eax
  unsigned int v71; // eax
  unsigned int v72; // eax
  unsigned int v73; // eax
  _IO_SECURITY_CONTEXT *v74; // rcx
  __int64 v75; // rax
  __int16 v76; // dx
  __int64 v77; // r8
  unsigned int v78; // eax
  unsigned int v79; // eax
  unsigned int v80; // eax
  unsigned int v81; // eax
  unsigned int v82; // eax
  unsigned int v83; // eax
  _IO_SECURITY_CONTEXT *v84; // rax
  __int64 v85; // rcx
  _IO_SECURITY_CONTEXT *v86; // r8
  __int64 v87; // rax
  __int64 v88; // r9
  __int64 v89; // rcx
  char v90; // cl
  __int64 v91; // rcx
  char v92; // cl
  unsigned int v93; // eax
  unsigned int v94; // eax
  unsigned int v95; // eax
  unsigned int v96; // eax
  unsigned int v97; // eax
  unsigned int v98; // eax
  int v99; // edx
  int v100; // r9d
  _IO_SECURITY_CONTEXT *v101; // rax
  int v102; // eax
  int v103; // r14d
  int v104; // r14d
  int v105; // r14d
  int v106; // r14d
  _IO_STACK_LOCATION *v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rax
  int v110; // ecx
  __int64 v111; // [rsp+20h] [rbp-60h]
  __int64 v112; // [rsp+20h] [rbp-60h]
  ULONG Priority[2]; // [rsp+28h] [rbp-58h]
  unsigned int v114; // [rsp+30h] [rbp-50h]
  _IO_STACK_LOCATION *v115; // [rsp+38h] [rbp-48h]
  struct _KEVENT Event; // [rsp+40h] [rbp-40h] BYREF
  GUID v117; // [rsp+58h] [rbp-28h] BYREF
  __int128 Source1; // [rsp+68h] [rbp-18h] BYREF

  *(_QWORD *)&v117.Data1 = a1;
  Status = 0;
  memset(&Event, 0, sizeof(Event));
  Source1 = 0LL;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006C0F8);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v7 = v4;
  v115 = CurrentStackLocation;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v114 = LowPart;
  if ( CurrentStackLocation->MajorFunction != 14 )
  {
    v19 = 0;
    switch ( LowPart )
    {
      case 0x220003u:
        LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
        if ( (unsigned __int16)(*(_WORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 2) - 53) <= 1u )
LABEL_20:
          v19 = 1;
        break;
      case 0x490007u:
      case 0x49104Bu:
        v19 = 1;
        break;
      case 0x220FB3u:
        LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
        if ( (*(_DWORD *)(v7 + 32) & 0x20) == 0 )
          break;
        goto LABEL_20;
      case 0x220463u:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v5) = 4;
          WPP_RECORDER_SF_q(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 1432LL),
            v5,
            5,
            57,
            (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
            (char)a2);
        }
        *(_DWORD *)(*(_QWORD *)(v7 + 24) + 1632LL) |= 0x80000u;
        goto LABEL_53;
    }
    if ( *(_BYTE *)v7 && !v19 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 3;
        WPP_RECORDER_SF_q(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 1432LL),
          v5,
          5,
          58,
          (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
          (char)a2);
      }
      v20 = v114;
      Status = -1073741810;
      if ( v114 == 2228227 )
        *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) = -2147482880;
LABEL_54:
      if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                          WdfDriverGlobals,
                          WdfDriverGlobals->Driver,
                          off_14006C1E8)
                      + 4) & 0x1000) != 0 )
      {
        v117 = 0LL;
        if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
          (*(void (__fastcall **)(IRP *, GUID *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(a2, &v117);
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
        {
          LODWORD(v111) = v20;
          McTemplateK0pq_EtwWriteTransfer(
            v28,
            &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_START,
            &v117,
            *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL),
            v111);
        }
        if ( v20 != 2228227 )
        {
          if ( v20 == 4788299 )
          {
            if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) == 0 )
              goto LABEL_278;
            McTemplateK0pjq_EtwWriteTransfer(
              v28,
              v27,
              (unsigned int)&v117,
              *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL),
              (__int64)&Source1,
              Status);
          }
LABEL_276:
          if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
          {
            Priority[0] = Status;
            LODWORD(v111) = v20;
            McTemplateK0pqq_EtwWriteTransfer(
              v28,
              &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_COMPLETE,
              &v117,
              *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL),
              v111,
              *(_QWORD *)Priority);
          }
          goto LABEL_278;
        }
        SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
        {
          LODWORD(v111) = WORD1(SecurityContext->SecurityQos);
          McTemplateK0pq_EtwWriteTransfer(
            v28,
            &USBHUB3_ETW_EVENT_DEVICE_URB_START,
            &v117,
            *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL),
            v111);
          if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
          {
            Priority[0] = HIDWORD(SecurityContext->SecurityQos);
            LODWORD(v112) = WORD1(SecurityContext->SecurityQos);
            McTemplateK0pqq_EtwWriteTransfer(
              WORD1(SecurityContext->SecurityQos),
              &USBHUB3_ETW_EVENT_DEVICE_URB_COMPLETE,
              &v117,
              *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL),
              v112,
              *(_QWORD *)Priority);
            goto LABEL_276;
          }
        }
      }
LABEL_278:
      a2->IoStatus.Status = Status;
      goto LABEL_279;
    }
    if ( LowPart == 2228227 )
    {
      v21 = CurrentStackLocation->Parameters.Create.SecurityContext;
      LODWORD(v22) = WORD1(v21->SecurityQos);
      if ( (unsigned __int16)(v22 - 9) <= 1u || (unsigned __int16)(v22 - 57) <= 1u )
        goto LABEL_114;
      if ( (unsigned int)v22 > 0x2A )
      {
        if ( (_DWORD)v22 != 48 && (_DWORD)v22 != 49 )
        {
          if ( (_DWORD)v22 == 53 || (_DWORD)v22 == 54 )
          {
            v21->AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v7 + 24) + 24LL);
            goto LABEL_117;
          }
          v23 = (_DWORD)v22 == 59;
LABEL_113:
          if ( !v23 )
            goto LABEL_114;
        }
      }
      else
      {
        if ( (_DWORD)v22 == 42 )
        {
          v22 = *(_QWORD *)(v7 + 24);
          if ( WORD2(v21[5].AccessState) != 7 )
          {
            if ( (unsigned __int16)(*(_WORD *)(v22 + 1990) - 256) > 0xFFu && (*(_DWORD *)(v22 + 1632) & 0x80u) == 0
              || (*(_DWORD *)(v22 + 1644) & 2) != 0 )
            {
              BYTE1(v21[5].AccessState) = *(_BYTE *)(v22 + 2052);
              v21->AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v7 + 24) + 24LL);
              goto LABEL_107;
            }
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_51;
            v25 = *(_QWORD *)(v22 + 8);
            v26 = 59;
            LOBYTE(v22) = 3;
            goto LABEL_50;
          }
          if ( (*(_DWORD *)(v22 + 2464) & 2) == 0 )
            goto LABEL_51;
          SecurityQos = v21[2].SecurityQos;
          if ( SecurityQos )
            v40 = (*(&SecurityQos->EffectiveOnly + 1) & 5) != 0
                ? *(PVOID *)&SecurityQos[2].Length
                : MmMapLockedPagesSpecifyCache(
                    (PMDL)SecurityQos,
                    0,
                    MmCached,
                    0LL,
                    0,
                    ExDefaultMdlProtection | 0x40000010u);
          else
            v40 = *(PVOID *)&v21[1].DesiredAccess;
          if ( !v40 )
            goto LABEL_51;
          v41 = *(unsigned __int16 **)(*(_QWORD *)(v7 + 24) + 2488LL);
          AccessState_high = v41[4];
          if ( AccessState_high >= HIDWORD(v21[1].AccessState) )
            AccessState_high = HIDWORD(v21[1].AccessState);
          v43 = AccessState_high;
          memmove(v40, v41, AccessState_high);
          HIDWORD(v21[1].AccessState) = v43;
LABEL_89:
          Status = 0;
          goto LABEL_52;
        }
        if ( WORD1(v21->SecurityQos) && (_DWORD)v22 != 1 )
        {
          if ( (_DWORD)v22 != 11 )
          {
            if ( (_DWORD)v22 != 19 )
            {
              v23 = (_DWORD)v22 == 30;
              goto LABEL_113;
            }
            v24 = *(_QWORD *)(v7 + 24);
            if ( (*(_DWORD *)(v24 + 1632) & 0x80000) == 0 )
            {
LABEL_114:
              v21->AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v7 + 24) + 24LL);
              goto LABEL_76;
            }
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_51;
            v25 = *(_QWORD *)(v24 + 8);
            v26 = 60;
            LOBYTE(v22) = 4;
LABEL_50:
            WPP_RECORDER_SF_(
              *(_QWORD *)(v25 + 1432),
              v22,
              5,
              v26,
              (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids);
LABEL_51:
            Status = -1073741637;
LABEL_52:
            CurrentStackLocation = v115;
            goto LABEL_53;
          }
          v30 = *(_QWORD *)(v7 + 24);
          if ( *(_WORD *)(v30 + 1990) <= 0x200u )
          {
            v21->AccessState = *(_ACCESS_STATE **)(v30 + 24);
            goto LABEL_76;
          }
          Status = HUBPDO_ValidateURB(v7, v21, 4788299LL);
          if ( (Status & 0x80000000) != 0 )
            goto LABEL_52;
          v31 = v21[2].SecurityQos;
          if ( v31 )
          {
            if ( (*(&v31->EffectiveOnly + 1) & 5) != 0 )
              v32 = *(PVOID *)&v31[2].Length;
            else
              v32 = MmMapLockedPagesSpecifyCache((PMDL)v31, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x40000010u);
          }
          else
          {
            v32 = *(PVOID *)&v21[1].DesiredAccess;
          }
          if ( !v32 )
          {
            Status = -1073741811;
            HIDWORD(v21->SecurityQos) = -2147482880;
            goto LABEL_52;
          }
          if ( BYTE3(v21[5].AccessState) == 1 )
          {
            v37 = (unsigned int *)&v21[1].AccessState + 1;
            v36 = (unsigned __int16 *)(*(_QWORD *)(v7 + 24) + 1988LL);
            v38 = 18;
            if ( HIDWORD(v21[1].AccessState) <= 0x12 )
              v38 = HIDWORD(v21[1].AccessState);
          }
          else
          {
            if ( BYTE3(v21[5].AccessState) != 2 )
            {
              v21->AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v7 + 24) + 24LL);
              goto LABEL_76;
            }
            v35 = *(_QWORD *)(v7 + 24);
            if ( BYTE2(v21[5].AccessState) )
            {
              v21->AccessState = *(_ACCESS_STATE **)(v35 + 24);
              goto LABEL_76;
            }
            v36 = *(unsigned __int16 **)(v35 + 2016);
            v37 = (unsigned int *)&v21[1].AccessState + 1;
            v38 = v36[1];
            if ( v38 >= HIDWORD(v21[1].AccessState) )
              v38 = HIDWORD(v21[1].AccessState);
          }
          LODWORD(v21[1].AccessState) |= 1u;
          if ( ((__int64)v21[1].AccessState & 8) != 0 )
            WORD1(v21->SecurityQos) = 8;
          memmove(v32, v36, v38);
          *v37 = v38;
          goto LABEL_89;
        }
      }
      v52 = HUBPDO_ValidateURB(v7, v21, 4788299LL);
      Status = v52;
      if ( v52 < 0 )
        goto LABEL_52;
      if ( v52 != 128 )
      {
        v18 = (*(_DWORD *)(*(_QWORD *)(v7 + 24) + 1632LL) & 2) != 0 ? 5 : 3;
        goto LABEL_256;
      }
      goto LABEL_89;
    }
    if ( LowPart <= 0x22043F )
    {
      if ( LowPart == 2229311 )
      {
        v74 = CurrentStackLocation->Parameters.Create.SecurityContext;
        if ( v74 )
        {
          v75 = *(_QWORD *)(v7 + 16);
          *(_OWORD *)&v74->SecurityQos = *(_OWORD *)(v75 + 312);
          *(_OWORD *)&v74->DesiredAccess = *(_OWORD *)(v75 + 328);
          v76 = *(_WORD *)(v7 + 48);
          v77 = *(unsigned __int8 *)(*(_QWORD *)(v7 + 16) + 240LL);
          if ( (_BYTE)v77 )
            *((_WORD *)&v74->DesiredAccess + v77) = v76;
          else
            LOWORD(v74->DesiredAccess) = v76;
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v5) = 3;
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 1432LL),
              v5,
              5,
              11,
              (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids);
          }
          Status = -1073741811;
        }
        goto LABEL_53;
      }
      v53 = 2228263LL;
      if ( LowPart > 0x220027 )
      {
        v68 = LowPart - 2228267;
        if ( !v68 )
        {
          DeviceBusInfo = HUBPDO_RecordFailure(v7, a2, 4788299LL);
          goto LABEL_135;
        }
        v69 = v68 - 1013;
        if ( !v69 )
        {
          DeviceBusInfo = HUBUCX_GetDeviceBusInfo(
                            *(_QWORD *)(v7 + 16),
                            *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL),
                            CurrentStackLocation->Parameters.WMI.ProviderId);
          goto LABEL_135;
        }
        v70 = v69 - 4;
        if ( !v70 )
        {
          DeviceBusInfo = HUBUCX_GetControllerName(
                            *(_QWORD *)(v7 + 16),
                            CurrentStackLocation->Parameters.WMI.ProviderId,
                            CurrentStackLocation->Parameters.Create.Options);
          goto LABEL_135;
        }
        v71 = v70 - 8;
        if ( v71 )
        {
          v72 = v71 - 7;
          if ( !v72 )
          {
            Status = CurrentStackLocation->Parameters.WMI.ProviderId == 0 ? 0xC000000D : 0;
            goto LABEL_53;
          }
          v73 = v72 - 4;
          if ( v73 )
          {
            if ( v73 != 4 )
            {
LABEL_238:
              Status = a2->IoStatus.Status;
              goto LABEL_53;
            }
          }
        }
        goto LABEL_182;
      }
      if ( LowPart != 2228263 )
      {
        v54 = LowPart - 2228231;
        if ( !v54 )
        {
          if ( (*(_DWORD *)(v7 + 32) & 1) != 0 )
          {
            if ( !KeGetCurrentIrql() )
              goto LABEL_117;
            Status = -1073741811;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_53;
            v61 = 64;
          }
          else
          {
            Status = -1073741101;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_53;
            v61 = 63;
          }
          goto LABEL_139;
        }
        v55 = v54 - 8;
        if ( v55 )
        {
          v56 = v55 - 4;
          if ( !v56 )
          {
            if ( KeGetCurrentIrql() )
            {
              Status = -1073741811;
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_53;
              v61 = 61;
            }
            else
            {
              v63 = CurrentStackLocation->Parameters.Create.SecurityContext;
              if ( v63 )
              {
                LODWORD(v63->SecurityQos) = 0;
                CurrentStackLocation->Parameters.QueryDirectory.FileName = (_UNICODE_STRING *)v7;
LABEL_155:
                v64 = a2->Tail.Overlay.CurrentStackLocation;
                *(_OWORD *)&v64[-1].MajorFunction = *(_OWORD *)&v64->MajorFunction;
                *(_OWORD *)&v64[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v64->Parameters.NotifyDirectoryEx.CompletionFilter;
                *(_OWORD *)(&v64[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v64->Parameters.SetQuota + 6);
                v64[-1].FileObject = v64->FileObject;
                v64[-1].Control = 0;
                KeInitializeEvent(&Event, NotificationEvent, 0);
                v65 = a2->Tail.Overlay.CurrentStackLocation;
                v66 = *(_QWORD *)&v117.Data1;
                v65[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))&HUBPDO_SyncCompletionRoutine;
                v65[-1].Context = &Event;
                v65[-1].Control = -32;
                v49 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *, _QWORD, int))(WdfFunctions_01015
                                                                                                  + 3216))(
                        WdfDriverGlobals,
                        v66,
                        a2,
                        *(_QWORD *)(*(_QWORD *)(v7 + 16) + 2408LL),
                        2);
                if ( v49 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  goto LABEL_159;
                v50 = 72;
                v51 = 2;
LABEL_158:
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 1432LL),
                  v51,
                  5u,
                  v50,
                  (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
                  v49);
LABEL_159:
                HUBMISC_WaitForSignal(&Event);
                Status = a2->IoStatus.Status;
LABEL_279:
                IofCompleteRequest(a2, 0);
                return Status;
              }
              Status = -1073741811;
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_53;
              v61 = 62;
            }
            LOBYTE(v5) = 2;
            goto LABEL_140;
          }
          v57 = v56 - 4;
          if ( !v57 )
            goto LABEL_53;
          v58 = v57 - 4;
          if ( !v58 )
            goto LABEL_53;
          v59 = v58 - 4;
          if ( v59 )
          {
            if ( v59 == 1 )
            {
              DeviceBusInfo = HUBPDO_GetHubName(v7, a2, 4788299LL);
LABEL_135:
              Status = DeviceBusInfo;
              goto LABEL_53;
            }
            goto LABEL_238;
          }
          if ( KeGetCurrentIrql() )
          {
            Status = -1073741811;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_53;
            v61 = 67;
          }
          else
          {
            if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v7 + 4), 1, 0) )
            {
              v62 = *(_QWORD *)(v7 + 24);
              if ( (*(_DWORD *)(v62 + 2436) & 0x400) != 0 )
                HUBMISC_VerifierDbgBreak("DeviceHwVerifierClientInitiatedCyclePort", v62 + 504);
              EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper(*(_QWORD *)(v7 + 24), 2228255, 0);
              HUBSM_AddEvent(*(_QWORD *)(v7 + 24) + 504LL, 4011);
              goto LABEL_53;
            }
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
LABEL_53:
              v20 = v114;
              goto LABEL_54;
            }
            v61 = 68;
          }
LABEL_139:
          LOBYTE(v5) = 3;
LABEL_140:
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 1432LL),
            v5,
            5,
            v61,
            (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids);
          goto LABEL_53;
        }
LABEL_182:
        Status = -1073741637;
        goto LABEL_53;
      }
      Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
      if ( Parameters && *(_QWORD *)&Parameters->NamedPipeType )
      {
        v117 = 0LL;
        if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
          (*(void (__fastcall **)(IRP *, GUID *, __int64))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(
            a2,
            &v117,
            4788299LL);
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
          McTemplateK0p_EtwWriteTransfer(
            v53,
            &USBHUB3_ETW_EVENT_DEVICE_SUBMIT_IDLE_NOTIFICATION_START,
            &v117,
            *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL));
        return (unsigned int)HUBIDLE_AddEvent(v7 + 72, 6003LL, a2);
      }
      Status = -1073741224;
      v18 = 2;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_52;
      LOBYTE(v5) = 3;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 1432LL),
        v5,
        5,
        69,
        (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids);
LABEL_256:
      v103 = v18 - 1;
      if ( !v103 )
        goto LABEL_76;
      v104 = v103 - 1;
      if ( v104 )
      {
        v105 = v104 - 1;
        if ( v105 )
        {
          v106 = v105 - 1;
          if ( v106 )
          {
            if ( v106 != 1 )
              return Status;
            goto LABEL_261;
          }
          goto LABEL_155;
        }
LABEL_117:
        v44 = a2->Tail.Overlay.CurrentStackLocation;
        *(_OWORD *)&v44[-1].MajorFunction = *(_OWORD *)&v44->MajorFunction;
        *(_OWORD *)&v44[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v44->Parameters.NotifyDirectoryEx.CompletionFilter;
        *(_OWORD *)(&v44[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v44->Parameters.SetQuota + 6);
        v44[-1].FileObject = v44->FileObject;
        v44[-1].Control = 0;
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v45 = a2->Tail.Overlay.CurrentStackLocation;
        v46 = *(_QWORD *)&v117.Data1;
        v47 = *(_QWORD *)&v117.Data1;
        v45[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))&HUBPDO_SyncCompletionRoutine;
        v45[-1].Context = &Event;
        v45[-1].Control = -32;
        v48 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 736))(
                WdfDriverGlobals,
                v47);
        v49 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *, __int64, int))(WdfFunctions_01015 + 3216))(
                WdfDriverGlobals,
                v46,
                a2,
                v48,
                2);
        if ( v49 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_159;
        v50 = 73;
        v51 = 3;
        goto LABEL_158;
      }
      goto LABEL_52;
    }
    if ( LowPart <= 0x491043 )
    {
      if ( LowPart == 4788291 )
      {
        v86 = CurrentStackLocation->Parameters.Create.SecurityContext;
        v86->SecurityQos = *(_SECURITY_QUALITY_OF_SERVICE **)(*(_QWORD *)(v7 + 16) + 2456LL);
        v87 = *(_QWORD *)(v7 + 24);
        *(_OWORD *)&v86->AccessState = *(_OWORD *)(v87 + 1988);
        LOWORD(v86[1].SecurityQos) = *(_WORD *)(v87 + 2004);
        WORD1(v86[1].SecurityQos) = *(_WORD *)(*(_QWORD *)(v7 + 24) + 2192LL);
        WORD2(v86[1].SecurityQos) = *(_WORD *)(*(_QWORD *)(v7 + 24) + 2194LL);
        v86[2].AccessState = *(_ACCESS_STATE **)(*(_QWORD *)(v7 + 24) + 2568LL);
        v86[2].DesiredAccess = *(_DWORD *)(*(_QWORD *)(v7 + 24) + 2576LL);
        BYTE2(v86[1].DesiredAccess) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 202LL);
        HIWORD(v86[1].AccessState) = *(_WORD *)(*(_QWORD *)(v7 + 24) + 2202LL);
        LOWORD(v86[1].DesiredAccess) = *(_WORD *)(*(_QWORD *)(v7 + 24) + 2204LL);
        v88 = *(_QWORD *)(v7 + 16);
        LOWORD(v86[1].FullCreateOptions) = *(_WORD *)(v88 + 1196)
                                         + *(_WORD *)(v88 + 2500)
                                         + *(_WORD *)(*(_QWORD *)(v7 + 24) + 2582LL);
        v89 = *(_QWORD *)(v7 + 24);
        if ( (*(_DWORD *)(v89 + 2216) & 1) != 0 )
        {
          HIWORD(v86[1].SecurityQos) = *(unsigned __int8 *)(v89 + 2197);
          v90 = *(_BYTE *)(*(_QWORD *)(v7 + 16) + 240LL);
        }
        else
        {
          HIWORD(v86[1].SecurityQos) = *(_WORD *)(v88 + 2486);
          v90 = *(_BYTE *)(v88 + 2488);
        }
        LOBYTE(v86[1].AccessState) = v90;
        v91 = *(_QWORD *)(v7 + 24);
        if ( (*(_DWORD *)(v91 + 2216) & 2) != 0 )
        {
          WORD1(v86[1].AccessState) = *(_WORD *)(v91 + 2200);
          v92 = *(_BYTE *)(*(_QWORD *)(v7 + 16) + 240LL);
        }
        else
        {
          WORD1(v86[1].AccessState) = *(_WORD *)(v88 + 2490);
          v92 = *(_BYTE *)(v88 + 2492);
        }
        BYTE4(v86[1].AccessState) = v92;
        if ( (*(_DWORD *)(v88 + 2504) & 1) != 0 )
          LODWORD(v86[2].SecurityQos) |= 1u;
        if ( (*(_DWORD *)(v88 + 2504) & 4) != 0 )
          LODWORD(v86[2].SecurityQos) |= 4u;
        if ( (*(_DWORD *)(*(_QWORD *)(v7 + 24) + 1632LL) & 0x2000) != 0 )
          LODWORD(v86[2].SecurityQos) |= 2u;
        if ( (*(_DWORD *)(*(_QWORD *)(v7 + 16) + 44LL) & 8) != 0 || (*(_DWORD *)(v88 + 2504) & 8) != 0 )
          LODWORD(v86[2].SecurityQos) |= 8u;
        goto LABEL_53;
      }
      v78 = LowPart - 2229315;
      if ( !v78 )
        goto LABEL_182;
      v79 = v78 - 12;
      if ( !v79 )
      {
        DeviceBusInfo = HUBPDO_ReturnDeviceConfigInfo(v7, a2, 4788299LL);
        goto LABEL_135;
      }
      v80 = v79 - 2916;
      if ( !v80 )
      {
        if ( (*(_DWORD *)(v7 + 32) & 1) != 0 )
        {
          if ( KeGetCurrentIrql() <= 2u )
          {
LABEL_261:
            v107 = a2->Tail.Overlay.CurrentStackLocation;
            v108 = *(_QWORD *)&v117.Data1;
            *(_OWORD *)&v107[-1].MajorFunction = *(_OWORD *)&v107->MajorFunction;
            *(_OWORD *)&v107[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v107->Parameters.NotifyDirectoryEx.CompletionFilter;
            *(_OWORD *)(&v107[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v107->Parameters.SetQuota + 6);
            v107[-1].FileObject = v107->FileObject;
            v107[-1].Control = 0;
            v109 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 736))(
                     WdfDriverGlobals,
                     v108);
            return (unsigned int)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, IRP *, __int64, int))(WdfFunctions_01015 + 3216))(
                                   WdfDriverGlobals,
                                   *(_QWORD *)&v117.Data1,
                                   a2,
                                   v109,
                                   2);
          }
          Status = -1073741811;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_53;
          v61 = 66;
        }
        else
        {
          Status = -1073741101;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_53;
          v61 = 65;
        }
        goto LABEL_139;
      }
      v81 = v80 - 8;
      if ( !v81 )
      {
        v85 = *(_QWORD *)(v7 + 24);
        if ( (*(_DWORD *)(v85 + 1644) & 0x1000000) == 0 )
        {
          Status = -1073741275;
          goto LABEL_53;
        }
        DeviceBusInfo = HUBMISC_GenerateControllerSuffix(
                          v85,
                          CurrentStackLocation->Parameters.WMI.ProviderId,
                          4788299LL);
        goto LABEL_135;
      }
      v82 = v81 - 2551880;
      if ( !v82 )
      {
        v84 = CurrentStackLocation->Parameters.Create.SecurityContext;
        CurrentStackLocation->Parameters.QueryDirectory.FileName = *(_UNICODE_STRING **)(*(_QWORD *)(v7 + 24) + 24LL);
        if ( (v84->DesiredAccess & 1) != 0 )
          _InterlockedOr((volatile signed __int32 *)(v7 + 32), 0x10u);
        goto LABEL_76;
      }
      v83 = v82 - 4;
      if ( v83 && v83 != 4 )
        goto LABEL_238;
      goto LABEL_203;
    }
    v93 = LowPart - 4788299;
    if ( !v93 )
    {
      v101 = CurrentStackLocation->Parameters.Create.SecurityContext;
      Source1 = *(_OWORD *)&v101->DesiredAccess;
      HIDWORD(v101[1].AccessState) = 0;
      if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_FUNCTION_SUSPEND, 0x10uLL) == 16 )
      {
        v102 = -((*(_DWORD *)(*(_QWORD *)(v7 + 24) + 1456LL) & 0x10000) != 0);
      }
      else
      {
        if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_STATIC_STREAMS, 0x10uLL) == 16 )
        {
          Status = (*(_DWORD *)(*(_QWORD *)(v7 + 24) + 1456LL) & 0x10000) != 0 ? 0xC00000BB : 0;
          v18 = ((*(_DWORD *)(*(_QWORD *)(v7 + 24) + 1456LL) & 0x10000) != 0) + 1;
          goto LABEL_256;
        }
        if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_SUPER_SPEED_COMPATIBLE, 0x10uLL) == 16 )
        {
          v110 = *(_DWORD *)(*(_QWORD *)(v7 + 24) + 1456LL) & 0x800;
        }
        else if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_HIGH_SPEED_COMPATIBLE, 0x10uLL) == 16 )
        {
          v110 = *(_DWORD *)(*(_QWORD *)(v7 + 24) + 1456LL) & 0x900;
        }
        else
        {
          if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_FULL_SPEED_COMPATIBLE, 0x10uLL) != 16 )
          {
            if ( RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_DEVICE_CONNECTION_LOW_SPEED_COMPATIBLE, 0x10uLL) != 16
              && RtlCompareMemory(&Source1, &GUID_USB_CAPABILITY_SSP_ISOCH_PIPE_FLAGS, 0x10uLL) != 16 )
            {
              goto LABEL_76;
            }
            Status = 0;
            goto LABEL_53;
          }
          v110 = *(_DWORD *)(*(_QWORD *)(v7 + 24) + 1456LL) & 0xB00;
        }
        v102 = -(v110 == 0);
      }
      Status = v102 & 0xC00000BB;
      goto LABEL_53;
    }
    v94 = v93 - 4;
    if ( !v94 )
    {
LABEL_203:
      CurrentStackLocation->Parameters.QueryDirectory.FileName = *(_UNICODE_STRING **)(*(_QWORD *)(v7 + 24) + 24LL);
      goto LABEL_76;
    }
    v95 = v94 - 949;
    if ( !v95 )
    {
      a2->AssociatedIrp.MasterIrp->AssociatedIrp.MasterIrp = *(_IRP **)(*(_QWORD *)(v7 + 24) + 24LL);
      goto LABEL_76;
    }
    v96 = v95 - 4;
    if ( !v96 )
      goto LABEL_76;
    v97 = v96 - 7;
    if ( !v97 )
    {
      *(_QWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 8) = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL);
      goto LABEL_76;
    }
    v98 = v97 - 1016;
    if ( v98 )
    {
      if ( v98 != 4 )
        goto LABEL_238;
      if ( !KeGetCurrentIrql() )
      {
        DeviceBusInfo = HUBPDO_UnregisterPortPLDRCapability(*(_QWORD *)(v7 + 24));
        goto LABEL_135;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v100 = 71;
LABEL_242:
        LOBYTE(v99) = 3;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 1432LL),
          v99,
          5,
          v100,
          (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids);
      }
    }
    else
    {
      if ( !KeGetCurrentIrql() )
      {
        DeviceBusInfo = HUBPDO_RegisterPortPLDRCapability(*(_QWORD *)(v7 + 24));
        goto LABEL_135;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v100 = 70;
        goto LABEL_242;
      }
    }
    Status = -1073741808;
    goto LABEL_53;
  }
  v9 = LowPart - 2229348;
  if ( !v9 )
  {
LABEL_107:
    v18 = 1;
    goto LABEL_256;
  }
  v10 = v9 - 4;
  if ( v10 )
  {
    v11 = v10 - 4;
    if ( v11 )
    {
      v12 = v11 - 4;
      if ( v12 )
      {
        v13 = v12 - 4;
        if ( !v13 )
          goto LABEL_76;
        v14 = v13 - 4;
        if ( !v14 )
          goto LABEL_76;
        v15 = v14 - 4;
        if ( !v15 )
          goto LABEL_76;
        if ( v15 != 4 )
          goto LABEL_117;
        if ( CurrentStackLocation->Parameters.Read.Length != 24 )
          goto LABEL_17;
        v16 = CurrentStackLocation->Parameters.Create.Options == 24;
        goto LABEL_12;
      }
    }
    goto LABEL_107;
  }
  if ( CurrentStackLocation->Parameters.Read.Length != 36 )
  {
LABEL_17:
    Status = -1073741811;
    v18 = 2;
    goto LABEL_256;
  }
  v16 = CurrentStackLocation->Parameters.Create.Options == 36;
LABEL_12:
  if ( !v16 )
    goto LABEL_17;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
    goto LABEL_17;
  *(_QWORD *)(&MasterIrp->Size + 1) = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL);
LABEL_76:
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v7 + 8), a2);
}
