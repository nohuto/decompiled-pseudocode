/*
 * XREFs of ?CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x14033E700
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x140361FE0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1400396F4 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?VidMmMakeResident@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K3@Z @ 0x14003B124 (-VidMmMakeResident@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MUL.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x14003ECE0 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     ?VidMmCloseAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x140041804 (-VidMmCloseAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_L.c)
 *     McTemplateK0pqqqqq_EtwWriteTransfer @ 0x14004E864 (McTemplateK0pqqqqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqqqq_EtwWriteTransfer @ 0x140054090 (McTemplateK0pqqqqqqq_EtwWriteTransfer.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x140056908 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmGetDevicePagingQueue@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@IPEAPEAUVIDMM_PAGING_QUEUE@@PEAPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400582F0 (-VidMmGetDevicePagingQueue@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@IPEAPEAUVIDMM_PAGING_QUEUE@@PEAP.c)
 *     ?VidMmWaitForFences@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z @ 0x140058AD0 (-VidMmWaitForFences@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x14005C9CC (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?TraceCloseParavirtualizedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x14018887C (-TraceCloseParavirtualizedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1401AF2A0 (-ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAdapterAllocation@DXGDEVICE@@QEAAXPEAVDXGADAPTERALLOCATION@@@Z @ 0x140339FE4 (-DestroyAdapterAllocation@DXGDEVICE@@QEAAXPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x14033FAC4 (-ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateVidMmAllocations(
        DXGDEVICE *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        struct _D3DDDI_ALLOCATIONINFO2 *a3,
        struct _DXGK_ALLOCATIONINFO *a4,
        struct DXGALLOCATION *a5,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a6,
        char a7,
        struct COREDEVICEACCESS *a8)
{
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // eax
  UINT v9; // r15d
  bool v10; // di
  struct _D3DDDI_ALLOCATIONINFO2 *v11; // r9
  DXGDEVICE *v13; // r12
  __int64 v14; // rsi
  int v15; // r11d
  bool v16; // r8
  __int64 v17; // rcx
  struct DXGALLOCATION *v18; // r13
  char v19; // r10
  __int64 v20; // rcx
  struct _DXGK_ALLOCATIONINFO *v21; // r12
  unsigned int v22; // esi
  struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D Value; // r8d
  __int64 v24; // rcx
  int v25; // eax
  const struct _D3DKM_CREATESTANDARDALLOCATION *v26; // r9
  struct _DXGK_ALLOCATIONINFO *v27; // r8
  __int64 v28; // rcx
  struct _D3DDDI_ALLOCATIONINFO2 *v29; // rdx
  __int64 v30; // rdx
  char v31; // r12
  PVOID v32; // rdi
  struct _DXGK_ALLOCATIONINFO *v33; // r10
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // rcx
  const struct _D3DKM_CREATESTANDARDALLOCATION *v37; // rdx
  __int64 v38; // rdx
  unsigned int v39; // eax
  int v40; // ecx
  UINT v41; // edi
  struct DXGALLOCATION *v42; // r15
  __int64 v43; // rcx
  struct VIDMM_MULTI_GLOBAL_ALLOC *v44; // r8
  struct VIDMM_MULTI_ALLOC *v45; // r8
  __int64 v46; // r8
  const struct _D3DKM_CREATESTANDARDALLOCATION *v47; // rdi
  __int64 v49; // rax
  struct _DXGK_ALLOCATIONINFO *v50; // r9
  struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D v51; // edx
  int v52; // ecx
  __int64 v53; // rcx
  PVOID v54; // rsi
  bool v55; // zf
  __int64 v56; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v58; // r9
  int v59; // eax
  int v60; // ecx
  _DWORD *v61; // rcx
  __int64 v62; // r9
  int v63; // r8d
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rcx
  struct VIDMM_DEVICE *v67; // rdx
  int v68; // r8d
  __int64 v69; // rax
  int Resident; // eax
  __int64 v71; // rax
  __int64 v72; // rdi
  __int64 v73; // rax
  const struct _D3DKM_CREATESTANDARDALLOCATION *v74; // rcx
  void *v75; // rax
  int v76; // ecx
  int v77; // ecx
  _DWORD *v78; // rcx
  _DWORD *v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rax
  void *v82; // rcx
  NTSTATUS v83; // eax
  PVOID v84; // rdi
  int v85; // eax
  __int64 v86; // rdx
  HANDLE hSection; // rax
  unsigned __int64 Size; // rdx
  const struct _D3DKM_CREATESTANDARDALLOCATION *v89; // rcx
  _DWORD *v90; // rcx
  __int64 *v91; // r15
  __int64 v92; // rax
  const wchar_t *v93; // r9
  PVOID *Object; // [rsp+20h] [rbp-B9h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-B1h]
  unsigned __int64 *v96; // [rsp+30h] [rbp-A9h]
  unsigned __int64 *v97; // [rsp+38h] [rbp-A1h]
  __int64 v98; // [rsp+40h] [rbp-99h]
  __int64 v99; // [rsp+48h] [rbp-91h]
  __int64 v100; // [rsp+50h] [rbp-89h]
  char v101; // [rsp+60h] [rbp-79h]
  int v102; // [rsp+64h] [rbp-75h]
  PVOID BaseAddress; // [rsp+68h] [rbp-71h]
  unsigned int v104; // [rsp+70h] [rbp-69h]
  bool v105; // [rsp+74h] [rbp-65h]
  PVOID v106; // [rsp+78h] [rbp-61h]
  int v107; // [rsp+80h] [rbp-59h] BYREF
  __int64 *p_hSection; // [rsp+88h] [rbp-51h]
  __int64 v109; // [rsp+90h] [rbp-49h] BYREF
  __int64 v110; // [rsp+98h] [rbp-41h] BYREF
  PVOID v111; // [rsp+A0h] [rbp-39h] BYREF
  struct VIDMM_PAGING_QUEUE *v112; // [rsp+A8h] [rbp-31h] BYREF
  unsigned __int64 v113; // [rsp+B0h] [rbp-29h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v114; // [rsp+B8h] [rbp-21h] BYREF
  unsigned __int64 v115[3]; // [rsp+C0h] [rbp-19h] BYREF
  char v117; // [rsp+128h] [rbp+4Fh] BYREF
  struct _D3DDDI_ALLOCATIONINFO2 *v118; // [rsp+130h] [rbp+57h]
  struct _DXGK_ALLOCATIONINFO *v119; // [rsp+138h] [rbp+5Fh]

  v119 = a4;
  v118 = a3;
  Flags = a2->Flags;
  v9 = 0;
  v102 = 0;
  v10 = 1;
  LOBYTE(a8) = 1;
  v11 = a3;
  v13 = this;
  LODWORD(v14) = 0;
  v15 = 0;
  if ( (*(_DWORD *)&Flags & 0x10000) != 0 && a6 )
  {
    LODWORD(v14) = -1073741811;
    WdLogSingleEntry2(2LL, this, -1073741811LL);
    WdLogGlobalForLineNumber = 4046;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Device 0x%I64x: Can not create StandardAllocation from UserMode and Kernel simultaneously,                        "
       "     returning 0x%I64x",
      (__int64)v13,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v14;
  }
  v16 = 1;
  if ( (*(_WORD *)&Flags & 0x400) == 0 )
    v16 = (*(_DWORD *)&Flags & 0x40000) == 0;
  v105 = v16;
  v17 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v17 + 184) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v17 + 168)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4061;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"GetRenderCore()->IsCoreResourceSharedOwner()",
        4061LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v11 = v118;
    v15 = 0;
    v16 = v105;
  }
  v18 = a5;
  while ( 1 )
  {
    v19 = a7;
    if ( v9 >= a2->NumAllocations )
      break;
    v20 = *((_QWORD *)v18 + 6);
    v109 = 0LL;
    v21 = &v119[v9];
    v110 = 0LL;
    v117 = v16;
    BaseAddress = 0LL;
    v106 = 0LL;
    v22 = (LODWORD(v21->Size) + 4095) & 0xFFFFF000;
    v104 = v22;
    if ( (*(_DWORD *)(v20 + 4) & 0x200F) != 0 )
      v117 = 1;
    if ( !*(_QWORD *)(v20 + 16) && (*(_DWORD *)&a2->Flags & 0x100000) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4089;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pAllocation->m_pAllocation->m_hDriverAllocation != NULL || pKMTCreateAllocation->Flags.NoKmdAccess",
        4089LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v11 = v118;
      v15 = v102;
      v19 = a7;
    }
    Value = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v21->Flags.Value;
    if ( (*(_WORD *)&Value & 0x4000) != 0 )
    {
      v80 = 344LL * ((*((_DWORD *)v18 + 18) >> 12) & 0x3F);
      v81 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3128LL) + 16LL) + 2992LL);
      v14 = *(_QWORD *)(v80 + v81 + 40);
      if ( !*((_BYTE *)this + 1896) || !v14 )
      {
        v13 = this;
        WdLogSingleEntry2(2LL, this, *(_QWORD *)(v80 + v81 + 40));
        WdLogGlobalForLineNumber = 4109;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Driver asking for history buffer, but device history buffer creation is disabled, or adapter does not have pre"
           "cision data. Device=0x%I64x, PrecisionData=%I64X",
          (__int64)this,
          v14,
          0LL,
          0LL,
          0LL);
        LODWORD(v14) = -1073741823;
        goto LABEL_38;
      }
      v22 = v104;
      v11 = v118;
    }
    if ( v19 )
    {
      v53 = *(_QWORD *)(*((_QWORD *)v18 + 5) + 56LL);
      if ( v53 )
        BaseAddress = *(PVOID *)(v53 + 192);
      v13 = this;
      if ( *(_BYTE *)&a2->Flags < 0 )
        v15 = 1;
      v102 = v15;
      goto LABEL_35;
    }
    v24 = (unsigned int)a2->Flags;
    v25 = *(_DWORD *)&a2->Flags & 0x20;
    v101 = 0;
    if ( (v24 & 0x10000) != 0 )
    {
      if ( v25 )
      {
        BaseAddress = v11[v9].hSection;
        v21->Flags.Value = *(_DWORD *)&Value | 0x10;
        if ( (*((_DWORD *)DXGPROCESS::GetCurrent(v24) + 102) & 0x100) != 0 )
          *(_DWORD *)(*((_QWORD *)v18 + 6) + 4LL) |= 0x20000000u;
      }
      else if ( (v24 & 0x20000) != 0 )
      {
        p_hSection = (__int64 *)&v11[v9].hSection;
        v82 = (void *)*p_hSection;
        v111 = 0LL;
        v83 = ObReferenceObjectByHandle(v82, 0x20000u, MmSectionObjectType, 1, &v111, 0LL);
        v84 = v111;
        v14 = v83;
        v106 = v111;
        if ( v83 < 0 )
        {
          v91 = p_hSection;
          WdLogSingleEntry2(2LL, *p_hSection, v83);
          v92 = *v91;
          v93 = L"Failed to take a reference on hSection:0x%I64x, returning 0x%I64x";
          WdLogGlobalForLineNumber = 4148;
LABEL_158:
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v93, v92, v14, 0LL, 0LL, 0LL);
          goto LABEL_58;
        }
        v21->Flags.Value |= 0x400000u;
        v85 = ProcessSectionAttributes(v84, v21);
        v14 = v85;
        if ( v85 < 0 )
        {
          v13 = this;
          WdLogSingleEntry2(2LL, this, v85);
          WdLogGlobalForLineNumber = 4160;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed to query section attributes. Device=0x%I64x, Status=%I64X",
            (__int64)this,
            v14,
            0LL,
            0LL,
            0LL);
          ObfDereferenceObject(v84);
          goto LABEL_38;
        }
        v22 = v104;
        v86 = *(_QWORD *)(*((_QWORD *)v18 + 5) + 56LL);
        *(_DWORD *)(v86 + 12) |= 0x400u;
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v18 + 5) + 56LL) + 192LL) = v84;
        *(_DWORD *)(v86 + 204) = v21->Alignment;
        *(_DWORD *)(v86 + 12) ^= ((unsigned __int16)*(_DWORD *)(v86 + 12) ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v21->Flags.0 << 9)) & 0x800;
      }
    }
    else if ( v25 )
    {
      if ( (*((_DWORD *)DXGPROCESS::GetCurrent(v24) + 102) & 0x100) != 0 )
      {
        hSection = v118[v9].hSection;
        v21->Flags.Value |= 0x10u;
        BaseAddress = hSection;
        *(_DWORD *)(*((_QWORD *)v18 + 6) + 4LL) |= 0x20000000u;
      }
      else
      {
        Size = v21->Size;
        if ( Size > v22 )
        {
          v14 = -1073741811LL;
          WdLogSingleEntry2(2LL, Size, -1073741811LL);
          v93 = L"Overflow rounding allocation size 0x%I64x to next page boundary returning 0x%I64x";
          WdLogGlobalForLineNumber = 4209;
          v92 = v119[v9].Size;
          goto LABEL_158;
        }
        v89 = a6;
        v21->Size = v22;
        BaseAddress = (PVOID)(*((__int64 (__fastcall **)(_QWORD, _QWORD))v89 + 4))(*((_QWORD *)v89 + 5), v22);
        if ( !BaseAddress )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 4216;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Cannot allocate memory allocation for existing sys mem.",
            4216LL,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_57;
        }
        v118[v9].hSection = BaseAddress;
      }
    }
    else if ( (*(_BYTE *)&Value & 0x10) != 0 )
    {
      BaseAddress = v11[v9].hSection;
    }
    else if ( (*(_DWORD *)&Value & 0x400000) != 0 )
    {
      v47 = a6;
      if ( a2->NumAllocations != 1 || (*(_DWORD *)&Value & 0x2000000) == 0 || !a6 || !*((_QWORD *)a6 + 4) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4235;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"(pKMTCreateAllocation->NumAllocations == 1) && (pDriverAllocations[i].Flags.DoDPrimary) && (pCreateStandardAll"
           "ocation != NULL) && (pCreateStandardAllocation->pfnAllocateSysMem != NULL)",
          4235LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v106 = (PVOID)(*((__int64 (__fastcall **)(_QWORD, _QWORD))v47 + 4))(*((_QWORD *)v47 + 5), v22);
      if ( !v106 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 4241;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Cannot create section object for DoD primary backing store.",
          4241LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_57;
      }
      v101 = 1;
    }
    v26 = a6;
    if ( !a6 || (*(_DWORD *)a6 & 0x40) == 0 )
      goto LABEL_20;
    if ( !*((_QWORD *)a6 + 41) && !*((_QWORD *)a6 + 42) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 4263;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Section object or SystemMem is not supplied for a cross adapter allocation.",
        4263LL,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_57:
      LODWORD(v14) = -1073741823;
      goto LABEL_58;
    }
    v27 = v119;
    v72 = *(_QWORD *)(*((_QWORD *)v18 + 5) + 56LL);
    *(_DWORD *)(v72 + 12) ^= ((unsigned __int16)*(_DWORD *)(v72 + 12) ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)a6 << 7)) & 0x800;
    v73 = *((_QWORD *)v26 + 42);
    if ( v73 )
    {
      BaseAddress = (PVOID)*((_QWORD *)v26 + 42);
      v27[v9].Flags.Value |= 0x10u;
      *(_DWORD *)(v72 + 12) |= 0x200u;
      *(_QWORD *)(v72 + 192) = v73;
      *(_DWORD *)(v72 + 204) = *((_DWORD *)v26 + 98);
      goto LABEL_21;
    }
    if ( *((_QWORD *)v26 + 41) )
    {
      v27[v9].Flags.Value |= 0x400000u;
      ObfReferenceObject(*((PVOID *)v26 + 41));
      v74 = a6;
      v75 = (void *)*((_QWORD *)a6 + 41);
      *(_DWORD *)(v72 + 12) |= 0x400u;
      v106 = v75;
      *(_QWORD *)(v72 + 192) = *((_QWORD *)v74 + 41);
      *(_DWORD *)(v72 + 204) = *((_DWORD *)v74 + 98);
LABEL_20:
      v27 = v119;
    }
LABEL_21:
    v28 = v9;
    v29 = &v118[v9];
    if ( (v29->Flags.Value & 4) != 0 )
    {
      v28 = 88LL * v9;
      *(UINT *)((char *)&v27->AllocationPriority + v28) = v29->Priority;
    }
    else if ( !v27[v9].AllocationPriority )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 4307;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"KMD should set a non-zero initial priority for allocations.",
        4307LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v27 = v119;
    }
    v30 = *((_QWORD *)v18 + 5);
    v31 = 0;
    if ( v30 )
    {
      v28 = 88LL * v9;
      if ( (*(UINT *)((_BYTE *)&v27->Flags.Value + v28) & 0x100000) != 0 )
      {
        v31 = 1;
        if ( !*(_QWORD *)(*(_QWORD *)(v30 + 56) + 184LL) )
        {
          v54 = 0LL;
          v55 = (*(_DWORD *)&a2->Flags & 0x10000) == 0;
          p_hSection = 0LL;
          if ( !v55 && BaseAddress )
          {
            v54 = BaseAddress;
            p_hSection = (__int64 *)a2->pStandardAllocation->ExistingHeapData.Size;
          }
          v56 = *(_QWORD *)(*((_QWORD *)this + 2) + 760LL);
          Current = DXGPROCESS::GetCurrent(v28);
          v58 = *((_DWORD *)Current + 102) >> 8;
          LOBYTE(v58) = BYTE1(*((_DWORD *)Current + 102)) & 1;
          v59 = (*(__int64 (__fastcall **)(__int64, PVOID, __int64 *, __int64))(*(_QWORD *)(v56 + 8) + 1144LL))(
                  *(_QWORD *)(*((_QWORD *)v18 + 5) + 56LL) + 184LL,
                  v54,
                  p_hSection,
                  v58);
          v14 = v59;
          if ( v59 < 0 )
          {
            WdLogSingleEntry1(2LL, v59);
            WdLogGlobalForLineNumber = 4342;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Failed to create VIDMM_CROSSADAPTER_ALLOC, returning 0x%I64x",
              v14,
              0LL,
              0LL,
              0LL,
              0LL);
            if ( v101 )
              ObfDereferenceObject(v106);
LABEL_58:
            v13 = this;
LABEL_38:
            v19 = a7;
            goto LABEL_39;
          }
          v22 = v104;
        }
      }
    }
    if ( (*(_DWORD *)&a2->Flags & 0x10020) == 0x10020 )
    {
      if ( (*((_BYTE *)this + 1901) & 1) != 0 )
      {
        v32 = BaseAddress;
      }
      else
      {
        v32 = BaseAddress;
        if ( (*((_DWORD *)DXGPROCESS::GetCurrent(v28) + 102) & 0x10) == 0 )
        {
          LODWORD(v14) = ProcessSysMemAttributes(BaseAddress, v22, &v119[v9]);
          if ( (int)v14 < 0 )
            goto LABEL_58;
        }
      }
      v33 = v119;
      if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
      {
        v62 = *(_QWORD *)(*((_QWORD *)v18 + 5) + 56LL);
        v63 = *(_DWORD *)(v62 + 12) | 0x200;
        *(_QWORD *)(v62 + 192) = v32;
        *(_DWORD *)(v62 + 12) = v63;
        *(_DWORD *)(v62 + 204) = v33[v9].Alignment;
        *(_DWORD *)(v62 + 12) = v63 ^ ((unsigned __int16)v63 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v33[v9].Flags.0 << 9)) & 0x800;
      }
    }
    else
    {
      v32 = BaseAddress;
      v33 = v119;
    }
    if ( v32 )
    {
      if ( (*(_DWORD *)&a2->Flags & 0x80u) != 0 )
      {
        v102 = 1;
        *(_DWORD *)(*((_QWORD *)v18 + 6) + 4LL) |= 0x8000000u;
        v64 = *((_QWORD *)v18 + 5);
        if ( v64 )
        {
          v65 = *(_QWORD *)(v64 + 56);
          if ( v65 )
            *(_DWORD *)(v65 + 12) |= 0x1000u;
        }
      }
    }
    if ( v31 )
      v34 = *(_QWORD *)(*((_QWORD *)v18 + 5) + 56LL) + 184LL;
    else
      v34 = 0LL;
    v13 = this;
    LODWORD(v14) = (*(__int64 (__fastcall **)(_QWORD, struct _DXGK_ALLOCATIONINFO *, _QWORD, PVOID, __int64, __int64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 104LL))(
                     *((_QWORD *)this + 99),
                     &v33[v9],
                     *((_QWORD *)v18 + 6),
                     v106,
                     v34,
                     &v109);
    if ( v101 )
      ObfDereferenceObject(v106);
    if ( (int)v14 < 0 )
      goto LABEL_38;
    v36 = v109;
    if ( !v109 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4408;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pVidMmMultiGlobalAlloc", 4408LL, 0LL, 0LL, 0LL, 0LL);
      v36 = v109;
    }
    v37 = a6;
    *(_QWORD *)(*((_QWORD *)v18 + 6) + 8LL) = v36;
    if ( v37 )
    {
      v60 = *((_DWORD *)v37 + 4);
      if ( v60 == 4 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          v61 = (_DWORD *)*((_QWORD *)v37 + 3);
          LODWORD(v100) = v61[5];
          LODWORD(v99) = v61[4];
          LODWORD(v98) = v61[3];
          LODWORD(v97) = v61[2];
          LODWORD(v96) = v61[1];
          LODWORD(HandleInformation) = *v61;
          LODWORD(Object) = *(_DWORD *)v37;
          McTemplateK0pqqqqqqq_EtwWriteTransfer(
            (__int64)v61,
            &EventCddStandardAllocationGdiSurface,
            v35,
            *((_QWORD *)v18 + 6),
            Object,
            HandleInformation,
            v96,
            v97,
            v98,
            v99,
            v100);
        }
      }
      else
      {
        v76 = v60 - 1;
        if ( v76 )
        {
          v77 = v76 - 1;
          if ( v77 )
          {
            if ( v77 == 1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            {
              v78 = (_DWORD *)*((_QWORD *)v37 + 3);
              LODWORD(v97) = v78[2];
              LODWORD(v96) = v78[1];
              LODWORD(HandleInformation) = *v78;
              LODWORD(Object) = *(_DWORD *)v37;
              McTemplateK0pqtqq_EtwWriteTransfer(
                (__int64)v78,
                &EventCddStandardAllocationStagingSurface,
                v35,
                *((_QWORD *)v18 + 6),
                Object,
                HandleInformation,
                v96,
                v97);
            }
          }
          else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          {
            v90 = (_DWORD *)*((_QWORD *)v37 + 3);
            LODWORD(v98) = v90[3];
            LODWORD(v97) = v90[2];
            LODWORD(v96) = v90[1];
            LODWORD(HandleInformation) = *v90;
            LODWORD(Object) = *(_DWORD *)v37;
            McTemplateK0pqqqqq_EtwWriteTransfer(
              (__int64)v90,
              &EventCddStandardAllocationShadowSurface,
              v35,
              *((_QWORD *)v18 + 6),
              Object,
              HandleInformation,
              v96,
              v97,
              v98);
          }
        }
        else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          v79 = (_DWORD *)*((_QWORD *)v37 + 3);
          LODWORD(v100) = v79[5];
          LODWORD(v99) = v79[4];
          LODWORD(v98) = v79[3];
          LODWORD(v97) = v79[2];
          LODWORD(v96) = v79[1];
          LODWORD(HandleInformation) = *v79;
          LODWORD(Object) = *(_DWORD *)v37;
          McTemplateK0pqqqqqqq_EtwWriteTransfer(
            (__int64)v79,
            &EventCddStandardAllocationSharedPrimarySurface,
            v35,
            *((_QWORD *)v18 + 6),
            Object,
            HandleInformation,
            v96,
            v97,
            v98,
            v99,
            v100);
        }
      }
    }
LABEL_35:
    v38 = *((_QWORD *)v13 + 2);
    v107 = 0;
    LOBYTE(HandleInformation) = v102 != 0;
    LODWORD(v14) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, PVOID, POBJECT_HANDLE_INFORMATION, struct DXGALLOCATION *, __int64 *, int *, char *))(*(_QWORD *)(*(_QWORD *)(v38 + 760) + 8LL) + 120LL))(
                     *(_QWORD *)(v38 + 768),
                     *((_QWORD *)v13 + 99),
                     *(_QWORD *)(*((_QWORD *)v18 + 6) + 8LL),
                     v119[v9].MaximumRenamingListLength,
                     BaseAddress,
                     HandleInformation,
                     v18,
                     &v110,
                     &v107,
                     &v117);
    v10 = (_BYTE)a8 && v117;
    v39 = *((_DWORD *)v18 + 18) & 0xFFFC0FFF;
    LOBYTE(a8) = v10;
    v40 = v107 & 0x3F;
    *((_DWORD *)v18 + 18) = v39 | (v40 << 12);
    *(_DWORD *)(*((_QWORD *)v18 + 6) + 4LL) = *(_DWORD *)(*((_QWORD *)v18 + 6) + 4LL) & 0xF81FFFFF | (v40 << 21);
    if ( (int)v14 < 0 )
      goto LABEL_38;
    v49 = v110;
    if ( !v110 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4513;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pVidMmMultiAlloc", 4513LL, 0LL, 0LL, 0LL, 0LL);
      v49 = v110;
    }
    v50 = v119;
    *((_QWORD *)v18 + 3) = v49;
    v51 = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v50[v9].Flags.Value;
    if ( (*(_WORD *)&v51 & 0x100) != 0 )
      goto LABEL_107;
    v52 = *(_DWORD *)(*((_QWORD *)v18 + 6) + 4LL);
    if ( (v52 & 0x20) == 0 && (*(_DWORD *)&v51 & 0x20200) == 0 )
    {
      if ( (v52 & 0x4000) == 0 )
        goto LABEL_70;
LABEL_107:
      if ( (*(_WORD *)&v51 & 0x100) != 0 )
        *(_DWORD *)(*((_QWORD *)v18 + 6) + 4LL) |= 8u;
    }
    if ( (v50[v9].Flags.Value & 0x200) != 0 )
      *(_DWORD *)(*((_QWORD *)v18 + 6) + 4LL) |= 0x20u;
    if ( (v50[v9].Flags.Value & 0x20000) != 0 )
      *(_DWORD *)(*((_QWORD *)v18 + 6) + 4LL) |= 0x4000u;
    LODWORD(v14) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 760LL) + 8LL)
                                                                                             + 200LL))(
                     *(_QWORD *)(*((_QWORD *)v13 + 2) + 768LL),
                     *((_QWORD *)v18 + 3),
                     0LL,
                     0LL,
                     0LL,
                     0LL);
    if ( (int)v14 < 0 )
      goto LABEL_38;
    v71 = *((_QWORD *)v18 + 6);
    *((_DWORD *)v18 + 18) |= 0x800u;
    if ( (*(_DWORD *)(v71 + 4) & 0x4000) != 0 )
    {
      VIDMM_EXPORT::VidMmUnpinAllocation(
        *(VIDMM_EXPORT **)(*((_QWORD *)v13 + 2) + 760LL),
        *(struct VIDMM_GLOBAL **)(*((_QWORD *)v13 + 2) + 768LL),
        *((struct VIDMM_MULTI_ALLOC **)v18 + 3));
      *((_DWORD *)v18 + 18) &= ~0x800u;
    }
LABEL_70:
    if ( DXGDEVICE::UmdManagesResidency(v13) && a6 && *((_DWORD *)a6 + 4) == 2 )
    {
      v66 = *((_QWORD *)v13 + 2);
      v67 = (struct VIDMM_DEVICE *)*((_QWORD *)v13 + 99);
      v68 = *((_DWORD *)v18 + 18) >> 12;
      v112 = 0LL;
      v114 = 0LL;
      VIDMM_EXPORT::VidMmGetDevicePagingQueue(*(VIDMM_EXPORT **)(v66 + 760), v67, v68 & 0x3F, &v112, &v114);
      v69 = *((_QWORD *)v13 + 2);
      v113 = 0LL;
      v115[0] = 0LL;
      Resident = VIDMM_EXPORT::VidMmMakeResident(
                   *(VIDMM_EXPORT **)(v69 + 760),
                   *(struct VIDMM_GLOBAL **)(v69 + 768),
                   v112,
                   (struct VIDMM_MULTI_ALLOC **)v18 + 3,
                   1u,
                   3u,
                   &v113,
                   v115);
      v14 = Resident;
      if ( Resident < 0 )
      {
        WdLogSingleEntry1(2LL, Resident);
        WdLogGlobalForLineNumber = 4602;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to make shadow allocation resident. Status = 0x%I64x",
          v14,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_38;
      }
      if ( Resident == 259 )
      {
        VIDMM_EXPORT::VidMmWaitForFences(
          *(VIDMM_EXPORT **)(*((_QWORD *)v13 + 2) + 760LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)v13 + 2) + 768LL),
          &v114,
          &v113);
        LODWORD(v14) = 0;
      }
    }
    v18 = (struct DXGALLOCATION *)*((_QWORD *)v18 + 8);
    ++v9;
    v16 = v105;
    v11 = v118;
    v15 = v102;
  }
  if ( (int)v14 >= 0 )
  {
    a2->Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&a2->Flags & 0xFFFFBFFF | (v10 << 14));
    return (unsigned int)v14;
  }
LABEL_39:
  v41 = 0;
  if ( a2->NumAllocations )
  {
    v42 = a5;
    do
    {
      if ( (*((_DWORD *)v42 + 18) & 0x800) != 0 )
      {
        VIDMM_EXPORT::VidMmUnpinAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)v13 + 2) + 760LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)v13 + 2) + 768LL),
          *((struct VIDMM_MULTI_ALLOC **)v42 + 3));
        *((_DWORD *)v42 + 18) &= ~0x800u;
        v19 = a7;
      }
      v43 = *((_QWORD *)v42 + 6);
      v44 = *(struct VIDMM_MULTI_GLOBAL_ALLOC **)(v43 + 8);
      if ( v44
        && !v19
        && (!*((_DWORD *)v13 + 116) && (*(_DWORD *)(v43 + 4) & 1) != 0 || (*(_DWORD *)(v43 + 4) & 2) != 0) )
      {
        VIDMM_EXPORT::VidMmInvalidateAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)v13 + 2) + 760LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)v13 + 2) + 768LL),
          v44);
        *(_DWORD *)(*((_QWORD *)v42 + 6) + 4LL) |= 0x10u;
      }
      v45 = (struct VIDMM_MULTI_ALLOC *)*((_QWORD *)v42 + 3);
      if ( v45 )
      {
        VIDMM_EXPORT::VidMmCloseAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)v13 + 2) + 760LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)v13 + 2) + 768LL),
          v45,
          0LL,
          (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1);
        *((_QWORD *)v42 + 3) = 0LL;
      }
      else
      {
        DXGDEVICE::TraceCloseParavirtualizedAllocation(v13, v42);
      }
      v19 = a7;
      if ( !a7 )
      {
        DXGDEVICE::DestroyAdapterAllocation(v13, *((struct DXGADAPTERALLOCATION **)v42 + 6), v46);
        v19 = a7;
      }
      v42 = (struct DXGALLOCATION *)*((_QWORD *)v42 + 8);
      ++v41;
    }
    while ( v41 < a2->NumAllocations );
  }
  return (unsigned int)v14;
}
