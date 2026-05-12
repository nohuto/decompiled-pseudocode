/*
 * XREFs of RaidAdapterScsiGetInquiryDataIoctl @ 0x14005F248
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14002B3B0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidAdapterGetInitiatorBusId @ 0x14005A5A4 (RaidAdapterGetInitiatorBusId.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterScsiGetInquiryDataIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  int v5; // edi
  unsigned int *Pool; // r14
  bool v7; // zf
  unsigned int v8; // r14d
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  int *v11; // rax
  const GUID *v12; // r8
  const GUID *v13; // r8
  const EVENT_DESCRIPTOR *v14; // rdx
  __int64 v15; // rdx
  char v16; // r14
  _BYTE *v17; // r9
  unsigned __int8 v18; // r10
  char v19; // r11
  char v20; // r13
  char v21; // r12
  char *v22; // rbx
  unsigned int v23; // r8d
  unsigned int *v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // r15
  char v27; // cl
  char v28; // r8
  _BYTE *v29; // rax
  char *v30; // r12
  unsigned int v31; // eax
  char v32; // al
  __int64 v33; // rbx
  _BYTE *v34; // r12
  __int64 v35; // r15
  int *v36; // rax
  unsigned __int64 v37; // rdx
  char v38; // r14
  _BYTE *v39; // r9
  unsigned __int8 v40; // r10
  char v41; // r11
  char v42; // r13
  char v43; // r12
  char *v44; // rbx
  unsigned int v45; // r8d
  unsigned int *v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // r15
  char v49; // cl
  char v50; // r8
  _BYTE *v51; // rax
  unsigned int v52; // eax
  char v53; // al
  __int64 *v54; // r11
  __int64 *i; // rcx
  int v56; // eax
  __int64 v57; // rdx
  unsigned int v58; // eax
  int *v59; // rax
  unsigned __int64 v60; // rdx
  char v61; // r14
  _BYTE *v62; // r9
  unsigned __int8 v63; // r10
  char v64; // r11
  char v65; // r13
  char v66; // r12
  char *v67; // rbx
  unsigned int v68; // r8d
  unsigned int *v69; // rax
  __int64 v70; // rax
  unsigned __int64 v71; // r15
  char v72; // cl
  char v73; // r8
  _BYTE *v74; // rax
  unsigned int v75; // eax
  char v76; // al
  unsigned int v77; // r8d
  _DWORD *v78; // rdx
  __int64 v79; // r9
  __int64 v80; // rax
  __int64 *v81; // r10
  __int64 v82; // rdx
  int v83; // eax
  __int64 v84; // rbx
  __int64 v85; // r8
  char v86; // al
  unsigned int v87; // r11d
  _BYTE *v88; // r10
  _BYTE *v89; // r9
  char InitiatorBusId; // al
  _DWORD *v91; // r9
  _DWORD *v92; // r10
  int v93; // r11d
  char v94; // r8
  __int64 v95; // rcx
  __int64 v96; // rdx
  unsigned int *v97; // rax
  __int64 v98; // rcx
  const EVENT_DESCRIPTOR *v99; // rdx
  __int64 v100; // rdx
  char v101; // r14
  _BYTE *v102; // r9
  unsigned __int8 v103; // r10
  char v104; // r11
  char v105; // r13
  unsigned __int8 v106; // r12
  char *v107; // rbx
  unsigned int v108; // ecx
  unsigned int v109; // r8d
  unsigned int *v110; // rax
  __int64 v111; // rax
  unsigned __int64 v112; // r15
  char v113; // cl
  char v114; // r8
  _BYTE *v115; // rcx
  _BYTE *v116; // rax
  unsigned __int8 *v117; // r12
  unsigned int v118; // eax
  unsigned __int64 v119; // rcx
  char v120; // al
  __int64 v121; // rcx
  char v123; // [rsp+60h] [rbp-59h]
  char v124; // [rsp+60h] [rbp-59h]
  char v125; // [rsp+60h] [rbp-59h]
  char v126; // [rsp+60h] [rbp-59h]
  int v127; // [rsp+64h] [rbp-55h]
  unsigned int v128; // [rsp+64h] [rbp-55h]
  int v129; // [rsp+68h] [rbp-51h]
  int v130; // [rsp+68h] [rbp-51h]
  unsigned int v131; // [rsp+68h] [rbp-51h]
  __int64 v132; // [rsp+70h] [rbp-49h]
  unsigned __int64 v133; // [rsp+70h] [rbp-49h]
  unsigned __int64 v134; // [rsp+70h] [rbp-49h]
  __int64 v135; // [rsp+70h] [rbp-49h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-41h] BYREF
  GUID v137; // [rsp+90h] [rbp-29h] BYREF
  GUID v138; // [rsp+A0h] [rbp-19h] BYREF
  GUID v139; // [rsp+B0h] [rbp-9h] BYREF
  GUID v140; // [rsp+C0h] [rbp+7h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 0;
  Pool = (unsigned int *)RaidAllocatePool(64LL, 4080LL, 842096978LL, v2);
  if ( !Pool )
  {
    v7 = StorEtwLoggingEnabled == 0;
    v8 = -1073741670;
    *(_DWORD *)(a2 + 48) = -1073741670;
    *(_BYTE *)(a2 + 141) = -84;
    if ( v7 )
      goto LABEL_290;
    v137 = 0LL;
    IoGetActivityIdIrp(a2, &v137);
    v10 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v10 != 14 )
    {
      if ( *(_BYTE *)v10 != 15 )
      {
        if ( *(_BYTE *)v10 != 27 )
          goto LABEL_290;
        if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
        {
          if ( (byte_140171462 & 0x40) != 0 )
          {
            v11 = *(int **)(a2 + 56);
            if ( v11 )
              v5 = *v11;
            v12 = &v137;
            goto LABEL_12;
          }
          goto LABEL_290;
        }
        if ( (byte_140171462 & 0x20) == 0 )
          goto LABEL_290;
        v13 = &v137;
        goto LABEL_15;
      }
      if ( byte_140171461 >= 0 )
        goto LABEL_290;
      v15 = *(_QWORD *)(v10 + 8);
      v16 = 0;
      v17 = 0LL;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      v21 = 0;
      if ( *(_BYTE *)(v15 + 2) == 40 )
      {
        v22 = 0LL;
        v123 = 0;
        if ( *(_DWORD *)(v15 + 20) )
          goto LABEL_67;
        v9 = 0LL;
        v127 = 0;
        if ( !*(_DWORD *)(v15 + 56) )
          goto LABEL_44;
        v23 = *(_DWORD *)(v15 + 56);
        v24 = (unsigned int *)(v15 + 120);
        v132 = v15 + 120;
        while ( 1 )
        {
          v25 = *v24;
          if ( (unsigned int)v25 >= 0x80 )
          {
            v26 = *(unsigned int *)(v15 + 16);
            if ( (unsigned int)v25 < (unsigned int)v26 )
            {
              if ( *(_DWORD *)(v25 + v15) == 64 )
              {
                v9 = v25 + 40;
                if ( v25 + 40 <= v26 )
                {
                  if ( *(_BYTE *)(v25 + v15 + 10) )
                    v22 = (char *)(v25 + v15 + 24);
                  v17 = *(_BYTE **)(v25 + v15 + 16);
LABEL_43:
                  v18 = *(_BYTE *)(v25 + v15 + 9);
                  v16 = *(_BYTE *)(v25 + v15 + 8);
LABEL_44:
                  if ( v22 )
                  {
                    v27 = *v22;
                    goto LABEL_47;
                  }
                  goto LABEL_67;
                }
              }
              else
              {
                v9 = (unsigned int)(*(_DWORD *)(v25 + v15) - 65);
                if ( *(_DWORD *)(v25 + v15) == 65 )
                {
                  v9 = v25 + 56;
                  if ( v25 + 56 <= v26 )
                  {
                    v123 = 1;
                    if ( *(_BYTE *)(v25 + v15 + 10) )
                      v22 = (char *)(v25 + v15 + 24);
                    v16 = *(_BYTE *)(v25 + v15 + 8);
                    v17 = *(_BYTE **)(v25 + v15 + 16);
                    v18 = *(_BYTE *)(v25 + v15 + 9);
                  }
                }
                else if ( *(_DWORD *)(v25 + v15) == 66 )
                {
                  v9 = v25 + 40;
                  if ( v25 + 40 <= v26 )
                  {
                    if ( *(_DWORD *)(v25 + v15 + 12) )
                      v22 = (char *)(v25 + v15 + 32);
                    v17 = *(_BYTE **)(v25 + v15 + 24);
                    goto LABEL_43;
                  }
                }
              }
              if ( v123 )
                goto LABEL_44;
              LODWORD(v9) = v127;
              v23 = *(_DWORD *)(v15 + 56);
            }
          }
          v9 = (unsigned int)(v9 + 1);
          v24 = (unsigned int *)(v132 + 4);
          v127 = v9;
          v132 += 4LL;
          if ( (unsigned int)v9 >= v23 )
            goto LABEL_44;
        }
      }
      v27 = *(_BYTE *)(v15 + 72);
      v17 = *(_BYTE **)(v15 + 32);
      v18 = *(_BYTE *)(v15 + 11);
      v16 = *(_BYTE *)(v15 + 4);
      if ( *(_BYTE *)(v15 + 2) )
        goto LABEL_67;
LABEL_47:
      LOBYTE(v9) = v27 - 8;
      if ( (v9 & 0x5D) != 0 )
      {
LABEL_67:
        v8 = -1073741670;
        goto LABEL_290;
      }
      v28 = *(_BYTE *)(v15 + 3);
      if ( v28 == 1 || !v17 || !v18 )
        goto LABEL_65;
      LOBYTE(v15) = 0;
      v9 = (unsigned __int64)&v17[v18];
      v29 = v17 + 8;
      if ( (unsigned __int8)((*v17 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v29 > v9 )
          goto LABEL_63;
        v20 = v17[2];
        v19 = v17[1] & 0xF;
        v21 = v17[3];
      }
      else
      {
        if ( (unsigned __int64)v29 > v9 )
          goto LABEL_63;
        v30 = v17 + 13;
        v19 = v17[2] & 0xF;
        v31 = v18;
        if ( (unsigned int)(unsigned __int8)v17[7] + 8 <= v18 )
          v31 = (unsigned __int8)v17[7] + 8;
        v9 = (unsigned __int64)&v17[v31];
        if ( (unsigned __int64)v30 <= v9 )
          v20 = v17[12];
        if ( (unsigned __int64)(v17 + 14) > v9 )
          v21 = 0;
        else
          v21 = *v30;
      }
      LOBYTE(v15) = 1;
LABEL_63:
      if ( (_BYTE)v15 )
      {
        LOBYTE(v5) = v20;
        v32 = v21;
LABEL_66:
        McTemplateK0pduuuuup_EtwWriteTransfer(v9, v15, &v137, a2, *(_DWORD *)(a2 + 48), v28, v16, v19, v5, v32, a2);
        goto LABEL_67;
      }
LABEL_65:
      v19 = 0;
      v32 = 0;
      goto LABEL_66;
    }
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_290;
    v13 = &v137;
LABEL_70:
    v14 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_16;
  }
  v33 = *(_QWORD *)(a2 + 184);
  v34 = *(_BYTE **)(a2 + 24);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
  v35 = *(unsigned __int8 *)(a1 + 456);
  v128 = 8 * (v35 + 6 * *(_DWORD *)(a1 + 160)) + 4;
  if ( *(_DWORD *)(v33 + 8) < v128 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ExFreePoolWithTag(Pool, 0x32316152u);
    v7 = StorEtwLoggingEnabled == 0;
    v8 = -1073741789;
    *(_DWORD *)(a2 + 48) = -1073741789;
    *(_BYTE *)(a2 + 141) = -84;
    if ( v7 )
      goto LABEL_290;
    v138 = 0LL;
    IoGetActivityIdIrp(a2, &v138);
    v10 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v10 == 14 )
    {
      if ( (byte_140171462 & 8) == 0 )
        goto LABEL_290;
      v13 = &v138;
      goto LABEL_70;
    }
    if ( *(_BYTE *)v10 != 15 )
    {
      if ( *(_BYTE *)v10 != 27 )
        goto LABEL_290;
      if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
      {
        if ( (byte_140171462 & 0x40) != 0 )
        {
          v36 = *(int **)(a2 + 56);
          if ( v36 )
            v5 = *v36;
          v12 = &v138;
          goto LABEL_12;
        }
        goto LABEL_290;
      }
      if ( (byte_140171462 & 0x20) == 0 )
        goto LABEL_290;
      v13 = &v138;
      goto LABEL_15;
    }
    if ( byte_140171461 >= 0 )
      goto LABEL_290;
    v37 = *(_QWORD *)(v10 + 8);
    v38 = 0;
    v39 = 0LL;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    if ( *(_BYTE *)(v37 + 2) == 40 )
    {
      v44 = 0LL;
      v124 = 0;
      if ( *(_DWORD *)(v37 + 20) )
        goto LABEL_133;
      v9 = 0LL;
      v129 = 0;
      if ( !*(_DWORD *)(v37 + 56) )
        goto LABEL_111;
      v45 = *(_DWORD *)(v37 + 56);
      v46 = (unsigned int *)(v37 + 120);
      v133 = v37 + 120;
      while ( 1 )
      {
        v47 = *v46;
        if ( (unsigned int)v47 >= 0x80 )
        {
          v48 = *(unsigned int *)(v37 + 16);
          if ( (unsigned int)v47 < (unsigned int)v48 )
          {
            if ( *(_DWORD *)(v47 + v37) == 64 )
            {
              v9 = v47 + 40;
              if ( v47 + 40 <= v48 )
              {
                if ( *(_BYTE *)(v47 + v37 + 10) )
                  v44 = (char *)(v47 + v37 + 24);
                v39 = *(_BYTE **)(v47 + v37 + 16);
LABEL_110:
                v40 = *(_BYTE *)(v47 + v37 + 9);
                v38 = *(_BYTE *)(v47 + v37 + 8);
LABEL_111:
                if ( v44 )
                {
                  v49 = *v44;
                  goto LABEL_114;
                }
                goto LABEL_133;
              }
            }
            else
            {
              v9 = (unsigned int)(*(_DWORD *)(v47 + v37) - 65);
              if ( *(_DWORD *)(v47 + v37) == 65 )
              {
                v9 = v47 + 56;
                if ( v47 + 56 <= v48 )
                {
                  v124 = 1;
                  if ( *(_BYTE *)(v47 + v37 + 10) )
                    v44 = (char *)(v47 + v37 + 24);
                  v38 = *(_BYTE *)(v47 + v37 + 8);
                  v39 = *(_BYTE **)(v47 + v37 + 16);
                  v40 = *(_BYTE *)(v47 + v37 + 9);
                }
              }
              else if ( *(_DWORD *)(v47 + v37) == 66 )
              {
                v9 = v47 + 40;
                if ( v47 + 40 <= v48 )
                {
                  if ( *(_DWORD *)(v47 + v37 + 12) )
                    v44 = (char *)(v47 + v37 + 32);
                  v39 = *(_BYTE **)(v47 + v37 + 24);
                  goto LABEL_110;
                }
              }
            }
            if ( v124 )
              goto LABEL_111;
            LODWORD(v9) = v129;
            v45 = *(_DWORD *)(v37 + 56);
          }
        }
        v9 = (unsigned int)(v9 + 1);
        v46 = (unsigned int *)(v133 + 4);
        v129 = v9;
        v133 += 4LL;
        if ( (unsigned int)v9 >= v45 )
          goto LABEL_111;
      }
    }
    v49 = *(_BYTE *)(v37 + 72);
    v39 = *(_BYTE **)(v37 + 32);
    v40 = *(_BYTE *)(v37 + 11);
    v38 = *(_BYTE *)(v37 + 4);
    if ( *(_BYTE *)(v37 + 2) )
      goto LABEL_133;
LABEL_114:
    LOBYTE(v9) = v49 - 8;
    if ( (v9 & 0x5D) != 0 )
    {
LABEL_133:
      v8 = -1073741789;
      goto LABEL_290;
    }
    v50 = *(_BYTE *)(v37 + 3);
    if ( v50 == 1 || !v39 || !v40 )
      goto LABEL_131;
    LOBYTE(v37) = 0;
    v9 = (unsigned __int64)&v39[v40];
    v51 = v39 + 8;
    if ( (unsigned __int8)((*v39 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v51 > v9 )
        goto LABEL_129;
      v42 = v39[2];
      v41 = v39[1] & 0xF;
      v43 = v39[3];
    }
    else
    {
      if ( (unsigned __int64)v51 > v9 )
        goto LABEL_129;
      v41 = v39[2] & 0xF;
      v52 = v40;
      if ( (unsigned int)(unsigned __int8)v39[7] + 8 <= v40 )
        v52 = (unsigned __int8)v39[7] + 8;
      v9 = (unsigned __int64)(v39 + 13);
      v37 = (unsigned __int64)&v39[v52];
      if ( (unsigned __int64)(v39 + 13) <= v37 )
        v42 = v39[12];
      if ( (unsigned __int64)(v39 + 14) <= v37 )
        v43 = *(_BYTE *)v9;
    }
    LOBYTE(v37) = 1;
LABEL_129:
    if ( (_BYTE)v37 )
    {
      LOBYTE(v5) = v42;
      v53 = v43;
LABEL_132:
      McTemplateK0pduuuuup_EtwWriteTransfer(v9, v37, &v138, a2, *(_DWORD *)(a2 + 48), v50, v38, v41, v5, v53, a2);
      goto LABEL_133;
    }
LABEL_131:
    v41 = 0;
    v53 = 0;
    goto LABEL_132;
  }
  v54 = (__int64 *)(a1 + 144);
  for ( i = *(__int64 **)(a1 + 144); ; i = (__int64 *)*i )
  {
    if ( i == v54 )
    {
      v77 = 0;
      if ( (_DWORD)v35 )
      {
        v78 = Pool;
        v79 = v35;
        do
        {
          v80 = v77;
          v77 += *v78;
          v78 += 4;
          *((_QWORD *)v78 - 1) = &v34[48 * v80 + (unsigned int)(8 * v35 + 4)];
          --v79;
        }
        while ( v79 );
      }
      v81 = (__int64 *)*v54;
      v82 = 0LL;
      if ( (__int64 *)*v54 != v54 )
      {
        do
        {
          if ( (v81[55] & 8) == 0 )
          {
            v83 = *((_DWORD *)v81 + 10);
            v84 = v81[6];
            if ( (_BYTE)v83 != 0xFF )
            {
              v85 = Pool[4 * (unsigned __int8)v83 + 1];
              Pool[4 * (unsigned __int8)v83 + 1] = v85 + 1;
              v82 = *(_QWORD *)&Pool[4 * (unsigned __int8)v83 + 2] + 48 * v85;
              *(_BYTE *)v82 = v83;
              *(_BYTE *)(v82 + 2) = BYTE2(v83);
              *(_BYTE *)(v82 + 1) = BYTE1(v83);
              v86 = v81[55] & 1;
              *(_DWORD *)(v82 + 4) = 36;
              *(_BYTE *)(v82 + 3) = v86;
              *(_DWORD *)(v82 + 8) = v82 - (_DWORD)v34 + 48;
              *(_OWORD *)(v82 + 12) = *(_OWORD *)v84;
              *(_OWORD *)(v82 + 28) = *(_OWORD *)(v84 + 16);
              *(_DWORD *)(v82 + 44) = *(_DWORD *)(v84 + 32);
            }
          }
          v81 = (__int64 *)*v81;
        }
        while ( v81 != v54 );
        if ( v82 )
          *(_DWORD *)(v82 + 8) = 0;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      LOBYTE(v87) = 0;
      if ( (_DWORD)v35 )
      {
        v88 = Pool;
        v89 = v34 + 8;
        do
        {
          *(v89 - 4) = *v88;
          InitiatorBusId = RaidAdapterGetInitiatorBusId((_DWORD *)a1, v87);
          *((_BYTE *)v91 - 3) = InitiatorBusId;
          if ( v94 )
          {
            *v91 = v92[2] - (_DWORD)v34;
            *(_DWORD *)(*((_QWORD *)v92 + 1) + 48LL * (unsigned int)(*v92 - 1) + 8) = 0;
          }
          else
          {
            *v91 = 0;
          }
          v87 = v93 + 1;
          v89 = v91 + 2;
          v88 = v92 + 4;
        }
        while ( v87 < (unsigned int)v35 );
      }
      *v34 = v35;
      ExFreePoolWithTag(Pool, 0x32316152u);
      v7 = StorEtwLoggingEnabled == 0;
      *(_QWORD *)(a2 + 56) = v128;
      *(_BYTE *)(a2 + 141) = -84;
      *(_DWORD *)(a2 + 48) = 0;
      if ( v7 )
        goto LABEL_289;
      v140 = 0LL;
      IoGetActivityIdIrp(a2, &v140);
      v96 = *(_QWORD *)(a2 + 184);
      if ( *(_BYTE *)v96 == 14 )
      {
        if ( (byte_140171462 & 8) == 0 )
          goto LABEL_289;
        v99 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
        goto LABEL_288;
      }
      if ( *(_BYTE *)v96 != 15 )
      {
        if ( *(_BYTE *)v96 != 27 )
          goto LABEL_289;
        if ( *(_BYTE *)(v96 + 1) == 7 && !*(_DWORD *)(v96 + 8) )
        {
          if ( (byte_140171462 & 0x40) != 0 )
          {
            v97 = *(unsigned int **)(a2 + 56);
            if ( v97 )
              v98 = *v97;
            else
              v98 = 0LL;
            McTemplateK0pqd_EtwWriteTransfer(v98, v96, &v140, a2, v98, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_289;
        }
        if ( (byte_140171462 & 0x20) == 0 )
          goto LABEL_289;
        v99 = &EventPnpRequestComplete;
LABEL_288:
        McTemplateK0pd_EtwWriteTransfer(v95, v99, &v140, a2, *(_DWORD *)(a2 + 48));
        goto LABEL_289;
      }
      if ( byte_140171461 >= 0 )
        goto LABEL_289;
      v100 = *(_QWORD *)(v96 + 8);
      v101 = 0;
      v102 = 0LL;
      v103 = 0;
      v104 = 0;
      v105 = 0;
      v106 = 0;
      if ( *(_BYTE *)(v100 + 2) == 40 )
      {
        v107 = 0LL;
        v126 = 0;
        if ( *(_DWORD *)(v100 + 20) )
          goto LABEL_289;
        v108 = 0;
        v131 = 0;
        if ( !*(_DWORD *)(v100 + 56) )
          goto LABEL_263;
        v109 = *(_DWORD *)(v100 + 56);
        v110 = (unsigned int *)(v100 + 120);
        v135 = v100 + 120;
        while ( 1 )
        {
          v111 = *v110;
          if ( (unsigned int)v111 >= 0x80 )
          {
            v112 = *(unsigned int *)(v100 + 16);
            if ( (unsigned int)v111 < (unsigned int)v112 )
            {
              if ( *(_DWORD *)(v100 + v111) == 64 )
              {
                if ( v111 + 40 <= v112 )
                {
                  if ( *(_BYTE *)(v100 + v111 + 10) )
                    v107 = (char *)(v111 + v100 + 24);
                  v102 = *(_BYTE **)(v100 + v111 + 16);
LABEL_262:
                  v103 = *(_BYTE *)(v100 + v111 + 9);
                  v101 = *(_BYTE *)(v100 + v111 + 8);
LABEL_263:
                  if ( v107 )
                  {
                    v113 = *v107;
                    goto LABEL_266;
                  }
                  goto LABEL_289;
                }
              }
              else if ( *(_DWORD *)(v100 + v111) == 65 )
              {
                if ( v111 + 56 <= v112 )
                {
                  v126 = 1;
                  if ( *(_BYTE *)(v100 + v111 + 10) )
                    v107 = (char *)(v111 + v100 + 24);
                  v101 = *(_BYTE *)(v100 + v111 + 8);
                  v102 = *(_BYTE **)(v100 + v111 + 16);
                  v103 = *(_BYTE *)(v100 + v111 + 9);
                }
              }
              else if ( *(_DWORD *)(v100 + v111) == 66 && v111 + 40 <= v112 )
              {
                if ( *(_DWORD *)(v100 + v111 + 12) )
                  v107 = (char *)(v111 + v100 + 32);
                v102 = *(_BYTE **)(v100 + v111 + 24);
                goto LABEL_262;
              }
              if ( v126 )
                goto LABEL_263;
              v108 = v131;
              v109 = *(_DWORD *)(v100 + 56);
            }
          }
          ++v108;
          v110 = (unsigned int *)(v135 + 4);
          v131 = v108;
          v135 += 4LL;
          if ( v108 >= v109 )
            goto LABEL_263;
        }
      }
      v113 = *(_BYTE *)(v100 + 72);
      v102 = *(_BYTE **)(v100 + 32);
      v103 = *(_BYTE *)(v100 + 11);
      v101 = *(_BYTE *)(v100 + 4);
      if ( *(_BYTE *)(v100 + 2) )
        goto LABEL_289;
LABEL_266:
      if ( ((v113 - 8) & 0x5D) != 0 )
      {
LABEL_289:
        v8 = 0;
        goto LABEL_290;
      }
      v114 = *(_BYTE *)(v100 + 3);
      if ( v114 == 1 || !v102 || !v103 )
        goto LABEL_284;
      LOBYTE(v100) = 0;
      v115 = &v102[v103];
      v116 = v102 + 8;
      if ( (unsigned __int8)((*v102 & 0x7F) - 114) <= 1u )
      {
        if ( v116 > v115 )
          goto LABEL_282;
        v105 = v102[2];
        v104 = v102[1] & 0xF;
        v106 = v102[3];
      }
      else
      {
        if ( v116 > v115 )
          goto LABEL_282;
        v117 = v102 + 13;
        v104 = v102[2] & 0xF;
        v118 = v103;
        if ( (unsigned int)(unsigned __int8)v102[7] + 8 <= v103 )
          v118 = (unsigned __int8)v102[7] + 8;
        v119 = (unsigned __int64)&v102[v118];
        if ( (unsigned __int64)v117 <= v119 )
          v105 = v102[12];
        if ( (unsigned __int64)(v102 + 14) > v119 )
          v106 = 0;
        else
          v106 = *v117;
      }
      LOBYTE(v100) = 1;
LABEL_282:
      if ( (_BYTE)v100 )
      {
        v120 = v105;
        v121 = v106;
LABEL_285:
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v121,
          v100,
          &v140,
          a2,
          *(_DWORD *)(a2 + 48),
          v114,
          v101,
          v104,
          v120,
          v121,
          a2);
        goto LABEL_289;
      }
LABEL_284:
      v104 = 0;
      v120 = 0;
      v121 = 0LL;
      goto LABEL_285;
    }
    if ( (i[55] & 8) == 0 )
    {
      v56 = *((_DWORD *)i + 10);
      if ( (_BYTE)v56 != 0xFF )
        break;
    }
LABEL_142:
    ;
  }
  v57 = 2LL * (unsigned __int8)v56;
  v58 = Pool[4 * (unsigned __int8)v56];
  if ( v58 < 0xFF )
  {
    Pool[2 * v57] = v58 + 1;
    goto LABEL_142;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  ExFreePoolWithTag(Pool, 0x32316152u);
  v7 = StorEtwLoggingEnabled == 0;
  v8 = -1073741637;
  *(_DWORD *)(a2 + 48) = -1073741637;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v7 )
    goto LABEL_290;
  v139 = 0LL;
  IoGetActivityIdIrp(a2, &v139);
  v10 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v10 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_290;
    v13 = &v139;
    goto LABEL_70;
  }
  if ( *(_BYTE *)v10 == 15 )
  {
    if ( byte_140171461 >= 0 )
      goto LABEL_290;
    v60 = *(_QWORD *)(v10 + 8);
    v61 = 0;
    v62 = 0LL;
    v63 = 0;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    if ( *(_BYTE *)(v60 + 2) == 40 )
    {
      v67 = 0LL;
      v125 = 0;
      if ( *(_DWORD *)(v60 + 20) )
        goto LABEL_204;
      v9 = 0LL;
      v130 = 0;
      if ( !*(_DWORD *)(v60 + 56) )
        goto LABEL_182;
      v68 = *(_DWORD *)(v60 + 56);
      v69 = (unsigned int *)(v60 + 120);
      v134 = v60 + 120;
      while ( 1 )
      {
        v70 = *v69;
        if ( (unsigned int)v70 >= 0x80 )
        {
          v71 = *(unsigned int *)(v60 + 16);
          if ( (unsigned int)v70 < (unsigned int)v71 )
          {
            if ( *(_DWORD *)(v70 + v60) == 64 )
            {
              v9 = v70 + 40;
              if ( v70 + 40 <= v71 )
              {
                if ( *(_BYTE *)(v70 + v60 + 10) )
                  v67 = (char *)(v70 + v60 + 24);
                v62 = *(_BYTE **)(v70 + v60 + 16);
LABEL_181:
                v63 = *(_BYTE *)(v70 + v60 + 9);
                v61 = *(_BYTE *)(v70 + v60 + 8);
LABEL_182:
                if ( v67 )
                {
                  v72 = *v67;
                  goto LABEL_185;
                }
                goto LABEL_204;
              }
            }
            else
            {
              v9 = (unsigned int)(*(_DWORD *)(v70 + v60) - 65);
              if ( *(_DWORD *)(v70 + v60) == 65 )
              {
                v9 = v70 + 56;
                if ( v70 + 56 <= v71 )
                {
                  v125 = 1;
                  if ( *(_BYTE *)(v70 + v60 + 10) )
                    v67 = (char *)(v70 + v60 + 24);
                  v61 = *(_BYTE *)(v70 + v60 + 8);
                  v62 = *(_BYTE **)(v70 + v60 + 16);
                  v63 = *(_BYTE *)(v70 + v60 + 9);
                }
              }
              else if ( *(_DWORD *)(v70 + v60) == 66 )
              {
                v9 = v70 + 40;
                if ( v70 + 40 <= v71 )
                {
                  if ( *(_DWORD *)(v70 + v60 + 12) )
                    v67 = (char *)(v70 + v60 + 32);
                  v62 = *(_BYTE **)(v70 + v60 + 24);
                  goto LABEL_181;
                }
              }
            }
            if ( v125 )
              goto LABEL_182;
            LODWORD(v9) = v130;
            v68 = *(_DWORD *)(v60 + 56);
          }
        }
        v9 = (unsigned int)(v9 + 1);
        v69 = (unsigned int *)(v134 + 4);
        v130 = v9;
        v134 += 4LL;
        if ( (unsigned int)v9 >= v68 )
          goto LABEL_182;
      }
    }
    v72 = *(_BYTE *)(v60 + 72);
    v62 = *(_BYTE **)(v60 + 32);
    v63 = *(_BYTE *)(v60 + 11);
    v61 = *(_BYTE *)(v60 + 4);
    if ( *(_BYTE *)(v60 + 2) )
      goto LABEL_204;
LABEL_185:
    LOBYTE(v9) = v72 - 8;
    if ( (v9 & 0x5D) != 0 )
    {
LABEL_204:
      v8 = -1073741637;
      goto LABEL_290;
    }
    v73 = *(_BYTE *)(v60 + 3);
    if ( v73 == 1 || !v62 || !v63 )
      goto LABEL_202;
    LOBYTE(v60) = 0;
    v9 = (unsigned __int64)&v62[v63];
    v74 = v62 + 8;
    if ( (unsigned __int8)((*v62 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v74 > v9 )
        goto LABEL_200;
      v65 = v62[2];
      v64 = v62[1] & 0xF;
      v66 = v62[3];
    }
    else
    {
      if ( (unsigned __int64)v74 > v9 )
        goto LABEL_200;
      v64 = v62[2] & 0xF;
      v75 = v63;
      if ( (unsigned int)(unsigned __int8)v62[7] + 8 <= v63 )
        v75 = (unsigned __int8)v62[7] + 8;
      v9 = (unsigned __int64)(v62 + 13);
      v60 = (unsigned __int64)&v62[v75];
      if ( (unsigned __int64)(v62 + 13) <= v60 )
        v65 = v62[12];
      if ( (unsigned __int64)(v62 + 14) <= v60 )
        v66 = *(_BYTE *)v9;
    }
    LOBYTE(v60) = 1;
LABEL_200:
    if ( (_BYTE)v60 )
    {
      LOBYTE(v5) = v65;
      v76 = v66;
LABEL_203:
      McTemplateK0pduuuuup_EtwWriteTransfer(v9, v60, &v139, a2, *(_DWORD *)(a2 + 48), v73, v61, v64, v5, v76, a2);
      goto LABEL_204;
    }
LABEL_202:
    v64 = 0;
    v76 = 0;
    goto LABEL_203;
  }
  if ( *(_BYTE *)v10 != 27 )
    goto LABEL_290;
  if ( *(_BYTE *)(v10 + 1) != 7 || *(_DWORD *)(v10 + 8) )
  {
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_290;
    v13 = &v139;
LABEL_15:
    v14 = &EventPnpRequestComplete;
LABEL_16:
    McTemplateK0pd_EtwWriteTransfer(v9, v14, v13, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_290;
  }
  if ( (byte_140171462 & 0x40) != 0 )
  {
    v59 = *(int **)(a2 + 56);
    if ( v59 )
      v5 = *v59;
    v12 = &v139;
LABEL_12:
    McTemplateK0pqd_EtwWriteTransfer(v9, v10, v12, a2, v5, *(_DWORD *)(a2 + 48));
  }
LABEL_290:
  IofCompleteRequest((PIRP)a2, 0);
  return v8;
}
