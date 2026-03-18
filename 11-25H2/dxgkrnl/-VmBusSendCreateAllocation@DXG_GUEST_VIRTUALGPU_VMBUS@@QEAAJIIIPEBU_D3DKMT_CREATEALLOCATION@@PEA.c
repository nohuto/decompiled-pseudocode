/*
 * XREFs of ?VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAPEAXPEBX3EEPEAPEAE@Z @ 0x1402218CC
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x140361FE0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140035DA0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400648D8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x140182164 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ?FindMappingFromGuestVidPnSourceId@REMOTEMONITORMAPPING@@QEAAJIPEAUPATH_IDENTIFIER_HOST@1@@Z @ 0x1401EE57C (-FindMappingFromGuestVidPnSourceId@REMOTEMONITORMAPPING@@QEAAJIPEAUPATH_IDENTIFIER_HOST@1@@Z.c)
 *     ?CreateGpadlFromBuffer@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAXIPEAI@Z @ 0x140214DA4 (-CreateGpadlFromBuffer@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAXIPEAI@Z.c)
 *     ?CreateGpadlFromMdl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_MDL@@PEAI@Z @ 0x140214E1C (-CreateGpadlFromMdl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_MDL@@PEAI@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x140228550 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402FACC0 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateAllocation(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        int a3,
        int a4,
        const struct _D3DKMT_CREATEALLOCATION *a5,
        struct _D3DDDI_ALLOCATIONINFO2 *a6,
        void **a7,
        void *a8,
        void *a9,
        char a10,
        unsigned __int8 a11,
        unsigned __int8 **a12)
{
  UINT PrivateRuntimeDataSize; // eax
  unsigned int v14; // r8d
  unsigned int v15; // esi
  unsigned int v16; // ecx
  __int64 NumAllocations; // rdx
  unsigned int v18; // eax
  unsigned int v19; // ecx
  int v20; // r15d
  __int64 v21; // r9
  __int64 v22; // rdi
  _DWORD *v24; // rsi
  __int64 v25; // r14
  D3DKMT_CREATEALLOCATIONFLAGS *p_Flags; // r10
  unsigned int *v27; // r9
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // edx
  size_t v29; // r8
  unsigned int v30; // edx
  D3DKMT_CREATEALLOCATIONFLAGS v31; // eax
  unsigned int v32; // edx
  unsigned int v33; // r15d
  UINT v34; // esi
  unsigned int v35; // eax
  UINT *v36; // r14
  UINT v37; // r12d
  UINT v38; // r15d
  UINT *i; // rsi
  UINT *v40; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS v41; // eax
  struct DXGGLOBAL *Global; // rax
  const void *v43; // rdx
  __int64 v44; // rdi
  __int64 v45; // rcx
  _DWORD *v46; // r9
  UINT *v47; // rdx
  char *v48; // r12
  struct _D3DDDI_ALLOCATIONINFO2 *v49; // r8
  UINT v50; // edi
  D3DKMT_CREATEALLOCATIONFLAGS v51; // edx
  __int64 v52; // rsi
  __int64 v53; // r15
  SIZE_T v54; // rdi
  struct _MDL *PagesForMdl; // rdi
  struct DXGGLOBAL *v56; // rax
  char v57; // r13
  PVOID *p_hSection; // r12
  PVOID v59; // rcx
  NTSTATUS v60; // eax
  __int64 v61; // rcx
  __int64 v62; // rdi
  __int64 CurrentProcess; // rsi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  PVOID v65; // rdi
  struct DXGGLOBAL *v66; // rax
  struct _MDL *Mdl; // rdi
  PVOID v68; // rsi
  __int64 v69; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v70; // rax
  struct DXGKVMB_COMMAND_BASE *v71; // r8
  int v72; // edx
  int v73; // ecx
  int v74; // eax
  unsigned int v75; // esi
  DXG_VMBUS_CHANNEL_BASE *v76; // rdi
  unsigned int v77; // r13d
  __int64 *v78; // r12
  __int64 v79; // r8
  struct DXGKVMB_COMMAND_BASE *v80; // rcx
  _QWORD *v81; // rdx
  unsigned int v82; // r15d
  int v83; // eax
  __int64 v84; // rcx
  __int64 v85; // rax
  int v86; // eax
  struct _D3DDDI_ALLOCATIONINFO2 *v87; // r13
  MEMORY_CACHING_TYPE CacheType[2]; // [rsp+20h] [rbp-4C8h]
  char v89; // [rsp+60h] [rbp-488h]
  int v90; // [rsp+64h] [rbp-484h]
  UINT v91; // [rsp+64h] [rbp-484h]
  unsigned int v92; // [rsp+68h] [rbp-480h] BYREF
  PVOID VirtualAddress; // [rsp+70h] [rbp-478h] BYREF
  struct _D3DDDI_ALLOCATIONINFO2 *v94; // [rsp+78h] [rbp-470h]
  struct DXG_VMBUS_CHANNEL_BASE *v95; // [rsp+80h] [rbp-468h]
  char *v96; // [rsp+88h] [rbp-460h]
  UINT *p_NumAllocations; // [rsp+90h] [rbp-458h]
  ULONG Length[2]; // [rsp+98h] [rbp-450h]
  void *v99; // [rsp+A0h] [rbp-448h]
  void *v100; // [rsp+A8h] [rbp-440h]
  void *Src; // [rsp+B0h] [rbp-438h]
  __int64 v102; // [rsp+B8h] [rbp-430h] BYREF
  D3DKMT_CREATEALLOCATIONFLAGS *v103; // [rsp+C0h] [rbp-428h]
  PVOID v104; // [rsp+C8h] [rbp-420h]
  __int64 v105; // [rsp+D0h] [rbp-418h]
  void **v106; // [rsp+D8h] [rbp-410h]
  __int64 v107; // [rsp+E0h] [rbp-408h]
  __int64 v108; // [rsp+E8h] [rbp-400h] BYREF
  UINT v109; // [rsp+F0h] [rbp-3F8h]
  _DWORD *v110; // [rsp+F8h] [rbp-3F0h]
  PVOID Object; // [rsp+100h] [rbp-3E8h] BYREF
  unsigned __int8 **v112; // [rsp+108h] [rbp-3E0h]
  _QWORD v113[3]; // [rsp+110h] [rbp-3D8h] BYREF
  char *v114; // [rsp+128h] [rbp-3C0h]
  _DWORD *v115; // [rsp+130h] [rbp-3B8h]
  struct DXGKVMB_COMMAND_BASE *v116[2]; // [rsp+140h] [rbp-3A8h] BYREF
  unsigned int v117; // [rsp+150h] [rbp-398h]
  struct DXGKVMB_COMMAND_BASE *v118[2]; // [rsp+260h] [rbp-288h] BYREF
  unsigned int v119; // [rsp+270h] [rbp-278h]
  __int128 v120; // [rsp+380h] [rbp-168h] BYREF
  int v121; // [rsp+390h] [rbp-158h]

  v95 = this;
  v113[2] = this;
  v94 = a6;
  v106 = a7;
  v100 = a8;
  Src = a9;
  v112 = a12;
  *a12 = 0LL;
  if ( !a10 || (v89 = 1, (*(_DWORD *)&a5->Flags & 0x10000) != 0) )
    v89 = 0;
  v92 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 426);
  PrivateRuntimeDataSize = a5->PrivateRuntimeDataSize;
  v14 = PrivateRuntimeDataSize + a5->PrivateDriverDataSize;
  if ( v14 < PrivateRuntimeDataSize )
    return 2147483653LL;
  v15 = 0;
  v16 = 0;
  p_NumAllocations = &a5->NumAllocations;
  NumAllocations = a5->NumAllocations;
  while ( v16 < (unsigned int)NumAllocations )
  {
    if ( v15 + a6[v16].PrivateDriverDataSize < v15 )
      return 2147483653LL;
    v15 += a6[v16++].PrivateDriverDataSize;
  }
  v18 = v15 + v14;
  if ( v15 + v14 < v14 )
    return 2147483653LL;
  v19 = v18 + 64;
  if ( v18 + 64 < v18 )
    return 2147483653LL;
  if ( (unsigned int)(NumAllocations - 1) > 0x71B || v15 > 0x20000 )
  {
    WdLogSingleEntry2(2LL, v15, a5->NumAllocations);
    WdLogGlobalForLineNumber = 9948;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid VM bus message size: 0x%I64x or invalid number of allocations: 0x%I64x",
      v15,
      a5->NumAllocations,
      0LL,
      0LL,
      0LL);
    return 2147483653LL;
  }
  v20 = 12 * NumAllocations;
  if ( (unsigned __int64)(12 * NumAllocations) > 0xFFFFFFFF )
    return 2147483653LL;
  LODWORD(v96) = v20 + v19;
  if ( v20 + v19 < v19 )
    return 2147483653LL;
  v90 = 0;
  v120 = 0LL;
  v121 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v120, v95, v20 + v19, 0LL, 0LL, 0LL);
  v22 = v120;
  if ( !(_QWORD)v120 )
  {
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v120);
    return 3221225495LL;
  }
  *(_QWORD *)v120 = 0LL;
  *(_DWORD *)(v22 + 8) = 0;
  *(_BYTE *)(v22 + 12) = 0;
  *(_DWORD *)(v22 + 12) &= 0x1FFu;
  *(_QWORD *)(v22 + 16) = 4LL;
  LODWORD(VirtualAddress) = (v15 + 72 * *p_NumAllocations + 23) & 0xFFFFFFF8;
  v24 = (_DWORD *)operator new[]((unsigned int)VirtualAddress, 0x4B677844u, 64LL, v21);
  v99 = v24;
  if ( !v24 )
  {
    LODWORD(v25) = -1073741801;
    goto LABEL_74;
  }
  *(_DWORD *)(v22 + 24) = a3;
  *(_DWORD *)(v22 + 8) = a2;
  p_Flags = &a5->Flags;
  v103 = &a5->Flags;
  v27 = (unsigned int *)(v22 + 44);
  v110 = (_DWORD *)(v22 + 44);
  Flags = a5->Flags;
  *(D3DKMT_CREATEALLOCATIONFLAGS *)(v22 + 44) = Flags;
  *(_DWORD *)(v22 + 28) = a4;
  *(_QWORD *)(v22 + 48) = a5->hPrivateRuntimeResourceHandle;
  *(_DWORD *)(v22 + 40) = *p_NumAllocations;
  v29 = a5->PrivateRuntimeDataSize;
  *(_DWORD *)(v22 + 32) = v29;
  *(_DWORD *)(v22 + 36) = a5->PrivateDriverDataSize;
  if ( v92 < 0x1E )
    *(_BYTE *)(v22 + 56) = a11;
  else
    *(_QWORD *)(v22 + 56) = a11 ^ (*(_QWORD *)(v22 + 56) ^ a11) & 0xFFFFFFFFFFFFFFFEuLL;
  v30 = *(_DWORD *)&Flags & 0xFFFEFFFF;
  *v27 = v30;
  if ( (*(_DWORD *)p_Flags & 0x20020) != 0 )
  {
    v30 &= 0xFFFFE7FF;
    *v27 = v30;
  }
  else if ( (v30 & 0x1000) != 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 10014;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Open cross adapter allocation is not supported",
      10014LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v25) = -1073741811;
    goto LABEL_74;
  }
  v31 = *p_Flags;
  if ( (*(_DWORD *)p_Flags & 8) != 0 )
  {
    LOBYTE(v90) = 1;
    v32 = v30 & 0xFFFFFFF7;
LABEL_32:
    *v27 = v32 | 0x20;
    goto LABEL_33;
  }
  if ( (*(_BYTE *)&v31 & 0x20) != 0 )
  {
    LOBYTE(v90) = 2;
  }
  else if ( (*(_DWORD *)&v31 & 0x20000) != 0 )
  {
    LOBYTE(v90) = 2;
    v32 = v30 & 0xFFFDFFFF;
    goto LABEL_32;
  }
LABEL_33:
  v33 = v20 + 64;
  v34 = v33 + a5->PrivateRuntimeDataSize;
  if ( (_DWORD)v29 && Src )
    memmove((void *)(v22 + v33), Src, v29);
  v35 = *(_DWORD *)(v22 + 36);
  if ( v35 && v100 )
    memmove((void *)(v22 + v34), v100, v35);
  v36 = (UINT *)(v22 + 64);
  v37 = v34 + *(_DWORD *)(v22 + 36);
  v38 = 0;
  for ( i = (UINT *)&v94->Flags; ; i += 24 )
  {
    v40 = p_NumAllocations;
    if ( v38 >= *p_NumAllocations )
      break;
    v41 = *v103;
    if ( *((_QWORD *)i - 3) )
    {
      if ( (*(_DWORD *)&v41 & 0x20000) == 0 )
      {
        *v110 |= 0x20u;
        LOBYTE(v90) = v90 | 2;
      }
    }
    else if ( (*(_BYTE *)&v41 & 0x20) != 0 )
    {
      LODWORD(v25) = -1073741811;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 10100;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"pSysMem pointer is NULL: 0x%I64x",
        10100LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v24 = v99;
      goto LABEL_74;
    }
    *v36 = *i;
    if ( (*i & 1) != 0 && *v40 == 1 && v92 >= 0x1E )
    {
      v108 = 0LL;
      v109 = 0;
      Global = DXGGLOBAL::GetGlobal();
      if ( (int)REMOTEMONITORMAPPING::FindMappingFromGuestVidPnSourceId(
                  (struct _KTHREAD **)Global + 38147,
                  *(i - 1),
                  (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *)&v108) >= 0
        && v108 == *(_QWORD *)(*((_QWORD *)v95 + 9) + 4764LL) )
      {
        v36[2] = v109;
        *(_QWORD *)(v22 + 56) |= 2uLL;
      }
      else
      {
        v36[2] = 0;
      }
    }
    else
    {
      v36[2] = *(i - 1);
    }
    if ( v37 + *(i - 2) > (unsigned int)v96 )
    {
      WdLogSingleEntry5(0LL, 275LL, 2LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 10133;
    }
    v36[1] = *(i - 2);
    if ( *(i - 2) )
    {
      if ( v89 )
        v43 = v106[v38];
      else
        v43 = (const void *)*((_QWORD *)i - 2);
      if ( v43 )
        memmove((void *)(v22 + v37), v43, *(i - 2));
      v37 += *(i - 2);
    }
    v36 += 3;
    ++v38;
  }
  v44 = (unsigned int)VirtualAddress;
  v92 = (unsigned int)VirtualAddress;
  v24 = v99;
  LODWORD(v25) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(v95, (struct DXGVMBUSMESSAGE *)&v120, v99, &v92);
  if ( (int)v25 < 0 )
    goto LABEL_74;
  LODWORD(v25) = -1073741823;
  if ( v92 < (unsigned int)v44 )
    goto LABEL_74;
  LODWORD(v25) = 0;
  v100 = v24;
  v46 = v24;
  v115 = v24;
  v24[3] = v90;
  v114 = (char *)v24 + v44;
  v47 = p_NumAllocations;
  v48 = (char *)&v24[16 * *p_NumAllocations + 4 + 2 * *p_NumAllocations];
  v49 = v94;
  Src = v94;
  v50 = 0;
  while ( 1 )
  {
    v91 = v50;
    v96 = v48;
    if ( v50 >= *v47 )
      break;
    v51 = *v103;
    LOBYTE(v45) = (*v110 & 0x20020) == 0;
    if ( ((unsigned __int8)v45 & ((*(_DWORD *)v103 & 8) == 0)) != 0 || (int)v25 < 0 )
      goto LABEL_118;
    v52 = v50;
    v105 = v50;
    v53 = (__int64)&v46[18 * v50];
    v107 = v53;
    v54 = *(_QWORD *)(v53 + 32);
    *(_QWORD *)Length = v54;
    if ( (*(_BYTE *)&v51 & 8) != 0 )
    {
      PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, v54, MmCached, 4u);
      if ( !PagesForMdl )
      {
        LODWORD(v25) = -1073741801;
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 10201;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          0xFFFFFFFFLL,
          L"Failed to allocate memory for protecter allocation",
          10201LL,
          0LL,
          0LL,
          0LL,
          0LL);
        break;
      }
      v94->hSection = PagesForMdl;
      if ( (*((_BYTE *)DXGGLOBAL::GetGlobal() + 1712) & 1) == 0 )
      {
        v56 = DXGGLOBAL::GetGlobal();
        LODWORD(v25) = DXG_GUEST_GLOBAL_VMBUS::CreateGpadlFromMdl(
                         *((struct _KTHREAD ***)v56 + 206),
                         PagesForMdl,
                         (unsigned int *)(v53 + 28));
      }
      goto LABEL_97;
    }
    VirtualAddress = 0LL;
    v104 = 0LL;
    v57 = 0;
    p_hSection = &v49->hSection;
    v113[1] = &v49->hSection;
    if ( (*(_DWORD *)&v51 & 0x20000) == 0 )
    {
      VirtualAddress = *p_hSection;
      goto LABEL_87;
    }
    v59 = *p_hSection;
    Object = 0LL;
    v60 = ObReferenceObjectByHandle(v59, 0x20000u, MmSectionObjectType, 1, &Object, 0LL);
    v25 = v60;
    v104 = Object;
    if ( v60 >= 0 )
    {
      v113[0] = 0LL;
      v102 = *(_QWORD *)(v53 + 32);
      v62 = v102;
      CurrentProcess = PsGetCurrentProcess(v61);
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      *(_QWORD *)CacheType = v62;
      v65 = v104;
      LODWORD(v25) = (*((__int64 (__fastcall **)(PVOID, __int64, PVOID *, _QWORD, MEMORY_CACHING_TYPE *, _QWORD *, __int64 *, int, _DWORD, int))VirtualMemoryInterface
                      + 3))(
                       v104,
                       CurrentProcess,
                       &VirtualAddress,
                       0LL,
                       *(MEMORY_CACHING_TYPE **)CacheType,
                       v113,
                       &v102,
                       2,
                       0,
                       4);
      if ( (int)v25 >= 0 )
      {
        v57 = 1;
        LODWORD(v54) = Length[0];
        goto LABEL_87;
      }
      WdLogSingleEntry1(2LL, v102);
      WdLogGlobalForLineNumber = 10254;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to map allocation view. Size: 0x%I64x",
        v102,
        0LL,
        0LL,
        0LL,
        0LL);
      ObfDereferenceObject(v65);
    }
    else
    {
      WdLogSingleEntry2(2LL, *p_hSection, v60);
      WdLogGlobalForLineNumber = 10235;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to take a reference on hSection:0x%I64x, returning 0x%I64x",
        (__int64)*p_hSection,
        v25,
        0LL,
        0LL,
        0LL);
    }
    LODWORD(v54) = Length[0];
LABEL_87:
    if ( (int)v25 >= 0 )
    {
      if ( (*((_BYTE *)DXGGLOBAL::GetGlobal() + 1712) & 1) != 0 )
      {
        Mdl = IoAllocateMdl(VirtualAddress, v54, 0, 0, 0LL);
        *(_QWORD *)Length = Mdl;
        if ( Mdl )
        {
          *(_DWORD *)(v53 + 24) &= ~0x200000u;
          MmProbeAndLockPages(Mdl, 0, (LOCK_OPERATION)(~(unsigned __int8)(*(unsigned int *)v103 >> 6) & 2));
          *(_DWORD *)(v53 + 24) |= 0x200000u;
        }
        else
        {
          LODWORD(v25) = -1073741801;
          WdLogSingleEntry1(2LL, -1073741801LL);
          WdLogGlobalForLineNumber = 10282;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed to allocate MDL for sysmem: 0x%I64x",
            -1073741801LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *p_hSection = Mdl;
      }
      else
      {
        v66 = DXGGLOBAL::GetGlobal();
        LODWORD(v25) = DXG_GUEST_GLOBAL_VMBUS::CreateGpadlFromBuffer(
                         *((struct _KTHREAD ***)v66 + 206),
                         VirtualAddress,
                         v54,
                         (unsigned int *)(v53 + 28));
      }
    }
    if ( v57 )
    {
      v68 = VirtualAddress;
      v69 = PsGetCurrentProcess(v45);
      v70 = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, PVOID))v70 + 4))(v69, v68);
      ObfDereferenceObject(v104);
    }
    v48 = v96;
    v52 = v105;
LABEL_97:
    if ( (int)v25 >= 0 )
    {
      if ( (*((_BYTE *)DXGGLOBAL::GetGlobal() + 1712) & 1) != 0 )
      {
        v75 = (unsigned int)(*(_DWORD *)(v53 + 32) + 4095) >> 12;
        *(_OWORD *)v116 = 0LL;
        v117 = 0;
        v76 = v95;
        DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v116, v95, 0x1EFF0u, 0LL, 0LL, 0LL);
        if ( !v116[0] )
        {
          LODWORD(v25) = -1073741801;
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 10343;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed to allocate DXGKVMB_COMMAND_SETEXISTINGSYSMEMPAGES",
            10343LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v77 = 0;
        v78 = (__int64 *)((char *)v94->hSection + 48);
        if ( v75 )
        {
          v79 = 9 * v105;
          v107 = 9 * v105;
          do
          {
            if ( (int)v25 < 0 )
              break;
            v80 = v116[0];
            v81 = (_QWORD *)((char *)v116[0] + 40);
            v82 = 15865;
            if ( v75 - v77 < 0x3DF9 )
              v82 = v75 - v77;
            v83 = *((_DWORD *)v100 + 2 * v79 + 4);
            *(_QWORD *)v116[0] = 0LL;
            *((_DWORD *)v80 + 2) = a2;
            *((_BYTE *)v80 + 12) = 0;
            *((_DWORD *)v80 + 3) &= 0x1FFu;
            *((_QWORD *)v80 + 2) = 66LL;
            *((_DWORD *)v80 + 6) = a3;
            *((_DWORD *)v80 + 7) = v83;
            *((_DWORD *)v80 + 8) = v82;
            *((_DWORD *)v80 + 9) = v77;
            if ( v82 )
            {
              v84 = v82;
              do
              {
                v85 = *v78++;
                *v81++ = v85;
                --v84;
              }
              while ( v84 );
            }
            v86 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
                    v76,
                    (unsigned __int8 *)v116[1],
                    v116[0],
                    v117);
            v25 = v86;
            if ( v86 < 0 )
            {
              WdLogSingleEntry1(2LL, v86);
              WdLogGlobalForLineNumber = 10364;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                0xFFFFFFFFLL,
                L"DXGKVMB_COMMAND_SETEXISTINGSYSMEMPAGES failed: 0x%I64x",
                v25,
                0LL,
                0LL,
                0LL,
                0LL);
              v76 = v95;
            }
            v77 += v82;
            v79 = v107;
          }
          while ( v77 < v75 );
        }
        DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v116);
        v48 = v96;
      }
      else
      {
        *(_OWORD *)v118 = 0LL;
        v119 = 0;
        DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v118, v95, 0x28u, 0LL, 0LL, 0LL);
        v71 = v118[0];
        v72 = *(_DWORD *)(v53 + 28);
        v73 = *((_DWORD *)v100 + 18 * v52 + 4);
        *(_QWORD *)v118[0] = 0LL;
        *((_DWORD *)v71 + 2) = a2;
        *((_BYTE *)v71 + 12) = 0;
        *((_DWORD *)v71 + 3) &= 0x1FFu;
        *((_QWORD *)v71 + 2) = 45LL;
        *((_DWORD *)v71 + 6) = a3;
        *((_DWORD *)v71 + 7) = v73;
        *((_DWORD *)v71 + 8) = v72;
        v74 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(v95, (unsigned __int8 *)v118[1], v118[0], v119);
        v25 = v74;
        if ( v74 < 0 )
        {
          WdLogSingleEntry1(2LL, v74);
          WdLogGlobalForLineNumber = 10327;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed to set existing sysmem Gpadl: 0x%I64x",
            v25,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v118);
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, (int)v25);
      WdLogGlobalForLineNumber = 10313;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to allocate existing sysmem Gpadl: 0x%I64x",
        (int)v25,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v50 = v91;
LABEL_118:
    v87 = v94;
    if ( &v48[v94->PrivateDriverDataSize] > v114 )
    {
      WdLogSingleEntry5(0LL, 275LL, 2LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 10377;
    }
    memmove(v106[v50], v48, v87->PrivateDriverDataSize);
    v48 += v87->PrivateDriverDataSize;
    v94 = v87 + 1;
    Src = &v87[1];
    ++v50;
    v49 = v87 + 1;
    v46 = v115;
    v47 = p_NumAllocations;
  }
  *v112 = (unsigned __int8 *)v99;
  v24 = 0LL;
LABEL_74:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v24);
  if ( (int)v25 < 0 )
  {
    WdLogSingleEntry1(2LL, (int)v25);
    WdLogGlobalForLineNumber = 10395;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"VmBusSendCreateAllocation failed: 0x%I64x",
      (int)v25,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v120);
  return (unsigned int)v25;
}
