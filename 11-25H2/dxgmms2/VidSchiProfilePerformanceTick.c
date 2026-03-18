/*
 * XREFs of VidSchiProfilePerformanceTick @ 0x1400211F0
 * Callers:
 *     VidSchiSubmitCommandPacketToQueue @ 0x140004B80 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiProcessIsrPreemptedPacket @ 0x14000504C (VidSchiProcessIsrPreemptedPacket.c)
 *     VidSchiProcessIsrCompletedPacket @ 0x140005250 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1400090A0 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140011180 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x14001CD20 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x14001F0E0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiReadCommandFromContextQueue @ 0x140020C70 (VidSchiReadCommandFromContextQueue.c)
 *     VidSchiSelectContext @ 0x140020E50 (VidSchiSelectContext.c)
 *     VidSchiSendToExecutionQueue @ 0x140022AC0 (VidSchiSendToExecutionQueue.c)
 *     VidSchiScheduleCommandToRun @ 0x140023BF0 (VidSchiScheduleCommandToRun.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x140024534 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchiSwitchContextWithCheck @ 0x140024800 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiCheckPreemptionPolicy @ 0x140024FC0 (VidSchiCheckPreemptionPolicy.c)
 *     VidSchiSwitchContext @ 0x14002A380 (VidSchiSwitchContext.c)
 *     VidSchiNeedToForcePreemptNode @ 0x140031564 (VidSchiNeedToForcePreemptNode.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x140047F6C (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1400483F0 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiSubmitCommandPacketToQueueDirectSubmitAware @ 0x140048BCC (VidSchiSubmitCommandPacketToQueueDirectSubmitAware.c)
 *     VidSchiProcessIsrFaultedPacket @ 0x1400500C4 (VidSchiProcessIsrFaultedPacket.c)
 *     VidSchiSubmitQueueCommandDirect @ 0x1400504CC (VidSchiSubmitQueueCommandDirect.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x1401057E8 (VidSchiWaitForDrainFlipQueue.c)
 *     VidSchiWaitForCompletePreemption @ 0x140107440 (VidSchiWaitForCompletePreemption.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x140112850 (VidSchiWaitForEmptyHwQueue.c)
 *     VidSchiWaitForSchedulerEvents @ 0x140115870 (VidSchiWaitForSchedulerEvents.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pqqqPR3XR3pPR3_EtwWriteTransfer @ 0x1400184B8 (McTemplateK0pqqqPR3XR3pPR3_EtwWriteTransfer.c)
 *     McTemplateK0ppqqqPR4PR4_EtwWriteTransfer @ 0x1400185A0 (McTemplateK0ppqqqPR4PR4_EtwWriteTransfer.c)
 *     McTemplateK0pqqttp_EtwWriteTransfer @ 0x140018670 (McTemplateK0pqqttp_EtwWriteTransfer.c)
 *     McTemplateK0pqqxqqtppx_EtwWriteTransfer @ 0x140018734 (McTemplateK0pqqxqqtppx_EtwWriteTransfer.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140018FD8 (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140019050 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pqIR1_EtwWriteTransfer @ 0x140028FE0 (McTemplateK0pqIR1_EtwWriteTransfer.c)
 *     McTemplateK0ppqxqpq_EtwWriteTransfer @ 0x14003C3A4 (McTemplateK0ppqxqpq_EtwWriteTransfer.c)
 *     McTemplateK0pqxqqqxqp_EtwWriteTransfer @ 0x14003DF20 (McTemplateK0pqxqqqxqp_EtwWriteTransfer.c)
 *     McTemplateK0pqqpxpp_EtwWriteTransfer @ 0x14003E064 (McTemplateK0pqqpxpp_EtwWriteTransfer.c)
 *     McTemplateK0pqxqt_EtwWriteTransfer @ 0x14003E3C4 (McTemplateK0pqxqt_EtwWriteTransfer.c)
 *     McTemplateK0pqqPR2p_EtwWriteTransfer @ 0x14003F258 (McTemplateK0pqqPR2p_EtwWriteTransfer.c)
 *     McTemplateK0qpqdqPR4XR4p_EtwWriteTransfer @ 0x1400444DC (McTemplateK0qpqdqPR4XR4p_EtwWriteTransfer.c)
 *     McTemplateK0qtpiixi_EtwWriteTransfer @ 0x1400468E4 (McTemplateK0qtpiixi_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     memset @ 0x140056780 (memset.c)
 */

