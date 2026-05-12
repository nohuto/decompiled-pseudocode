/*
 * XREFs of NvmeCompleteSubmissionQueueRequests @ 0x1400E9958
 * Callers:
 *     NvmeAdapterNvmeControllerRebuildAssociationWork @ 0x1400E4E20 (NvmeAdapterNvmeControllerRebuildAssociationWork.c)
 *     NvmeAdapterStopFabricNvmeControllerOperations @ 0x1400E884C (NvmeAdapterStopFabricNvmeControllerOperations.c)
 *     NvmeControllerCompleteAllRequests @ 0x1400EBA14 (NvmeControllerCompleteAllRequests.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     IsNvmeControllerGone @ 0x1400BE914 (IsNvmeControllerGone.c)
 *     IsOutstandingRequestInNvmeControllerQueue @ 0x1400CB764 (IsOutstandingRequestInNvmeControllerQueue.c)
 *     NvmeAdapterDetachXrbFromSrb @ 0x1400E1884 (NvmeAdapterDetachXrbFromSrb.c)
 *     NvmeControllerGetNamespace @ 0x1400EEC74 (NvmeControllerGetNamespace.c)
 *     NvmeControllerRestart @ 0x1400F4DB4 (NvmeControllerRestart.c)
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x1400F9E9C (NvmeNamespaceCheckAndAcquirePoFx.c)
 *     NvmeNamespaceReleasePoFx @ 0x1400F9EFC (NvmeNamespaceReleasePoFx.c)
 *     FreeNVMeChainedIoSplitContext @ 0x14011A240 (FreeNVMeChainedIoSplitContext.c)
 *     FreeNVMePrpListBufferEntry @ 0x14011A2E0 (FreeNVMePrpListBufferEntry.c)
 *     FreeNVMeSGLBufferContext @ 0x14011A350 (FreeNVMeSGLBufferContext.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

char __fastcall NvmeCompleteSubmissionQueueRequests(__int64 a1, char a2, int a3)
{
  int v3; // edi
  __int64 v4; // r13
  int v6; // ebp
  unsigned int v7; // ebx
  _QWORD *Namespace; // r12
  bool v9; // zf
  char v10; // al
  __int64 v11; // rax
  char v12; // r9
  unsigned int v13; // edx
  __int64 v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rbp
  __int64 v20; // rdi
  __int64 v21; // rbx
  void (__fastcall *v22)(__int64, __int64, __int64, _QWORD, _QWORD *, __int64); // r10
  __int64 v23; // r11
  __int64 v24; // rcx
  char v25; // r14
  __int64 v26; // r8
  __int64 v27; // rdx
  void (__fastcall *v28)(__int64, _QWORD, _QWORD, _QWORD); // rax
  __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // rdx
  __int64 v32; // rbp
  unsigned int v33; // eax
  int v34; // ecx
  __int64 v35; // rbx
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // r15
  __int64 v39; // rdx
  int v40; // ebp
  __int64 v41; // rcx
  unsigned int v42; // edi
  __int64 v43; // rax
  __int64 v44; // rbp
  __int64 v45; // r12
  char v46; // di
  __int64 v47; // rbx
  KIRQL v48; // r13
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rbp
  __int64 v53; // r15
  char v54; // di
  __int64 v55; // rbx
  KIRQL v56; // r12
  __int64 v57; // r8
  __int64 v58; // rax
  __int64 v59; // rbx
  __int64 v60; // rax
  __int64 v61; // rbx
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rdx
  unsigned int *v65; // rax
  __int64 v66; // rcx
  const EVENT_DESCRIPTOR *v67; // rdx
  __int64 v68; // rdx
  char v69; // di
  unsigned __int8 v70; // bl
  _BYTE *v71; // r9
  unsigned __int8 v72; // r11
  char v73; // r12
  char *v74; // rbx
  char v75; // bp
  unsigned int v76; // r15d
  __int64 v77; // rdi
  __int64 v78; // rcx
  unsigned __int64 v79; // r10
  __int64 v80; // r8
  int v81; // ecx
  int v82; // ecx
  char v83; // r10
  char v84; // cl
  char v85; // r8
  _BYTE *v86; // rcx
  _BYTE *v87; // rax
  char *v88; // r8
  unsigned int v89; // eax
  unsigned __int64 v90; // rcx
  char v91; // al
  unsigned __int8 v92; // al
  char v93; // al
  __int64 v94; // rcx
  char v95; // al
  unsigned int i; // edx
  __int64 v97; // rcx
  signed __int32 v99[8]; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v100; // [rsp+20h] [rbp-C8h]
  __int64 v101; // [rsp+28h] [rbp-C0h]
  __int64 v102; // [rsp+30h] [rbp-B8h]
  __int64 v103; // [rsp+38h] [rbp-B0h]
  __int64 v104; // [rsp+40h] [rbp-A8h]
  __int64 v105; // [rsp+48h] [rbp-A0h]
  __int64 v106; // [rsp+50h] [rbp-98h]
  char v107; // [rsp+60h] [rbp-88h]
  char v108; // [rsp+61h] [rbp-87h]
  char v109; // [rsp+62h] [rbp-86h]
  unsigned __int8 v110; // [rsp+63h] [rbp-85h]
  char v111; // [rsp+64h] [rbp-84h]
  char v112; // [rsp+65h] [rbp-83h]
  int v113; // [rsp+68h] [rbp-80h]
  unsigned int v114; // [rsp+6Ch] [rbp-7Ch]
  unsigned int v115; // [rsp+70h] [rbp-78h]
  __int64 v116; // [rsp+78h] [rbp-70h]
  unsigned int v117; // [rsp+80h] [rbp-68h]
  int v118; // [rsp+84h] [rbp-64h]
  _QWORD *v119; // [rsp+88h] [rbp-60h]
  unsigned int v120; // [rsp+90h] [rbp-58h]
  __int64 v121; // [rsp+98h] [rbp-50h]
  union _LARGE_INTEGER Interval; // [rsp+A0h] [rbp-48h] BYREF
  GUID v123; // [rsp+A8h] [rbp-40h] BYREF

  v4 = *(_QWORD *)(a1 + 88);
  v112 = a2;
  Interval.QuadPart = 0LL;
  LOBYTE(v3) = 0;
  v6 = a3;
  v113 = a3;
  v7 = *(_DWORD *)(a1 + 124);
  Namespace = 0LL;
  v9 = (*(_BYTE *)(v4 + 136) & 2) == 0;
  v121 = v4;
  v118 = v3;
  v115 = 0;
  if ( v9 )
    --v7;
  v108 = 0;
  v120 = v7;
  if ( a3 == -1073741810 || (v10 = *(_BYTE *)(v4 + 1228), v111 = 0, v10) )
    v111 = 1;
  LOBYTE(v11) = IsOutstandingRequestInNvmeControllerQueue(v4, a1);
  v12 = 0;
  if ( !(_BYTE)v11 )
    return v11;
  *(_QWORD *)(a1 + 112) |= 4uLL;
  _InterlockedOr(v99, 0);
  v13 = 0;
  v114 = 0;
  if ( !v7 )
    goto LABEL_148;
  v14 = 0LL;
  v116 = 0LL;
  do
  {
    v11 = *(_QWORD *)(a1 + 32);
    v15 = v14 << 7;
    if ( (*(_BYTE *)(v11 + (v14 << 7) + 60) & 1) != 0 )
    {
      v16 = *(_QWORD *)(a1 + 32);
      v17 = *(unsigned __int16 *)(v16 + v15 + 56);
      *(_BYTE *)(v16 + v15 + 60) &= ~1u;
      v18 = *(_QWORD *)(a1 + 32);
      if ( (*(_BYTE *)(v4 + 136) & 2) != 0 )
      {
        v19 = *(_QWORD *)(v15 + v18 + 24);
        if ( *(_BYTE *)(v19 + 2) == 40 )
          v20 = *(_QWORD *)(v19 + 96);
        else
          v20 = *(_QWORD *)(v19 + 48);
        if ( !v20 )
          goto LABEL_142;
        if ( *(char *)(v20 + 17) < 0 )
        {
          v25 = 1;
          v108 = 1;
LABEL_143:
          v11 = *(_QWORD *)(a1 + 32);
          v6 = v113;
          LOBYTE(v3) = v118;
          *(_WORD *)((v14 << 7) + v11 + 56) = -1;
          goto LABEL_145;
        }
        if ( *(_DWORD *)(v4 + 572) == 1 )
          Namespace = (_QWORD *)NvmeControllerGetNamespace(v4, *(unsigned int *)(v15 + v18 + 88));
        *(_BYTE *)(v19 + 3) = v112;
        v21 = *(_QWORD *)(v20 + 160);
        v115 = *(_DWORD *)(v20 + 20);
        NvmeAdapterDetachXrbFromSrb(v20);
        if ( v22 )
          v22(v4, v19, v21, v115, Namespace, v23);
        else
          KeSetEvent((PRKEVENT)(v20 + 664), 0, 0);
        v12 = 0;
        v24 = 2 * v17;
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v24) = 0LL;
        *(_WORD *)(*(_QWORD *)(a1 + 24) + 8 * v24 + 8) = -1;
        *(_QWORD *)((v14 << 7) + *(_QWORD *)(a1 + 32) + 24) = 0LL;
        *(_DWORD *)((v14 << 7) + *(_QWORD *)(a1 + 32) + 88) = 0;
        *(_QWORD *)((v14 << 7) + *(_QWORD *)(a1 + 32) + 32) = 0LL;
        *(_QWORD *)((v14 << 7) + *(_QWORD *)(a1 + 32) + 40) = 0LL;
LABEL_141:
        v13 = v114;
LABEL_142:
        v25 = v108;
        goto LABEL_143;
      }
      v26 = *(_QWORD *)(v15 + v18 + 16);
      if ( v26 )
        FreeNVMePrpListBufferEntry(v4, *(unsigned __int16 *)(v15 + v18 + 52), v26, 0LL);
      v27 = *(_QWORD *)(a1 + 32);
      v28 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(v27 + v15 + 32);
      if ( v28 )
        v28(v4, *(_QWORD *)(v27 + v15 + 40), 0LL, 0LL);
      v3 = (unsigned __int8)v3;
      v29 = *(_QWORD *)(a1 + 32);
      if ( (*(_BYTE *)(v29 + v15 + 60) & 0x20) != 0 )
        v3 = 1;
      v118 = v3;
      v30 = _InterlockedExchange64((volatile __int64 *)(((unsigned __int64)v114 << 7) + v29 + 24), 0LL);
      if ( v30 )
      {
        v31 = *(_QWORD *)(a1 + 32);
        v32 = *(_QWORD *)(v30 + 184);
        v33 = (unsigned __int8)**(_DWORD **)(*(_QWORD *)(a1 + 24) + 16LL * *(unsigned __int16 *)((v14 << 7) + v31 + 56));
        if ( v33 > 0x19 || (v34 = 33554742, v107 = 1, !_bittest(&v34, v33)) )
          v107 = 0;
        v35 = v14 << 7;
        Namespace = (_QWORD *)NvmeControllerGetNamespace(v4, *(unsigned int *)(v31 + (v14 << 7) + 88));
        v119 = Namespace;
        v37 = *(_QWORD *)(a1 + 32);
        if ( (*(_BYTE *)(v37 + (v14 << 7) + 60) & 8) != 0 )
        {
          v38 = *(_QWORD *)(v32 + 24);
          v39 = *(_QWORD *)(v37 + v35 + 40);
          v40 = v113;
          v41 = v116;
          v42 = *(unsigned __int16 *)(v38 + 32);
          _InterlockedExchange((volatile __int32 *)(v39 + 104), 5);
          *(_DWORD *)(v39 + 112) = v40;
          v43 = *(_QWORD *)(a1 + 32);
          v117 = v42;
          if ( *(char *)((v41 << 7) + v43 + 60) < 0 )
          {
            v44 = _InterlockedExchange64((volatile __int64 *)(v39 + 88), 0LL);
            if ( v44 )
            {
              v45 = *(_QWORD *)(v44 + 24);
              if ( v45 )
              {
                v46 = *(_BYTE *)(v44 + 126);
                v47 = *(_QWORD *)(v4 + 128);
                v48 = KfRaiseIrql(2u);
                LOBYTE(v49) = (v46 & 1) == 0;
                (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(v47 + 1144) + 8LL) + 96LL))(
                  *(_QWORD *)(v47 + 1144),
                  v45,
                  v49);
                if ( v48 < 2u )
                  KeLowerIrql(v48);
                v4 = v121;
                v42 = v117;
              }
              FreeNVMeSGLBufferContext(v4, v44, 0LL);
              Namespace = v119;
            }
            v40 = v113;
          }
          if ( _InterlockedIncrement((volatile signed __int32 *)(v38 + 116)) < v42 )
            goto LABEL_139;
          if ( v40 < 0 )
            v50 = 0LL;
          else
            v50 = *(unsigned int *)(v38 + 48);
          v51 = v115;
          *(_QWORD *)(v30 + 56) = v50;
          FreeNVMeChainedIoSplitContext(v4, v51, v38, v30);
          v14 = v116;
LABEL_59:
          if ( v107 && !v111 && Namespace )
          {
            v59 = *(unsigned __int16 *)((v14 << 7) + *(_QWORD *)(a1 + 32) + 52);
            if ( FeatureFixFUAForReadIoPerf && IoGetIoPriorityHint((PIRP)v30) > IoPriorityLow )
              _InterlockedDecrement(*(volatile signed __int32 **)(Namespace[85] + 8 * v59));
            *(_DWORD *)(v30 + 48) = v40;
            IofCompleteRequest((PIRP)v30, 0);
            v60 = Namespace[16];
            if ( !*(_BYTE *)v60
              && _InterlockedExchangeAdd(*(volatile signed __int32 **)(*(_QWORD *)(v60 + 24) + 8 * v59), 0xFFFFFFFF) == 1 )
            {
              v61 = *(_QWORD *)(Namespace[2] + 128LL);
              if ( (unsigned __int8)NvmeNamespaceCheckAndAcquirePoFx(Namespace) )
              {
                PoFxIdleComponent(**(_QWORD **)(Namespace[16] + 8LL), 0LL, 2LL);
                NvmeNamespaceReleasePoFx(Namespace);
              }
              v62 = *(_QWORD *)(v61 + 160);
              if ( *(_BYTE *)v62 == 1 )
                PoFxIdleComponent(**(_QWORD **)(v62 + 8), 0LL, 2LL);
            }
            goto LABEL_140;
          }
          v9 = StorEtwLoggingEnabled == 0;
          *(_BYTE *)(v30 + 141) = -84;
          *(_DWORD *)(v30 + 48) = v40;
          if ( v9 )
            goto LABEL_138;
          v123 = 0LL;
          IoGetActivityIdIrp(v30, &v123);
          v64 = *(_QWORD *)(v30 + 184);
          switch ( *(_BYTE *)v64 )
          {
            case 0xE:
              if ( (byte_140171462 & 8) != 0 )
              {
                v67 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
                goto LABEL_137;
              }
              break;
            case 0xF:
              if ( byte_140171461 < 0 )
              {
                v68 = *(_QWORD *)(v64 + 8);
                v69 = 0;
                v70 = 0;
                v109 = 0;
                v71 = 0LL;
                v107 = 0;
                v72 = 0;
                v110 = 0;
                v73 = 0;
                if ( *(_BYTE *)(v68 + 2) == 40 )
                {
                  v74 = 0LL;
                  v75 = 0;
                  if ( *(_DWORD *)(v68 + 20) )
                    break;
                  v76 = *(_DWORD *)(v68 + 56);
                  v77 = 0LL;
                  if ( v76 )
                  {
                    do
                    {
                      v78 = *(unsigned int *)(v68 + 4 * v77 + 120);
                      if ( (unsigned int)v78 >= 0x80 )
                      {
                        v79 = *(unsigned int *)(v68 + 16);
                        if ( (unsigned int)v78 < (unsigned int)v79 )
                        {
                          v80 = (unsigned int)v78;
                          v81 = *(_DWORD *)(v78 + v68) - 64;
                          if ( v81 )
                          {
                            v82 = v81 - 1;
                            if ( v82 )
                            {
                              if ( v82 == 1 && v80 + 40 <= v79 )
                              {
                                if ( *(_DWORD *)(v80 + v68 + 12) )
                                  v74 = (char *)(v80 + v68 + 32);
                                v71 = *(_BYTE **)(v80 + v68 + 24);
LABEL_97:
                                v83 = *(_BYTE *)(v80 + v68 + 8);
                                v72 = *(_BYTE *)(v80 + v68 + 9);
                                goto LABEL_106;
                              }
                            }
                            else if ( v80 + 56 <= v79 )
                            {
                              v75 = 1;
                              if ( *(_BYTE *)(v80 + v68 + 10) )
                                v74 = (char *)(v80 + v68 + 24);
                              v71 = *(_BYTE **)(v80 + v68 + 16);
                              v72 = *(_BYTE *)(v80 + v68 + 9);
                              v109 = *(_BYTE *)(v80 + v68 + 8);
                            }
                          }
                          else if ( v80 + 40 <= v79 )
                          {
                            if ( *(_BYTE *)(v80 + v68 + 10) )
                              v74 = (char *)(v80 + v68 + 24);
                            v71 = *(_BYTE **)(v80 + v68 + 16);
                            goto LABEL_97;
                          }
                          if ( v75 )
                            break;
                        }
                      }
                      v77 = (unsigned int)(v77 + 1);
                    }
                    while ( (unsigned int)v77 < v76 );
                    v83 = v109;
                  }
                  else
                  {
                    v83 = 0;
                  }
LABEL_106:
                  if ( !v74 )
                    break;
                  v84 = *v74;
                  v69 = 0;
                  v70 = 0;
                }
                else
                {
                  v84 = *(_BYTE *)(v68 + 72);
                  v71 = *(_BYTE **)(v68 + 32);
                  v72 = *(_BYTE *)(v68 + 11);
                  v83 = *(_BYTE *)(v68 + 4);
                  if ( *(_BYTE *)(v68 + 2) )
                    break;
                }
                if ( ((v84 - 8) & 0x5D) == 0 )
                {
                  if ( *(_BYTE *)(v68 + 3) == 1 || !v71 || !v72 )
                    goto LABEL_133;
                  v85 = 0;
                  v86 = &v71[v72];
                  v87 = v71 + 8;
                  if ( (unsigned __int8)((*v71 & 0x7F) - 114) <= 1u )
                  {
                    if ( v87 <= v86 )
                    {
                      v85 = 1;
                      v69 = v71[2];
                      v73 = v71[1] & 0xF;
                      v70 = v71[3];
                    }
                  }
                  else
                  {
                    if ( v87 <= v86 )
                    {
                      v88 = v71 + 13;
                      v73 = v71[2] & 0xF;
                      v89 = v72;
                      if ( (unsigned int)(unsigned __int8)v71[7] + 8 <= v72 )
                        v89 = (unsigned __int8)v71[7] + 8;
                      v90 = (unsigned __int64)&v71[v89];
                      if ( (unsigned __int64)v88 > v90 )
                        v91 = 0;
                      else
                        v91 = v71[12];
                      v107 = v91;
                      if ( (unsigned __int64)(v71 + 14) > v90 )
                        v92 = 0;
                      else
                        v92 = *v88;
                      v110 = v92;
                      v85 = 1;
                    }
                    v70 = v110;
                    v69 = v107;
                  }
                  if ( v85 )
                  {
                    v93 = v69;
                    v94 = v70;
                  }
                  else
                  {
LABEL_133:
                    v73 = 0;
                    v93 = 0;
                    v94 = 0LL;
                  }
                  v106 = v30;
                  LOBYTE(v105) = v94;
                  LOBYTE(v104) = v93;
                  v95 = *(_BYTE *)(v68 + 3);
                  LOBYTE(v103) = v73;
                  LOBYTE(v102) = v83;
                  LOBYTE(v101) = v95;
                  LODWORD(v100) = *(_DWORD *)(v30 + 48);
                  McTemplateK0pduuuuup_EtwWriteTransfer(v94, v68, &v123, v30, v100, v101, v102, v103, v104, v105, v30);
                }
              }
              break;
            case 0x1B:
              if ( *(_BYTE *)(v64 + 1) == 7 && !*(_DWORD *)(v64 + 8) )
              {
                if ( (byte_140171462 & 0x40) != 0 )
                {
                  v65 = *(unsigned int **)(v30 + 56);
                  if ( v65 )
                    v66 = *v65;
                  else
                    v66 = 0LL;
                  LODWORD(v101) = *(_DWORD *)(v30 + 48);
                  LODWORD(v100) = v66;
                  McTemplateK0pqd_EtwWriteTransfer(v66, v64, &v123, v30, v100, v101);
                }
                break;
              }
              if ( (byte_140171462 & 0x20) != 0 )
              {
                v67 = &EventPnpRequestComplete;
LABEL_137:
                LODWORD(v100) = *(_DWORD *)(v30 + 48);
                McTemplateK0pd_EtwWriteTransfer(v63, v67, &v123, v30, v100);
              }
              break;
          }
LABEL_138:
          IofCompleteRequest((PIRP)v30, 0);
          Namespace = v119;
LABEL_139:
          v14 = v116;
          goto LABEL_140;
        }
        if ( *(char *)(v37 + v35 + 60) >= 0 )
        {
          if ( (*(_BYTE *)((v14 << 7) + *(_QWORD *)(a1 + 32) + 60) & 2) == 0 )
          {
LABEL_58:
            v40 = v113;
            goto LABEL_59;
          }
        }
        else if ( *(_QWORD *)(v32 + 8) == 0xFEDCBA9000000000uLL )
        {
          v52 = *(_QWORD *)(v32 + 24);
          v53 = *(_QWORD *)(v52 + 24);
          if ( v53 )
          {
            v54 = *(_BYTE *)(v52 + 126);
            v55 = *(_QWORD *)(v4 + 128);
            v56 = KfRaiseIrql(2u);
            LOBYTE(v57) = (v54 & 1) == 0;
            (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(v55 + 1144) + 8LL) + 96LL))(
              *(_QWORD *)(v55 + 1144),
              v53,
              v57);
            if ( v56 < 2u )
              KeLowerIrql(v56);
            Namespace = v119;
          }
          if ( v113 < 0 )
            v58 = 0LL;
          else
            v58 = *(unsigned int *)(v52 + 116);
          LOBYTE(v36) = 1;
          *(_QWORD *)(v30 + 56) = v58;
          FreeNVMeSGLBufferContext(v4, v52, v36);
          v14 = v116;
          goto LABEL_58;
        }
      }
LABEL_140:
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(a1 + 64),
        (PSLIST_ENTRY)(*(_QWORD *)(a1 + 32) + ((unsigned __int64)v114 << 7)));
      v12 = 0;
      goto LABEL_141;
    }
    v25 = v108;
LABEL_145:
    ++v13;
    ++v14;
    v114 = v13;
    v116 = v14;
  }
  while ( v13 < v120 );
  if ( v25 )
  {
    Interval.QuadPart = -10000000LL;
    LOBYTE(v11) = KeDelayExecutionThread(0, 0, &Interval);
    v12 = 0;
  }
LABEL_148:
  for ( i = 0; i < *(_DWORD *)(a1 + 124); *(_WORD *)(v11 + 8 * v97 + 8) = -1 )
  {
    v97 = i++;
    v97 *= 2LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v97) = 0LL;
    v11 = *(_QWORD *)(a1 + 24);
  }
  *(_DWORD *)(a1 + 140) = 0;
  v9 = FeatureFixTRIMAddSCSIPassthrough == 0;
  *(_WORD *)(a1 + 148) = 0;
  if ( v9 )
  {
    if ( !v111 && v6 != -1073740534 )
      goto LABEL_157;
  }
  else
  {
    if ( v111 || (LOBYTE(v11) = IsNvmeControllerGone(v4), (_BYTE)v11) || v6 == -1073740534 )
      LOBYTE(v3) = v12;
LABEL_157:
    if ( (_BYTE)v3 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(v4 + 948), 1u);
      LOBYTE(v11) = NvmeControllerRestart(v4);
    }
  }
  *(_QWORD *)(a1 + 112) &= ~4uLL;
  return v11;
}
