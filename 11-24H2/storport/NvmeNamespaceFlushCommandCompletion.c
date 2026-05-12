/*
 * XREFs of NvmeNamespaceFlushCommandCompletion @ 0x140101D80
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

void __fastcall NvmeNamespaceFlushCommandCompletion(__int64 a1, _QWORD *a2, __int64 a3)
{
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v6; // r8d
  unsigned int v7; // r8d
  int v8; // edx
  int v9; // ebx
  unsigned int v10; // r8d
  bool v11; // zf
  int v12; // edx
  int v13; // edx
  int v14; // edx
  bool v15; // zf
  int v16; // edx
  unsigned int v17; // r8d
  bool v18; // zf
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned int *v25; // rax
  __int64 v26; // rcx
  const EVENT_DESCRIPTOR *v27; // rdx
  unsigned __int64 v28; // rdx
  char v29; // r14
  unsigned __int8 v30; // si
  _BYTE *v31; // r9
  unsigned __int8 v32; // r11
  char v33; // r13
  char *v34; // rsi
  char v35; // r15
  unsigned int v36; // r12d
  __int64 v37; // r14
  __int64 v38; // rcx
  unsigned __int64 v39; // r10
  __int64 v40; // r8
  int v41; // ecx
  int v42; // ecx
  char v43; // r10
  char v44; // cl
  char v45; // r8
  _BYTE *v46; // rcx
  _BYTE *v47; // rax
  unsigned int v48; // eax
  unsigned __int64 v49; // rcx
  char v50; // al
  unsigned __int8 v51; // al
  char v52; // al
  __int64 v53; // rcx
  char *v54; // rsi
  _QWORD **v55; // r13
  _QWORD *v56; // rax
  _QWORD *v57; // rcx
  _QWORD *v58; // rdi
  __int64 v59; // rcx
  __int64 v60; // rdx
  unsigned int *v61; // rax
  __int64 v62; // rcx
  const EVENT_DESCRIPTOR *v63; // rdx
  unsigned __int64 v64; // rdx
  char v65; // si
  char v66; // r15
  unsigned __int8 v67; // r14
  _BYTE *v68; // r9
  unsigned __int8 v69; // r11
  char *v70; // rsi
  unsigned int v71; // r12d
  __int64 v72; // r14
  __int64 v73; // rcx
  unsigned __int64 v74; // r10
  __int64 v75; // r8
  int v76; // ecx
  int v77; // ecx
  char v78; // r10
  char v79; // cl
  char v80; // r8
  _BYTE *v81; // rcx
  _BYTE *v82; // rax
  unsigned int v83; // eax
  unsigned __int64 v84; // rcx
  char v85; // al
  unsigned __int8 v86; // al
  char v87; // al
  __int64 v88; // rcx
  KIRQL v89; // r8
  _QWORD **v90; // rdx
  _QWORD *v91; // rcx
  _QWORD *v92; // rax
  _QWORD *v93; // rax
  __int64 v94; // rbx
  __int64 v95; // [rsp+28h] [rbp-39h]
  __int64 v96; // [rsp+30h] [rbp-31h]
  __int64 v97; // [rsp+38h] [rbp-29h]
  __int64 v98; // [rsp+40h] [rbp-21h]
  __int64 v99; // [rsp+48h] [rbp-19h]
  __int64 v100; // [rsp+50h] [rbp-11h]
  char v101; // [rsp+68h] [rbp+7h]
  char v102; // [rsp+68h] [rbp+7h]
  unsigned __int8 v103; // [rsp+69h] [rbp+8h]
  unsigned __int8 v104; // [rsp+69h] [rbp+8h]
  char v105; // [rsp+6Ah] [rbp+9h]
  char v106; // [rsp+6Ah] [rbp+9h]
  char *Context; // [rsp+70h] [rbp+Fh]
  GUID v108; // [rsp+78h] [rbp+17h] BYREF

  if ( UseQPCTime )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  if ( !a3 )
  {
    v9 = -1073740757;
    goto LABEL_102;
  }
  *(_WORD *)(*a2 + 4260LL) = *(_WORD *)(a3 + 14);
  v6 = *(unsigned __int16 *)(*a2 + 4260LL);
  if ( ((v6 >> 9) & 7) == 0 )
  {
    v17 = v6 >> 1;
    if ( (unsigned __int8)v17 > 0x80u )
    {
      if ( (unsigned __int8)v17 == 129 )
        goto LABEL_29;
      v14 = (unsigned __int8)v17 - 130;
      if ( (unsigned __int8)v17 == 130 )
      {
        v9 = -1073741661;
        goto LABEL_102;
      }
      goto LABEL_76;
    }
    if ( (unsigned __int8)v17 == 128 )
      goto LABEL_29;
    if ( (unsigned __int8)v17 > 0xEu )
    {
      if ( (unsigned __int8)v17 <= 0x16u )
      {
        if ( (unsigned __int8)v17 == 22
          || (unsigned __int8)v17 == 15
          || (unsigned __int8)v17 == 16
          || (unsigned __int8)v17 == 17
          || (unsigned __int8)v17 == 18
          || (unsigned __int8)v17 == 19 )
        {
          goto LABEL_29;
        }
        v8 = (unsigned __int8)v17 - 20;
        if ( (unsigned __int8)v17 != 20 )
          goto LABEL_87;
LABEL_48:
        v9 = -1073741436;
        goto LABEL_102;
      }
      if ( (unsigned __int8)v17 == 24 )
        goto LABEL_29;
      if ( (unsigned __int8)v17 == 25 || (unsigned __int8)v17 == 26 )
      {
        v9 = -1073741643;
        goto LABEL_102;
      }
      if ( (unsigned __int8)v17 != 27 )
      {
        if ( (unsigned __int8)v17 == 28 )
          goto LABEL_14;
        v18 = (unsigned __int8)v17 == 30;
        goto LABEL_95;
      }
    }
    else
    {
      if ( (unsigned __int8)v17 == 14 )
        goto LABEL_29;
      if ( (unsigned __int8)v17 > 7u )
      {
        if ( (unsigned __int8)v17 != 8 && (unsigned __int8)v17 != 9 && (unsigned __int8)v17 != 10 )
        {
          if ( (unsigned __int8)v17 == 11 )
            goto LABEL_29;
          v14 = (unsigned __int8)v17 - 12;
          if ( (unsigned __int8)v17 == 12 )
          {
            v9 = -1073740758;
            goto LABEL_102;
          }
          goto LABEL_76;
        }
      }
      else if ( (unsigned __int8)v17 != 7 )
      {
        if ( !(_BYTE)v17 )
        {
          v9 = 0;
          goto LABEL_102;
        }
        if ( (unsigned __int8)v17 == 1 || (unsigned __int8)v17 == 2 )
          goto LABEL_29;
        if ( (unsigned __int8)v17 == 3 || (unsigned __int8)v17 == 4 )
          goto LABEL_14;
        v16 = (unsigned __int8)v17 - 5;
        v15 = (unsigned __int8)v17 == 5;
LABEL_46:
        if ( !v15 && v16 != 1 )
          goto LABEL_14;
        goto LABEL_48;
      }
    }
    v9 = -1073741248;
    goto LABEL_102;
  }
  if ( ((*(unsigned __int16 *)(*a2 + 4260LL) >> 9) & 7) == 1 )
  {
    v10 = v6 >> 1;
    if ( (unsigned __int8)v10 > 0x80u )
    {
      if ( (unsigned __int8)v10 == 129 )
        goto LABEL_29;
      v14 = (unsigned __int8)v10 - 130;
      if ( (unsigned __int8)v10 != 130 )
        goto LABEL_76;
    }
    else
    {
      if ( (unsigned __int8)v10 == 128 )
        goto LABEL_29;
      if ( (unsigned __int8)v10 <= 0x11u )
      {
        if ( (unsigned __int8)v10 != 17 )
        {
          if ( (unsigned __int8)v10 <= 9u )
          {
            if ( (unsigned __int8)v10 == 9
              || !(_BYTE)v10
              || (unsigned __int8)v10 == 1
              || (unsigned __int8)v10 == 2
              || (unsigned __int8)v10 == 3 )
            {
              goto LABEL_29;
            }
            v12 = (unsigned __int8)v10 - 5;
            v11 = (unsigned __int8)v10 == 5;
LABEL_26:
            if ( v11 )
              goto LABEL_29;
            v13 = v12 - 1;
            if ( !v13 )
              goto LABEL_29;
            v14 = v13 - 1;
            if ( !v14 )
              goto LABEL_29;
LABEL_76:
            v18 = v14 == 1;
LABEL_95:
            if ( !v18 )
              goto LABEL_14;
LABEL_29:
            v9 = -1073741808;
            goto LABEL_102;
          }
          if ( (unsigned __int8)v10 == 10 )
            goto LABEL_29;
          if ( (unsigned __int8)v10 != 11 )
          {
            if ( (unsigned __int8)v10 == 12
              || (unsigned __int8)v10 == 13
              || (unsigned __int8)v10 == 14
              || (unsigned __int8)v10 == 15 )
            {
              goto LABEL_29;
            }
            if ( (unsigned __int8)v10 != 16 )
              goto LABEL_14;
          }
        }
        v9 = -2147483210;
        goto LABEL_102;
      }
      if ( (unsigned __int8)v10 <= 0x1Au )
      {
        switch ( (unsigned __int8)v10 )
        {
          case 0x1Au:
          case 0x12u:
          case 0x13u:
            goto LABEL_48;
          case 0x14u:
            v9 = -1073741800;
            goto LABEL_102;
          case 0x15u:
            goto LABEL_14;
          case 0x16u:
            goto LABEL_48;
        }
        v16 = (unsigned __int8)v10 - 24;
        v15 = (unsigned __int8)v10 == 24;
        goto LABEL_46;
      }
      if ( (unsigned __int8)v10 == 27 )
      {
        v9 = -1073741637;
        goto LABEL_102;
      }
      if ( (unsigned __int8)v10 == 28 )
        goto LABEL_29;
      if ( (unsigned __int8)v10 != 30 )
      {
        v12 = (unsigned __int8)v10 - 31;
        v11 = (unsigned __int8)v10 == 31;
        goto LABEL_26;
      }
    }
LABEL_88:
    v9 = -1073741790;
    goto LABEL_102;
  }
  if ( ((*(unsigned __int16 *)(*a2 + 4260LL) >> 9) & 7) != 2 )
    goto LABEL_14;
  v7 = v6 >> 1;
  switch ( (unsigned __int8)v7 )
  {
    case 0x80u:
      goto LABEL_14;
    case 0x81u:
      goto LABEL_14;
    case 0x82u:
      goto LABEL_14;
    case 0x83u:
      goto LABEL_14;
    case 0x84u:
      goto LABEL_14;
  }
  v8 = (unsigned __int8)v7 - 133;
  if ( (unsigned __int8)v7 == 133 )
    goto LABEL_14;
LABEL_87:
  if ( v8 == 1 )
    goto LABEL_88;
LABEL_14:
  v9 = -1073741435;
LABEL_102:
  v19 = *(_QWORD *)(*a2 + 4184LL);
  Context = *(char **)(*a2 + 4216LL);
  if ( FeatureFixTRIMAddSCSIPassthrough )
  {
    v20 = *(_QWORD *)(*(_QWORD *)(*a2 + 4216LL) + 608LL);
    if ( v20 )
    {
      v21 = a2[10];
      if ( PerformanceCounter.QuadPart >= v21 )
      {
        v22 = PerformanceCounter.QuadPart - v21;
        if ( !IsQpcInUnitOf100Ns && UseQPCTime )
          v22 = (__int64)(10000000 * v22) / QpcFrequency.QuadPart;
        if ( *(_QWORD *)(v20 + 88) < v22 )
          *(_QWORD *)(v20 + 88) = v22;
      }
    }
  }
  *(_QWORD *)(v19 + 56) = 0LL;
  *(_DWORD *)(v19 + 48) = v9;
  memset_0((void *)*a2, 0, 0x10B0uLL);
  *((_DWORD *)a2 + 12) &= ~1u;
  v11 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(v19 + 141) = -84;
  *(_DWORD *)(v19 + 48) = v9;
  if ( v11 )
    goto LABEL_177;
  v108 = 0LL;
  IoGetActivityIdIrp(v19, &v108);
  v24 = *(_QWORD *)(v19 + 184);
  switch ( *(_BYTE *)v24 )
  {
    case 0xE:
      if ( (byte_140171462 & 8) != 0 )
      {
        v27 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
        goto LABEL_176;
      }
      break;
    case 0xF:
      if ( byte_140171461 < 0 )
      {
        v28 = *(_QWORD *)(v24 + 8);
        v29 = 0;
        v30 = 0;
        v101 = 0;
        v31 = 0LL;
        v105 = 0;
        v32 = 0;
        v103 = 0;
        v33 = 0;
        if ( *(_BYTE *)(v28 + 2) == 40 )
        {
          v34 = 0LL;
          v35 = 0;
          if ( *(_DWORD *)(v28 + 20) )
            break;
          v36 = *(_DWORD *)(v28 + 56);
          v37 = 0LL;
          if ( v36 )
          {
            do
            {
              v38 = *(unsigned int *)(v28 + 4 * v37 + 120);
              if ( (unsigned int)v38 >= 0x80 )
              {
                v39 = *(unsigned int *)(v28 + 16);
                if ( (unsigned int)v38 < (unsigned int)v39 )
                {
                  v40 = (unsigned int)v38;
                  v41 = *(_DWORD *)(v38 + v28) - 64;
                  if ( v41 )
                  {
                    v42 = v41 - 1;
                    if ( v42 )
                    {
                      if ( v42 == 1 && v40 + 40 <= v39 )
                      {
                        if ( *(_DWORD *)(v40 + v28 + 12) )
                          v34 = (char *)(v40 + v28 + 32);
                        v31 = *(_BYTE **)(v40 + v28 + 24);
LABEL_136:
                        v43 = *(_BYTE *)(v40 + v28 + 8);
                        v32 = *(_BYTE *)(v40 + v28 + 9);
                        goto LABEL_145;
                      }
                    }
                    else if ( v40 + 56 <= v39 )
                    {
                      v35 = 1;
                      if ( *(_BYTE *)(v40 + v28 + 10) )
                        v34 = (char *)(v40 + v28 + 24);
                      v31 = *(_BYTE **)(v40 + v28 + 16);
                      v32 = *(_BYTE *)(v40 + v28 + 9);
                      v101 = *(_BYTE *)(v40 + v28 + 8);
                    }
                  }
                  else if ( v40 + 40 <= v39 )
                  {
                    if ( *(_BYTE *)(v40 + v28 + 10) )
                      v34 = (char *)(v40 + v28 + 24);
                    v31 = *(_BYTE **)(v40 + v28 + 16);
                    goto LABEL_136;
                  }
                  if ( v35 )
                    break;
                }
              }
              v37 = (unsigned int)(v37 + 1);
            }
            while ( (unsigned int)v37 < v36 );
            v43 = v101;
          }
          else
          {
            v43 = 0;
          }
LABEL_145:
          if ( !v34 )
            break;
          v44 = *v34;
          v29 = 0;
          v30 = 0;
        }
        else
        {
          v44 = *(_BYTE *)(v28 + 72);
          v31 = *(_BYTE **)(v28 + 32);
          v32 = *(_BYTE *)(v28 + 11);
          v43 = *(_BYTE *)(v28 + 4);
          if ( *(_BYTE *)(v28 + 2) )
            break;
        }
        if ( ((v44 - 8) & 0x5D) == 0 )
        {
          v45 = *(_BYTE *)(v28 + 3);
          if ( v45 == 1 || !v31 || !v32 )
            goto LABEL_172;
          LOBYTE(v28) = 0;
          v46 = &v31[v32];
          v47 = v31 + 8;
          if ( (unsigned __int8)((*v31 & 0x7F) - 114) <= 1u )
          {
            if ( v47 <= v46 )
            {
              LOBYTE(v28) = 1;
              v29 = v31[2];
              v33 = v31[1] & 0xF;
              v30 = v31[3];
            }
          }
          else
          {
            if ( v47 <= v46 )
            {
              v28 = (unsigned __int64)(v31 + 13);
              v33 = v31[2] & 0xF;
              v48 = v32;
              if ( (unsigned int)(unsigned __int8)v31[7] + 8 <= v32 )
                v48 = (unsigned __int8)v31[7] + 8;
              v49 = (unsigned __int64)&v31[v48];
              if ( v28 > v49 )
                v50 = 0;
              else
                v50 = v31[12];
              v105 = v50;
              if ( (unsigned __int64)(v31 + 14) > v49 )
                v51 = 0;
              else
                v51 = *(_BYTE *)v28;
              v103 = v51;
              LOBYTE(v28) = 1;
            }
            v30 = v103;
            v29 = v105;
          }
          if ( (_BYTE)v28 )
          {
            v52 = v29;
            v53 = v30;
          }
          else
          {
LABEL_172:
            v33 = 0;
            v52 = 0;
            v53 = 0LL;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(
            v53,
            v28,
            &v108,
            v19,
            *(_DWORD *)(v19 + 48),
            v45,
            v43,
            v33,
            v52,
            v53,
            v19);
        }
      }
      break;
    case 0x1B:
      if ( *(_BYTE *)(v24 + 1) == 7 && !*(_DWORD *)(v24 + 8) )
      {
        if ( (byte_140171462 & 0x40) != 0 )
        {
          v25 = *(unsigned int **)(v19 + 56);
          if ( v25 )
            v26 = *v25;
          else
            v26 = 0LL;
          McTemplateK0pqd_EtwWriteTransfer(v26, v24, &v108, v19, v26, *(_DWORD *)(v19 + 48));
        }
        break;
      }
      if ( (byte_140171462 & 0x20) != 0 )
      {
        v27 = &EventPnpRequestComplete;
LABEL_176:
        McTemplateK0pd_EtwWriteTransfer(v23, v27, &v108, v19, *(_DWORD *)(v19 + 48));
      }
      break;
  }
LABEL_177:
  IofCompleteRequest((PIRP)v19, 1);
  v54 = Context;
  v55 = (_QWORD **)(Context + 560);
  while ( 1 )
  {
    v56 = *v55;
    if ( *v55 == v55 )
      break;
    if ( (_QWORD **)v56[1] != v55 || (v57 = (_QWORD *)*v56, *(_QWORD **)(*v56 + 8LL) != v56) )
LABEL_256:
      __fastfail(3u);
    *v55 = v57;
    v58 = v56 - 21;
    v57[1] = v55;
    v56[1] = v56;
    *v56 = v56;
    v58[7] = 0LL;
    *((_DWORD *)v58 + 12) = v9;
    ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)v54 + 15));
    v11 = StorEtwLoggingEnabled == 0;
    *((_BYTE *)v58 + 141) = -84;
    *((_DWORD *)v58 + 12) = v9;
    if ( !v11 )
    {
      v108 = 0LL;
      IoGetActivityIdIrp(v58, &v108);
      v60 = v58[23];
      switch ( *(_BYTE *)v60 )
      {
        case 0xE:
          if ( (byte_140171462 & 8) != 0 )
          {
            v63 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
LABEL_194:
            LODWORD(v95) = *((_DWORD *)v58 + 12);
            McTemplateK0pd_EtwWriteTransfer(v59, v63, &v108, v58, v95);
          }
          break;
        case 0xF:
          if ( byte_140171461 >= 0 )
            break;
          v64 = *(_QWORD *)(v60 + 8);
          v65 = 0;
          v66 = 0;
          v106 = 0;
          v67 = 0;
          v68 = 0LL;
          v102 = 0;
          v69 = 0;
          v104 = 0;
          if ( *(_BYTE *)(v64 + 2) == 40 )
          {
            v70 = 0LL;
            if ( !*(_DWORD *)(v64 + 20) )
            {
              v71 = *(_DWORD *)(v64 + 56);
              v72 = 0LL;
              if ( v71 )
              {
                do
                {
                  v73 = *(unsigned int *)(v64 + 4 * v72 + 120);
                  if ( (unsigned int)v73 >= 0x80 )
                  {
                    v74 = *(unsigned int *)(v64 + 16);
                    if ( (unsigned int)v73 < (unsigned int)v74 )
                    {
                      v75 = (unsigned int)v73;
                      v76 = *(_DWORD *)(v73 + v64) - 64;
                      if ( v76 )
                      {
                        v77 = v76 - 1;
                        if ( v77 )
                        {
                          if ( v77 == 1 && v75 + 40 <= v74 )
                          {
                            if ( *(_DWORD *)(v75 + v64 + 12) )
                              v70 = (char *)(v75 + v64 + 32);
                            v68 = *(_BYTE **)(v75 + v64 + 24);
LABEL_208:
                            v78 = *(_BYTE *)(v75 + v64 + 8);
                            v69 = *(_BYTE *)(v75 + v64 + 9);
                            goto LABEL_217;
                          }
                        }
                        else if ( v75 + 56 <= v74 )
                        {
                          v66 = 1;
                          if ( *(_BYTE *)(v75 + v64 + 10) )
                            v70 = (char *)(v75 + v64 + 24);
                          v68 = *(_BYTE **)(v75 + v64 + 16);
                          v69 = *(_BYTE *)(v75 + v64 + 9);
                          v106 = *(_BYTE *)(v75 + v64 + 8);
                        }
                      }
                      else if ( v75 + 40 <= v74 )
                      {
                        if ( *(_BYTE *)(v75 + v64 + 10) )
                          v70 = (char *)(v75 + v64 + 24);
                        v68 = *(_BYTE **)(v75 + v64 + 16);
                        goto LABEL_208;
                      }
                      if ( v66 )
                        break;
                    }
                  }
                  v72 = (unsigned int)(v72 + 1);
                }
                while ( (unsigned int)v72 < v71 );
                v78 = v106;
              }
              else
              {
                v78 = 0;
              }
LABEL_217:
              if ( v70 )
              {
                v79 = *v70;
                v65 = 0;
                v67 = 0;
                v66 = 0;
LABEL_224:
                if ( ((v79 - 8) & 0x5D) == 0 )
                {
                  v80 = *(_BYTE *)(v64 + 3);
                  if ( v80 == 1 || !v68 || !v69 )
                    goto LABEL_244;
                  LOBYTE(v64) = 0;
                  v81 = &v68[v69];
                  v82 = v68 + 8;
                  if ( (unsigned __int8)((*v68 & 0x7F) - 114) <= 1u )
                  {
                    if ( v82 <= v81 )
                    {
                      LOBYTE(v64) = 1;
                      v66 = v68[2];
                      v65 = v68[1] & 0xF;
                      v67 = v68[3];
                    }
                  }
                  else
                  {
                    if ( v82 <= v81 )
                    {
                      v64 = (unsigned __int64)(v68 + 13);
                      v65 = v68[2] & 0xF;
                      v83 = v69;
                      if ( (unsigned int)(unsigned __int8)v68[7] + 8 <= v69 )
                        v83 = (unsigned __int8)v68[7] + 8;
                      v84 = (unsigned __int64)&v68[v83];
                      if ( v64 > v84 )
                        v85 = 0;
                      else
                        v85 = v68[12];
                      v102 = v85;
                      if ( (unsigned __int64)(v68 + 14) > v84 )
                        v86 = 0;
                      else
                        v86 = *(_BYTE *)v64;
                      v104 = v86;
                      LOBYTE(v64) = 1;
                    }
                    v67 = v104;
                    v66 = v102;
                  }
                  if ( (_BYTE)v64 )
                  {
                    v87 = v66;
                    v88 = v67;
                  }
                  else
                  {
LABEL_244:
                    v65 = 0;
                    v87 = 0;
                    v88 = 0LL;
                  }
                  LOBYTE(v100) = v88;
                  LOBYTE(v99) = v87;
                  LOBYTE(v98) = v65;
                  LOBYTE(v97) = v78;
                  LOBYTE(v96) = v80;
                  LODWORD(v95) = *((_DWORD *)v58 + 12);
                  McTemplateK0pduuuuup_EtwWriteTransfer(v88, v64, &v108, v58, v95, v96, v97, v98, v99, v100, v58);
                }
              }
            }
          }
          else
          {
            v79 = *(_BYTE *)(v64 + 72);
            v68 = *(_BYTE **)(v64 + 32);
            v69 = *(_BYTE *)(v64 + 11);
            v78 = *(_BYTE *)(v64 + 4);
            if ( !*(_BYTE *)(v64 + 2) )
              goto LABEL_224;
          }
          v54 = Context;
          break;
        case 0x1B:
          if ( *(_BYTE *)(v60 + 1) != 7 || *(_DWORD *)(v60 + 8) )
          {
            if ( (byte_140171462 & 0x20) == 0 )
              break;
            v63 = &EventPnpRequestComplete;
            goto LABEL_194;
          }
          if ( (byte_140171462 & 0x40) != 0 )
          {
            v61 = (unsigned int *)v58[7];
            if ( v61 )
              v62 = *v61;
            else
              v62 = 0LL;
            LODWORD(v96) = *((_DWORD *)v58 + 12);
            LODWORD(v95) = v62;
            McTemplateK0pqd_EtwWriteTransfer(v62, v60, &v108, v58, v95, v96);
          }
          break;
        default:
          break;
      }
    }
    IofCompleteRequest((PIRP)v58, 1);
  }
  v89 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v54 + 68);
  v90 = (_QWORD **)(v54 + 584);
  while ( 1 )
  {
    v91 = *v90;
    if ( *v90 == v90 )
      break;
    if ( (_QWORD **)v91[1] != v90 )
      goto LABEL_256;
    v92 = (_QWORD *)*v91;
    if ( *(_QWORD **)(*v91 + 8LL) != v91 )
      goto LABEL_256;
    *v90 = v92;
    v92[1] = v90;
    v93 = (_QWORD *)*((_QWORD *)Context + 71);
    if ( (_QWORD **)*v93 != v55 )
      goto LABEL_256;
    *v91 = v55;
    v91[1] = v93;
    *v93 = v91;
    *((_QWORD *)Context + 71) = v91;
  }
  v94 = *((_QWORD *)v54 + 72);
  *((_QWORD *)v54 + 72) = 0LL;
  *((_QWORD *)v54 + 69) = v94;
  KeReleaseSpinLock((PKSPIN_LOCK)v54 + 68, v89);
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)v54 + 15));
  if ( v94 )
    IoQueueWorkItemEx(*((PIO_WORKITEM *)v54 + 67), NvmeNamespaceFlushWorker, DelayedWorkQueue, v54);
}
