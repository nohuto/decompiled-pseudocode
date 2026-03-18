/*
 * XREFs of ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAUVIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1400E34AC
 * Callers:
 *     VidMmUpdateGpuVirtualAddress @ 0x140042230 (VidMmUpdateGpuVirtualAddress.c)
 * Callees:
 *     VidSchWaitForSingleSyncObject @ 0x140003F10 (VidSchWaitForSingleSyncObject.c)
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14001C724 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x14001CEC4 (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140031710 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140031A2C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1400365BC (-IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140037628 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     McTemplateK0qqqqqxpp_EtwWriteTransfer @ 0x140043224 (McTemplateK0qqqqqxpp_EtwWriteTransfer.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x14004A940 (McTemplateK0qq_EtwWriteTransfer.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111K@Z @ 0x14004C118 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     memset @ 0x140056340 (memset.c)
 *     ??2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z @ 0x1400997A0 (--2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z.c)
 *     ?RecordVaPagingHistoryUpdateGpuVaFailure@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@JI@Z @ 0x14009B4BC (-RecordVaPagingHistoryUpdateGpuVaFailure@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@JI@Z.c)
 *     ?RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x1400E4148 (-RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IP.c)
 *     ?IsRangeValid@@YAE_K00@Z @ 0x1400E4258 (-IsRangeValid@@YAE_K00@Z.c)
 *     VidSchSubmitGlobalCommand @ 0x1400E45A8 (VidSchSubmitGlobalCommand.c)
 *     ?ReferenceReservedZeroVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0@Z @ 0x1400E4F04 (-ReferenceReservedZeroVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0@Z.c)
 *     ?RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@PEAUVIDMM_ALLOC@@PEAU_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION@@@Z @ 0x1400E4FBC (-RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@P.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmUpdateGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct _D3DKMT_UPDATEGPUVIRTUALADDRESS *a2,
        struct VIDMM_COMPANION_CONTEXT *a3,
        int a4,
        struct VIDMM_MULTI_ALLOC **a5,
        struct _VIDSCH_SYNC_OBJECT *a6,
        struct _KSEMAPHORE **a7)
{
  struct _D3DKMT_UPDATEGPUVIRTUALADDRESS *v9; // r12
  unsigned __int64 *v10; // r10
  __int64 v11; // rax
  __int64 v12; // r9
  char *v13; // rsi
  __int64 v14; // rax
  unsigned int *v15; // rdx
  VIDMM_GLOBAL *v16; // rcx
  __int64 v17; // r8
  struct _VIDSCH_CONTEXT *v18; // r9
  __int64 v19; // r10
  UINT i; // eax
  char *v21; // rax
  VIDMM_GLOBAL *v22; // r15
  struct _KTHREAD **v23; // rbx
  struct VIDMM_VAD *v24; // r14
  struct VIDMM_VAD *v25; // r8
  char *v26; // rcx
  struct VIDMM_VAD *v27; // rax
  struct VIDMM_VAD **v28; // rdx
  struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v29; // r14
  __int64 v30; // r15
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION_TYPE OperationType; // eax
  unsigned __int64 BaseAddress; // r12
  __int64 v33; // rcx
  __int64 v34; // r8
  struct VIDMM_ALLOC *v35; // rbx
  VIDMM_GLOBAL *v36; // rcx
  VIDMM_GLOBAL *v37; // r10
  D3DGPU_SIZE_T AllocationSizeInBytes; // r8
  unsigned __int64 AllocationOffsetInBytes; // r11
  D3DGPU_SIZE_T SizeInBytes; // rax
  unsigned __int64 v41; // r9
  __int64 v42; // rdx
  __int64 Value; // rbx
  unsigned int v44; // ecx
  PVOID v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  _QWORD *v48; // rcx
  _QWORD *v49; // rax
  unsigned __int64 v50; // rbx
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rax
  VIDMM_GLOBAL *v53; // rcx
  PVOID v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // rcx
  _QWORD *v57; // rax
  int v58; // r14d
  __int64 v59; // rcx
  int v60; // ebx
  __int64 v61; // rcx
  VIDMM_GLOBAL *v62; // rcx
  _QWORD *v63; // rcx
  __int64 result; // rax
  unsigned int j; // r8d
  __int64 v66; // rax
  __int128 *v67; // rcx
  char *v68; // rbx
  unsigned int *v69; // r9
  _QWORD *v70; // rsi
  VIDMM_GLOBAL *v71; // rcx
  unsigned __int64 v72; // rcx
  unsigned __int64 v73; // rdx
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // rax
  char **v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rax
  PLARGE_INTEGER Timeout; // [rsp+28h] [rbp-E0h]
  int v80; // [rsp+78h] [rbp-90h]
  __int128 v81; // [rsp+80h] [rbp-88h] BYREF
  UINT v82; // [rsp+90h] [rbp-78h]
  int v83; // [rsp+94h] [rbp-74h]
  unsigned int v84; // [rsp+98h] [rbp-70h]
  D3DGPU_SIZE_T v85; // [rsp+A0h] [rbp-68h]
  struct VIDMM_PROCESS *v86; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v87; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v88; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v89; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v90; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v91; // [rsp+D0h] [rbp-38h]
  UINT *p_NumOperations; // [rsp+D8h] [rbp-30h]
  unsigned __int64 v93; // [rsp+E0h] [rbp-28h]
  UINT64 DriverProtection; // [rsp+E8h] [rbp-20h]
  __int64 v95; // [rsp+F0h] [rbp-18h]
  __int64 v96; // [rsp+F8h] [rbp-10h]
  union _LARGE_INTEGER v97; // [rsp+100h] [rbp-8h] BYREF
  struct VIDMM_ALLOC *v98; // [rsp+108h] [rbp+0h]
  __int64 v99; // [rsp+110h] [rbp+8h]
  unsigned __int64 v100; // [rsp+118h] [rbp+10h]
  CVirtualAddressAllocator *v101; // [rsp+120h] [rbp+18h]
  struct VIDMM_VAD *v102; // [rsp+128h] [rbp+20h]
  _BYTE v103[24]; // [rsp+130h] [rbp+28h] BYREF
  _QWORD v104[18]; // [rsp+148h] [rbp+40h] BYREF
  char v107; // [rsp+1F8h] [rbp+F0h]
  bool v109; // [rsp+218h] [rbp+110h]

  v97.QuadPart = 0LL;
  v9 = a2;
  *a7 = (struct _KSEMAPHORE *)((char *)a3 + 24);
  if ( KeWaitForSingleObject((char *)a3 + 24, Executive, 0, 0, &v97) == 258 )
  {
    WdLogSingleEntry0(3LL);
    result = 3223191810LL;
    WdLogGlobalForLineNumber = 24665;
    return result;
  }
  v10 = *(unsigned __int64 **)a3;
  v11 = *((_QWORD *)a3 + 2);
  v12 = *((_QWORD *)a3 + 1);
  v102 = 0LL;
  v13 = 0LL;
  v89 = -1LL;
  v86 = *(struct VIDMM_PROCESS **)(v11 + 8);
  v87 = v10[2];
  v14 = *(_QWORD *)(v12 + 96);
  v91 = -1LL;
  v101 = (CVirtualAddressAllocator *)v10;
  v80 = -1073741811;
  v83 = *(unsigned __int16 *)(v14 + 6);
  *((_QWORD *)&v81 + 1) = &v81;
  *(_QWORD *)&v81 = &v81;
  v107 = 0;
  v88 = 0LL;
  v90 = 0LL;
  p_NumOperations = &v9->NumOperations;
  if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(this) )
  {
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVa(
      v16,
      1u,
      *(struct VIDMM_PROCESS **)(v19 + 96),
      v18,
      *v15,
      a6,
      v9->FenceValue);
    v15 = &v9->NumOperations;
  }
  else
  {
    p_NumOperations = v15;
  }
  if ( (byte_140081242 & 0x40) != 0 )
    McTemplateK0qqqqqxpp_EtwWriteTransfer(
      (__int64)v16,
      (__int64)v15,
      v17,
      v9->hDevice,
      v9->hContext,
      v9->hFenceObject,
      *v15,
      v9->Flags.Value,
      v9->FenceValue,
      (char)a6,
      *((_QWORD *)a3 + 1));
  for ( i = 0; ; i = v82 + 1 )
  {
    v82 = i;
    if ( i >= *p_NumOperations )
    {
      if ( (v9->Flags.Value & 1) == 0 )
      {
        *((_BYTE *)a6 + 25) = 0;
        v58 = VidSchWaitForSingleSyncObject(*((_QWORD *)a3 + 1), (__int64)a6, v9->FenceValue);
        if ( v58 < 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 24975;
          HIDWORD(Timeout) = 0;
          DxgkLogInternalTriageEvent(v59, 0x40000LL);
          v60 = 16;
          goto LABEL_62;
        }
      }
      v21 = (char *)operator new(184LL, 0x39346956u, 256LL);
      v13 = v21;
      if ( !v21 )
      {
        v13 = 0LL;
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 24990;
        v60 = 17;
        v58 = -1073741801;
        goto LABEL_62;
      }
      memset(v21, 0, 0xB8uLL);
      v22 = this;
      v23 = (struct _KTHREAD **)v101;
      *((_QWORD *)v13 + 13) = v13 + 96;
      *((_QWORD *)v13 + 12) = v13 + 96;
      *((_QWORD *)v13 + 7) = v13 + 48;
      *((_QWORD *)v13 + 6) = v13 + 48;
      *((_QWORD *)v13 + 1) = this;
      *((_DWORD *)v13 + 5) = v9->NumOperations;
      *((_QWORD *)v13 + 10) = v9->FenceValue + 1;
      *((_DWORD *)v13 + 4) = v83;
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v103, v23 + 7);
      v24 = CVirtualAddressAllocator::ReferenceReservedZeroVad((CVirtualAddressAllocator *)v23, v89, v88);
      if ( v24 )
      {
        if ( !v107 )
        {
          v25 = v102;
          goto LABEL_13;
        }
        v25 = CVirtualAddressAllocator::ReferenceReservedZeroVad((CVirtualAddressAllocator *)v23, v91, v90);
        if ( v25 )
        {
LABEL_13:
          *((_QWORD *)v13 + 14) = v24;
          *((_QWORD *)v13 + 18) = v13 + 112;
          v26 = (char *)v24 + 80;
          *((_QWORD *)v13 + 15) = v25;
          *((_QWORD *)v13 + 21) = v13 + 120;
          v27 = (struct VIDMM_VAD *)(v13 + 128);
          v28 = (struct VIDMM_VAD **)*((_QWORD *)v24 + 11);
          if ( *v28 != (struct VIDMM_VAD *)((char *)v24 + 80) )
            goto LABEL_14;
          *(_QWORD *)v27 = v26;
          *((_QWORD *)v13 + 17) = v28;
          *v28 = v27;
          *((_QWORD *)v24 + 11) = v27;
          if ( v25 )
          {
            v76 = (char **)(v13 + 152);
            if ( *(char **)v27 != v26 )
LABEL_14:
              __fastfail(3u);
            *v76 = v26;
            *((_QWORD *)v13 + 20) = v27;
            *(_QWORD *)v27 = v76;
            *((_QWORD *)v24 + 11) = v76;
            v13[176] = 1;
          }
          v67 = (__int128 *)v81;
          v68 = v13;
          while ( v67 != &v81 )
          {
            *((_QWORD *)v67 - 1) = v24;
            if ( !*((_QWORD *)v67 + 10) )
            {
              v77 = *((_QWORD *)v24 + 12);
              if ( v77 )
                *((_QWORD *)v67 + 10) = *(_QWORD *)(v77 + 80);
            }
            v67 = *(__int128 **)v67;
          }
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v103);
          v69 = (unsigned int *)(v13 + 32);
          v70 = v13 + 96;
          *((_QWORD *)v68 + 8) = a5;
          *((_DWORD *)v68 + 8) = a4;
          *((_QWORD *)v68 + 3) = v9->Operations;
          v9->Operations = 0LL;
          *((_QWORD *)v68 + 9) = a6;
          *((_QWORD *)v68 + 11) = a3;
          *(_QWORD *)v68 = *((_QWORD *)a3 + 1);
          if ( (__int128 *)v81 == &v81 )
          {
            v70[1] = v70;
            *v70 = v70;
          }
          else
          {
            *(_OWORD *)v70 = v81;
            *(_QWORD *)(*v70 + 8LL) = v70;
            **((_QWORD **)v68 + 13) = v70;
          }
          *((_QWORD *)&v81 + 1) = &v81;
          *(_QWORD *)&v81 = &v81;
          _InterlockedIncrement((volatile signed __int32 *)a6 + 9);
          for ( j = 0; j < *v69; ++j )
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)v68 + 8) + 8LL * j) + 176LL));
          memset(v104, 0, 0x50uLL);
          LODWORD(v104[5]) = 2;
          v104[3] = VIDMM_GLOBAL::VidMmiUpdateGpuVirtualAddress;
          v66 = *((_QWORD *)a3 + 1);
          LODWORD(v104[0]) = 2;
          v104[6] = v68;
          v104[4] = 0LL;
          VidSchSubmitGlobalCommand(*(_QWORD *)(*(_QWORD *)(v66 + 104) + 32LL), v104);
          return 0LL;
        }
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 25025;
        v60 = 19;
      }
      else
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 25011;
        v60 = 18;
      }
      v58 = -1073741811;
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v103);
      goto LABEL_63;
    }
    v29 = &v9->Operations[(unsigned __int64)i];
    v30 = i;
    OperationType = v29->OperationType;
    if ( v29->OperationType )
    {
      if ( OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP_PROTECT )
        break;
    }
    BaseAddress = v29->Map.BaseAddress;
    v100 = BaseAddress + v29->Map.SizeInBytes;
    if ( !IsRangeValid(BaseAddress, v100, v87) )
    {
      v60 = 1;
      goto LABEL_61;
    }
    v35 = a5[v29->Map.hAllocation];
    v98 = v35;
    if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(this) )
    {
      VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v36, v86, *((struct _VIDSCH_CONTEXT **)a3 + 1), v35, v29);
      v37 = this;
    }
    AllocationSizeInBytes = v29->Map.AllocationSizeInBytes;
    if ( (AllocationSizeInBytes & 0xFFF) != 0
      || (AllocationOffsetInBytes = v29->Map.AllocationOffsetInBytes,
          v93 = AllocationOffsetInBytes,
          (AllocationOffsetInBytes & 0xFFF) != 0) )
    {
      WdLogSingleEntry1(3LL, v82);
      WdLogGlobalForLineNumber = 24745;
      v60 = 2;
      goto LABEL_61;
    }
    SizeInBytes = v29->Map.SizeInBytes;
    v85 = SizeInBytes;
    if ( AllocationSizeInBytes )
    {
      if ( AllocationSizeInBytes > SizeInBytes )
      {
        WdLogSingleEntry1(3LL, v30);
        WdLogGlobalForLineNumber = 24761;
        v60 = 3;
        goto LABEL_61;
      }
      if ( SizeInBytes % AllocationSizeInBytes )
      {
        WdLogSingleEntry1(3LL, v30);
        WdLogGlobalForLineNumber = 24770;
        v60 = 4;
        goto LABEL_61;
      }
      SizeInBytes = v85;
    }
    else
    {
      v29->Map.AllocationSizeInBytes = SizeInBytes;
      AllocationSizeInBytes = SizeInBytes;
      v85 = SizeInBytes;
    }
    if ( AllocationSizeInBytes + AllocationOffsetInBytes < AllocationOffsetInBytes
      || AllocationSizeInBytes + AllocationOffsetInBytes > *(_QWORD *)(***(_QWORD ***)v35 + 16LL) )
    {
      WdLogSingleEntry3(3LL, *(_QWORD *)(***(_QWORD ***)v35 + 16LL), v30, 24782LL);
      WdLogGlobalForLineNumber = 24782;
      v60 = 5;
      goto LABEL_61;
    }
    if ( (*((_BYTE *)v37 + 40937) & 2) != 0 )
    {
      LODWORD(v41) = 1;
      v96 = 1LL;
      v109 = SizeInBytes != AllocationSizeInBytes;
    }
    else
    {
      v93 = 0LL;
      v109 = 0;
      v41 = SizeInBytes / AllocationSizeInBytes;
      v96 = v41;
      SizeInBytes = AllocationSizeInBytes;
      v85 = AllocationSizeInBytes;
      if ( v41 >= 0xFFFFFFFF )
      {
        WdLogSingleEntry1(3LL, v30);
        WdLogGlobalForLineNumber = 24806;
        v60 = 6;
        goto LABEL_61;
      }
    }
    DriverProtection = 0LL;
    v42 = BaseAddress;
    v95 = BaseAddress;
    if ( v29->OperationType )
    {
      Value = v29->MapProtect.Protection.Value;
      DriverProtection = v29->MapProtect.DriverProtection;
    }
    else
    {
      Value = 1LL;
    }
    v44 = 0;
    while ( 1 )
    {
      v84 = v44;
      if ( v44 >= (unsigned int)v41 )
        break;
      v99 = v42 + SizeInBytes;
      v45 = VIDMM_MAPPED_VA_RANGE::operator new();
      if ( !v45
        || (v109 ? (v46 = v29->Map.AllocationSizeInBytes >> 12) : (v46 = 0LL),
            (v47 = VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                     (__int64)v45,
                     0LL,
                     v95,
                     v99,
                     v83,
                     (__int64)v98,
                     v29->Map.AllocationOffsetInBytes,
                     1,
                     Value,
                     DriverProtection,
                     v46,
                     v93,
                     0)) == 0) )
      {
        v60 = 7;
        _InterlockedIncrement(&dword_1400817E4);
        WdLogSingleEntry1(6LL, 7LL);
        HIDWORD(Timeout) = 0;
        WdLogGlobalForLineNumber = 24841;
        goto LABEL_60;
      }
      v48 = (_QWORD *)*((_QWORD *)&v81 + 1);
      v49 = (_QWORD *)(v47 + 8);
      if ( **((__int128 ***)&v81 + 1) != &v81 )
        goto LABEL_14;
      v49[1] = *((_QWORD *)&v81 + 1);
      *v49 = &v81;
      v42 = v41;
      LODWORD(v41) = v96;
      *v48 = v49;
      *((_QWORD *)&v81 + 1) = v49;
      v44 = v84 + 1;
      SizeInBytes = v85;
      v95 = v42;
    }
    v50 = v100;
LABEL_40:
    if ( v50 <= BaseAddress )
      goto LABEL_112;
    if ( ((BaseAddress | v50) & 0xFFF) != 0 )
    {
      WdLogSingleEntry1(3LL, v30);
      WdLogGlobalForLineNumber = 24951;
      v60 = 15;
      goto LABEL_61;
    }
    v51 = v89;
    if ( v89 > BaseAddress )
      v51 = BaseAddress;
    v9 = a2;
    v89 = v51;
    v52 = v88;
    if ( v88 < v50 )
      v52 = v50;
    v88 = v52;
  }
  if ( OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_UNMAP )
  {
    if ( OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_COPY )
    {
LABEL_112:
      WdLogSingleEntry1(3LL, v30);
      WdLogGlobalForLineNumber = 24945;
      v60 = 14;
      goto LABEL_61;
    }
    BaseAddress = v29->Unmap.Protection.Value;
    v50 = BaseAddress + v29->Map.SizeInBytes;
    if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(this) )
      VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v71, v86, *((struct _VIDSCH_CONTEXT **)a3 + 1), 0LL, v29);
    if ( !IsRangeValid(BaseAddress, v50, v87) )
    {
      v60 = 10;
      goto LABEL_61;
    }
    v72 = v29->Map.BaseAddress;
    v73 = v72 + v29->Map.SizeInBytes;
    if ( v73 <= v72 )
    {
      WdLogSingleEntry1(3LL, v30);
      WdLogGlobalForLineNumber = 24905;
      v60 = 11;
      goto LABEL_61;
    }
    if ( (v72 & 0xFFF) != 0 || (v73 & 0xFFF) != 0 )
    {
      WdLogSingleEntry1(3LL, v30);
      WdLogGlobalForLineNumber = 24911;
      v60 = 12;
      goto LABEL_61;
    }
    if ( BaseAddress < v73 && v50 > v72 )
    {
      WdLogSingleEntry1(3LL, v30);
      WdLogGlobalForLineNumber = 24918;
      v60 = 13;
      goto LABEL_61;
    }
    v74 = v91;
    v107 = 1;
    if ( v91 > v72 )
      v74 = v29->Map.BaseAddress;
    v91 = v74;
    v75 = v90;
    if ( v90 < v73 )
      v75 = v73;
    v90 = v75;
    goto LABEL_40;
  }
  BaseAddress = v29->Map.BaseAddress;
  v50 = BaseAddress + v29->Map.SizeInBytes;
  if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(this) )
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v53, v86, *((struct _VIDSCH_CONTEXT **)a3 + 1), 0LL, v29);
  if ( !IsRangeValid(BaseAddress, v50, v87) )
  {
    v60 = 8;
    goto LABEL_61;
  }
  v54 = VIDMM_MAPPED_VA_RANGE::operator new();
  if ( v54 )
  {
    v55 = VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
            (__int64)v54,
            0LL,
            BaseAddress,
            v50,
            v83,
            0LL,
            0LL,
            (v29->Unmap.Protection.Value & 8) == 0 ? 6 : 0,
            v29->Unmap.Protection.Value,
            0LL,
            0LL,
            0LL,
            0);
    if ( v55 )
    {
      v56 = (_QWORD *)*((_QWORD *)&v81 + 1);
      v57 = (_QWORD *)(v55 + 8);
      if ( **((__int128 ***)&v81 + 1) != &v81 )
        goto LABEL_14;
      v57[1] = *((_QWORD *)&v81 + 1);
      *v57 = &v81;
      *v56 = v57;
      *((_QWORD *)&v81 + 1) = v57;
      goto LABEL_40;
    }
  }
  v60 = 9;
  _InterlockedIncrement(&dword_1400817E4);
  WdLogSingleEntry1(6LL, 9LL);
  HIDWORD(Timeout) = 0;
  WdLogGlobalForLineNumber = 24879;
LABEL_60:
  DxgkLogInternalTriageEvent(v61, 262145LL);
LABEL_61:
  v58 = v80;
LABEL_62:
  v22 = this;
LABEL_63:
  if ( (byte_140081242 & 0x40) != 0 )
  {
    LODWORD(Timeout) = v60;
    McTemplateK0qq_EtwWriteTransfer(v33, &UpdateGpuVirtualAddressFailure, v34, v58, (__int64)Timeout);
  }
  if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(v22) )
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaFailure(v62, v86, v58, v60);
  KeReleaseSemaphore((PRKSEMAPHORE)((char *)a3 + 24), 0, 1, 0);
  if ( v13 )
    VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'((VIDMM_DEVICE_COMMAND_UPDATEGPUVA *)v13);
  while ( 1 )
  {
    v63 = (_QWORD *)v81;
    if ( (__int128 *)v81 == &v81 )
      return (unsigned int)v58;
    if ( *(__int128 **)(v81 + 8) != &v81 )
      goto LABEL_14;
    v78 = *(_QWORD *)v81;
    if ( *(_QWORD *)(*(_QWORD *)v81 + 8LL) != (_QWORD)v81 )
      goto LABEL_14;
    *(_QWORD *)&v81 = *(_QWORD *)v81;
    *(_QWORD *)(v78 + 8) = &v81;
    *v63 = 0LL;
    v63[1] = 0LL;
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)(v63 - 1), (unsigned int)&v81);
  }
}