void __fastcall VidSchiProfilePerformanceTick(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // r14
  int v11; // r13d
  int v12; // edi
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // ecx
  int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 *v28; // r14
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 *v34; // r14
  __int64 v35; // rcx
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  _BYTE *Pool2; // rcx
  __int64 v50; // r10
  unsigned int v51; // r8d
  unsigned int v52; // edx
  __int64 v53; // r9
  int v54; // ecx
  __int64 v55; // rax
  __int64 v56; // r10
  __int64 v57; // rcx
  __int64 v58; // r9
  __int64 v59; // rcx
  __int64 *v60; // r14
  __int64 v61; // rcx
  unsigned int v62; // r8d
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rdx
  __int64 v70; // r9
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // r8
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // rcx
  int v78; // eax
  __int64 v79; // r9
  int v80; // r9d
  __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // r8
  int v84; // r9d
  __int64 v85; // r10
  int v86; // ecx
  __int64 v87; // r11
  __int64 v88; // rdx
  char v89; // al
  __int64 v90; // rax
  __int64 v91; // r10
  __int64 v92; // rcx
  __int64 v93; // r9
  __int64 v94; // rcx
  __int64 *v95; // r14
  __int64 v96; // rax
  __int64 v97; // r9
  __int64 v98; // r10
  __int64 v99; // rcx
  __int64 v100; // r9
  __int64 v101; // rcx
  __int64 *v102; // r14
  __int64 v103; // rax
  void (__fastcall *v104)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v105; // r10
  __int64 v106; // rcx
  __int64 v107; // r9
  __int64 v108; // rcx
  __int64 *v109; // r14
  __int64 v110; // rax
  int v111; // [rsp+70h] [rbp-89h]
  int v112; // [rsp+70h] [rbp-89h]
  int v113; // [rsp+70h] [rbp-89h]
  int v114; // [rsp+70h] [rbp-89h]
  __int64 v116; // [rsp+78h] [rbp-81h]
  char *v117; // [rsp+80h] [rbp-79h]
  _BYTE *v118; // [rsp+88h] [rbp-71h]
  __int64 v119; // [rsp+88h] [rbp-71h]
  _BYTE *v120; // [rsp+98h] [rbp-61h]
  _BYTE v121[16]; // [rsp+A0h] [rbp-59h] BYREF
  int v122; // [rsp+B0h] [rbp-49h]
  PVOID P; // [rsp+B8h] [rbp-41h]
  _BYTE v124[16]; // [rsp+C0h] [rbp-39h] BYREF
  int v125; // [rsp+D0h] [rbp-29h]
  PVOID v126; // [rsp+D8h] [rbp-21h]
  _BYTE v127[16]; // [rsp+E0h] [rbp-19h] BYREF
  int v128; // [rsp+F0h] [rbp-9h]

  v9 = 0LL;
  v11 = a8;
  v12 = a1;
  if ( !bTracingEnabled )
    goto LABEL_2;
  if ( a1 == 4 )
  {
    v19 = *(_DWORD *)(a6 + 48);
    if ( v19 != 5 )
    {
      switch ( v19 )
      {
        case 0:
          if ( (*(_DWORD *)(a6 + 72) & 0x4000) != 0 && byte_140081243 < 0 )
            McTemplateK0pqq_EtwWriteTransfer();
          if ( (byte_140081241 & 1) != 0 )
            McTemplateK0pqqxqqtppx_EtwWriteTransfer();
          v20 = *(_DWORD *)(a6 + 952);
          if ( v20 && (byte_140081241 & 0x20) != 0 )
          {
            v21 = *(_QWORD *)(a6 + 88);
            if ( v21 )
            {
              v22 = *(_QWORD *)(v21 + 56);
              if ( !v22 || (*(_DWORD *)(v21 + 112) & 0x40) != 0 )
                v22 = *(_QWORD *)(a6 + 88);
            }
            else
            {
              v22 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
              if ( !v22 )
                v22 = *(_QWORD *)(a6 + 96);
            }
            McTemplateK0pqqPR2p_EtwWriteTransfer(v20, v21, a6 + 960, v22, *(_DWORD *)(a6 + 112), v20, a6 + 960, a6);
          }
          goto LABEL_2;
        case 3:
          goto LABEL_77;
        case 4:
          v67 = *(_QWORD *)(a6 + 760);
          if ( (byte_140081241 & 1) != 0 )
          {
            if ( v67 )
              v68 = *(_QWORD *)(v67 + 16);
            else
              LODWORD(v68) = 0;
            v69 = *(_QWORD *)(a6 + 88);
            if ( v69 )
            {
              v70 = *(_QWORD *)(v69 + 56);
              if ( !v70 || (*(_DWORD *)(v69 + 112) & 0x40) != 0 )
                v70 = *(_QWORD *)(a6 + 88);
            }
            else
            {
              v70 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
              if ( !v70 )
                v70 = *(_QWORD *)(a6 + 96);
            }
            McTemplateK0pqqpxpp_EtwWriteTransfer(
              v67,
              v69,
              v68,
              v70,
              *(_DWORD *)(a6 + 112),
              *(_DWORD *)(a6 + 752),
              v67,
              *(_QWORD *)(a6 + 800),
              a6,
              v68);
          }
          goto LABEL_2;
        case 7:
LABEL_77:
          if ( byte_140081243 < 0 )
            McTemplateK0pqq_EtwWriteTransfer();
          break;
      }
      if ( (byte_140081241 & 1) != 0 )
        McTemplateK0pqqxqqtppx_EtwWriteTransfer();
      goto LABEL_2;
    }
    v40 = *(unsigned int *)(a6 + 756);
    P = 0LL;
    v125 = 0;
    v111 = v40;
    if ( (unsigned int)v40 <= 2 )
    {
      P = v124;
      if ( !(_DWORD)v40 )
      {
LABEL_93:
        v117 = (char *)P;
        v125 = v40;
        goto LABEL_94;
      }
      memset(v124, 0, 8 * v40);
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v40 < 8 )
      {
        v117 = 0LL;
LABEL_94:
        v47 = *(unsigned int *)(a6 + 756);
        v120 = 0LL;
        v122 = 0;
        v112 = v47;
        if ( (unsigned int)v47 <= 2 )
        {
          v120 = v121;
          if ( !(_DWORD)v47 )
          {
LABEL_100:
            v118 = v120;
            v122 = v47;
            goto LABEL_101;
          }
          memset(v121, 0, 8 * v47);
        }
        else
        {
          if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v47 < 8 )
          {
            v118 = 0LL;
LABEL_101:
            v48 = *(unsigned int *)(a6 + 756);
            Pool2 = 0LL;
            v126 = 0LL;
            v128 = 0;
            v113 = v48;
            if ( (unsigned int)v48 > 2 )
            {
              if ( 0xFFFFFFFFFFFFFFFFuLL / v48 < 8 )
              {
                v50 = 0LL;
LABEL_106:
                if ( v117 && v118 && v50 )
                {
                  v51 = *(_DWORD *)(a6 + 756);
                  v52 = 0;
                  if ( v51 )
                  {
                    do
                    {
                      v53 = 8LL * v52;
                      *(_QWORD *)&v117[v53] = *(_QWORD *)(a6 + v53 + 760);
                      *(_QWORD *)&v118[v53] = *(_QWORD *)(*(_QWORD *)(a6 + v53 + 760) + 16LL);
                      v54 = *(_DWORD *)(*(_QWORD *)(a6 + v53 + 760) + 48LL);
                      if ( v54 == 2 || (unsigned int)(v54 - 4) < 2 )
                        v55 = *(_QWORD *)(a6 + 8LL * v52 + 1016);
                      else
                        v55 = 0LL;
                      *(_QWORD *)(v53 + v50) = v55;
                      ++v52;
                      v51 = *(_DWORD *)(a6 + 756);
                    }
                    while ( v52 < v51 );
                    Pool2 = v126;
                    v12 = a1;
                  }
                  if ( byte_140081243 < 0 )
                  {
                    v80 = *(_DWORD *)(a6 + 752);
                    if ( (((unsigned __int8)byte_140081243 >> 7) & ((v80 & 0x10) != 0)) != 0 )
                    {
                      v81 = *(_QWORD *)(a6 + 88);
                      if ( v81 )
                      {
                        v82 = *(_QWORD *)(v81 + 56);
                        if ( !v82 || (*(_DWORD *)(v81 + 112) & 0x40) != 0 )
                          v82 = *(_QWORD *)(a6 + 88);
                      }
                      else
                      {
                        v82 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
                        if ( !v82 )
                          v82 = *(_QWORD *)(a6 + 96);
                      }
                      McTemplateK0qpqdqPR4XR4p_EtwWriteTransfer(
                        v81,
                        v82,
                        v51,
                        0,
                        v82,
                        *(_DWORD *)(a6 + 112),
                        v80,
                        v51,
                        (__int64)v117,
                        v50,
                        a6);
                      Pool2 = v126;
                    }
                  }
                  if ( (byte_140081241 & 1) != 0 )
                  {
                    McTemplateK0pqqqPR3XR3pPR3_EtwWriteTransfer();
                    Pool2 = v126;
                  }
                }
                if ( Pool2 != v127 && Pool2 )
                  ExFreePoolWithTag(Pool2, 0);
                v126 = 0LL;
                v128 = 0;
                if ( v120 != v121 && v120 )
                  ExFreePoolWithTag(v120, 0);
                v122 = 0;
                if ( P != v124 && P )
                  ExFreePoolWithTag(P, 0);
                goto LABEL_2;
              }
              Pool2 = (_BYTE *)ExAllocatePool2(64LL, 8 * v48, 945908054LL);
              v126 = Pool2;
            }
            else
            {
              Pool2 = v127;
              v126 = v127;
              if ( !(_DWORD)v48 )
              {
LABEL_105:
                v128 = v48;
                v50 = (__int64)Pool2;
                goto LABEL_106;
              }
              memset(v127, 0, 8LL * (unsigned int)v48);
              Pool2 = v126;
            }
            LODWORD(v48) = v113;
            goto LABEL_105;
          }
          v120 = (_BYTE *)ExAllocatePool2(64LL, 8LL * (unsigned int)v47, 945908054LL);
        }
        LODWORD(v47) = v112;
        goto LABEL_100;
      }
      P = (PVOID)ExAllocatePool2(64LL, 8LL * (unsigned int)v40, 945908054LL);
    }
    LODWORD(v40) = v111;
    goto LABEL_93;
  }
  if ( a1 == 5 )
  {
    if ( (byte_140081241 & 1) != 0 )
      McTemplateK0pqq_EtwWriteTransfer();
  }
  else
  {
    switch ( a1 )
    {
      case 1:
        if ( (byte_140081241 & 1) != 0 )
          goto LABEL_225;
        break;
      case 2:
        if ( (byte_140081241 & 2) != 0 )
          McTemplateK0ppqqqPR4PR4_EtwWriteTransfer();
        break;
      case 7:
        v119 = 0LL;
        if ( *(_DWORD *)(a7 + 88) == 1 )
        {
          v96 = *(_QWORD *)(a7 + 56);
          if ( v96 )
          {
            if ( *(_DWORD *)(v96 + 48) == 8 )
              v119 = *(_QWORD *)(v96 + 88);
          }
        }
        v61 = *(_QWORD *)(a7 + 48);
        v116 = v61;
        v62 = *(_DWORD *)(v61 + 984);
        if ( v62 >= 0x80 )
        {
          v63 = *(_QWORD *)(v61 + 992);
          if ( v63 )
          {
            if ( (byte_140081242 & 8) != 0 )
            {
              v97 = *(_QWORD *)(v61 + 56);
              if ( !v97 || (*(_DWORD *)(v61 + 112) & 0x40) != 0 )
                LODWORD(v97) = *(_QWORD *)(a7 + 48);
              McTemplateK0pqIR1_EtwWriteTransfer(v61, v63, v62, v97, v62, *(_QWORD *)(v61 + 992));
              v61 = v116;
            }
            *(_DWORD *)(v61 + 984) = 0;
          }
        }
        if ( *(_QWORD *)(v61 + 992)
          || (v103 = ExAllocatePool2(64LL, 1024LL, 1633773910LL), (*(_QWORD *)(v116 + 992) = v103) != 0LL) )
        {
          *(LARGE_INTEGER *)(*(_QWORD *)(v116 + 992) + 8LL * (unsigned int)(*(_DWORD *)(v116 + 984))++) = KeQueryPerformanceCounter(0LL);
        }
        else
        {
          WdLogSingleEntry0(1LL);
          v104 = (void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88];
          WdLogGlobalForLineNumber = 462;
          v104(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Failed to allocate GpuWorkRecords for long haul logging",
            462LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( (byte_140081241 & 1) != 0 )
        {
          v64 = *(_QWORD *)(a7 + 48);
          if ( v119 )
          {
            v65 = *(_QWORD *)(v119 + 56);
            if ( !v65 || (*(_DWORD *)(v119 + 112) & 0x40) != 0 )
              LODWORD(v65) = v119;
          }
          else
          {
            LODWORD(v65) = 0;
          }
          v66 = *(_QWORD *)(v64 + 56);
          if ( !v66 || (*(_DWORD *)(v64 + 112) & 0x40) != 0 )
            LODWORD(v66) = *(_QWORD *)(a7 + 48);
          McTemplateK0ppqxqpq_EtwWriteTransfer(
            v119,
            v64,
            v65,
            v66,
            v65,
            *(_DWORD *)(a7 + 88),
            *(_QWORD *)(a7 + 104),
            *(_DWORD *)(a7 + 96),
            *(_QWORD *)(a7 + 64),
            *(_DWORD *)(v64 + 436));
        }
        break;
      case 8:
      case 10:
      case 12:
        LODWORD(v83) = 0;
        LOBYTE(v84) = 0;
        LOBYTE(v85) = 0;
        v86 = 0;
        switch ( v12 )
        {
          case 8:
            v86 = 1;
            break;
          case 10:
            v86 = 2;
            break;
          case 12:
            v83 = *(_QWORD *)(a8 + 40);
            v86 = 9;
            v84 = *(_DWORD *)(a8 + 32);
            v85 = *(_QWORD *)(a8 + 64);
            break;
        }
        if ( (byte_140081241 & 1) != 0 )
        {
          v87 = *(_QWORD *)(a7 + 48);
          v114 = *(_DWORD *)(v87 + 436);
          v88 = *(_QWORD *)(v87 + 56);
          v89 = v114;
          if ( !v88 || (v89 = v114, (*(_DWORD *)(v87 + 112) & 0x40) != 0) )
            LODWORD(v88) = *(_QWORD *)(a7 + 48);
          McTemplateK0pqxqqqxqp_EtwWriteTransfer(
            v86,
            v88,
            v83,
            v88,
            *(_DWORD *)(a7 + 88),
            *(_QWORD *)(a7 + 104),
            *(_DWORD *)(a7 + 96),
            v86,
            v89,
            v83,
            v84,
            v85);
        }
        break;
      case 9:
      case 11:
      case 13:
        if ( a7 )
        {
          if ( (byte_140081241 & 1) != 0 )
          {
            v77 = *(_QWORD *)(a7 + 48);
            v78 = *(_DWORD *)(a7 + 88);
            v79 = *(_QWORD *)(v77 + 56);
            if ( !v79 || (*(_DWORD *)(v77 + 112) & 0x40) != 0 )
              LODWORD(v79) = *(_QWORD *)(a7 + 48);
            McTemplateK0pqxqt_EtwWriteTransfer(
              v77,
              a7,
              v12 == 11,
              v79,
              v78,
              *(_QWORD *)(a7 + 104),
              *(_DWORD *)(a7 + 96),
              v12 == 11);
          }
          break;
        }
        if ( !a6 )
          break;
        v13 = *(unsigned int *)(a6 + 48);
        if ( (_DWORD)v13 == 4 && v12 == 9 )
        {
          if ( (byte_140081241 & 1) == 0 )
            goto LABEL_14;
          v75 = *(_QWORD *)(a6 + 88);
          v76 = *(unsigned int *)(a6 + 112);
          v13 = (*(_DWORD *)(a6 + 752) >> 1) & 1;
        }
        else
        {
          if ( (byte_140081241 & 1) == 0 )
            goto LABEL_14;
          v75 = *(_QWORD *)(a6 + 88);
          v76 = v12 == 11;
        }
        McTemplateK0pqqttp_EtwWriteTransfer(v13, v75, v76);
LABEL_14:
        v14 = *(_DWORD *)(a6 + 48);
        if ( v14 )
        {
          if ( ((v14 - 3) & 0xFFFFFFFB) != 0 )
            break;
        }
        else if ( (*(_DWORD *)(a6 + 72) & 0x4000) == 0 )
        {
          break;
        }
        if ( byte_140081243 < 0 )
          McTemplateK0q_EtwWriteTransfer();
        break;
      case 14:
        if ( (byte_140081241 & 1) != 0 )
          goto LABEL_225;
        break;
      case 15:
        if ( (byte_140081241 & 1) != 0 )
          goto LABEL_225;
        break;
      case 16:
        if ( (byte_140081241 & 1) != 0 )
          goto LABEL_225;
        break;
      case 17:
        if ( (byte_140081241 & 1) != 0 )
          goto LABEL_225;
        break;
      case 18:
        if ( (byte_140081241 & 1) != 0 )
          goto LABEL_225;
        break;
      case 19:
        if ( (byte_140081241 & 1) != 0 )
LABEL_225:
          McTemplateK0pq_EtwWriteTransfer();
        break;
      case 20:
        if ( (*(_DWORD *)(a2 + 2792) & 8) != 0 && !gulPriorityToYieldPriorityBand[*(unsigned int *)(a5 + 404)] )
        {
          v45 = *(_QWORD *)(a5 + 440);
          if ( v45 <= 0 && (byte_140081241 & 1) != 0 )
          {
            v46 = *(_QWORD *)(a5 + 56);
            if ( !v46 || (*(_DWORD *)(a5 + 112) & 0x40) != 0 )
              LODWORD(v46) = a5;
            McTemplateK0qtpiixi_EtwWriteTransfer(
              v46,
              v45,
              *(_QWORD *)(a5 + 448),
              *(unsigned __int16 *)(a3 + 4),
              a8 != 0,
              v46,
              *(_QWORD *)(a5 + 472),
              v45,
              *(_QWORD *)(a5 + 464),
              *(_QWORD *)(a5 + 448));
          }
        }
        break;
      default:
        break;
    }
  }
LABEL_2:
  if ( *(int *)(a2 + 6704) >= 1 )
  {
    if ( v12 == 1 )
    {
      if ( (int)a8 < 0 )
      {
        v11 = -(int)a8;
      }
      else if ( (int)a8 >= 16 )
      {
        v11 = 1;
      }
      ++*(_DWORD *)(a3 + 2788);
      ++*(_DWORD *)(a3 + 4LL * v11 + 2788);
      v35 = *(_QWORD *)(a5 + 96);
      if ( (*(_DWORD *)(v35 + 12) & 0x40) != 0 )
      {
        ++MEMORY[0xC];
        ++*(_DWORD *)(4LL * v11 + 0xC);
      }
      else
      {
        v36 = *(unsigned __int16 *)(v35 + 4);
        v37 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a5 + 104) + 40LL) + 32LL)
                        + 8LL * *(unsigned int *)(*(_QWORD *)(v35 + 24) + 4LL));
        v38 = *(__int64 **)(v37 + 8);
        if ( (unsigned int)v36 < *(_DWORD *)(v37 + 80) )
          v38 += v36;
        v39 = *v38;
        ++*(_DWORD *)(v39 + 12);
        ++*(_DWORD *)(v39 + 4LL * v11 + 12);
      }
    }
    else if ( v12 == 3 )
    {
      ++*(_DWORD *)(a3 + 2784);
      v15 = *(_QWORD *)(a5 + 96);
      if ( (*(_DWORD *)(v15 + 12) & 0x40) == 0 )
      {
        v16 = *(unsigned __int16 *)(v15 + 4);
        v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a5 + 104) + 40LL) + 32LL)
                        + 8LL * *(unsigned int *)(*(_QWORD *)(v15 + 24) + 4LL));
        v18 = *(_QWORD *)(v17 + 8);
        if ( (unsigned int)v16 < *(_DWORD *)(v17 + 80) )
          v18 += 8 * v16;
        if ( *(_QWORD *)v18 )
          ++*(_DWORD *)(*(_QWORD *)v18 + 8LL);
      }
    }
  }
  if ( *(int *)(a2 + 6704) >= 2 )
  {
    if ( v12 != 4 )
    {
      switch ( v12 )
      {
        case 7:
          ++*(_DWORD *)(a3 + 16LL * *(int *)(a7 + 88) + 2924);
          v56 = *(_QWORD *)(a7 + 48);
          v57 = *(_QWORD *)(v56 + 96);
          if ( (*(_DWORD *)(v57 + 12) & 0x40) == 0 )
          {
            v58 = *(unsigned __int16 *)(v57 + 4);
            v59 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v56 + 104) + 40LL) + 32LL)
                            + 8LL * *(unsigned int *)(*(_QWORD *)(v57 + 24) + 4LL));
            v60 = *(__int64 **)(v59 + 8);
            if ( (unsigned int)v58 < *(_DWORD *)(v59 + 80) )
              v60 += v58;
            v9 = *v60;
          }
          ++*(_DWORD *)(v9 + 16LL * *(int *)(a7 + 88) + 148);
          return;
        case 8:
          v90 = 2 * (*(int *)(a7 + 88) + 183LL);
          ++*(_DWORD *)(a3 + 8 * v90);
          v91 = *(_QWORD *)(a7 + 48);
          v92 = *(_QWORD *)(v91 + 96);
          if ( (*(_DWORD *)(v92 + 12) & 0x40) == 0 )
          {
            v93 = *(unsigned __int16 *)(v92 + 4);
            v94 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v91 + 104) + 40LL) + 32LL)
                            + 8LL * *(unsigned int *)(*(_QWORD *)(v92 + 24) + 4LL));
            v95 = *(__int64 **)(v94 + 8);
            if ( (unsigned int)v93 < *(_DWORD *)(v94 + 80) )
              v95 += v93;
            v9 = *v95;
          }
          ++*(_DWORD *)(v9 + 16LL * *(int *)(a7 + 88) + 152);
          return;
        case 9:
        case 11:
        case 13:
          if ( !a6 )
            return;
          ++*(_DWORD *)(a3 + 8LL * *(int *)(a6 + 48) + 2856);
          v29 = *(_QWORD *)(a6 + 96);
          if ( v29 )
          {
            v71 = *(_QWORD *)(v29 + 40);
            v72 = *(_QWORD *)(v71 + 16);
            v73 = *(unsigned __int16 *)(v72 + 4);
            v74 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v71 + 8) + 40LL) + 32LL)
                            + 8LL * *(unsigned int *)(*(_QWORD *)(v72 + 24) + 4LL));
            if ( !v74 )
            {
LABEL_51:
              if ( v9 )
                ++*(_DWORD *)(v9 + 8LL * *(int *)(a6 + 48) + 80);
              return;
            }
            v34 = *(__int64 **)(v74 + 8);
            if ( (unsigned int)v73 < *(_DWORD *)(v74 + 80) )
              v34 += v73;
          }
          else
          {
            v30 = *(_QWORD *)(a6 + 88);
            v31 = *(_QWORD *)(v30 + 96);
            if ( (*(_DWORD *)(v31 + 12) & 0x40) != 0 )
              goto LABEL_51;
            v32 = *(unsigned __int16 *)(v31 + 4);
            v33 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v30 + 104) + 40LL) + 32LL)
                            + 8LL * *(unsigned int *)(*(_QWORD *)(v31 + 24) + 4LL));
            v34 = *(__int64 **)(v33 + 8);
            if ( (unsigned int)v32 < *(_DWORD *)(v33 + 80) )
              v34 += v32;
          }
          v9 = *v34;
          goto LABEL_51;
        case 10:
          ++*(_DWORD *)(a3 + 16LL * *(int *)(a7 + 88) + 2932);
          v98 = *(_QWORD *)(a7 + 48);
          v99 = *(_QWORD *)(v98 + 96);
          if ( (*(_DWORD *)(v99 + 12) & 0x40) == 0 )
          {
            v100 = *(unsigned __int16 *)(v99 + 4);
            v101 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v98 + 104) + 40LL) + 32LL)
                             + 8LL * *(unsigned int *)(*(_QWORD *)(v99 + 24) + 4LL));
            v102 = *(__int64 **)(v101 + 8);
            if ( (unsigned int)v100 < *(_DWORD *)(v101 + 80) )
              v102 += v100;
            v9 = *v102;
          }
          ++*(_DWORD *)(v9 + 16LL * *(int *)(a7 + 88) + 156);
          return;
        case 12:
          ++*(_DWORD *)(a3 + 16LL * *(int *)(a7 + 88) + 2936);
          v105 = *(_QWORD *)(a7 + 48);
          v106 = *(_QWORD *)(v105 + 96);
          if ( (*(_DWORD *)(v106 + 12) & 0x40) == 0 )
          {
            v107 = *(unsigned __int16 *)(v106 + 4);
            v108 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v105 + 104) + 40LL) + 32LL)
                             + 8LL * *(unsigned int *)(*(_QWORD *)(v106 + 24) + 4LL));
            v109 = *(__int64 **)(v108 + 8);
            if ( (unsigned int)v107 < *(_DWORD *)(v108 + 80) )
              v109 += v107;
            v9 = *v109;
          }
          v110 = 2 * (*(int *)(a7 + 88) + 10LL);
          ++*(_DWORD *)(v9 + 8 * v110);
          return;
        default:
          return;
      }
    }
    ++*(_DWORD *)(a3 + 8LL * *(int *)(a6 + 48) + 2852);
    v23 = *(_QWORD *)(a6 + 96);
    if ( v23 )
    {
      v41 = *(_QWORD *)(v23 + 40);
      v42 = *(_QWORD *)(v41 + 16);
      v43 = *(unsigned __int16 *)(v42 + 4);
      v44 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v41 + 8) + 40LL) + 32LL)
                      + 8LL * *(unsigned int *)(*(_QWORD *)(v42 + 24) + 4LL));
      if ( !v44 )
      {
LABEL_41:
        if ( v9 )
          ++*(_DWORD *)(v9 + 8LL * *(int *)(a6 + 48) + 76);
        return;
      }
      v28 = *(__int64 **)(v44 + 8);
      if ( (unsigned int)v43 < *(_DWORD *)(v44 + 80) )
        v28 += v43;
    }
    else
    {
      v24 = *(_QWORD *)(a6 + 88);
      v25 = *(_QWORD *)(v24 + 96);
      if ( (*(_DWORD *)(v25 + 12) & 0x40) != 0 )
        goto LABEL_41;
      v26 = *(unsigned __int16 *)(v25 + 4);
      v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 104) + 40LL) + 32LL)
                      + 8LL * *(unsigned int *)(*(_QWORD *)(v25 + 24) + 4LL));
      v28 = *(__int64 **)(v27 + 8);
      if ( (unsigned int)v26 < *(_DWORD *)(v27 + 80) )
        v28 += v26;
    }
    v9 = *v28;
    goto LABEL_41;
  }
}
