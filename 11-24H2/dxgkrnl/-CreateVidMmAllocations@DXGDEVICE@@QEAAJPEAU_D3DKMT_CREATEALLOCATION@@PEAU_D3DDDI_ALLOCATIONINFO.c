/*
 * XREFs of ?CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x14032DAA0
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x140356E10 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1400392F4 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?VidMmMakeResident@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K3@Z @ 0x1400396E4 (-VidMmMakeResident@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MUL.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x14003E6D0 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     ?VidMmCloseAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1400412B4 (-VidMmCloseAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_L.c)
 *     McTemplateK0pqqqqq_EtwWriteTransfer @ 0x14004E164 (McTemplateK0pqqqqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqqqq_EtwWriteTransfer @ 0x140053E1C (McTemplateK0pqqqqqqq_EtwWriteTransfer.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x1400560B8 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmGetDevicePagingQueue@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@IPEAPEAUVIDMM_PAGING_QUEUE@@PEAPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x140057D70 (-VidMmGetDevicePagingQueue@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@IPEAPEAUVIDMM_PAGING_QUEUE@@PEAP.c)
 *     ?VidMmWaitForFences@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z @ 0x1400585C0 (-VidMmWaitForFences@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x14005C42C (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?TraceCloseParavirtualizedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x14018894C (-TraceCloseParavirtualizedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1401B1850 (-ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAdapterAllocation@DXGDEVICE@@QEAAXPEAVDXGADAPTERALLOCATION@@@Z @ 0x140325B54 (-DestroyAdapterAllocation@DXGDEVICE@@QEAAXPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x14032EE64 (-ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
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
  const struct _D3DKM_CREATESTANDARDALLOCATION *v46; // rdi
  __int64 v48; // rax
  struct _DXGK_ALLOCATIONINFO *v49; // r9
  struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D v50; // edx
  int v51; // ecx
  __int64 v52; // rcx
  PVOID v53; // rsi
  bool v54; // zf
  __int64 v55; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v57; // r9
  int v58; // eax
  int v59; // ecx
  _DWORD *v60; // rcx
  __int64 v61; // r9
  int v62; // r8d
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rcx
  struct VIDMM_DEVICE *v66; // rdx
  int v67; // r8d
  __int64 v68; // rax
  int Resident; // eax
  __int64 v70; // rax
  __int64 v71; // rdi
  __int64 v72; // rax
  const struct _D3DKM_CREATESTANDARDALLOCATION *v73; // rcx
  void *v74; // rax
  int v75; // ecx
  int v76; // ecx
  _DWORD *v77; // rcx
  _DWORD *v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // rax
  void *v81; // rcx
  NTSTATUS v82; // eax
  PVOID v83; // rdi
  int v84; // eax
  __int64 v85; // rdx
  HANDLE hSection; // rax
  unsigned __int64 Size; // rdx
  const struct _D3DKM_CREATESTANDARDALLOCATION *v88; // rcx
  _DWORD *v89; // rcx
  __int64 *v90; // r15
  __int64 v91; // rax
  const wchar_t *v92; // r9
  PVOID *Object; // [rsp+20h] [rbp-B9h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-B1h]
  unsigned __int64 *v95; // [rsp+30h] [rbp-A9h]
  unsigned __int64 *v96; // [rsp+38h] [rbp-A1h]
  __int64 v97; // [rsp+40h] [rbp-99h]
  __int64 v98; // [rsp+48h] [rbp-91h]
  __int64 v99; // [rsp+50h] [rbp-89h]
  char v100; // [rsp+60h] [rbp-79h]
  int v101; // [rsp+64h] [rbp-75h]
  PVOID BaseAddress; // [rsp+68h] [rbp-71h]
  unsigned int v103; // [rsp+70h] [rbp-69h]
  bool v104; // [rsp+74h] [rbp-65h]
  PVOID v105; // [rsp+78h] [rbp-61h]
  int v106; // [rsp+80h] [rbp-59h] BYREF
  __int64 *p_hSection; // [rsp+88h] [rbp-51h]
  __int64 v108; // [rsp+90h] [rbp-49h] BYREF
  __int64 v109; // [rsp+98h] [rbp-41h] BYREF
  PVOID v110; // [rsp+A0h] [rbp-39h] BYREF
  struct VIDMM_PAGING_QUEUE *v111; // [rsp+A8h] [rbp-31h] BYREF
  unsigned __int64 v112; // [rsp+B0h] [rbp-29h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v113; // [rsp+B8h] [rbp-21h] BYREF
  unsigned __int64 v114[3]; // [rsp+C0h] [rbp-19h] BYREF
  char v116; // [rsp+128h] [rbp+4Fh] BYREF
  struct _D3DDDI_ALLOCATIONINFO2 *v117; // [rsp+130h] [rbp+57h]
  struct _DXGK_ALLOCATIONINFO *v118; // [rsp+138h] [rbp+5Fh]

  v118 = a4;
  v117 = a3;
  Flags = a2->Flags;
  v9 = 0;
  v101 = 0;
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
    WdLogGlobalForLineNumber = 4081;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
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
  v104 = v16;
  v17 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v17 + 184) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v17 + 168)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4096;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"GetRenderCore()->IsCoreResourceSharedOwner()",
        4096LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v11 = v117;
    v15 = 0;
    v16 = v104;
  }
  v18 = a5;
  while ( 1 )
  {
    v19 = a7;
    if ( v9 >= a2->NumAllocations )
      break;
    v20 = *((_QWORD *)v18 + 6);
    v108 = 0LL;
    v21 = &v118[v9];
    v109 = 0LL;
    v116 = v16;
    BaseAddress = 0LL;
    v105 = 0LL;
    v22 = (LODWORD(v21->Size) + 4095) & 0xFFFFF000;
    v103 = v22;
    if ( (*(_DWORD *)(v20 + 4) & 0x200F) != 0 )
      v116 = 1;
    if ( !*(_QWORD *)(v20 + 16) && (*(_DWORD *)&a2->Flags & 0x100000) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4124;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pAllocation->m_pAllocation->m_hDriverAllocation != NULL || pKMTCreateAllocation->Flags.NoKmdAccess",
        4124LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v11 = v117;
      v15 = v101;
      v19 = a7;
    }
    Value = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v21->Flags.Value;
    if ( (*(_WORD *)&Value & 0x4000) != 0 )
    {
      v79 = 344LL * ((*((_DWORD *)v18 + 18) >> 12) & 0x3F);
      v80 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3128LL) + 16LL) + 2992LL);
      v14 = *(_QWORD *)(v79 + v80 + 40);
      if ( !*((_BYTE *)this + 1912) || !v14 )
      {
        v13 = this;
        WdLogSingleEntry2(2LL, this, *(_QWORD *)(v79 + v80 + 40));
        WdLogGlobalForLineNumber = 4144;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
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
      v22 = v103;
      v11 = v117;
    }
    if ( v19 )
    {
      v52 = *(_QWORD *)(*((_QWORD *)v18 + 5) + 56LL);
      if ( v52 )
        BaseAddress = *(PVOID *)(v52 + 192);
      v13 = this;
      if ( *(_BYTE *)&a2->Flags < 0 )
        v15 = 1;
      v101 = v15;
      goto LABEL_35;
    }
    v24 = (unsigned int)a2->Flags;
    v25 = *(_DWORD *)&a2->Flags & 0x20;
    v100 = 0;
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
        v81 = (void *)*p_hSection;
        v110 = 0LL;
        v82 = ObReferenceObjectByHandle(v81, 0x20000u, MmSectionObjectType, 1, &v110, 0LL);
        v83 = v110;
        v14 = v82;
        v105 = v110;
        if ( v82 < 0 )
        {
          v90 = p_hSection;
          WdLogSingleEntry2(2LL, *p_hSection, v82);
          v91 = *v90;
          v92 = L"Failed to take a reference on hSection:0x%I64x, returning 0x%I64x";
          WdLogGlobalForLineNumber = 4183;
LABEL_158:
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v92, v91, v14, 0LL, 0LL, 0LL);
          goto LABEL_58;
        }
        v21->Flags.Value |= 0x400000u;
        v84 = ProcessSectionAttributes(v83, v21);
        v14 = v84;
        if ( v84 < 0 )
        {
          v13 = this;
          WdLogSingleEntry2(2LL, this, v84);
          WdLogGlobalForLineNumber = 4195;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Failed to query section attributes. Device=0x%I64x, Status=%I64X",
            (__int64)this,
            v14,
            0LL,
            0LL,
            0LL);
          ObfDereferenceObject(v83);
          goto LABEL_38;
        }
        v22 = v103;
        v85 = *(_QWORD *)(*((_QWORD *)v18 + 5) + 56LL);
        *(_DWORD *)(v85 + 12) |= 0x400u;
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v18 + 5) + 56LL) + 192LL) = v83;
        *(_DWORD *)(v85 + 204) = v21->Alignment;
        *(_DWORD *)(v85 + 12) ^= ((unsigned __int16)*(_DWORD *)(v85 + 12) ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v21->Flags.0 << 9)) & 0x800;
      }
    }
    else if ( v25 )
    {
      if ( (*((_DWORD *)DXGPROCESS::GetCurrent(v24) + 102) & 0x100) != 0 )
      {
        hSection = v117[v9].hSection;
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
          v92 = L"Overflow rounding allocation size 0x%I64x to next page boundary returning 0x%I64x";
          WdLogGlobalForLineNumber = 4244;
          v91 = v118[v9].Size;
          goto LABEL_158;
        }
        v88 = a6;
        v21->Size = v22;
        BaseAddress = (PVOID)(*((__int64 (__fastcall **)(_QWORD, _QWORD))v88 + 4))(*((_QWORD *)v88 + 5), v22);
        if ( !BaseAddress )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 4251;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Cannot allocate memory allocation for existing sys mem.",
            4251LL,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_57;
        }
        v117[v9].hSection = BaseAddress;
      }
    }
    else if ( (*(_BYTE *)&Value & 0x10) != 0 )
    {
      BaseAddress = v11[v9].hSection;
    }
    else if ( (*(_DWORD *)&Value & 0x400000) != 0 )
    {
      v46 = a6;
      if ( a2->NumAllocations != 1 || (*(_DWORD *)&Value & 0x2000000) == 0 || !a6 || !*((_QWORD *)a6 + 4) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4270;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"(pKMTCreateAllocation->NumAllocations == 1) && (pDriverAllocations[i].Flags.DoDPrimary) && (pCreateStandardAll"
           "ocation != NULL) && (pCreateStandardAllocation->pfnAllocateSysMem != NULL)",
          4270LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v105 = (PVOID)(*((__int64 (__fastcall **)(_QWORD, _QWORD))v46 + 4))(*((_QWORD *)v46 + 5), v22);
      if ( !v105 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 4276;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Cannot create section object for DoD primary backing store.",
          4276LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_57;
      }
      v100 = 1;
    }
    v26 = a6;
    if ( !a6 || (*(_DWORD *)a6 & 0x40) == 0 )
      goto LABEL_20;
    if ( !*((_QWORD *)a6 + 41) && !*((_QWORD *)a6 + 42) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 4298;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Section object or SystemMem is not supplied for a cross adapter allocation.",
        4298LL,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_57:
      LODWORD(v14) = -1073741823;
      goto LABEL_58;
    }
    v27 = v118;
    v71 = *(_QWORD *)(*((_QWORD *)v18 + 5) + 56LL);
    *(_DWORD *)(v71 + 12) ^= ((unsigned __int16)*(_DWORD *)(v71 + 12) ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)a6 << 7)) & 0x800;
    v72 = *((_QWORD *)v26 + 42);
    if ( v72 )
    {
      BaseAddress = (PVOID)*((_QWORD *)v26 + 42);
      v27[v9].Flags.Value |= 0x10u;
      *(_DWORD *)(v71 + 12) |= 0x200u;
      *(_QWORD *)(v71 + 192) = v72;
      *(_DWORD *)(v71 + 204) = *((_DWORD *)v26 + 98);
      goto LABEL_21;
    }
    if ( *((_QWORD *)v26 + 41) )
    {
      v27[v9].Flags.Value |= 0x400000u;
      ObfReferenceObject(*((PVOID *)v26 + 41));
      v73 = a6;
      v74 = (void *)*((_QWORD *)a6 + 41);
      *(_DWORD *)(v71 + 12) |= 0x400u;
      v105 = v74;
      *(_QWORD *)(v71 + 192) = *((_QWORD *)v73 + 41);
      *(_DWORD *)(v71 + 204) = *((_DWORD *)v73 + 98);
LABEL_20:
      v27 = v118;
    }
LABEL_21:
    v28 = v9;
    v29 = &v117[v9];
    if ( (v29->Flags.Value & 4) != 0 )
    {
      v28 = 88LL * v9;
      *(UINT *)((char *)&v27->AllocationPriority + v28) = v29->Priority;
    }
    else if ( !v27[v9].AllocationPriority )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 4342;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"KMD should set a non-zero initial priority for allocations.",
        4342LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v27 = v118;
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
          v53 = 0LL;
          v54 = (*(_DWORD *)&a2->Flags & 0x10000) == 0;
          p_hSection = 0LL;
          if ( !v54 && BaseAddress )
          {
            v53 = BaseAddress;
            p_hSection = (__int64 *)a2->pStandardAllocation->ExistingHeapData.Size;
          }
          v55 = *(_QWORD *)(*((_QWORD *)this + 2) + 760LL);
          Current = DXGPROCESS::GetCurrent(v28);
          v57 = *((_DWORD *)Current + 102) >> 8;
          LOBYTE(v57) = BYTE1(*((_DWORD *)Current + 102)) & 1;
          v58 = (*(__int64 (__fastcall **)(__int64, PVOID, __int64 *, __int64))(*(_QWORD *)(v55 + 8) + 1144LL))(
                  *(_QWORD *)(*((_QWORD *)v18 + 5) + 56LL) + 184LL,
                  v53,
                  p_hSection,
                  v57);
          v14 = v58;
          if ( v58 < 0 )
          {
            WdLogSingleEntry1(2LL, v58);
            WdLogGlobalForLineNumber = 4377;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Failed to create VIDMM_CROSSADAPTER_ALLOC, returning 0x%I64x",
              v14,
              0LL,
              0LL,
              0LL,
              0LL);
            if ( v100 )
              ObfDereferenceObject(v105);
LABEL_58:
            v13 = this;
LABEL_38:
            v19 = a7;
            goto LABEL_39;
          }
          v22 = v103;
        }
      }
    }
    if ( (*(_DWORD *)&a2->Flags & 0x10020) == 0x10020 )
    {
      if ( (*((_BYTE *)this + 1917) & 1) != 0 )
      {
        v32 = BaseAddress;
      }
      else
      {
        v32 = BaseAddress;
        if ( (*((_DWORD *)DXGPROCESS::GetCurrent(v28) + 102) & 0x10) == 0 )
        {
          LODWORD(v14) = ProcessSysMemAttributes(BaseAddress, v22, &v118[v9]);
          if ( (int)v14 < 0 )
            goto LABEL_58;
        }
      }
      v33 = v118;
      if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
      {
        v61 = *(_QWORD *)(*((_QWORD *)v18 + 5) + 56LL);
        v62 = *(_DWORD *)(v61 + 12) | 0x200;
        *(_QWORD *)(v61 + 192) = v32;
        *(_DWORD *)(v61 + 12) = v62;
        *(_DWORD *)(v61 + 204) = v33[v9].Alignment;
        *(_DWORD *)(v61 + 12) = v62 ^ ((unsigned __int16)v62 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v33[v9].Flags.0 << 9)) & 0x800;
      }
    }
    else
    {
      v32 = BaseAddress;
      v33 = v118;
    }
    if ( v32 )
    {
      if ( (*(_DWORD *)&a2->Flags & 0x80u) != 0 )
      {
        v101 = 1;
        *(_DWORD *)(*((_QWORD *)v18 + 6) + 4LL) |= 0x8000000u;
        v63 = *((_QWORD *)v18 + 5);
        if ( v63 )
        {
          v64 = *(_QWORD *)(v63 + 56);
          if ( v64 )
            *(_DWORD *)(v64 + 12) |= 0x1000u;
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
                     v105,
                     v34,
                     &v108);
    if ( v100 )
      ObfDereferenceObject(v105);
    if ( (int)v14 < 0 )
      goto LABEL_38;
    v36 = v108;
    if ( !v108 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4443;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pVidMmMultiGlobalAlloc", 4443LL, 0LL, 0LL, 0LL, 0LL);
      v36 = v108;
    }
    v37 = a6;
    *(_QWORD *)(*((_QWORD *)v18 + 6) + 8LL) = v36;
    if ( v37 )
    {
      v59 = *((_DWORD *)v37 + 4);
      if ( v59 == 4 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          v60 = (_DWORD *)*((_QWORD *)v37 + 3);
          LODWORD(v99) = v60[5];
          LODWORD(v98) = v60[4];
          LODWORD(v97) = v60[3];
          LODWORD(v96) = v60[2];
          LODWORD(v95) = v60[1];
          LODWORD(HandleInformation) = *v60;
          LODWORD(Object) = *(_DWORD *)v37;
          McTemplateK0pqqqqqqq_EtwWriteTransfer(
            (__int64)v60,
            &EventCddStandardAllocationGdiSurface,
            v35,
            *((_QWORD *)v18 + 6),
            Object,
            HandleInformation,
            v95,
            v96,
            v97,
            v98,
            v99);
        }
      }
      else
      {
        v75 = v59 - 1;
        if ( v75 )
        {
          v76 = v75 - 1;
          if ( v76 )
          {
            if ( v76 == 1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            {
              v77 = (_DWORD *)*((_QWORD *)v37 + 3);
              LODWORD(v96) = v77[2];
              LODWORD(v95) = v77[1];
              LODWORD(HandleInformation) = *v77;
              LODWORD(Object) = *(_DWORD *)v37;
              McTemplateK0pqtqq_EtwWriteTransfer(
                (__int64)v77,
                &EventCddStandardAllocationStagingSurface,
                v35,
                *((_QWORD *)v18 + 6),
                Object,
                HandleInformation,
                v95,
                v96);
            }
          }
          else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          {
            v89 = (_DWORD *)*((_QWORD *)v37 + 3);
            LODWORD(v97) = v89[3];
            LODWORD(v96) = v89[2];
            LODWORD(v95) = v89[1];
            LODWORD(HandleInformation) = *v89;
            LODWORD(Object) = *(_DWORD *)v37;
            McTemplateK0pqqqqq_EtwWriteTransfer(
              (__int64)v89,
              &EventCddStandardAllocationShadowSurface,
              v35,
              *((_QWORD *)v18 + 6),
              Object,
              HandleInformation,
              v95,
              v96,
              v97);
          }
        }
        else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          v78 = (_DWORD *)*((_QWORD *)v37 + 3);
          LODWORD(v99) = v78[5];
          LODWORD(v98) = v78[4];
          LODWORD(v97) = v78[3];
          LODWORD(v96) = v78[2];
          LODWORD(v95) = v78[1];
          LODWORD(HandleInformation) = *v78;
          LODWORD(Object) = *(_DWORD *)v37;
          McTemplateK0pqqqqqqq_EtwWriteTransfer(
            (__int64)v78,
            &EventCddStandardAllocationSharedPrimarySurface,
            v35,
            *((_QWORD *)v18 + 6),
            Object,
            HandleInformation,
            v95,
            v96,
            v97,
            v98,
            v99);
        }
      }
    }
LABEL_35:
    v38 = *((_QWORD *)v13 + 2);
    v106 = 0;
    LOBYTE(HandleInformation) = v101 != 0;
    LODWORD(v14) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, PVOID, POBJECT_HANDLE_INFORMATION, struct DXGALLOCATION *, __int64 *, int *, char *))(*(_QWORD *)(*(_QWORD *)(v38 + 760) + 8LL) + 120LL))(
                     *(_QWORD *)(v38 + 768),
                     *((_QWORD *)v13 + 99),
                     *(_QWORD *)(*((_QWORD *)v18 + 6) + 8LL),
                     v118[v9].MaximumRenamingListLength,
                     BaseAddress,
                     HandleInformation,
                     v18,
                     &v109,
                     &v106,
                     &v116);
    v10 = (_BYTE)a8 && v116;
    v39 = *((_DWORD *)v18 + 18) & 0xFFFC0FFF;
    LOBYTE(a8) = v10;
    v40 = v106 & 0x3F;
    *((_DWORD *)v18 + 18) = v39 | (v40 << 12);
    *(_DWORD *)(*((_QWORD *)v18 + 6) + 4LL) = *(_DWORD *)(*((_QWORD *)v18 + 6) + 4LL) & 0xF81FFFFF | (v40 << 21);
    if ( (int)v14 < 0 )
      goto LABEL_38;
    v48 = v109;
    if ( !v109 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4548;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pVidMmMultiAlloc", 4548LL, 0LL, 0LL, 0LL, 0LL);
      v48 = v109;
    }
    v49 = v118;
    *((_QWORD *)v18 + 3) = v48;
    v50 = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v49[v9].Flags.Value;
    if ( (*(_WORD *)&v50 & 0x100) != 0 )
      goto LABEL_107;
    v51 = *(_DWORD *)(*((_QWORD *)v18 + 6) + 4LL);
    if ( (v51 & 0x20) == 0 && (*(_DWORD *)&v50 & 0x20200) == 0 )
    {
      if ( (v51 & 0x4000) == 0 )
        goto LABEL_70;
LABEL_107:
      if ( (*(_WORD *)&v50 & 0x100) != 0 )
        *(_DWORD *)(*((_QWORD *)v18 + 6) + 4LL) |= 8u;
    }
    if ( (v49[v9].Flags.Value & 0x200) != 0 )
      *(_DWORD *)(*((_QWORD *)v18 + 6) + 4LL) |= 0x20u;
    if ( (v49[v9].Flags.Value & 0x20000) != 0 )
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
    v70 = *((_QWORD *)v18 + 6);
    *((_DWORD *)v18 + 18) |= 0x800u;
    if ( (*(_DWORD *)(v70 + 4) & 0x4000) != 0 )
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
      v65 = *((_QWORD *)v13 + 2);
      v66 = (struct VIDMM_DEVICE *)*((_QWORD *)v13 + 99);
      v67 = *((_DWORD *)v18 + 18) >> 12;
      v111 = 0LL;
      v113 = 0LL;
      VIDMM_EXPORT::VidMmGetDevicePagingQueue(*(VIDMM_EXPORT **)(v65 + 760), v66, v67 & 0x3F, &v111, &v113);
      v68 = *((_QWORD *)v13 + 2);
      v112 = 0LL;
      v114[0] = 0LL;
      Resident = VIDMM_EXPORT::VidMmMakeResident(
                   *(VIDMM_EXPORT **)(v68 + 760),
                   *(struct VIDMM_GLOBAL **)(v68 + 768),
                   v111,
                   (struct VIDMM_MULTI_ALLOC **)v18 + 3,
                   1u,
                   3u,
                   &v112,
                   v114);
      v14 = Resident;
      if ( Resident < 0 )
      {
        WdLogSingleEntry1(2LL, Resident);
        WdLogGlobalForLineNumber = 4637;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
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
          &v113,
          &v112);
        LODWORD(v14) = 0;
      }
    }
    v18 = (struct DXGALLOCATION *)*((_QWORD *)v18 + 8);
    ++v9;
    v16 = v104;
    v11 = v117;
    v15 = v101;
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
        DXGDEVICE::DestroyAdapterAllocation(v13, *((struct DXGADAPTERALLOCATION **)v42 + 6));
        v19 = a7;
      }
      v42 = (struct DXGALLOCATION *)*((_QWORD *)v42 + 8);
      ++v41;
    }
    while ( v41 < a2->NumAllocations );
  }
  return (unsigned int)v14;
}
