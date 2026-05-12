/*
 * XREFs of RaUnitSetQOSIoctl @ 0x1400976F0
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14001DEE0 (RaCallMiniportUnitControl.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_q @ 0x140055B6C (WPP_SF_q.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidAdapterEnableQosWaitTimeoutCheck @ 0x14005A2AC (RaidAdapterEnableQosWaitTimeoutCheck.c)
 *     StorEnableSortedEventQueue @ 0x14006CCD0 (StorEnableSortedEventQueue.c)
 *     McTemplateK0zqjuuujsssq_EtwWriteTransfer @ 0x14009079C (McTemplateK0zqjuuujsssq_EtwWriteTransfer.c)
 *     RaidUnitDisableWaitCheckTimer @ 0x14009E1C8 (RaidUnitDisableWaitCheckTimer.c)
 *     StorpTelemetryMarkUnitResponsive @ 0x1400B62A4 (StorpTelemetryMarkUnitResponsive.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitSetQOSIoctl(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  int v4; // r14d
  __int64 v5; // r15
  int v8; // ebx
  __int64 v9; // r9
  PDEVICE_OBJECT v10; // rcx
  unsigned __int16 v11; // dx
  _BYTE *v12; // rax
  char v13; // al
  unsigned int *v14; // rdx
  unsigned int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  PDEVICE_OBJECT v22; // rcx
  unsigned __int16 v23; // dx
  unsigned int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned int v27; // ecx
  unsigned int v28; // edx
  int v29; // ecx
  unsigned int v30; // edx
  __int64 v31; // rdx
  __int64 v32; // rax
  char v33; // dl
  bool v34; // zf
  unsigned __int64 v35; // rcx
  __int64 v36; // rdx
  int *v37; // rax
  const EVENT_DESCRIPTOR *v38; // rdx
  __int64 v39; // rdx
  char v40; // r15
  _BYTE *v41; // r9
  unsigned __int8 v42; // r10
  char v43; // r11
  char v44; // di
  char v45; // r12
  char *v46; // rdi
  unsigned int v47; // r8d
  unsigned int *v48; // rax
  __int64 v49; // rax
  unsigned __int64 v50; // rsi
  char v51; // cl
  char v52; // r8
  _BYTE *v53; // rax
  unsigned int v54; // eax
  unsigned __int64 v55; // r8
  char v56; // al
  __int64 v58; // [rsp+20h] [rbp-99h]
  __int64 v59; // [rsp+28h] [rbp-91h]
  __int64 v60; // [rsp+30h] [rbp-89h]
  __int64 v61; // [rsp+38h] [rbp-81h]
  __int64 v62; // [rsp+40h] [rbp-79h]
  __int64 v63; // [rsp+48h] [rbp-71h]
  char v64; // [rsp+70h] [rbp-49h]
  char v65; // [rsp+71h] [rbp-48h]
  int v66; // [rsp+78h] [rbp-41h]
  __int64 v67; // [rsp+80h] [rbp-39h]
  GUID v68; // [rsp+C0h] [rbp+7h] BYREF

  v3 = *(_QWORD *)(a2 + 184);
  v4 = 0;
  v5 = *(_QWORD *)(a2 + 24);
  v8 = 0;
  v9 = 1LL;
  if ( *(_DWORD *)(a1 + 1036) || *(_DWORD *)(a1 + 1044) || *(_DWORD *)(a1 + 1040) || (*(_BYTE *)(a1 + 506) & 1) != 0 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_105;
    }
    v11 = 40;
    goto LABEL_104;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 112LL) & 2) != 0 )
  {
    if ( !RaidIsUnitControlSupported(a1, 31) )
    {
      v10 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        goto LABEL_105;
      }
      v11 = 41;
LABEL_104:
      WPP_SF_q((__int64)v10->AttachedDevice, v11, (__int64)&WPP_e6323699744f33baefc587a6e43a33df_Traceguids, a1);
LABEL_105:
      v8 = -1073741637;
      goto LABEL_106;
    }
    v9 = 1LL;
  }
  v12 = *(_BYTE **)(a1 + 112);
  if ( v12 )
  {
    v13 = *v12 & 0x1F;
    if ( v13 )
    {
      if ( v13 != 20 )
      {
        v10 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          goto LABEL_105;
        }
        v11 = 42;
        goto LABEL_104;
      }
    }
  }
  if ( *(_DWORD *)(v3 + 16) < 0x24u )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x2Bu,
        (__int64)&WPP_e6323699744f33baefc587a6e43a33df_Traceguids,
        a1);
    }
    v8 = -1073741820;
    goto LABEL_106;
  }
  if ( *(_DWORD *)v5 == 36 && *(_DWORD *)(v5 + 4) == 36 )
  {
    if ( !*(_BYTE *)(v5 + 8) )
    {
      if ( *(_BYTE *)(a1 + 3368) )
      {
        v14 = *(unsigned int **)(a1 + 560);
        v15 = *v14;
        *v14 &= ~2u;
        if ( (v15 & 4) == 0 )
          *v14 = v15 & 0xFFFFFFFC;
        v16 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 3408) = -1LL;
        *(_BYTE *)(a1 + 3368) = 0;
        *(_QWORD *)(a1 + 3380) = 0LL;
        *(_QWORD *)(a1 + 3388) = 0LL;
        *(_DWORD *)(a1 + 3376) = 0;
        if ( (*(_BYTE *)(v16 + 112) & 2) == 0
          || (*(_DWORD *)v16 != 1094997074
            ? (*(_DWORD *)v16 != 1314275652
             ? (v17 = 0LL)
             : (v17 = v16 + 168))
            : (v17 = v16 + 376),
              v8 = RaCallMiniportUnitControl(v17),
              v8 >= 0) )
        {
          if ( (*(_BYTE *)(a1 + 506) & 2) != 0 )
          {
            if ( (byte_140171464 & 4) != 0 )
            {
              v18 = *(_DWORD *)(a1 + 104);
              McTemplateK0zqjuuujsssq_EtwWriteTransfer(
                v18 >> 8,
                &EventUnitResponsive,
                a1 + 242,
                *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4720LL),
                *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
                *(_QWORD *)(a1 + 24) + 5064LL,
                v18,
                SBYTE1(v18),
                SBYTE2(v18),
                a1 + 2104,
                (const char *)(a1 + 168),
                (const char *)(a1 + 177),
                (const char *)(a1 + 242),
                3);
            }
            StorpTelemetryMarkUnitResponsive(a1);
            *(_BYTE *)(a1 + 506) &= ~2u;
          }
          RaidUnitDisableWaitCheckTimer(a1, v14, a3, v9);
          *(_BYTE *)(a1 + 3396) = 1;
          v8 = 0;
        }
      }
      else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_q(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x2Du,
          (__int64)&WPP_e6323699744f33baefc587a6e43a33df_Traceguids,
          a1);
      }
      goto LABEL_106;
    }
    v19 = *(_DWORD *)(v5 + 20);
    if ( v19 >= 0x3E8 && v19 == 1000 * (v19 / 0x3E8) )
    {
      v20 = *(_DWORD *)(v5 + 24);
      if ( v20 >= 0x3E8 && v20 == 1000 * (v20 / 0x3E8) )
      {
        v21 = *(_DWORD *)(v5 + 16);
        if ( v21 == -1 || v21 == 500 * (v21 / 0x1F4) )
        {
          v24 = *(_DWORD *)(v5 + 28);
          if ( v24 == -1 || v24 == 500 * (v24 / 0x1F4) )
          {
            v25 = *(_QWORD *)(a1 + 24);
            if ( (*(_BYTE *)(v25 + 112) & 2) == 0
              || (*(_DWORD *)v25 != 1094997074
                ? (*(_DWORD *)v25 != 1314275652
                 ? (v26 = 0LL)
                 : (v26 = v25 + 168))
                : (v26 = v25 + 376),
                  v8 = RaCallMiniportUnitControl(v26),
                  v8 >= 0) )
            {
              *(_DWORD *)(a1 + 3372) = *(_DWORD *)(v5 + 12);
              *(_DWORD *)(a1 + 3384) = *(_DWORD *)(v5 + 20) / 0x3E8u;
              v27 = *(_DWORD *)(v5 + 16);
              if ( v27 == -1 )
                v28 = -1;
              else
                v28 = v27 / 0x1F4;
              *(_DWORD *)(a1 + 3392) = v28;
              *(_DWORD *)(a1 + 3388) = *(_DWORD *)(v5 + 24) / 0x3E8u;
              v29 = *(_DWORD *)(v5 + 32);
              *(_DWORD *)(a1 + 3380) = v29;
              v30 = *(_DWORD *)(v5 + 28);
              if ( v30 == -1 )
                v31 = 0xFFFFFFFFLL;
              else
                v31 = v30 / 0x1F4;
              *(_DWORD *)(a1 + 3376) = v31;
              if ( *(_DWORD *)(a1 + 3392) == -1 && !v29 && (_DWORD)v31 == -1 )
              {
                RaidUnitDisableWaitCheckTimer(a1, v31, 274877907LL, v9);
              }
              else if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3400), 1, 0) )
              {
                RaidAdapterEnableQosWaitTimeoutCheck(*(_QWORD *)(a1 + 24));
              }
              v32 = 10000000
                  * (*(_DWORD *)(a1 + 3384) + 1 + ((unsigned int)(*(_DWORD *)(a1 + 3376) + *(_DWORD *)(a1 + 3392)) >> 1));
              if ( (unsigned int)v32 > 0x11E1A300 )
                v32 = 300000000LL;
              *(_QWORD *)(a1 + 3408) = v32;
              if ( !*(_BYTE *)(a1 + 3368) )
              {
                StorEnableSortedEventQueue(*(int **)(a1 + 560), 1);
                *(_BYTE *)(a1 + 3368) = v33;
                *(_BYTE *)(a1 + 3396) = v33;
              }
            }
            goto LABEL_106;
          }
          v22 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            goto LABEL_99;
          }
          v23 = 49;
        }
        else
        {
          v22 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            goto LABEL_99;
          }
          v23 = 48;
        }
      }
      else
      {
        v22 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          goto LABEL_99;
        }
        v23 = 47;
      }
    }
    else
    {
      v22 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        goto LABEL_99;
      }
      v23 = 46;
    }
  }
  else
  {
    v22 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_99;
    }
    v23 = 44;
  }
  WPP_SF_q((__int64)v22->AttachedDevice, v23, (__int64)&WPP_e6323699744f33baefc587a6e43a33df_Traceguids, a1);
LABEL_99:
  v8 = -1073741811;
LABEL_106:
  v34 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v34 )
    goto LABEL_172;
  v68 = 0LL;
  IoGetActivityIdIrp(a2, &v68);
  v36 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v36 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_172;
    v38 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_171;
  }
  if ( *(_BYTE *)v36 != 15 )
  {
    if ( *(_BYTE *)v36 != 27 )
      goto LABEL_172;
    if ( *(_BYTE *)(v36 + 1) == 7 && !*(_DWORD *)(v36 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v37 = *(int **)(a2 + 56);
        if ( v37 )
          v4 = *v37;
        LODWORD(v59) = *(_DWORD *)(a2 + 48);
        LODWORD(v58) = v4;
        McTemplateK0pqd_EtwWriteTransfer(v35, v36, &v68, a2, v58, v59);
      }
      goto LABEL_172;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_172;
    v38 = &EventPnpRequestComplete;
LABEL_171:
    LODWORD(v58) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v35, v38, &v68, a2, v58);
    goto LABEL_172;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_172;
  v39 = *(_QWORD *)(v36 + 8);
  v40 = 0;
  v41 = 0LL;
  v64 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  if ( *(_BYTE *)(v39 + 2) != 40 )
  {
    v51 = *(_BYTE *)(v39 + 72);
    v41 = *(_BYTE **)(v39 + 32);
    v42 = *(_BYTE *)(v39 + 11);
    v40 = *(_BYTE *)(v39 + 4);
    if ( !*(_BYTE *)(v39 + 2) )
      goto LABEL_148;
    goto LABEL_172;
  }
  v46 = 0LL;
  v65 = 0;
  if ( *(_DWORD *)(v39 + 20) )
    goto LABEL_172;
  v35 = 0LL;
  v66 = 0;
  if ( !*(_DWORD *)(v39 + 56) )
    goto LABEL_145;
  v47 = *(_DWORD *)(v39 + 56);
  v48 = (unsigned int *)(v39 + 120);
  v67 = v39 + 120;
  while ( 1 )
  {
    v49 = *v48;
    if ( (unsigned int)v49 >= 0x80 )
    {
      v50 = *(unsigned int *)(v39 + 16);
      if ( (unsigned int)v49 < (unsigned int)v50 )
        break;
    }
LABEL_139:
    v35 = (unsigned int)(v35 + 1);
    v48 = (unsigned int *)(v67 + 4);
    v66 = v35;
    v67 += 4LL;
    if ( (unsigned int)v35 >= v47 )
      goto LABEL_145;
  }
  if ( *(_DWORD *)(v49 + v39) != 64 )
  {
    v35 = (unsigned int)(*(_DWORD *)(v49 + v39) - 65);
    if ( *(_DWORD *)(v49 + v39) == 65 )
    {
      v35 = v49 + 56;
      if ( v49 + 56 <= v50 )
      {
        v65 = 1;
        if ( *(_BYTE *)(v49 + v39 + 10) )
          v46 = (char *)(v49 + v39 + 24);
        v40 = *(_BYTE *)(v49 + v39 + 8);
        v41 = *(_BYTE **)(v49 + v39 + 16);
        v42 = *(_BYTE *)(v49 + v39 + 9);
      }
    }
    else if ( *(_DWORD *)(v49 + v39) == 66 )
    {
      v35 = v49 + 40;
      if ( v49 + 40 <= v50 )
      {
        if ( *(_DWORD *)(v49 + v39 + 12) )
          v46 = (char *)(v49 + v39 + 32);
        v41 = *(_BYTE **)(v49 + v39 + 24);
        goto LABEL_144;
      }
    }
    goto LABEL_137;
  }
  v35 = v49 + 40;
  if ( v49 + 40 > v50 )
  {
LABEL_137:
    if ( v65 )
      goto LABEL_145;
    LODWORD(v35) = v66;
    v47 = *(_DWORD *)(v39 + 56);
    goto LABEL_139;
  }
  if ( *(_BYTE *)(v49 + v39 + 10) )
    v46 = (char *)(v49 + v39 + 24);
  v41 = *(_BYTE **)(v49 + v39 + 16);
LABEL_144:
  v42 = *(_BYTE *)(v49 + v39 + 9);
  v40 = *(_BYTE *)(v49 + v39 + 8);
LABEL_145:
  if ( v46 )
  {
    v51 = *v46;
    v44 = 0;
LABEL_148:
    LOBYTE(v35) = v51 - 8;
    if ( (v35 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v39 + 3) == 1 || !v41 || !v42 )
        goto LABEL_167;
      v52 = 0;
      v35 = (unsigned __int64)&v41[v42];
      v53 = v41 + 8;
      if ( (unsigned __int8)((*v41 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v53 <= v35 )
        {
          v52 = 1;
          v44 = v41[2];
          v43 = v41[1] & 0xF;
          v45 = v41[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v53 <= v35 )
        {
          v43 = v41[2] & 0xF;
          v54 = v42;
          if ( (unsigned int)(unsigned __int8)v41[7] + 8 <= v42 )
            v54 = (unsigned __int8)v41[7] + 8;
          v35 = (unsigned __int64)(v41 + 13);
          v55 = (unsigned __int64)&v41[v54];
          if ( (unsigned __int64)(v41 + 13) > v55 )
            v64 = 0;
          else
            v64 = v41[12];
          if ( (unsigned __int64)(v41 + 14) <= v55 )
            v45 = *(_BYTE *)v35;
          v52 = 1;
        }
        v44 = v64;
      }
      if ( v52 )
      {
        LOBYTE(v4) = v44;
        v56 = v45;
      }
      else
      {
LABEL_167:
        v43 = 0;
        v56 = 0;
      }
      LOBYTE(v63) = v56;
      LOBYTE(v62) = v4;
      LOBYTE(v61) = v43;
      LOBYTE(v60) = v40;
      LOBYTE(v59) = *(_BYTE *)(v39 + 3);
      LODWORD(v58) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v35, v39, &v68, a2, v58, v59, v60, v61, v62, v63, a2);
    }
  }
LABEL_172:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v8;
}
