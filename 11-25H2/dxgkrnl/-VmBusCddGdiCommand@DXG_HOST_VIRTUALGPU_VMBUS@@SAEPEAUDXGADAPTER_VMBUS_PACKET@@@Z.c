/*
 * XREFs of ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140218FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140013C98 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14001DE10 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140022F40 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140038EBC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x14003BE0C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ?VidMmQueryAllocationSizeInSystemMemory@VIDMM_EXPORT@@QEAA_KPEBUVIDMM_MULTI_ALLOC@@_N@Z @ 0x14003EB08 (-VidMmQueryAllocationSizeInSystemMemory@VIDMM_EXPORT@@QEAA_KPEBUVIDMM_MULTI_ALLOC@@_N@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140051B28 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z @ 0x1402183AC (-ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x140346894 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x140346914 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEBD@Z @ 0x14035A2D0 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEBD@Z.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x140394F30 (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCddGdiCommand(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rdx
  char v2; // bl
  struct DXGADAPTER_VMBUS_PACKET *v3; // r12
  __int64 v5; // rax
  __int64 v6; // r15
  struct DXGALLOCATION **v7; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  const wchar_t *v10; // r9
  unsigned int v11; // ecx
  unsigned int v12; // r13d
  unsigned int v13; // eax
  unsigned int v14; // ecx
  __int64 v15; // rax
  struct DXGPROCESS *v16; // r8
  unsigned int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // r9
  struct DXGALLOCATION **v20; // rcx
  unsigned __int64 v21; // r12
  _BYTE *Pool2; // rax
  _BYTE *v23; // r11
  unsigned int i; // r12d
  __int64 v25; // rcx
  const struct VIDMM_MULTI_ALLOC *v26; // rdx
  __int64 AllocationSizeInSystemMemory; // rax
  __int64 v28; // rax
  const wchar_t *v29; // r9
  struct DXGDEVICE *v30; // r12
  const unsigned __int8 *v31; // r13
  const unsigned __int8 *v32; // r8
  const unsigned __int8 *v33; // rcx
  int v34; // eax
  unsigned int v35; // eax
  __int64 v36; // r10
  const unsigned __int8 *v37; // rdx
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  unsigned __int8 *v43; // r9
  __int64 v44; // r12
  unsigned int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // r8
  unsigned int v48; // eax
  int v49; // edx
  unsigned int v50; // eax
  LONG v51; // ecx
  int v52; // edx
  unsigned __int8 v53; // al
  unsigned __int8 *v54; // r9
  __int64 v55; // rdx
  unsigned int v56; // eax
  __int64 v57; // r8
  unsigned __int8 v58; // al
  unsigned __int8 *v59; // r9
  __int64 v60; // rdx
  unsigned int v61; // eax
  __int64 v62; // r8
  int v63; // ecx
  unsigned int v64; // eax
  __int64 v65; // r8
  __int16 v66; // cx
  __int64 v67; // rax
  const wchar_t *v68; // r9
  unsigned __int8 *v69; // r9
  __int64 v70; // r12
  unsigned int v71; // eax
  __int64 v72; // r8
  __int16 v73; // cx
  __int64 v74; // [rsp+28h] [rbp-E0h]
  unsigned __int8 v75; // [rsp+60h] [rbp-A8h]
  unsigned int v76; // [rsp+70h] [rbp-98h]
  __int64 v77; // [rsp+88h] [rbp-80h]
  _BYTE v79[16]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v80[16]; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v81; // [rsp+B8h] [rbp-50h]
  int v82; // [rsp+BCh] [rbp-4Ch] BYREF
  _BYTE *v83; // [rsp+C0h] [rbp-48h]
  struct DXGDEVICE *v84; // [rsp+C8h] [rbp-40h]
  unsigned int v85; // [rsp+D0h] [rbp-38h] BYREF
  const unsigned __int8 *v86; // [rsp+D8h] [rbp-30h]
  const unsigned __int8 *v87; // [rsp+E0h] [rbp-28h]
  int v88; // [rsp+E8h] [rbp-20h]
  struct DXGCONTEXT *v89; // [rsp+F0h] [rbp-18h] BYREF
  struct tagRECT v90; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v91[32]; // [rsp+108h] [rbp+0h] BYREF
  PVOID v92; // [rsp+128h] [rbp+20h] BYREF
  char v93; // [rsp+130h] [rbp+28h] BYREF
  int v94; // [rsp+230h] [rbp+128h]
  PVOID P; // [rsp+238h] [rbp+130h]
  _BYTE v96[256]; // [rsp+240h] [rbp+138h] BYREF
  int v97; // [rsp+340h] [rbp+238h]
  _QWORD v98[48]; // [rsp+348h] [rbp+240h] BYREF

  v1 = *((_QWORD *)a1 + 10);
  v2 = 0;
  v3 = a1;
  if ( *(_BYTE *)(v1 + 154) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2490;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"GDI acceleration is disabled", 2490LL, 0LL, 0LL, 0LL, 0LL);
    return 0;
  }
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v91, (struct _KTHREAD **)(v1 + 248));
  if ( !*(_BYTE *)(*((_QWORD *)v3 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2494;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      2494LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v91);
    return 0;
  }
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)v3);
  v6 = v5;
  if ( !v5 )
    goto LABEL_164;
  v82 = -1073741811;
  v7 = 0LL;
  v92 = 0LL;
  v94 = 0;
  P = 0LL;
  v97 = 0;
  v8 = *(unsigned int *)(v5 + 32);
  v85 = 0;
  v88 = 0;
  if ( (unsigned int)v8 > 0x100 )
  {
    WdLogSingleEntry0(2LL);
    v9 = 2511LL;
    v10 = L"Invalid allocation count";
LABEL_9:
    WdLogGlobalForLineNumber = v9;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v10, v9, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_155;
  }
  v11 = *(_DWORD *)(v6 + 28);
  if ( v11 > 0x10000 )
  {
    WdLogSingleEntry0(2LL);
    v9 = 2516LL;
    v10 = L"Invalid command buffer size";
    goto LABEL_9;
  }
  v12 = 8 * v8;
  if ( (unsigned __int64)(8 * v8) > 0xFFFFFFFF )
  {
    WdLogSingleEntry0(2LL);
    v15 = 2521LL;
    goto LABEL_153;
  }
  v13 = v12 + 56;
  if ( v12 >= 0xFFFFFFC8 )
  {
    WdLogSingleEntry0(2LL);
    v15 = 2526LL;
    goto LABEL_153;
  }
  v14 = v13 + v11;
  if ( v14 < v13 )
  {
    WdLogSingleEntry0(2LL);
    v15 = 2531LL;
    goto LABEL_153;
  }
  if ( v14 > *((_DWORD *)v3 + 36) )
  {
    WdLogSingleEntry0(2LL);
    v15 = 2536LL;
LABEL_153:
    WdLogGlobalForLineNumber = v15;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Malformed packet", v15, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_154;
  }
  if ( (*(_DWORD *)(v6 + 48) & 0x20) == 0 )
  {
    WdLogSingleEntry0(2LL);
    v15 = 2541LL;
    goto LABEL_153;
  }
  v16 = (struct DXGPROCESS *)*((_QWORD *)v3 + 11);
  v17 = *(_DWORD *)(v6 + 24);
  v89 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v79, v17, v16, &v89, 0, 1);
  if ( !v89 )
  {
    WdLogSingleEntry1(2LL, *(unsigned int *)(v6 + 24));
    v74 = *(unsigned int *)(v6 + 24);
    WdLogGlobalForLineNumber = 2550;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid context handle 0x%I64x", v74, 0LL, 0LL, 0LL, 0LL);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v79);
LABEL_154:
    v7 = 0LL;
    goto LABEL_155;
  }
  if ( (*((_DWORD *)v89 + 98) & 0x10) != 0 )
  {
    v18 = 0LL;
    if ( *((struct DXGCONTEXT **)v89 + 50) != (struct DXGCONTEXT *)((char *)v89 + 400) )
      v18 = *((_QWORD *)v89 + 50);
    v88 = *(_DWORD *)(v18 + 24);
  }
  v84 = (struct DXGDEVICE *)*((_QWORD *)v89 + 2);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v80, v84);
  v77 = PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(&v92, *(unsigned int *)(v6 + 32));
  v20 = (struct DXGALLOCATION **)v77;
  if ( !v77 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2568;
LABEL_27:
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v80);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v79);
    goto LABEL_28;
  }
  v21 = *(unsigned int *)(v6 + 32);
  if ( (unsigned int)v21 > 0x20 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v21 < 8 )
    {
LABEL_36:
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 2574;
LABEL_37:
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v80);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v79);
      goto LABEL_38;
    }
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8 * v21, 1265072196LL, v19);
    P = Pool2;
    goto LABEL_34;
  }
  Pool2 = v96;
  v83 = v96;
  P = v96;
  if ( (_DWORD)v21 )
  {
    memset(v96, 0, 8 * v21);
    Pool2 = P;
LABEL_34:
    v20 = (struct DXGALLOCATION **)v77;
    v83 = Pool2;
  }
  v97 = v21;
  if ( !Pool2 )
    goto LABEL_36;
  v85 = *(_DWORD *)(v6 + 32);
  v82 = DxgkReferenceAllocationList(&v85, (struct _D3DDDI_ALLOCATIONLIST *)(v6 + 56), v20, v84);
  if ( v82 < 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2581;
    goto LABEL_37;
  }
  v23 = v83;
  for ( i = 0; i < *(_DWORD *)(v6 + 32); ++i )
  {
    v25 = *(_QWORD *)(v77 + 8LL * i);
    if ( !v25 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 2590;
      goto LABEL_37;
    }
    if ( *(struct DXGDEVICE **)(v25 + 8) != v84 )
    {
      WdLogSingleEntry0(2LL);
      v28 = 2595LL;
      v29 = L"Invalid allocation device";
      goto LABEL_51;
    }
    v26 = *(const struct VIDMM_MULTI_ALLOC **)(v25 + 24);
    if ( !v26 )
    {
      WdLogSingleEntry0(2LL);
      v28 = 2600LL;
      v29 = L"Invalid allocation";
      goto LABEL_51;
    }
    AllocationSizeInSystemMemory = VIDMM_EXPORT::VidMmQueryAllocationSizeInSystemMemory(
                                     *(VIDMM_EXPORT **)(*((_QWORD *)v84 + 2) + 760LL),
                                     v26,
                                     0);
    v23 = v83;
    *(_QWORD *)&v83[8 * i] = AllocationSizeInSystemMemory;
    if ( !AllocationSizeInSystemMemory )
    {
      WdLogSingleEntry0(2LL);
      v28 = 2608LL;
      v29 = L"Invalid allocation size";
      goto LABEL_51;
    }
  }
  v30 = *(struct DXGDEVICE **)(*((_QWORD *)v84 + 2) + 16LL);
  v84 = v30;
  if ( (*((_DWORD *)v30 + 613) & 4) == 0 )
  {
    WdLogSingleEntry0(2LL);
    v28 = 2616LL;
    v29 = L"Driver does not support GDI interrop";
    goto LABEL_51;
  }
  v31 = (const unsigned __int8 *)(v6 + v12 + 56LL);
  v32 = &v31[*(unsigned int *)(v6 + 28)];
  v33 = v31;
  v34 = (_DWORD)v31 + *(_DWORD *)(v6 + 28);
  v87 = v32;
  v35 = v34 - (_DWORD)v31;
  while ( v35 )
  {
    if ( v35 < 8 )
    {
      WdLogSingleEntry0(2LL);
      v28 = 2632LL;
      goto LABEL_148;
    }
    v36 = *((unsigned int *)v33 + 1);
    v37 = v33;
    if ( v35 < (unsigned int)v36 )
    {
      WdLogSingleEntry0(2LL);
      v28 = 2638LL;
      goto LABEL_148;
    }
    v81 = v35 - v36;
    v86 = &v33[v36];
    if ( &v33[v36] > v32 || (unsigned int)v36 > *(_DWORD *)(v6 + 28) )
    {
      WdLogSingleEntry0(2LL);
      v28 = 2645LL;
LABEL_148:
      v29 = L"Malformed packet";
LABEL_51:
      WdLogGlobalForLineNumber = v28;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v29, v28, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_37;
    }
    v38 = *(_DWORD *)v33 - 1;
    if ( *(_DWORD *)v37 == 1 )
    {
      if ( (unsigned int)v36 < 0x48 )
      {
        WdLogSingleEntry0(2LL);
        v28 = 2655LL;
        goto LABEL_148;
      }
      v70 = *((unsigned int *)v37 + 10);
      v71 = *(_DWORD *)(v6 + 32);
      if ( (unsigned int)v70 >= v71 || (v72 = *((unsigned int *)v37 + 11), (unsigned int)v72 >= v71) )
      {
        WdLogSingleEntry0(2LL);
        v28 = 2661LL;
LABEL_143:
        v29 = L"Invalid allocation index";
        goto LABEL_51;
      }
      v73 = *((_WORD *)v37 + 32);
      if ( (unsigned __int16)(v73 - 1) > 4u )
      {
        WdLogSingleEntry0(2LL);
        v28 = 2666LL;
LABEL_141:
        v29 = L"Invalid ROP";
        goto LABEL_51;
      }
      if ( v73 == 5 )
      {
        if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 153LL) || (*((_DWORD *)v84 + 613) & 0x100000) == 0 )
        {
          WdLogSingleEntry0(2LL);
          v28 = 2673LL;
          v29 = L"Driver does not support all ROPs";
          goto LABEL_51;
        }
        if ( ((gajRop3[(unsigned __int8)*((_WORD *)v37 + 33)] | gajRop3[(unsigned __int64)*((unsigned __int16 *)v37 + 33) >> 8]) & 0xE8) != 0 )
        {
          WdLogSingleEntry0(2LL);
          v28 = 2678LL;
LABEL_114:
          v29 = L"Invalid ROP3";
          goto LABEL_51;
        }
      }
      else if ( *((_WORD *)v37 + 33) )
      {
        WdLogSingleEntry0(2LL);
        v28 = 2686LL;
        goto LABEL_114;
      }
      v69 = (unsigned __int8 *)(v37 + 8);
      v53 = ValidateGdiCommand(
              0x48u,
              v36,
              v31,
              v69,
              *(const unsigned __int8 **)(v6 + 40),
              *(_QWORD *)&v23[8 * v72],
              *(_QWORD *)&v23[8 * v70],
              (const struct tagRECT *)v69 + 1,
              (const struct tagRECT *)v69,
              *((_DWORD *)v69 + 16),
              *((_DWORD *)v69 + 15),
              v75,
              0,
              *((_DWORD *)v69 + 10),
              (unsigned __int8 **)v69 + 6);
LABEL_117:
      if ( !v53 )
        goto LABEL_37;
LABEL_118:
      v30 = v84;
      goto LABEL_119;
    }
    v39 = v38 - 1;
    if ( !v39 )
    {
      if ( (unsigned int)v36 < 0x28 )
      {
        WdLogSingleEntry0(2LL);
        v28 = 2712LL;
        goto LABEL_148;
      }
      v65 = *((unsigned int *)v37 + 6);
      if ( (unsigned int)v65 >= *(_DWORD *)(v6 + 32) )
      {
        WdLogSingleEntry0(2LL);
        v28 = 2717LL;
        goto LABEL_143;
      }
      v66 = *((_WORD *)v37 + 22);
      if ( (unsigned __int16)(v66 - 1) > 6u )
      {
        WdLogSingleEntry0(2LL);
        v28 = 2722LL;
        goto LABEL_141;
      }
      if ( v66 == 7 )
      {
        v3 = a1;
        if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 153LL) || (*((_DWORD *)v84 + 613) & 0x100000) == 0 )
        {
          WdLogSingleEntry0(2LL);
          v67 = 2729LL;
          v68 = L"Driver does not support all ROPs";
          goto LABEL_133;
        }
        if ( ((gajRop3[(unsigned __int8)*((_WORD *)v37 + 23)] | gajRop3[(unsigned __int64)*((unsigned __int16 *)v37 + 23) >> 8]) & 0xFC) != 0 )
        {
          WdLogSingleEntry0(2LL);
          v67 = 2735LL;
          v68 = L"Invalid ROP3";
LABEL_133:
          WdLogGlobalForLineNumber = v67;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v68, v67, 0LL, 0LL, 0LL, 0LL);
          goto LABEL_27;
        }
      }
      else
      {
        if ( *((_WORD *)v37 + 23) )
        {
          WdLogSingleEntry0(2LL);
          v28 = 2743LL;
          goto LABEL_114;
        }
        v3 = a1;
      }
      if ( !ValidateGdiCommand(
              0x28u,
              v36,
              v31,
              (unsigned __int8 *)v37 + 8,
              *(const unsigned __int8 **)(v6 + 40),
              *(_QWORD *)&v23[8 * v65],
              0LL,
              (const struct tagRECT *)(v37 + 8),
              0LL,
              0,
              0,
              v75,
              0,
              *((_DWORD *)v37 + 7),
              (unsigned __int8 **)v37 + 4) )
        goto LABEL_27;
      goto LABEL_118;
    }
    v40 = v39 - 1;
    if ( !v40 )
    {
      v59 = (unsigned __int8 *)(v37 + 8);
      if ( (unsigned int)v36 < 0x40 )
      {
        WdLogSingleEntry0(2LL);
        v28 = 2768LL;
        goto LABEL_148;
      }
      v60 = *((unsigned int *)v37 + 10);
      v64 = *(_DWORD *)(v6 + 32);
      if ( (unsigned int)v60 >= v64 || (v62 = *((unsigned int *)v59 + 9), (unsigned int)v62 >= v64) )
      {
        WdLogSingleEntry0(2LL);
        v28 = 2774LL;
        goto LABEL_143;
      }
      goto LABEL_88;
    }
    v41 = v40 - 1;
    if ( !v41 )
    {
      v59 = (unsigned __int8 *)(v37 + 8);
      if ( (unsigned int)v36 < 0x40 )
      {
        WdLogSingleEntry0(2LL);
        v28 = 2798LL;
        goto LABEL_148;
      }
      v60 = *((unsigned int *)v37 + 11);
      v61 = *(_DWORD *)(v6 + 32);
      if ( (unsigned int)v60 >= v61 || (v62 = *((unsigned int *)v59 + 8), (unsigned int)v62 >= v61) )
      {
        WdLogSingleEntry0(2LL);
        v28 = 2804LL;
        goto LABEL_143;
      }
      v63 = *((_DWORD *)v59 + 14);
      if ( (_WORD)v63 != 3 )
      {
        WdLogSingleEntry0(2LL);
        v28 = 2809LL;
        v29 = L"Invalid stretch BLT mode";
        goto LABEL_51;
      }
      if ( (v63 & 0x30000) != 0 && (*((_DWORD *)v30 + 613) & 0x200000) == 0 )
      {
        WdLogSingleEntry0(2LL);
        v28 = 2815LL;
        v29 = L"Invalid stretch BLT flags";
        goto LABEL_51;
      }
LABEL_88:
      v58 = ValidateGdiCommand(
              0x40u,
              v36,
              v31,
              v59,
              *(const unsigned __int8 **)(v6 + 40),
              *(_QWORD *)&v23[8 * v62],
              *(_QWORD *)&v23[8 * v60],
              (const struct tagRECT *)v59 + 1,
              (const struct tagRECT *)v59,
              0,
              *((_DWORD *)v59 + 15),
              v75,
              1,
              *((_DWORD *)v59 + 10),
              (unsigned __int8 **)v59 + 6);
      goto LABEL_80;
    }
    v42 = v41 - 2;
    if ( v42 )
    {
      if ( v42 != 1 )
      {
        WdLogSingleEntry0(2LL);
        v28 = 2917LL;
        goto LABEL_148;
      }
      v43 = (unsigned __int8 *)(v37 + 8);
      if ( (unsigned int)v36 < 0x48 )
      {
        WdLogSingleEntry0(2LL);
        v28 = 2869LL;
        goto LABEL_148;
      }
      v44 = *((unsigned int *)v37 + 8);
      v45 = *(_DWORD *)(v6 + 32);
      if ( (unsigned int)v44 >= v45
        || *((_DWORD *)v37 + 7) >= v45
        || (v46 = *((unsigned int *)v37 + 6), (unsigned int)v46 >= v45)
        || (v47 = *((unsigned int *)v37 + 9), (unsigned int)v47 >= v45) )
      {
        WdLogSingleEntry0(2LL);
        v28 = 2877LL;
        goto LABEL_143;
      }
      v48 = *((_DWORD *)v37 + 13);
      if ( v48 != -1 )
      {
        if ( v48 > 0xF )
        {
          WdLogSingleEntry0(2LL);
          v28 = 2884LL;
          v29 = L"Invalid gamma";
          goto LABEL_51;
        }
        if ( *(_QWORD *)&v23[8 * v46] < 0x2000uLL )
        {
          WdLogSingleEntry0(2LL);
          v28 = 2889LL;
          v29 = L"Invalid temporary allocation size";
          goto LABEL_51;
        }
      }
      v49 = *((_DWORD *)v37 + 10);
      v76 = *((_DWORD *)v43 + 12);
      v50 = *((_DWORD *)v43 + 16);
      v90.left = v49 + *(_DWORD *)v43;
      v51 = v49 + *((_DWORD *)v43 + 2);
      v52 = *((_DWORD *)v43 + 9);
      v90.right = v51;
      v90.top = v52 + *((_DWORD *)v43 + 1);
      v90.bottom = v52 + *((_DWORD *)v43 + 3);
      v53 = ValidateGdiCommand(
              0x48u,
              v36,
              v31,
              v43,
              *(const unsigned __int8 **)(v6 + 40),
              *(_QWORD *)&v23[8 * v47],
              *(_QWORD *)&v23[8 * v44],
              (const struct tagRECT *)v43,
              &v90,
              0,
              v50,
              v75,
              0,
              v76,
              (unsigned __int8 **)v43 + 7);
      goto LABEL_117;
    }
    v54 = (unsigned __int8 *)(v37 + 8);
    if ( (unsigned int)v36 < 0x40 )
    {
      WdLogSingleEntry0(2LL);
      v28 = 2839LL;
      goto LABEL_148;
    }
    v55 = *((unsigned int *)v37 + 10);
    v56 = *(_DWORD *)(v6 + 32);
    if ( (unsigned int)v55 >= v56 || (v57 = *((unsigned int *)v54 + 9), (unsigned int)v57 >= v56) )
    {
      WdLogSingleEntry0(2LL);
      v28 = 2845LL;
      goto LABEL_143;
    }
    v58 = ValidateGdiCommand(
            0x40u,
            v36,
            v31,
            v54,
            *(const unsigned __int8 **)(v6 + 40),
            *(_QWORD *)&v23[8 * v57],
            *(_QWORD *)&v23[8 * v55],
            (const struct tagRECT *)v54 + 1,
            (const struct tagRECT *)v54,
            0,
            *((_DWORD *)v54 + 15),
            v75,
            0,
            *((_DWORD *)v54 + 11),
            (unsigned __int8 **)v54 + 6);
LABEL_80:
    if ( !v58 )
      goto LABEL_37;
LABEL_119:
    v33 = v86;
    v35 = v81;
    v23 = v83;
    v32 = v87;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v80);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v79);
  memset(v98, 0, 0x178uLL);
  LODWORD(v98[0]) = v88;
  LODWORD(v98[1]) = *(_DWORD *)(v6 + 24);
  LODWORD(v98[2]) = *(_DWORD *)(v6 + 28);
  v98[6] = v6 + 56;
  HIDWORD(v98[2]) = *(_DWORD *)(v6 + 32);
  HIDWORD(v98[9]) = *(_DWORD *)(v6 + 48);
  v98[4] = v31;
  v82 = DxgkCddGdiCommand((struct _DXGKCDD_SUBMITRENDERTOHWQUEUE *)v98, 0LL);
LABEL_38:
  v3 = a1;
LABEL_28:
  v7 = (struct DXGALLOCATION **)v77;
LABEL_155:
  if ( v82 < 0 )
  {
    WdLogSingleEntry1(2LL, v82);
    WdLogGlobalForLineNumber = 2942;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"VmBusCddGdiCommand failed: 0x%I64x",
      v82,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DxgkUnreferenceAllocationList(v85, v7);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v3 + 16), &v82, 4u);
  if ( P != v96 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v97 = 0;
  if ( v92 != &v93 )
  {
    if ( v92 )
      ExFreePoolWithTag(v92, 0);
  }
  v92 = 0LL;
  v94 = 0;
  v2 = 1;
LABEL_164:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v91);
  return v2;
}
