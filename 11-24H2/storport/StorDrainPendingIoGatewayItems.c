/*
 * XREFs of StorDrainPendingIoGatewayItems @ 0x1400A6420
 * Callers:
 *     RaidUnitCancelPendingRequests @ 0x14009E028 (RaidUnitCancelPendingRequests.c)
 * Callees:
 *     RaidSrbStatusToNtStatus @ 0x14001EF94 (RaidSrbStatusToNtStatus.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x140055F24 (RaidGetQosEntryForDeviceEntry.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall StorDrainPendingIoGatewayItems(__int64 a1, KSPIN_LOCK *a2)
{
  KSPIN_LOCK *v2; // rsi
  __int64 v3; // rdi
  KSPIN_LOCK *v4; // rdx
  _BYTE *v5; // rcx
  KSPIN_LOCK v6; // rax
  _BYTE *v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  int v11; // eax
  unsigned __int64 v12; // r8
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  bool v15; // zf
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned int *v18; // rax
  __int64 v19; // rcx
  const EVENT_DESCRIPTOR *v20; // rdx
  unsigned __int64 v21; // rdx
  char v22; // di
  unsigned __int8 v23; // r10
  char v24; // r13
  _BYTE *v25; // r9
  unsigned __int8 v26; // r11
  char v27; // r12
  char *v28; // rdi
  char v29; // r14
  unsigned int v30; // r15d
  __int64 v31; // rsi
  __int64 v32; // rcx
  unsigned __int64 v33; // r10
  __int64 v34; // r8
  int v35; // ecx
  int v36; // ecx
  char v37; // cl
  char v38; // r8
  _BYTE *v39; // rcx
  _BYTE *v40; // rax
  unsigned int v41; // eax
  unsigned __int64 v42; // rcx
  char v43; // al
  unsigned __int8 v44; // al
  char v45; // al
  __int64 v46; // rcx
  KSPIN_LOCK *v48; // rdx
  _BYTE *v49; // rcx
  KSPIN_LOCK v50; // rax
  _BYTE *v51; // rbx
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v53; // rdx
  _QWORD *v54; // rcx
  int v55; // eax
  unsigned __int64 v56; // r8
  signed __int32 v57; // eax
  signed __int32 v58; // ett
  __int64 v59; // rcx
  __int64 v60; // rdx
  unsigned int *v61; // rax
  __int64 v62; // rcx
  const EVENT_DESCRIPTOR *v63; // rdx
  unsigned __int64 v64; // rdx
  char v65; // di
  unsigned __int8 v66; // r10
  char v67; // r13
  _BYTE *v68; // r9
  unsigned __int8 v69; // r11
  char v70; // r12
  char *v71; // rdi
  char v72; // r14
  unsigned int v73; // r15d
  __int64 v74; // rsi
  __int64 v75; // rcx
  unsigned __int64 v76; // r10
  __int64 v77; // r8
  int v78; // ecx
  int v79; // ecx
  char v80; // cl
  char v81; // r8
  _BYTE *v82; // rcx
  _BYTE *v83; // rax
  unsigned int v84; // eax
  unsigned __int64 v85; // rcx
  char v86; // al
  unsigned __int8 v87; // al
  char v88; // al
  __int64 v89; // rcx
  __int64 v90; // [rsp+20h] [rbp-89h]
  __int64 v91; // [rsp+28h] [rbp-81h]
  __int64 v92; // [rsp+30h] [rbp-79h]
  __int64 v93; // [rsp+38h] [rbp-71h]
  __int64 v94; // [rsp+40h] [rbp-69h]
  __int64 v95; // [rsp+48h] [rbp-61h]
  unsigned __int8 v96; // [rsp+60h] [rbp-49h]
  unsigned __int8 v97; // [rsp+60h] [rbp-49h]
  char v98; // [rsp+61h] [rbp-48h]
  char v99; // [rsp+61h] [rbp-48h]
  KSPIN_LOCK *v102; // [rsp+80h] [rbp-29h]
  KSPIN_LOCK *v103; // [rsp+80h] [rbp-29h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-21h] BYREF
  GUID v105; // [rsp+A0h] [rbp-9h] BYREF
  GUID v106; // [rsp+B0h] [rbp+7h] BYREF

  v2 = a2;
  v3 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(a2, &LockHandle);
  if ( !FeatureFixKcsanRacyAccessV2 )
  {
    if ( !*((_DWORD *)v2 + 6) )
      goto LABEL_82;
    v48 = v2 + 1;
    v103 = v2 + 1;
    while ( 1 )
    {
      v49 = (_BYTE *)*v48;
      if ( *(KSPIN_LOCK **)(*v48 + 8) != v48 || (v50 = *(_QWORD *)v49, *(_BYTE **)(*(_QWORD *)v49 + 8LL) != v49) )
LABEL_168:
        __fastfail(3u);
      *v48 = v50;
      v51 = v49 - 120;
      *(_QWORD *)(v50 + 8) = v48;
      --*((_DWORD *)v2 + 6);
      if ( (v49[22] & 0x20) != 0 )
      {
        QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry((__int64)v49);
        v53 = *QosEntryForDeviceEntry;
        if ( *(_QWORD **)(*QosEntryForDeviceEntry + 8LL) != QosEntryForDeviceEntry )
          goto LABEL_168;
        v54 = (_QWORD *)QosEntryForDeviceEntry[1];
        if ( (_QWORD *)*v54 != QosEntryForDeviceEntry )
          goto LABEL_168;
        *v54 = v53;
        *(_QWORD *)(v53 + 8) = v54;
      }
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v51 + 23) + 8LL) + 3LL) = 8;
      v55 = RaidSrbStatusToNtStatus(8);
      *((_QWORD *)v51 + 7) = 0LL;
      *((_DWORD *)v51 + 12) = v55;
      v56 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
      v57 = *(_DWORD *)(v56 + *(_QWORD *)(v3 + 40));
      while ( (v57 & 1) == 0 )
      {
        v58 = v57;
        v57 = _InterlockedCompareExchange((volatile signed __int32 *)(v56 + *(_QWORD *)(v3 + 40)), v57 - 2, v57);
        if ( v58 == v57 )
          goto LABEL_98;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 1032), 0xFFFFFFFF) == 1 )
        KeSetEvent((PRKEVENT)(v3 + 520), 0, 0);
LABEL_98:
      v15 = StorEtwLoggingEnabled == 0;
      v51[141] = -84;
      if ( v15 )
        goto LABEL_164;
      v106 = 0LL;
      IoGetActivityIdIrp(v51, &v106);
      v60 = *((_QWORD *)v51 + 23);
      if ( *(_BYTE *)v60 == 14 )
        break;
      if ( *(_BYTE *)v60 == 15 )
      {
        if ( byte_140171461 >= 0 )
          goto LABEL_164;
        v64 = *(_QWORD *)(v60 + 8);
        v65 = 0;
        v66 = 0;
        v99 = 0;
        v67 = 0;
        v97 = 0;
        v68 = 0LL;
        v69 = 0;
        v70 = 0;
        if ( *(_BYTE *)(v64 + 2) != 40 )
        {
          v80 = *(_BYTE *)(v64 + 72);
          v68 = *(_BYTE **)(v64 + 32);
          v69 = *(_BYTE *)(v64 + 11);
          v67 = *(_BYTE *)(v64 + 4);
          if ( !*(_BYTE *)(v64 + 2) )
            goto LABEL_141;
          goto LABEL_163;
        }
        v71 = 0LL;
        v72 = 0;
        if ( *(_DWORD *)(v64 + 20) )
          goto LABEL_163;
        v73 = *(_DWORD *)(v64 + 56);
        v74 = 0LL;
        if ( !v73 )
          goto LABEL_138;
        while ( 1 )
        {
          v75 = *(unsigned int *)(v64 + 4 * v74 + 120);
          if ( (unsigned int)v75 >= 0x80 )
          {
            v76 = *(unsigned int *)(v64 + 16);
            if ( (unsigned int)v75 < (unsigned int)v76 )
            {
              v77 = (unsigned int)v75;
              v78 = *(_DWORD *)(v75 + v64) - 64;
              if ( v78 )
              {
                v79 = v78 - 1;
                if ( v79 )
                {
                  if ( v79 == 1 && v77 + 40 <= v76 )
                  {
                    if ( *(_DWORD *)(v77 + v64 + 12) )
                      v71 = (char *)(v77 + v64 + 32);
                    v68 = *(_BYTE **)(v77 + v64 + 24);
LABEL_136:
                    v69 = *(_BYTE *)(v77 + v64 + 9);
                    v67 = *(_BYTE *)(v77 + v64 + 8);
LABEL_137:
                    v66 = 0;
LABEL_138:
                    v2 = a2;
                    if ( v71 )
                    {
                      v80 = *v71;
                      v65 = 0;
LABEL_141:
                      if ( ((v80 - 8) & 0x5D) == 0 )
                      {
                        v81 = *(_BYTE *)(v64 + 3);
                        if ( v81 == 1 || !v68 || !v69 )
                          goto LABEL_161;
                        LOBYTE(v64) = 0;
                        v82 = &v68[v69];
                        v83 = v68 + 8;
                        if ( (unsigned __int8)((*v68 & 0x7F) - 114) <= 1u )
                        {
                          if ( v83 <= v82 )
                          {
                            LOBYTE(v64) = 1;
                            v65 = v68[2];
                            v70 = v68[1] & 0xF;
                            v66 = v68[3];
                          }
                        }
                        else
                        {
                          if ( v83 <= v82 )
                          {
                            v64 = (unsigned __int64)(v68 + 13);
                            v70 = v68[2] & 0xF;
                            v84 = v69;
                            if ( (unsigned int)(unsigned __int8)v68[7] + 8 <= v69 )
                              v84 = (unsigned __int8)v68[7] + 8;
                            v85 = (unsigned __int64)&v68[v84];
                            if ( v64 > v85 )
                              v86 = 0;
                            else
                              v86 = v68[12];
                            v99 = v86;
                            if ( (unsigned __int64)(v68 + 14) > v85 )
                              v87 = 0;
                            else
                              v87 = *(_BYTE *)v64;
                            v97 = v87;
                            LOBYTE(v64) = 1;
                          }
                          v66 = v97;
                          v65 = v99;
                        }
                        if ( (_BYTE)v64 )
                        {
                          v88 = v65;
                          v89 = v66;
                        }
                        else
                        {
LABEL_161:
                          v70 = 0;
                          v88 = 0;
                          v89 = 0LL;
                        }
                        LOBYTE(v95) = v89;
                        LOBYTE(v94) = v88;
                        LOBYTE(v93) = v70;
                        LOBYTE(v92) = v67;
                        LOBYTE(v91) = v81;
                        LODWORD(v90) = *((_DWORD *)v51 + 12);
                        McTemplateK0pduuuuup_EtwWriteTransfer(v89, v64, &v106, v51, v90, v91, v92, v93, v94, v95, v51);
                      }
                    }
LABEL_163:
                    v3 = a1;
                    goto LABEL_164;
                  }
                }
                else if ( v77 + 56 <= v76 )
                {
                  v72 = 1;
                  if ( *(_BYTE *)(v77 + v64 + 10) )
                    v71 = (char *)(v77 + v64 + 24);
                  v67 = *(_BYTE *)(v77 + v64 + 8);
                  v68 = *(_BYTE **)(v77 + v64 + 16);
                  v69 = *(_BYTE *)(v77 + v64 + 9);
                }
              }
              else if ( v77 + 40 <= v76 )
              {
                if ( *(_BYTE *)(v77 + v64 + 10) )
                  v71 = (char *)(v77 + v64 + 24);
                v68 = *(_BYTE **)(v77 + v64 + 16);
                goto LABEL_136;
              }
              if ( v72 )
                goto LABEL_137;
            }
          }
          v74 = (unsigned int)(v74 + 1);
          if ( (unsigned int)v74 >= v73 )
            goto LABEL_137;
        }
      }
      if ( *(_BYTE *)v60 == 27 )
      {
        if ( *(_BYTE *)(v60 + 1) == 7 && !*(_DWORD *)(v60 + 8) )
        {
          if ( (byte_140171462 & 0x40) != 0 )
          {
            v61 = (unsigned int *)*((_QWORD *)v51 + 7);
            if ( v61 )
              v62 = *v61;
            else
              v62 = 0LL;
            LODWORD(v91) = *((_DWORD *)v51 + 12);
            LODWORD(v90) = v62;
            McTemplateK0pqd_EtwWriteTransfer(v62, v60, &v106, v51, v90, v91);
          }
          goto LABEL_164;
        }
        if ( (byte_140171462 & 0x20) != 0 )
        {
          v63 = &EventPnpRequestComplete;
LABEL_111:
          LODWORD(v90) = *((_DWORD *)v51 + 12);
          McTemplateK0pd_EtwWriteTransfer(v59, v63, &v106, v51, v90);
        }
      }
LABEL_164:
      IofCompleteRequest((PIRP)v51, 0);
      v48 = v103;
      if ( !*((_DWORD *)v2 + 6) )
        goto LABEL_82;
    }
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_164;
    v63 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_111;
  }
  if ( !*((_DWORD *)v2 + 6) )
    goto LABEL_82;
  v4 = v2 + 1;
  v102 = v2 + 1;
  do
  {
    v5 = (_BYTE *)*v4;
    if ( *(KSPIN_LOCK **)(*v4 + 8) != v4 )
      goto LABEL_168;
    v6 = *(_QWORD *)v5;
    if ( *(_BYTE **)(*(_QWORD *)v5 + 8LL) != v5 )
      goto LABEL_168;
    *v4 = v6;
    v7 = v5 - 120;
    *(_QWORD *)(v6 + 8) = v4;
    _InterlockedDecrement((volatile signed __int32 *)v2 + 6);
    if ( (v5[22] & 0x20) != 0 )
    {
      v8 = (_QWORD *)RaidGetQosEntryForDeviceEntry((__int64)v5);
      v9 = *v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 )
        goto LABEL_168;
      v10 = (_QWORD *)v8[1];
      if ( (_QWORD *)*v10 != v8 )
        goto LABEL_168;
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
    }
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v7 + 23) + 8LL) + 3LL) = 8;
    v11 = RaidSrbStatusToNtStatus(8);
    *((_QWORD *)v7 + 7) = 0LL;
    *((_DWORD *)v7 + 12) = v11;
    v12 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v13 = *(_DWORD *)(v12 + *(_QWORD *)(v3 + 40));
    while ( (v13 & 1) == 0 )
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + *(_QWORD *)(v3 + 40)), v13 - 2, v13);
      if ( v14 == v13 )
        goto LABEL_15;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 1032), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(v3 + 520), 0, 0);
LABEL_15:
    v15 = StorEtwLoggingEnabled == 0;
    v7[141] = -84;
    if ( v15 )
      goto LABEL_81;
    v105 = 0LL;
    IoGetActivityIdIrp(v7, &v105);
    v17 = *((_QWORD *)v7 + 23);
    if ( *(_BYTE *)v17 == 14 )
    {
      if ( (byte_140171462 & 8) == 0 )
        goto LABEL_81;
      v20 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
      goto LABEL_28;
    }
    if ( *(_BYTE *)v17 != 15 )
    {
      if ( *(_BYTE *)v17 != 27 )
        goto LABEL_81;
      if ( *(_BYTE *)(v17 + 1) == 7 && !*(_DWORD *)(v17 + 8) )
      {
        if ( (byte_140171462 & 0x40) != 0 )
        {
          v18 = (unsigned int *)*((_QWORD *)v7 + 7);
          if ( v18 )
            v19 = *v18;
          else
            v19 = 0LL;
          LODWORD(v91) = *((_DWORD *)v7 + 12);
          LODWORD(v90) = v19;
          McTemplateK0pqd_EtwWriteTransfer(v19, v17, &v105, v7, v90, v91);
        }
        goto LABEL_81;
      }
      if ( (byte_140171462 & 0x20) == 0 )
        goto LABEL_81;
      v20 = &EventPnpRequestComplete;
LABEL_28:
      LODWORD(v90) = *((_DWORD *)v7 + 12);
      McTemplateK0pd_EtwWriteTransfer(v16, v20, &v105, v7, v90);
      goto LABEL_81;
    }
    if ( byte_140171461 >= 0 )
      goto LABEL_81;
    v21 = *(_QWORD *)(v17 + 8);
    v22 = 0;
    v23 = 0;
    v98 = 0;
    v24 = 0;
    v96 = 0;
    v25 = 0LL;
    v26 = 0;
    v27 = 0;
    if ( *(_BYTE *)(v21 + 2) != 40 )
    {
      v37 = *(_BYTE *)(v21 + 72);
      v25 = *(_BYTE **)(v21 + 32);
      v26 = *(_BYTE *)(v21 + 11);
      v24 = *(_BYTE *)(v21 + 4);
      if ( !*(_BYTE *)(v21 + 2) )
        goto LABEL_58;
      goto LABEL_80;
    }
    v28 = 0LL;
    v29 = 0;
    if ( *(_DWORD *)(v21 + 20) )
      goto LABEL_80;
    v30 = *(_DWORD *)(v21 + 56);
    v31 = 0LL;
    if ( !v30 )
      goto LABEL_55;
    while ( 1 )
    {
      v32 = *(unsigned int *)(v21 + 4 * v31 + 120);
      if ( (unsigned int)v32 >= 0x80 )
      {
        v33 = *(unsigned int *)(v21 + 16);
        if ( (unsigned int)v32 < (unsigned int)v33 )
          break;
      }
LABEL_48:
      v31 = (unsigned int)(v31 + 1);
      if ( (unsigned int)v31 >= v30 )
        goto LABEL_54;
    }
    v34 = (unsigned int)v32;
    v35 = *(_DWORD *)(v32 + v21) - 64;
    if ( v35 )
    {
      v36 = v35 - 1;
      if ( v36 )
      {
        if ( v36 == 1 && v34 + 40 <= v33 )
        {
          if ( *(_DWORD *)(v34 + v21 + 12) )
            v28 = (char *)(v34 + v21 + 32);
          v25 = *(_BYTE **)(v34 + v21 + 24);
          goto LABEL_53;
        }
      }
      else if ( v34 + 56 <= v33 )
      {
        v29 = 1;
        if ( *(_BYTE *)(v34 + v21 + 10) )
          v28 = (char *)(v34 + v21 + 24);
        v24 = *(_BYTE *)(v34 + v21 + 8);
        v25 = *(_BYTE **)(v34 + v21 + 16);
        v26 = *(_BYTE *)(v34 + v21 + 9);
      }
LABEL_47:
      if ( v29 )
        goto LABEL_54;
      goto LABEL_48;
    }
    if ( v34 + 40 > v33 )
      goto LABEL_47;
    if ( *(_BYTE *)(v34 + v21 + 10) )
      v28 = (char *)(v34 + v21 + 24);
    v25 = *(_BYTE **)(v34 + v21 + 16);
LABEL_53:
    v26 = *(_BYTE *)(v34 + v21 + 9);
    v24 = *(_BYTE *)(v34 + v21 + 8);
LABEL_54:
    v23 = 0;
LABEL_55:
    v2 = a2;
    if ( v28 )
    {
      v37 = *v28;
      v22 = 0;
LABEL_58:
      if ( ((v37 - 8) & 0x5D) == 0 )
      {
        v38 = *(_BYTE *)(v21 + 3);
        if ( v38 == 1 || !v25 || !v26 )
          goto LABEL_78;
        LOBYTE(v21) = 0;
        v39 = &v25[v26];
        v40 = v25 + 8;
        if ( (unsigned __int8)((*v25 & 0x7F) - 114) <= 1u )
        {
          if ( v40 <= v39 )
          {
            LOBYTE(v21) = 1;
            v22 = v25[2];
            v27 = v25[1] & 0xF;
            v23 = v25[3];
          }
        }
        else
        {
          if ( v40 <= v39 )
          {
            v21 = (unsigned __int64)(v25 + 13);
            v27 = v25[2] & 0xF;
            v41 = v26;
            if ( (unsigned int)(unsigned __int8)v25[7] + 8 <= v26 )
              v41 = (unsigned __int8)v25[7] + 8;
            v42 = (unsigned __int64)&v25[v41];
            if ( v21 > v42 )
              v43 = 0;
            else
              v43 = v25[12];
            v98 = v43;
            if ( (unsigned __int64)(v25 + 14) > v42 )
              v44 = 0;
            else
              v44 = *(_BYTE *)v21;
            v96 = v44;
            LOBYTE(v21) = 1;
          }
          v23 = v96;
          v22 = v98;
        }
        if ( (_BYTE)v21 )
        {
          v45 = v22;
          v46 = v23;
        }
        else
        {
LABEL_78:
          v27 = 0;
          v45 = 0;
          v46 = 0LL;
        }
        LOBYTE(v95) = v46;
        LOBYTE(v94) = v45;
        LOBYTE(v93) = v27;
        LOBYTE(v92) = v24;
        LOBYTE(v91) = v38;
        LODWORD(v90) = *((_DWORD *)v7 + 12);
        McTemplateK0pduuuuup_EtwWriteTransfer(v46, v21, &v105, v7, v90, v91, v92, v93, v94, v95, v7);
      }
    }
LABEL_80:
    v3 = a1;
LABEL_81:
    IofCompleteRequest((PIRP)v7, 0);
    v4 = v102;
  }
  while ( *((_DWORD *)v2 + 6) );
LABEL_82:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
