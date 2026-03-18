/*
 * XREFs of ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021F500
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14000E830 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140023750 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140038CCC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x14003B7CC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ?VidMmQueryAllocationSizeInSystemMemory@VIDMM_EXPORT@@QEAA_KPEBUVIDMM_MULTI_ALLOC@@_N@Z @ 0x14003E0C8 (-VidMmQueryAllocationSizeInSystemMemory@VIDMM_EXPORT@@QEAA_KPEBUVIDMM_MULTI_ALLOC@@_N@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140051578 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z @ 0x14021E938 (-ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1403349F4 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x140334A74 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEBD@Z @ 0x14034DF70 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEBD@Z.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x140388E50 (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@_K$0CA@@@QEAAPEA_KI@Z @ 0x14039242C (-AllocateElements@-$PagedPoolZeroedArray@_K$0CA@@@QEAAPEA_KI@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCddGdiCommand(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rdx
  char v2; // bl
  struct DXGADAPTER_VMBUS_PACKET *v3; // r13
  __int64 v5; // rax
  __int64 v6; // r15
  struct DXGALLOCATION **v7; // r12
  __int64 v8; // rax
  __int64 v9; // rax
  const wchar_t *v10; // r9
  unsigned int v11; // ecx
  unsigned __int64 v12; // rax
  unsigned int v13; // eax
  struct _KTHREAD **v14; // r8
  unsigned int v15; // edx
  struct DXGCONTEXT *v16; // r13
  struct DXGDEVICE *v17; // r12
  __int64 v18; // rax
  struct DXGCONTEXT *v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // r13d
  struct DXGALLOCATION *v22; // rax
  const struct VIDMM_MULTI_ALLOC *v23; // rdx
  __int64 AllocationSizeInSystemMemory; // rax
  __int64 v25; // r11
  __int64 v26; // rax
  const wchar_t *v27; // r9
  __int64 v28; // r13
  const unsigned __int8 *v29; // r12
  const unsigned __int8 *v30; // r8
  const unsigned __int8 *v31; // rcx
  int v32; // eax
  unsigned int v33; // eax
  __int64 v34; // r10
  const unsigned __int8 *v35; // rdx
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  unsigned __int8 *v41; // r9
  __int64 v42; // r13
  unsigned int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // r8
  unsigned int v46; // eax
  int v47; // edx
  unsigned int v48; // eax
  LONG v49; // ecx
  int v50; // edx
  unsigned __int8 v51; // al
  unsigned __int8 *v52; // r9
  __int64 v53; // rdx
  unsigned int v54; // eax
  __int64 v55; // r8
  unsigned __int8 v56; // al
  unsigned __int8 *v57; // r9
  __int64 v58; // rdx
  unsigned int v59; // eax
  __int64 v60; // r8
  int v61; // ecx
  unsigned int v62; // eax
  __int64 v63; // r8
  __int16 v64; // cx
  __int64 v65; // rax
  const wchar_t *v66; // r9
  unsigned __int8 *v67; // r9
  __int64 v68; // r13
  unsigned int v69; // eax
  __int64 v70; // r8
  __int16 v71; // cx
  __int64 v72; // [rsp+28h] [rbp-E0h]
  unsigned __int8 v73; // [rsp+60h] [rbp-A8h]
  unsigned int v74; // [rsp+70h] [rbp-98h]
  struct DXGALLOCATION **v76; // [rsp+90h] [rbp-78h]
  _BYTE v77[16]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v78[16]; // [rsp+A8h] [rbp-60h] BYREF
  int v79; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v80; // [rsp+BCh] [rbp-4Ch] BYREF
  int v81; // [rsp+C0h] [rbp-48h]
  __int64 v82; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v83; // [rsp+D0h] [rbp-38h]
  __int64 v84; // [rsp+D8h] [rbp-30h]
  struct DXGCONTEXT *v85; // [rsp+E0h] [rbp-28h] BYREF
  struct tagRECT v86; // [rsp+E8h] [rbp-20h] BYREF
  const unsigned __int8 *v87; // [rsp+F8h] [rbp-10h]
  _BYTE v88[24]; // [rsp+100h] [rbp-8h] BYREF
  PVOID v89; // [rsp+118h] [rbp+10h] BYREF
  char v90; // [rsp+120h] [rbp+18h] BYREF
  int v91; // [rsp+220h] [rbp+118h]
  __int64 v92; // [rsp+228h] [rbp+120h] BYREF
  int v93; // [rsp+230h] [rbp+128h]
  PVOID P; // [rsp+238h] [rbp+130h] BYREF
  char v95; // [rsp+240h] [rbp+138h] BYREF
  int v96; // [rsp+340h] [rbp+238h]
  _QWORD v97[48]; // [rsp+348h] [rbp+240h] BYREF

  v1 = *((_QWORD *)a1 + 10);
  v2 = 0;
  v3 = a1;
  if ( *(_BYTE *)(v1 + 154) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2481;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"GDI acceleration is disabled",
      2481LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0;
  }
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v88, (struct _KTHREAD **)(v1 + 248));
  if ( !*(_BYTE *)(*((_QWORD *)v3 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2485;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      2485LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v88);
    return 0;
  }
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)v3);
  v6 = v5;
  if ( !v5 )
    goto LABEL_163;
  v79 = -1073741811;
  v7 = 0LL;
  v89 = 0LL;
  v91 = 0;
  P = 0LL;
  v96 = 0;
  v8 = *(unsigned int *)(v5 + 32);
  v80 = 0;
  v81 = 0;
  if ( (unsigned int)v8 > 0x100 )
  {
    WdLogSingleEntry0(2LL);
    v9 = 2502LL;
    v10 = L"Invalid allocation count";
    goto LABEL_153;
  }
  v11 = *(_DWORD *)(v6 + 28);
  if ( v11 > 0x10000 )
  {
    WdLogSingleEntry0(2LL);
    v9 = 2507LL;
    v10 = L"Invalid command buffer size";
LABEL_153:
    WdLogGlobalForLineNumber = v9;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v10, v9, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_154;
  }
  v12 = 8 * v8;
  v83 = v12;
  if ( v12 > 0xFFFFFFFF )
  {
    WdLogSingleEntry0(2LL);
    v9 = 2512LL;
    goto LABEL_152;
  }
  v13 = v12 + 56;
  if ( v13 < 0x38 )
  {
    WdLogSingleEntry0(2LL);
    v9 = 2517LL;
    goto LABEL_152;
  }
  if ( v11 + v13 < v13 )
  {
    WdLogSingleEntry0(2LL);
    v9 = 2522LL;
    goto LABEL_152;
  }
  if ( v11 + v13 > *((_DWORD *)v3 + 36) )
  {
    WdLogSingleEntry0(2LL);
    v9 = 2527LL;
LABEL_152:
    v10 = L"Malformed packet";
    goto LABEL_153;
  }
  if ( (*(_DWORD *)(v6 + 48) & 0x20) == 0 )
  {
    WdLogSingleEntry0(2LL);
    v9 = 2532LL;
    goto LABEL_152;
  }
  v14 = (struct _KTHREAD **)*((_QWORD *)v3 + 11);
  v15 = *(_DWORD *)(v6 + 24);
  v85 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v77, v15, v14, &v85, 0, 1);
  v16 = v85;
  if ( !v85 )
  {
    WdLogSingleEntry1(2LL, *(unsigned int *)(v6 + 24));
    v72 = *(unsigned int *)(v6 + 24);
    WdLogGlobalForLineNumber = 2541;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Invalid context handle 0x%I64x", v72, 0LL, 0LL, 0LL, 0LL);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v77);
    v3 = a1;
    goto LABEL_154;
  }
  v17 = (struct DXGDEVICE *)*((_QWORD *)v85 + 2);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v78, v17);
  if ( (*((_DWORD *)v16 + 98) & 0x10) != 0 )
  {
    v18 = 0LL;
    v19 = (struct DXGCONTEXT *)*((_QWORD *)v16 + 50);
    if ( v19 != (struct DXGCONTEXT *)((char *)v16 + 400) )
      v18 = *((_QWORD *)v16 + 50);
    if ( !v18 )
    {
      WdLogSingleEntry1(2LL, v16);
      WdLogGlobalForLineNumber = 2555;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"No HwQueue found for CDD HW Context, pContext 0x%I64x",
        (__int64)v16,
        0LL,
        0LL,
        0LL,
        0LL);
      v92 = 58273005LL;
      v93 = 0;
      RtlLogUnexpectedCodepath(&v92);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v78);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v77);
      v3 = a1;
      v7 = 0LL;
      goto LABEL_154;
    }
    v20 = 0LL;
    if ( v19 != (struct DXGCONTEXT *)((char *)v16 + 400) )
      v20 = *((_QWORD *)v16 + 50);
    v81 = *(_DWORD *)(v20 + 24);
  }
  v76 = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(
                                   &v89,
                                   *(unsigned int *)(v6 + 32));
  if ( !v76 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2567;
LABEL_31:
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v78);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v77);
LABEL_32:
    v3 = a1;
    goto LABEL_33;
  }
  v84 = PagedPoolZeroedArray<unsigned __int64,32>::AllocateElements(&P, *(unsigned int *)(v6 + 32));
  if ( !v84 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2573;
    goto LABEL_31;
  }
  v80 = *(_DWORD *)(v6 + 32);
  v79 = DxgkReferenceAllocationList(&v80, (struct _D3DDDI_ALLOCATIONLIST *)(v6 + 56), v76, v17);
  if ( v79 < 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2580;
    goto LABEL_31;
  }
  v21 = 0;
  if ( *(_DWORD *)(v6 + 32) )
  {
    while ( 1 )
    {
      v22 = v76[v21];
      if ( !v22 )
        break;
      if ( *((struct DXGDEVICE **)v22 + 1) != v17 )
      {
        WdLogSingleEntry0(2LL);
        v26 = 2594LL;
        v27 = L"Invalid allocation device";
        goto LABEL_48;
      }
      v23 = (const struct VIDMM_MULTI_ALLOC *)*((_QWORD *)v22 + 3);
      if ( !v23 )
      {
        WdLogSingleEntry0(2LL);
        v26 = 2599LL;
        v27 = L"Invalid allocation";
        goto LABEL_48;
      }
      AllocationSizeInSystemMemory = VIDMM_EXPORT::VidMmQueryAllocationSizeInSystemMemory(
                                       *(VIDMM_EXPORT **)(*((_QWORD *)v17 + 2) + 760LL),
                                       v23,
                                       0);
      v25 = v84;
      *(_QWORD *)(v84 + 8LL * v21) = AllocationSizeInSystemMemory;
      if ( !AllocationSizeInSystemMemory )
      {
        WdLogSingleEntry0(2LL);
        v26 = 2607LL;
        v27 = L"Invalid allocation size";
        goto LABEL_48;
      }
      if ( ++v21 >= *(_DWORD *)(v6 + 32) )
        goto LABEL_51;
    }
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2589;
    goto LABEL_31;
  }
  v25 = v84;
LABEL_51:
  v28 = *(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL);
  v82 = v28;
  if ( (*(_DWORD *)(v28 + 2452) & 4) == 0 )
  {
    WdLogSingleEntry0(2LL);
    v26 = 2615LL;
    v27 = L"Driver does not support GDI interrop";
    goto LABEL_48;
  }
  v29 = (const unsigned __int8 *)(v6 + (unsigned int)v83 + 56LL);
  v30 = &v29[*(unsigned int *)(v6 + 28)];
  v31 = v29;
  v32 = (_DWORD)v29 + *(_DWORD *)(v6 + 28);
  v92 = (__int64)v30;
  v33 = v32 - (_DWORD)v29;
  if ( !v33 )
  {
LABEL_148:
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v78);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v77);
    memset(v97, 0, 0x178uLL);
    LODWORD(v97[0]) = v81;
    LODWORD(v97[1]) = *(_DWORD *)(v6 + 24);
    LODWORD(v97[2]) = *(_DWORD *)(v6 + 28);
    v97[6] = v6 + 56;
    HIDWORD(v97[2]) = *(_DWORD *)(v6 + 32);
    HIDWORD(v97[9]) = *(_DWORD *)(v6 + 48);
    v97[4] = v29;
    v79 = DxgkCddGdiCommand((struct _DXGKCDD_SUBMITRENDERTOHWQUEUE *)v97, 0LL);
    goto LABEL_32;
  }
  while ( 1 )
  {
    if ( v33 < 8 )
    {
      WdLogSingleEntry0(2LL);
      v26 = 2631LL;
      goto LABEL_147;
    }
    v34 = *((unsigned int *)v31 + 1);
    v35 = v31;
    if ( v33 < (unsigned int)v34 )
    {
      WdLogSingleEntry0(2LL);
      v26 = 2637LL;
      goto LABEL_147;
    }
    LODWORD(v83) = v33 - v34;
    v87 = &v31[v34];
    if ( &v31[v34] > v30 || (unsigned int)v34 > *(_DWORD *)(v6 + 28) )
    {
      WdLogSingleEntry0(2LL);
      v26 = 2644LL;
LABEL_147:
      v27 = L"Malformed packet";
LABEL_48:
      WdLogGlobalForLineNumber = v26;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v27, v26, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_31;
    }
    v36 = *(_DWORD *)v31 - 1;
    if ( *(_DWORD *)v35 == 1 )
    {
      if ( (unsigned int)v34 < 0x48 )
      {
        WdLogSingleEntry0(2LL);
        v26 = 2654LL;
        goto LABEL_147;
      }
      v68 = *((unsigned int *)v35 + 10);
      v69 = *(_DWORD *)(v6 + 32);
      if ( (unsigned int)v68 >= v69 || (v70 = *((unsigned int *)v35 + 11), (unsigned int)v70 >= v69) )
      {
        WdLogSingleEntry0(2LL);
        v26 = 2660LL;
LABEL_142:
        v27 = L"Invalid allocation index";
        goto LABEL_48;
      }
      v71 = *((_WORD *)v35 + 32);
      if ( (unsigned __int16)(v71 - 1) > 4u )
      {
        WdLogSingleEntry0(2LL);
        v26 = 2665LL;
LABEL_140:
        v27 = L"Invalid ROP";
        goto LABEL_48;
      }
      if ( v71 == 5 )
      {
        if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 153LL) || (*(_DWORD *)(v82 + 2452) & 0x100000) == 0 )
        {
          WdLogSingleEntry0(2LL);
          v26 = 2672LL;
          v27 = L"Driver does not support all ROPs";
          goto LABEL_48;
        }
        if ( ((gajRop3[(unsigned __int8)*((_WORD *)v35 + 33)] | gajRop3[(unsigned __int64)*((unsigned __int16 *)v35 + 33) >> 8]) & 0xE8) != 0 )
        {
          WdLogSingleEntry0(2LL);
          v26 = 2677LL;
LABEL_111:
          v27 = L"Invalid ROP3";
          goto LABEL_48;
        }
      }
      else if ( *((_WORD *)v35 + 33) )
      {
        WdLogSingleEntry0(2LL);
        v26 = 2685LL;
        goto LABEL_111;
      }
      v67 = (unsigned __int8 *)(v35 + 8);
      v51 = ValidateGdiCommand(
              0x48u,
              v34,
              v29,
              v67,
              *(const unsigned __int8 **)(v6 + 40),
              *(_QWORD *)(v25 + 8 * v70),
              *(_QWORD *)(v25 + 8 * v68),
              (const struct tagRECT *)v67 + 1,
              (const struct tagRECT *)v67,
              *((_DWORD *)v67 + 16),
              *((_DWORD *)v67 + 15),
              v73,
              0,
              *((_DWORD *)v67 + 10),
              (unsigned __int8 **)v67 + 6);
LABEL_114:
      if ( !v51 )
        goto LABEL_31;
      goto LABEL_115;
    }
    v37 = v36 - 1;
    if ( !v37 )
      break;
    v38 = v37 - 1;
    if ( !v38 )
    {
      v57 = (unsigned __int8 *)(v35 + 8);
      if ( (unsigned int)v34 < 0x40 )
      {
        WdLogSingleEntry0(2LL);
        v26 = 2767LL;
        goto LABEL_147;
      }
      v58 = *((unsigned int *)v35 + 10);
      v62 = *(_DWORD *)(v6 + 32);
      if ( (unsigned int)v58 >= v62 || (v60 = *((unsigned int *)v57 + 9), (unsigned int)v60 >= v62) )
      {
        WdLogSingleEntry0(2LL);
        v26 = 2773LL;
        goto LABEL_142;
      }
      goto LABEL_87;
    }
    v39 = v38 - 1;
    if ( !v39 )
    {
      v57 = (unsigned __int8 *)(v35 + 8);
      if ( (unsigned int)v34 < 0x40 )
      {
        WdLogSingleEntry0(2LL);
        v26 = 2797LL;
        goto LABEL_147;
      }
      v58 = *((unsigned int *)v35 + 11);
      v59 = *(_DWORD *)(v6 + 32);
      if ( (unsigned int)v58 >= v59 || (v60 = *((unsigned int *)v57 + 8), (unsigned int)v60 >= v59) )
      {
        WdLogSingleEntry0(2LL);
        v26 = 2803LL;
        goto LABEL_142;
      }
      v61 = *((_DWORD *)v57 + 14);
      if ( (_WORD)v61 != 3 )
      {
        WdLogSingleEntry0(2LL);
        v26 = 2808LL;
        v27 = L"Invalid stretch BLT mode";
        goto LABEL_48;
      }
      if ( (v61 & 0x30000) != 0 && (*(_DWORD *)(v28 + 2452) & 0x200000) == 0 )
      {
        WdLogSingleEntry0(2LL);
        v26 = 2814LL;
        v27 = L"Invalid stretch BLT flags";
        goto LABEL_48;
      }
LABEL_87:
      v56 = ValidateGdiCommand(
              0x40u,
              v34,
              v29,
              v57,
              *(const unsigned __int8 **)(v6 + 40),
              *(_QWORD *)(v25 + 8 * v60),
              *(_QWORD *)(v25 + 8 * v58),
              (const struct tagRECT *)v57 + 1,
              (const struct tagRECT *)v57,
              0,
              *((_DWORD *)v57 + 15),
              v73,
              1,
              *((_DWORD *)v57 + 10),
              (unsigned __int8 **)v57 + 6);
      goto LABEL_88;
    }
    v40 = v39 - 2;
    if ( v40 )
    {
      if ( v40 != 1 )
      {
        WdLogSingleEntry0(2LL);
        v26 = 2916LL;
        goto LABEL_147;
      }
      v41 = (unsigned __int8 *)(v35 + 8);
      if ( (unsigned int)v34 < 0x48 )
      {
        WdLogSingleEntry0(2LL);
        v26 = 2868LL;
        goto LABEL_147;
      }
      v42 = *((unsigned int *)v35 + 8);
      v43 = *(_DWORD *)(v6 + 32);
      if ( (unsigned int)v42 >= v43
        || *((_DWORD *)v35 + 7) >= v43
        || (v44 = *((unsigned int *)v35 + 6), (unsigned int)v44 >= v43)
        || (v45 = *((unsigned int *)v35 + 9), (unsigned int)v45 >= v43) )
      {
        WdLogSingleEntry0(2LL);
        v26 = 2876LL;
        goto LABEL_142;
      }
      v46 = *((_DWORD *)v35 + 13);
      if ( v46 != -1 )
      {
        if ( v46 > 0xF )
        {
          WdLogSingleEntry0(2LL);
          v26 = 2883LL;
          v27 = L"Invalid gamma";
          goto LABEL_48;
        }
        if ( *(_QWORD *)(v25 + 8 * v44) < 0x2000uLL )
        {
          WdLogSingleEntry0(2LL);
          v26 = 2888LL;
          v27 = L"Invalid temporary allocation size";
          goto LABEL_48;
        }
      }
      v47 = *((_DWORD *)v35 + 10);
      v74 = *((_DWORD *)v41 + 12);
      v48 = *((_DWORD *)v41 + 16);
      v86.left = v47 + *(_DWORD *)v41;
      v49 = v47 + *((_DWORD *)v41 + 2);
      v50 = *((_DWORD *)v41 + 9);
      v86.right = v49;
      v86.top = v50 + *((_DWORD *)v41 + 1);
      v86.bottom = v50 + *((_DWORD *)v41 + 3);
      v51 = ValidateGdiCommand(
              0x48u,
              v34,
              v29,
              v41,
              *(const unsigned __int8 **)(v6 + 40),
              *(_QWORD *)(v25 + 8 * v45),
              *(_QWORD *)(v25 + 8 * v42),
              (const struct tagRECT *)v41,
              &v86,
              0,
              v48,
              v73,
              0,
              v74,
              (unsigned __int8 **)v41 + 7);
      goto LABEL_114;
    }
    v52 = (unsigned __int8 *)(v35 + 8);
    if ( (unsigned int)v34 < 0x40 )
    {
      WdLogSingleEntry0(2LL);
      v26 = 2838LL;
      goto LABEL_147;
    }
    v53 = *((unsigned int *)v35 + 10);
    v54 = *(_DWORD *)(v6 + 32);
    if ( (unsigned int)v53 >= v54 || (v55 = *((unsigned int *)v52 + 9), (unsigned int)v55 >= v54) )
    {
      WdLogSingleEntry0(2LL);
      v26 = 2844LL;
      goto LABEL_142;
    }
    v56 = ValidateGdiCommand(
            0x40u,
            v34,
            v29,
            v52,
            *(const unsigned __int8 **)(v6 + 40),
            *(_QWORD *)(v25 + 8 * v55),
            *(_QWORD *)(v25 + 8 * v53),
            (const struct tagRECT *)v52 + 1,
            (const struct tagRECT *)v52,
            0,
            *((_DWORD *)v52 + 15),
            v73,
            0,
            *((_DWORD *)v52 + 11),
            (unsigned __int8 **)v52 + 6);
LABEL_88:
    if ( !v56 )
      goto LABEL_31;
LABEL_116:
    v33 = v83;
    if ( !(_DWORD)v83 )
      goto LABEL_148;
    v25 = v84;
    v31 = v87;
    v30 = (const unsigned __int8 *)v92;
  }
  if ( (unsigned int)v34 < 0x28 )
  {
    WdLogSingleEntry0(2LL);
    v26 = 2711LL;
    goto LABEL_147;
  }
  v63 = *((unsigned int *)v35 + 6);
  if ( (unsigned int)v63 >= *(_DWORD *)(v6 + 32) )
  {
    WdLogSingleEntry0(2LL);
    v26 = 2716LL;
    goto LABEL_142;
  }
  v64 = *((_WORD *)v35 + 22);
  if ( (unsigned __int16)(v64 - 1) > 6u )
  {
    WdLogSingleEntry0(2LL);
    v26 = 2721LL;
    goto LABEL_140;
  }
  if ( v64 != 7 )
  {
    if ( *((_WORD *)v35 + 23) )
    {
      WdLogSingleEntry0(2LL);
      v26 = 2742LL;
      goto LABEL_111;
    }
    v3 = a1;
    goto LABEL_100;
  }
  v3 = a1;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 153LL) && (*(_DWORD *)(v82 + 2452) & 0x100000) != 0 )
  {
    if ( ((gajRop3[(unsigned __int8)*((_WORD *)v35 + 23)] | gajRop3[(unsigned __int64)*((unsigned __int16 *)v35 + 23) >> 8]) & 0xFC) != 0 )
    {
      WdLogSingleEntry0(2LL);
      v65 = 2734LL;
      v66 = L"Invalid ROP3";
      goto LABEL_131;
    }
LABEL_100:
    if ( !ValidateGdiCommand(
            0x28u,
            v34,
            v29,
            (unsigned __int8 *)v35 + 8,
            *(const unsigned __int8 **)(v6 + 40),
            *(_QWORD *)(v25 + 8 * v63),
            0LL,
            (const struct tagRECT *)(v35 + 8),
            0LL,
            0,
            0,
            v73,
            0,
            *((_DWORD *)v35 + 7),
            (unsigned __int8 **)v35 + 4) )
      goto LABEL_132;
LABEL_115:
    v28 = v82;
    goto LABEL_116;
  }
  WdLogSingleEntry0(2LL);
  v65 = 2728LL;
  v66 = L"Driver does not support all ROPs";
LABEL_131:
  WdLogGlobalForLineNumber = v65;
  DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v66, v65, 0LL, 0LL, 0LL, 0LL);
LABEL_132:
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v78);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v77);
LABEL_33:
  v7 = v76;
LABEL_154:
  if ( v79 < 0 )
  {
    WdLogSingleEntry1(2LL, v79);
    WdLogGlobalForLineNumber = 2941;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"VmBusCddGdiCommand failed: 0x%I64x",
      v79,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DxgkUnreferenceAllocationList(v80, v7);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v3 + 16), &v79, 4u);
  if ( P != &v95 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v96 = 0;
  if ( v89 != &v90 )
  {
    if ( v89 )
      ExFreePoolWithTag(v89, 0);
  }
  v89 = 0LL;
  v91 = 0;
  v2 = 1;
LABEL_163:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v88);
  return v2;
}
