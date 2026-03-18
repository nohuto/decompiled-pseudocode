/*
 * XREFs of ?VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAPEAXPEBX3EEPEAPEAE@Z @ 0x140227FBC
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x140356E10 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140035BD0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400644F8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x14018462C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ?FindMappingFromGuestVidPnSourceId@REMOTEMONITORMAPPING@@QEAAJIPEAUPATH_IDENTIFIER_HOST@1@@Z @ 0x1401F3F20 (-FindMappingFromGuestVidPnSourceId@REMOTEMONITORMAPPING@@QEAAJIPEAUPATH_IDENTIFIER_HOST@1@@Z.c)
 *     ?CreateGpadlFromBuffer@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAXIPEAI@Z @ 0x14021B3B0 (-CreateGpadlFromBuffer@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAXIPEAI@Z.c)
 *     ?CreateGpadlFromMdl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_MDL@@PEAI@Z @ 0x14021B428 (-CreateGpadlFromMdl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_MDL@@PEAI@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x14022EE3C (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1403E0D70 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
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
        void *Src,
        char a10,
        char a11,
        unsigned __int8 **a12)
{
  const struct _D3DKMT_CREATEALLOCATION *v13; // r13
  UINT PrivateRuntimeDataSize; // eax
  unsigned int v15; // r9d
  unsigned int v16; // esi
  unsigned int v17; // r8d
  __int64 NumAllocations; // rcx
  UINT *p_PrivateDriverDataSize; // rdx
  unsigned int v20; // eax
  unsigned int v21; // edx
  int v22; // r14d
  __int64 v23; // rdi
  __int64 v25; // r14
  void *v26; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // ecx
  size_t v28; // rdx
  unsigned int v29; // ecx
  D3DKMT_CREATEALLOCATIONFLAGS v30; // eax
  unsigned int v31; // ecx
  unsigned int v32; // r14d
  UINT v33; // esi
  unsigned int v34; // eax
  UINT *v35; // r14
  UINT v36; // r12d
  int v37; // r15d
  union _D3DDDI_ALLOCATIONINFO2::$44A4C31F1A7477E87F078BFEBCD2D122 *p_Flags; // rsi
  D3DKMT_CREATEALLOCATIONFLAGS v39; // eax
  struct DXGGLOBAL *v40; // rax
  const void *v41; // rdx
  int v42; // ecx
  char v43; // si
  __int64 v44; // rcx
  char v45; // al
  __int64 v46; // rdi
  _DWORD *v47; // r15
  _DWORD *v48; // rdx
  char *v49; // rdi
  struct _D3DDDI_ALLOCATIONINFO2 *v50; // r9
  UINT i; // r12d
  __int64 v52; // rcx
  __int64 v53; // rsi
  SIZE_T v54; // rdi
  struct _MDL *PagesForMdl; // rdi
  struct DXGGLOBAL *Global; // rax
  char v57; // r12
  HANDLE hSection; // rcx
  NTSTATUS v59; // eax
  __int64 v60; // rcx
  __int64 v61; // rdi
  __int64 CurrentProcess; // rsi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  PVOID v64; // rdi
  struct DXGGLOBAL *v65; // rax
  struct _MDL *Mdl; // rsi
  PVOID v67; // rsi
  __int64 v68; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v69; // rax
  struct DXGKVMB_COMMAND_BASE *v70; // r8
  int v71; // edx
  int v72; // eax
  int v73; // eax
  unsigned int v74; // esi
  DXG_VMBUS_CHANNEL_BASE *v75; // rdi
  ULONG v76; // r8d
  __int64 *v77; // rdx
  __int64 v78; // r13
  struct DXGKVMB_COMMAND_BASE *v79; // rcx
  _QWORD *v80; // r9
  unsigned int v81; // r12d
  int v82; // eax
  __int64 v83; // rcx
  __int64 v84; // rax
  int v85; // eax
  struct DXG_VMBUS_CHANNEL_BASE *v86; // rdi
  __int64 v87; // rdx
  int v88; // eax
  MEMORY_CACHING_TYPE CacheType[2]; // [rsp+20h] [rbp-5D8h]
  char v90; // [rsp+60h] [rbp-598h]
  char v91; // [rsp+60h] [rbp-598h]
  int v92; // [rsp+64h] [rbp-594h]
  UINT v93; // [rsp+64h] [rbp-594h]
  struct _D3DDDI_ALLOCATIONINFO2 *v94; // [rsp+70h] [rbp-588h]
  unsigned int v95; // [rsp+78h] [rbp-580h] BYREF
  ULONG Length[2]; // [rsp+80h] [rbp-578h]
  struct DXG_VMBUS_CHANNEL_BASE *v97; // [rsp+88h] [rbp-570h]
  unsigned int v98; // [rsp+90h] [rbp-568h] BYREF
  PVOID VirtualAddress; // [rsp+98h] [rbp-560h] BYREF
  void *v100; // [rsp+A0h] [rbp-558h]
  _DWORD *v101; // [rsp+A8h] [rbp-550h]
  PVOID v102; // [rsp+B0h] [rbp-548h]
  _DWORD *v103; // [rsp+B8h] [rbp-540h]
  void *v104; // [rsp+C0h] [rbp-538h]
  __int64 v105; // [rsp+C8h] [rbp-530h] BYREF
  void **v106; // [rsp+D0h] [rbp-528h]
  char *v107; // [rsp+D8h] [rbp-520h]
  __int64 v108; // [rsp+E0h] [rbp-518h] BYREF
  UINT v109; // [rsp+E8h] [rbp-510h]
  PVOID Object; // [rsp+F0h] [rbp-508h] BYREF
  const struct _D3DKMT_CREATEALLOCATION *v111; // [rsp+F8h] [rbp-500h]
  char *v112; // [rsp+100h] [rbp-4F8h]
  unsigned __int8 **v113; // [rsp+108h] [rbp-4F0h]
  _QWORD v114[2]; // [rsp+110h] [rbp-4E8h] BYREF
  struct DXGKVMB_COMMAND_BASE *v115[2]; // [rsp+120h] [rbp-4D8h] BYREF
  unsigned int v116; // [rsp+130h] [rbp-4C8h]
  struct DXGKVMB_COMMAND_BASE *v117[2]; // [rsp+240h] [rbp-3B8h] BYREF
  unsigned int v118; // [rsp+250h] [rbp-3A8h]
  __int128 v119; // [rsp+360h] [rbp-298h] BYREF
  int v120; // [rsp+370h] [rbp-288h]
  __int128 v121; // [rsp+480h] [rbp-178h] BYREF
  int v122; // [rsp+490h] [rbp-168h]
  char v123[16]; // [rsp+5A0h] [rbp-58h] BYREF
  int v124; // [rsp+5B0h] [rbp-48h]

  v97 = this;
  v114[1] = this;
  v13 = a5;
  v111 = a5;
  v94 = a6;
  v106 = a7;
  v104 = a8;
  v113 = a12;
  *a12 = 0LL;
  if ( !a10 || (v90 = 1, (*(_DWORD *)&a5->Flags & 0x10000) != 0) )
    v90 = 0;
  v95 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 434);
  PrivateRuntimeDataSize = a5->PrivateRuntimeDataSize;
  v15 = PrivateRuntimeDataSize + a5->PrivateDriverDataSize;
  if ( v15 < PrivateRuntimeDataSize )
    return 2147483653LL;
  v16 = 0;
  v17 = 0;
  NumAllocations = a5->NumAllocations;
  if ( (_DWORD)NumAllocations )
  {
    p_PrivateDriverDataSize = &a6->PrivateDriverDataSize;
    while ( v16 + *p_PrivateDriverDataSize >= v16 )
    {
      v16 += *p_PrivateDriverDataSize;
      ++v17;
      p_PrivateDriverDataSize += 24;
      if ( v17 >= (unsigned int)NumAllocations )
        goto LABEL_9;
    }
    return 2147483653LL;
  }
LABEL_9:
  v20 = v16 + v15;
  if ( v16 + v15 < v15 )
    return 2147483653LL;
  v21 = v20 + 64;
  if ( v20 + 64 < v20 )
    return 2147483653LL;
  if ( (unsigned int)(NumAllocations - 1) > 0x71B || v16 > 0x20000 )
  {
    WdLogSingleEntry2(2LL, v16, a5->NumAllocations);
    WdLogGlobalForLineNumber = 10087;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid VM bus message size: 0x%I64x or invalid number of allocations: 0x%I64x",
      v16,
      a5->NumAllocations,
      0LL,
      0LL,
      0LL);
    return 2147483653LL;
  }
  v22 = 12 * NumAllocations;
  if ( (unsigned __int64)(12 * NumAllocations) > 0xFFFFFFFF )
    return 2147483653LL;
  Length[0] = v22 + v21;
  if ( v22 + v21 < v21 )
    return 2147483653LL;
  v92 = 0;
  v119 = 0LL;
  v120 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v119, v97, v22 + v21, 0LL, 0LL, 0LL);
  v23 = v119;
  if ( !(_QWORD)v119 )
  {
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v119);
    return 3221225495LL;
  }
  *(_QWORD *)v119 = 0LL;
  *(_DWORD *)(v23 + 8) = 0;
  *(_BYTE *)(v23 + 12) = 0;
  *(_DWORD *)(v23 + 12) &= 0x1FFu;
  *(_QWORD *)(v23 + 16) = 4LL;
  v98 = (v16 + 72 * a5->NumAllocations + 23) & 0xFFFFFFF8;
  v100 = (void *)operator new[](v98, 0x4B677844u, 64LL);
  if ( !v100 )
  {
    LODWORD(v25) = -1073741801;
    v26 = 0LL;
    goto LABEL_139;
  }
  *(_DWORD *)(v23 + 24) = a3;
  *(_DWORD *)(v23 + 8) = a2;
  Flags = a5->Flags;
  *(D3DKMT_CREATEALLOCATIONFLAGS *)(v23 + 44) = Flags;
  *(_DWORD *)(v23 + 28) = a4;
  *(_QWORD *)(v23 + 48) = a5->hPrivateRuntimeResourceHandle;
  *(_DWORD *)(v23 + 40) = a5->NumAllocations;
  v28 = a5->PrivateRuntimeDataSize;
  *(_DWORD *)(v23 + 32) = v28;
  *(_DWORD *)(v23 + 36) = a5->PrivateDriverDataSize;
  v29 = *(_DWORD *)&Flags & 0xFFFEFFFF;
  *(_DWORD *)(v23 + 44) = v29;
  if ( (*(_DWORD *)&a5->Flags & 0x20020) != 0 )
  {
    v29 &= 0xFFFFE7FF;
    *(_DWORD *)(v23 + 44) = v29;
  }
  else if ( (v29 & 0x1000) != 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 10145;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Open cross adapter allocation is not supported",
      10145LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v25) = -1073741811;
    goto LABEL_22;
  }
  v30 = a5->Flags;
  if ( (*(_BYTE *)&v30 & 8) != 0 )
  {
    LOBYTE(v92) = 1;
    v31 = v29 & 0xFFFFFFF7;
LABEL_30:
    *(_DWORD *)(v23 + 44) = v31 | 0x20;
    goto LABEL_31;
  }
  if ( (*(_BYTE *)&v30 & 0x20) != 0 )
  {
    LOBYTE(v92) = 2;
    goto LABEL_31;
  }
  if ( (*(_DWORD *)&v30 & 0x20000) != 0 )
  {
    LOBYTE(v92) = 2;
    v31 = v29 & 0xFFFDFFFF;
    goto LABEL_30;
  }
LABEL_31:
  v32 = v22 + 64;
  v33 = v32 + a5->PrivateRuntimeDataSize;
  if ( (_DWORD)v28 && Src )
    memmove((void *)(v23 + v32), Src, v28);
  v34 = *(_DWORD *)(v23 + 36);
  if ( v34 && v104 )
    memmove((void *)(v23 + v33), v104, v34);
  v35 = (UINT *)(v23 + 64);
  v36 = v33 + *(_DWORD *)(v23 + 36);
  v37 = 0;
  if ( !a5->NumAllocations )
  {
LABEL_61:
    v42 = *(_DWORD *)(v23 + 44);
    if ( (v42 & 0x20) != 0 || (*(_DWORD *)&a5->Flags & 8) != 0 || (v43 = 0, (v42 & 0x20000) != 0) )
      v43 = 1;
    v91 = v43;
    if ( v95 < 0x1E )
    {
      if ( !a11 || (v45 = 1, v43) )
        v45 = 0;
      *(_BYTE *)(v23 + 56) = v45;
    }
    else
    {
      if ( !a11 || (v44 = 1LL, v43) )
        v44 = 0LL;
      *(_QWORD *)(v23 + 56) = v44 | *(_QWORD *)(v23 + 56) & 0xFFFFFFFFFFFFFFFEuLL;
    }
    v46 = v98;
    v95 = v98;
    v47 = v100;
    LODWORD(v25) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(v97, (struct DXGVMBUSMESSAGE *)&v119, v100, &v95);
    if ( (int)v25 < 0 || (LODWORD(v25) = -1073741823, v95 < (unsigned int)v46) )
    {
      v26 = v100;
    }
    else
    {
      LODWORD(v25) = 0;
      v101 = v47;
      v48 = v47;
      v103 = v47;
      v47[3] = v92;
      v112 = (char *)v47 + v46;
      v49 = (char *)&v47[16 * (a5->NumAllocations - 1) + 22 + 2 * (a5->NumAllocations - 1)];
      v50 = a6;
      for ( i = 0; ; ++i )
      {
        v93 = i;
        v104 = v50;
        v107 = v49;
        if ( i >= v13->NumAllocations )
          break;
        if ( v43 && (int)v25 >= 0 )
        {
          v52 = (unsigned int)v13->Flags;
          v53 = 9LL * i;
          v54 = *(_QWORD *)&v48[18 * i + 8];
          *(_QWORD *)Length = v54;
          if ( (v52 & 8) != 0 )
          {
            PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, v54, MmCached, 4u);
            if ( !PagesForMdl )
            {
              LODWORD(v25) = -1073741801;
              WdLogSingleEntry0(6LL);
              WdLogGlobalForLineNumber = 10351;
              DxgkLogInternalTriageEvent(
                0LL,
                262145LL,
                0xFFFFFFFFLL,
                L"Failed to allocate memory for protecter allocation",
                10351LL,
                0LL,
                0LL,
                0LL,
                0LL);
              break;
            }
            v94->hSection = PagesForMdl;
            if ( (*((_BYTE *)DXGGLOBAL::GetGlobal() + 1744) & 1) == 0 )
            {
              Global = DXGGLOBAL::GetGlobal();
              LODWORD(v25) = DXG_GUEST_GLOBAL_VMBUS::CreateGpadlFromMdl(
                               *((struct _KTHREAD ***)Global + 210),
                               PagesForMdl,
                               &v103[18 * i + 7]);
            }
          }
          else
          {
            VirtualAddress = 0LL;
            v102 = 0LL;
            v57 = 0;
            if ( (v52 & 0x20000) != 0 )
            {
              hSection = v50->hSection;
              Object = 0LL;
              v59 = ObReferenceObjectByHandle(hSection, 0x20000u, MmSectionObjectType, 1, &Object, 0LL);
              v25 = v59;
              v102 = Object;
              if ( v59 >= 0 )
              {
                v114[0] = 0LL;
                v105 = *(_QWORD *)&v103[2 * v53 + 8];
                v61 = v105;
                CurrentProcess = PsGetCurrentProcess(v60);
                VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
                *(_QWORD *)CacheType = v61;
                v64 = v102;
                LODWORD(v25) = (*((__int64 (__fastcall **)(PVOID, __int64, PVOID *, _QWORD, MEMORY_CACHING_TYPE *, _QWORD *, __int64 *, int, _DWORD, int))VirtualMemoryInterface
                                + 3))(
                                 v102,
                                 CurrentProcess,
                                 &VirtualAddress,
                                 0LL,
                                 *(MEMORY_CACHING_TYPE **)CacheType,
                                 v114,
                                 &v105,
                                 2,
                                 0,
                                 4);
                if ( (int)v25 >= 0 )
                {
                  v57 = 1;
                }
                else
                {
                  WdLogSingleEntry1(2LL, v105);
                  WdLogGlobalForLineNumber = 10404;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000LL,
                    0xFFFFFFFFLL,
                    L"Failed to map allocation view. Size: 0x%I64x",
                    v105,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  ObfDereferenceObject(v64);
                }
              }
              else
              {
                WdLogSingleEntry2(2LL, v94->hSection, v59);
                WdLogGlobalForLineNumber = 10385;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Failed to take a reference on hSection:0x%I64x, returning 0x%I64x",
                  (__int64)v94->hSection,
                  v25,
                  0LL,
                  0LL,
                  0LL);
              }
              LODWORD(v54) = Length[0];
            }
            else
            {
              VirtualAddress = v50->hSection;
            }
            if ( (int)v25 >= 0 )
            {
              if ( (*((_BYTE *)DXGGLOBAL::GetGlobal() + 1744) & 1) != 0 )
              {
                Mdl = IoAllocateMdl(VirtualAddress, v54, 0, 0, 0LL);
                *(_QWORD *)Length = Mdl;
                if ( Mdl )
                {
                  v101[18 * v93 + 6] &= ~0x200000u;
                  MmProbeAndLockPages(Mdl, 0, (LOCK_OPERATION)(~(unsigned __int8)(*(_DWORD *)&v13->Flags >> 6) & 2));
                  v101[18 * v93 + 6] |= 0x200000u;
                }
                else
                {
                  LODWORD(v25) = -1073741801;
                  WdLogSingleEntry1(2LL, -1073741801LL);
                  WdLogGlobalForLineNumber = 10432;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000LL,
                    0xFFFFFFFFLL,
                    L"Failed to allocate MDL for sysmem: 0x%I64x",
                    -1073741801LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                v94->hSection = Mdl;
              }
              else
              {
                v65 = DXGGLOBAL::GetGlobal();
                LODWORD(v25) = DXG_GUEST_GLOBAL_VMBUS::CreateGpadlFromBuffer(
                                 *((struct _KTHREAD ***)v65 + 210),
                                 VirtualAddress,
                                 v54,
                                 &v101[18 * v93 + 7]);
              }
            }
            if ( v57 )
            {
              v67 = VirtualAddress;
              v68 = PsGetCurrentProcess(v52);
              v69 = DxgkGetVirtualMemoryInterface();
              (*((void (__fastcall **)(__int64, PVOID))v69 + 4))(v68, v67);
              ObfDereferenceObject(v102);
            }
            i = v93;
          }
          if ( (int)v25 >= 0 )
          {
            if ( (*((_BYTE *)DXGGLOBAL::GetGlobal() + 1744) & 1) != 0 )
            {
              v74 = (unsigned int)(v103[18 * i + 8] + 4095) >> 12;
              *(_OWORD *)v115 = 0LL;
              v116 = 0;
              v75 = v97;
              DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v115, v97, 0x1EFF0u, 0LL, 0LL, 0LL);
              if ( !v115[0] )
              {
                LODWORD(v25) = -1073741801;
                WdLogSingleEntry0(2LL);
                WdLogGlobalForLineNumber = 10493;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Failed to allocate DXGKVMB_COMMAND_SETEXISTINGSYSMEMPAGES",
                  10493LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              v76 = 0;
              Length[0] = 0;
              v77 = (__int64 *)((char *)v94->hSection + 48);
              v102 = v77;
              if ( v74 )
              {
                v78 = 9LL * i;
                do
                {
                  if ( (int)v25 < 0 )
                    break;
                  v79 = v115[0];
                  v80 = (_QWORD *)((char *)v115[0] + 40);
                  v81 = 15865;
                  if ( v74 - v76 < 0x3DF9 )
                    v81 = v74 - v76;
                  v82 = v101[2 * v78 + 4];
                  *(_QWORD *)v115[0] = 0LL;
                  *((_DWORD *)v79 + 2) = a2;
                  *((_BYTE *)v79 + 12) = 0;
                  *((_DWORD *)v79 + 3) &= 0x1FFu;
                  *((_QWORD *)v79 + 2) = 66LL;
                  *((_DWORD *)v79 + 6) = a3;
                  *((_DWORD *)v79 + 7) = v82;
                  *((_DWORD *)v79 + 8) = v81;
                  *((_DWORD *)v79 + 9) = v76;
                  if ( v81 )
                  {
                    v83 = v81;
                    do
                    {
                      v84 = *v77++;
                      *v80++ = v84;
                      --v83;
                    }
                    while ( v83 );
                    v102 = v77;
                  }
                  v85 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
                          v75,
                          (unsigned __int8 *)v115[1],
                          v115[0],
                          v116);
                  v25 = v85;
                  if ( v85 < 0 )
                  {
                    WdLogSingleEntry1(2LL, v85);
                    WdLogGlobalForLineNumber = 10514;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000LL,
                      0xFFFFFFFFLL,
                      L"DXGKVMB_COMMAND_SETEXISTINGSYSMEMPAGES failed: 0x%I64x",
                      v25,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                    v75 = v97;
                  }
                  v76 = v81 + Length[0];
                  Length[0] = v76;
                  v77 = (__int64 *)v102;
                }
                while ( v76 < v74 );
                v13 = v111;
                i = v93;
              }
              DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v115);
            }
            else
            {
              *(_OWORD *)v117 = 0LL;
              v118 = 0;
              DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v117, v97, 0x28u, 0LL, 0LL, 0LL);
              v70 = v117[0];
              v71 = v103[18 * i + 7];
              v72 = v101[18 * i + 4];
              *(_QWORD *)v117[0] = 0LL;
              *((_DWORD *)v70 + 2) = a2;
              *((_BYTE *)v70 + 12) = 0;
              *((_DWORD *)v70 + 3) &= 0x1FFu;
              *((_QWORD *)v70 + 2) = 45LL;
              *((_DWORD *)v70 + 6) = a3;
              *((_DWORD *)v70 + 7) = v72;
              *((_DWORD *)v70 + 8) = v71;
              v73 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
                      v97,
                      (unsigned __int8 *)v117[1],
                      v117[0],
                      v118);
              v25 = v73;
              if ( v73 < 0 )
              {
                WdLogSingleEntry1(2LL, v73);
                WdLogGlobalForLineNumber = 10477;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Failed to set existing sysmem Gpadl: 0x%I64x",
                  v25,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v117);
            }
          }
          else
          {
            WdLogSingleEntry1(2LL, (int)v25);
            WdLogGlobalForLineNumber = 10463;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Failed to allocate existing sysmem Gpadl: 0x%I64x",
              (int)v25,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( a11 )
          {
            v121 = 0LL;
            v122 = 0;
            v86 = v97;
            DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v121, v97, 0x30u, 0LL, 0LL, 0LL);
            v87 = v121;
            if ( (_QWORD)v121 )
            {
              *(_QWORD *)v121 = 0LL;
              *(_BYTE *)(v87 + 12) = 0;
              *(_DWORD *)(v87 + 12) &= 0x1FFu;
              *(_QWORD *)(v87 + 16) = 11LL;
              *(_DWORD *)(v87 + 8) = a2;
              *(_DWORD *)(v87 + 24) = a3;
              *(_DWORD *)(v87 + 36) = 1;
              *(_DWORD *)(v87 + 40) = v101[18 * i + 4];
              *(_DWORD *)(v87 + 32) = 3;
              v98 = 24;
              v88 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(v86, (struct DXGVMBUSMESSAGE *)&v121, v123, &v98);
              v25 = v88;
              if ( v88 >= 0 )
              {
                LODWORD(v25) = v124;
              }
              else
              {
                WdLogSingleEntry1(2LL, v88);
                WdLogGlobalForLineNumber = 10550;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"VmBusSendMakeResident failed: 0x%I64x",
                  v25,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            else
            {
              WdLogSingleEntry0(6LL);
              WdLogGlobalForLineNumber = 10534;
              DxgkLogInternalTriageEvent(
                0LL,
                262145LL,
                0xFFFFFFFFLL,
                L"Failed to allocate storage for input buffer to MakeResident",
                10534LL,
                0LL,
                0LL,
                0LL,
                0LL);
              LODWORD(v25) = -1073741801;
            }
            DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v121);
          }
          v50 = v94;
          v49 = v107;
          v43 = v91;
        }
        if ( &v49[v50->PrivateDriverDataSize] > v112 )
        {
          WdLogSingleEntry5(0LL, 275LL, 2LL, 0LL, 0LL, 0LL);
          WdLogGlobalForLineNumber = 10565;
          v50 = v94;
        }
        memmove(v106[i], v49, v50->PrivateDriverDataSize);
        v49 += v94->PrivateDriverDataSize;
        v50 = ++v94;
        v48 = v103;
      }
      *v113 = (unsigned __int8 *)v100;
      v26 = 0LL;
    }
    goto LABEL_139;
  }
  p_Flags = &a6->Flags;
  while ( 1 )
  {
    v39 = a5->Flags;
    if ( *(_QWORD *)&p_Flags[-6].0 )
    {
      if ( (*(_DWORD *)&v39 & 0x20000) == 0 )
      {
        *(_DWORD *)(v23 + 44) |= 0x20u;
        LOBYTE(v92) = v92 | 2;
      }
      goto LABEL_43;
    }
    if ( (*(_BYTE *)&v39 & 0x20) != 0 )
      break;
LABEL_43:
    *v35 = p_Flags->Value;
    if ( (p_Flags->Value & 1) != 0 && a5->NumAllocations == 1 && v95 >= 0x1E )
    {
      v108 = 0LL;
      v109 = 0;
      v40 = DXGGLOBAL::GetGlobal();
      if ( (int)REMOTEMONITORMAPPING::FindMappingFromGuestVidPnSourceId(
                  (struct _KTHREAD **)v40 + 38157,
                  p_Flags[-1].Value,
                  (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *)&v108) >= 0
        && v108 == *(_QWORD *)(*((_QWORD *)v97 + 9) + 4764LL) )
      {
        v35[2] = v109;
        *(_QWORD *)(v23 + 56) |= 2uLL;
      }
      else
      {
        v35[2] = 0;
      }
    }
    else
    {
      v35[2] = p_Flags[-1].Value;
    }
    if ( v36 + p_Flags[-2].Value > Length[0] )
    {
      WdLogSingleEntry5(0LL, 275LL, 2LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 10264;
    }
    v35[1] = p_Flags[-2].Value;
    if ( p_Flags[-2].Value )
    {
      if ( v90 )
        v41 = v106[v37];
      else
        v41 = *(const void **)&p_Flags[-4].0;
      if ( v41 )
        memmove((void *)(v23 + v36), v41, p_Flags[-2].Value);
      v36 += p_Flags[-2].Value;
    }
    v35 += 3;
    p_Flags += 24;
    if ( ++v37 >= a5->NumAllocations )
      goto LABEL_61;
  }
  LODWORD(v25) = -1073741811;
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 10231;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"pSysMem pointer is NULL: 0x%I64x",
    10231LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_22:
  v26 = v100;
LABEL_139:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v26);
  if ( (int)v25 < 0 )
  {
    WdLogSingleEntry1(2LL, (int)v25);
    WdLogGlobalForLineNumber = 10583;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"VmBusSendCreateAllocation failed: 0x%I64x",
      (int)v25,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v119);
  return (unsigned int)v25;
}
