/*
 * XREFs of ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAUVIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1400E3BCC
 * Callers:
 *     VidMmUpdateGpuVirtualAddress @ 0x1400435C0 (VidMmUpdateGpuVirtualAddress.c)
 * Callees:
 *     VidSchWaitForSingleSyncObject @ 0x140003F10 (VidSchWaitForSingleSyncObject.c)
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140027B84 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x140028324 (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400338D0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140033D04 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ @ 0x140037A0C (-IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140037A34 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111@Z @ 0x1400380D4 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     McTemplateK0qqqqqxpp_EtwWriteTransfer @ 0x1400445C4 (McTemplateK0qqqqqxpp_EtwWriteTransfer.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x14004B230 (McTemplateK0qq_EtwWriteTransfer.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?RecordVaPagingHistoryUpdateGpuVaFailure@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@JI@Z @ 0x14009A038 (-RecordVaPagingHistoryUpdateGpuVaFailure@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@JI@Z.c)
 *     ?RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@PEAUVIDMM_ALLOC@@PEAU_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION@@@Z @ 0x1400BFE10 (-RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@P.c)
 *     ?RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x1400BFFB8 (-RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IP.c)
 *     ?IsRangeValid@@YAE_K00@Z @ 0x1400E48B0 (-IsRangeValid@@YAE_K00@Z.c)
 *     VidSchSubmitGlobalCommand @ 0x1400E4C08 (VidSchSubmitGlobalCommand.c)
 *     ?ReferenceReservedZeroVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0@Z @ 0x1400E5564 (-ReferenceReservedZeroVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0@Z.c)
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
  unsigned __int64 *v10; // r8
  __int64 v11; // rax
  __int64 v12; // r9
  char *v13; // rsi
  __int64 v14; // rax
  unsigned int *v15; // rdx
  VIDMM_GLOBAL *v16; // rcx
  __int64 v17; // r8
  struct _VIDSCH_CONTEXT *v18; // r9
  UINT v19; // ecx
  struct VIDMM_COMPANION_CONTEXT *v20; // r15
  char *v21; // rax
  VIDMM_GLOBAL *v22; // r12
  struct _KTHREAD **v23; // rbx
  struct VIDMM_VAD *v24; // r14
  struct VIDMM_VAD *v25; // r8
  char *v26; // rcx
  struct VIDMM_VAD *v27; // rax
  struct VIDMM_VAD **v28; // rdx
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v29; // r14
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
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  _QWORD *v48; // rcx
  _QWORD *v49; // rax
  unsigned __int64 v50; // rbx
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rax
  VIDMM_GLOBAL *v53; // rcx
  __int64 v54; // rax
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
  unsigned int i; // r8d
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
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-E0h]
  int v80; // [rsp+60h] [rbp-A0h]
  char v81; // [rsp+64h] [rbp-9Ch]
  __int128 v82; // [rsp+68h] [rbp-98h] BYREF
  UINT v83; // [rsp+78h] [rbp-88h]
  int v84; // [rsp+7Ch] [rbp-84h]
  unsigned int v85; // [rsp+80h] [rbp-80h]
  unsigned __int64 v86; // [rsp+88h] [rbp-78h]
  D3DGPU_SIZE_T v87; // [rsp+90h] [rbp-70h]
  struct VIDMM_PROCESS *v88; // [rsp+98h] [rbp-68h]
  unsigned __int64 v89; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v90; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v91; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v92; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v93; // [rsp+C0h] [rbp-40h]
  UINT *p_NumOperations; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v95; // [rsp+D0h] [rbp-30h]
  UINT64 DriverProtection; // [rsp+D8h] [rbp-28h]
  __int64 v97; // [rsp+E0h] [rbp-20h]
  __int64 v98; // [rsp+E8h] [rbp-18h]
  union _LARGE_INTEGER v99; // [rsp+F0h] [rbp-10h] BYREF
  struct VIDMM_ALLOC *v100; // [rsp+F8h] [rbp-8h]
  __int64 v101; // [rsp+100h] [rbp+0h]
  CVirtualAddressAllocator *v102; // [rsp+108h] [rbp+8h]
  struct VIDMM_VAD *v103; // [rsp+110h] [rbp+10h]
  _BYTE v104[24]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v105[16]; // [rsp+130h] [rbp+30h] BYREF
  bool v109; // [rsp+1F0h] [rbp+F0h]

  v99.QuadPart = 0LL;
  *a7 = (struct _KSEMAPHORE *)((char *)a3 + 24);
  if ( KeWaitForSingleObject((char *)a3 + 24, Executive, 0, 0, &v99) == 258 )
  {
    WdLogSingleEntry0(3LL);
    result = 3223191810LL;
    WdLogGlobalForLineNumber = 24273;
    return result;
  }
  v10 = *(unsigned __int64 **)a3;
  v11 = *((_QWORD *)a3 + 2);
  v12 = *((_QWORD *)a3 + 1);
  v13 = 0LL;
  v103 = 0LL;
  v91 = -1LL;
  v88 = *(struct VIDMM_PROCESS **)(v11 + 8);
  v89 = v10[2];
  v14 = *(_QWORD *)(v12 + 96);
  v93 = -1LL;
  v81 = 0;
  v102 = (CVirtualAddressAllocator *)v10;
  v84 = *(unsigned __int16 *)(v14 + 6);
  *((_QWORD *)&v82 + 1) = &v82;
  *(_QWORD *)&v82 = &v82;
  v90 = 0LL;
  v92 = 0LL;
  v80 = -1073741811;
  p_NumOperations = &a2->NumOperations;
  if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(this) )
  {
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVa(
      v16,
      1,
      *(struct VIDMM_PROCESS **)(v17 + 96),
      v18,
      *v15,
      a6,
      a2->FenceValue);
    v15 = &a2->NumOperations;
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
      a2->hDevice,
      a2->hContext,
      a2->hFenceObject,
      *v15,
      a2->Flags.Value,
      a2->FenceValue,
      (char)a6,
      *((_QWORD *)a3 + 1));
  v19 = 0;
  while ( 1 )
  {
    v83 = v19;
    if ( v19 >= *p_NumOperations )
    {
      v20 = a3;
      if ( (a2->Flags.Value & 1) == 0 )
      {
        *((_BYTE *)a6 + 25) = 0;
        v58 = VidSchWaitForSingleSyncObject(*((_QWORD *)a3 + 1), (__int64)a6, a2->FenceValue);
        if ( v58 < 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 24583;
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
        WdLogGlobalForLineNumber = 24598;
        v60 = 17;
        v58 = -1073741801;
        goto LABEL_62;
      }
      memset(v21, 0, 0xB8uLL);
      v22 = this;
      v23 = (struct _KTHREAD **)v102;
      *((_QWORD *)v13 + 13) = v13 + 96;
      *((_QWORD *)v13 + 12) = v13 + 96;
      *((_QWORD *)v13 + 7) = v13 + 48;
      *((_QWORD *)v13 + 6) = v13 + 48;
      *((_QWORD *)v13 + 1) = this;
      *((_DWORD *)v13 + 5) = a2->NumOperations;
      *((_QWORD *)v13 + 10) = a2->FenceValue + 1;
      *((_DWORD *)v13 + 4) = v84;
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v104, v23 + 7);
      v24 = CVirtualAddressAllocator::ReferenceReservedZeroVad((CVirtualAddressAllocator *)v23, v91, v90);
      if ( v24 )
      {
        if ( !v81 )
        {
          v25 = v103;
          goto LABEL_13;
        }
        v25 = CVirtualAddressAllocator::ReferenceReservedZeroVad((CVirtualAddressAllocator *)v23, v93, v92);
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
          v67 = (__int128 *)v82;
          v68 = v13;
          while ( v67 != &v82 )
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
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v104);
          v69 = (unsigned int *)(v13 + 32);
          v70 = v13 + 96;
          *((_QWORD *)v68 + 8) = a5;
          *((_DWORD *)v68 + 8) = a4;
          *((_QWORD *)v68 + 3) = a2->Operations;
          a2->Operations = 0LL;
          *((_QWORD *)v68 + 9) = a6;
          *((_QWORD *)v68 + 11) = a3;
          *(_QWORD *)v68 = *((_QWORD *)a3 + 1);
          if ( (__int128 *)v82 == &v82 )
          {
            v70[1] = v70;
            *v70 = v70;
          }
          else
          {
            *(_OWORD *)v70 = v82;
            *(_QWORD *)(*v70 + 8LL) = v70;
            **((_QWORD **)v68 + 13) = v70;
          }
          *((_QWORD *)&v82 + 1) = &v82;
          *(_QWORD *)&v82 = &v82;
          _InterlockedIncrement((volatile signed __int32 *)a6 + 9);
          for ( i = 0; i < *v69; ++i )
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)v68 + 8) + 8LL * i) + 160LL));
          memset(v105, 0, 0x50uLL);
          LODWORD(v105[5]) = 2;
          v105[3] = VIDMM_GLOBAL::VidMmiUpdateGpuVirtualAddress;
          v66 = *((_QWORD *)a3 + 1);
          LODWORD(v105[0]) = 2;
          v105[6] = v68;
          v105[4] = 0LL;
          VidSchSubmitGlobalCommand(*(_QWORD *)(*(_QWORD *)(v66 + 104) + 32LL), v105);
          return 0LL;
        }
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 24633;
        v60 = 19;
      }
      else
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 24619;
        v60 = 18;
      }
      v58 = -1073741811;
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v104);
      goto LABEL_63;
    }
    v29 = &a2->Operations[(unsigned __int64)v19];
    v30 = v19;
    OperationType = v29->OperationType;
    if ( v29->OperationType )
    {
      if ( OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP_PROTECT )
        break;
    }
    BaseAddress = v29->Map.BaseAddress;
    v86 = BaseAddress + v29->Map.SizeInBytes;
    if ( !IsRangeValid(BaseAddress, v86, v89) )
    {
      v60 = 1;
      goto LABEL_61;
    }
    v35 = a5[v29->Map.hAllocation];
    v100 = v35;
    if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(this) )
    {
      VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v36, v88, *((struct _VIDSCH_CONTEXT **)a3 + 1), v35, v29);
      v37 = this;
    }
    AllocationSizeInBytes = v29->Map.AllocationSizeInBytes;
    if ( (AllocationSizeInBytes & 0xFFF) != 0
      || (AllocationOffsetInBytes = v29->Map.AllocationOffsetInBytes,
          v95 = AllocationOffsetInBytes,
          (AllocationOffsetInBytes & 0xFFF) != 0) )
    {
      WdLogSingleEntry1(3LL, v83);
      WdLogGlobalForLineNumber = 24353;
      v60 = 2;
      goto LABEL_61;
    }
    SizeInBytes = v29->Map.SizeInBytes;
    v87 = SizeInBytes;
    if ( AllocationSizeInBytes )
    {
      if ( AllocationSizeInBytes > SizeInBytes )
      {
        WdLogSingleEntry1(3LL, v30);
        WdLogGlobalForLineNumber = 24369;
        v60 = 3;
        goto LABEL_61;
      }
      if ( SizeInBytes % AllocationSizeInBytes )
      {
        WdLogSingleEntry1(3LL, v30);
        WdLogGlobalForLineNumber = 24378;
        v60 = 4;
        goto LABEL_61;
      }
      SizeInBytes = v87;
    }
    else
    {
      v29->Map.AllocationSizeInBytes = SizeInBytes;
      AllocationSizeInBytes = SizeInBytes;
      v87 = SizeInBytes;
    }
    if ( AllocationSizeInBytes + AllocationOffsetInBytes < AllocationOffsetInBytes
      || AllocationSizeInBytes + AllocationOffsetInBytes > *(_QWORD *)(***(_QWORD ***)v35 + 16LL) )
    {
      WdLogSingleEntry3(3LL, *(_QWORD *)(***(_QWORD ***)v35 + 16LL), v30, 24390LL);
      WdLogGlobalForLineNumber = 24390;
      v60 = 5;
      goto LABEL_61;
    }
    if ( (*((_BYTE *)v37 + 40937) & 2) != 0 )
    {
      LODWORD(v41) = 1;
      v98 = 1LL;
      v109 = SizeInBytes != AllocationSizeInBytes;
    }
    else
    {
      v95 = 0LL;
      v109 = 0;
      v41 = SizeInBytes / AllocationSizeInBytes;
      v98 = v41;
      SizeInBytes = AllocationSizeInBytes;
      v87 = AllocationSizeInBytes;
      if ( v41 >= 0xFFFFFFFF )
      {
        WdLogSingleEntry1(3LL, v30);
        WdLogGlobalForLineNumber = 24414;
        v60 = 6;
        goto LABEL_61;
      }
    }
    DriverProtection = 0LL;
    v42 = BaseAddress;
    v97 = BaseAddress;
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
      v85 = v44;
      if ( v44 >= (unsigned int)v41 )
        break;
      v101 = v42 + SizeInBytes;
      v45 = operator new(144LL, 0x39346956u, 256LL);
      if ( !v45
        || (v109 ? (v46 = v29->Map.AllocationSizeInBytes >> 12) : (v46 = 0LL),
            (v47 = VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                     v45,
                     0LL,
                     v97,
                     v101,
                     v84,
                     (__int64)v100,
                     v29->Map.AllocationOffsetInBytes,
                     1,
                     Value,
                     DriverProtection,
                     v46,
                     v95)) == 0) )
      {
        v60 = 7;
        _InterlockedIncrement(&dword_1400817C4);
        WdLogSingleEntry1(6LL, 7LL);
        HIDWORD(Timeout) = 0;
        WdLogGlobalForLineNumber = 24449;
        goto LABEL_60;
      }
      v48 = (_QWORD *)*((_QWORD *)&v82 + 1);
      v49 = (_QWORD *)(v47 + 8);
      if ( **((__int128 ***)&v82 + 1) != &v82 )
        goto LABEL_14;
      v49[1] = *((_QWORD *)&v82 + 1);
      *v49 = &v82;
      v42 = v41;
      LODWORD(v41) = v98;
      *v48 = v49;
      *((_QWORD *)&v82 + 1) = v49;
      v44 = v85 + 1;
      SizeInBytes = v87;
      v97 = v42;
    }
    v50 = v86;
LABEL_40:
    if ( v50 <= BaseAddress )
      goto LABEL_112;
    if ( ((BaseAddress | v50) & 0xFFF) != 0 )
    {
      WdLogSingleEntry1(3LL, v30);
      WdLogGlobalForLineNumber = 24559;
      v60 = 15;
      goto LABEL_61;
    }
    v51 = v91;
    if ( v91 > BaseAddress )
      v51 = BaseAddress;
    v91 = v51;
    v52 = v90;
    if ( v90 < v50 )
      v52 = v50;
    v19 = v83 + 1;
    v90 = v52;
  }
  if ( OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_UNMAP )
  {
    if ( OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_COPY )
    {
LABEL_112:
      WdLogSingleEntry1(3LL, v30);
      WdLogGlobalForLineNumber = 24553;
      v60 = 14;
      goto LABEL_61;
    }
    BaseAddress = v29->Unmap.Protection.Value;
    v86 = BaseAddress + v29->Map.SizeInBytes;
    if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(this) )
      VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v71, v88, *((struct _VIDSCH_CONTEXT **)a3 + 1), 0LL, v29);
    v50 = v86;
    if ( !IsRangeValid(BaseAddress, v86, v89) )
    {
      v60 = 10;
      goto LABEL_61;
    }
    v72 = v29->Map.BaseAddress;
    v73 = v72 + v29->Map.SizeInBytes;
    if ( v73 <= v72 )
    {
      WdLogSingleEntry1(3LL, v30);
      WdLogGlobalForLineNumber = 24513;
      v60 = 11;
      goto LABEL_61;
    }
    if ( (v72 & 0xFFF) != 0 || (v73 & 0xFFF) != 0 )
    {
      WdLogSingleEntry1(3LL, v30);
      WdLogGlobalForLineNumber = 24519;
      v60 = 12;
      goto LABEL_61;
    }
    if ( BaseAddress < v73 && v50 > v72 )
    {
      WdLogSingleEntry1(3LL, v30);
      WdLogGlobalForLineNumber = 24526;
      v60 = 13;
      goto LABEL_61;
    }
    v74 = v93;
    v81 = 1;
    if ( v93 > v72 )
      v74 = v72;
    v93 = v74;
    v75 = v92;
    if ( v92 < v73 )
      v75 = v73;
    v92 = v75;
    goto LABEL_40;
  }
  BaseAddress = v29->Map.BaseAddress;
  v86 = BaseAddress + v29->Map.SizeInBytes;
  if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(this) )
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v53, v88, *((struct _VIDSCH_CONTEXT **)a3 + 1), 0LL, v29);
  v50 = v86;
  if ( !IsRangeValid(BaseAddress, v86, v89) )
  {
    v60 = 8;
    goto LABEL_61;
  }
  v54 = operator new(144LL, 0x39346956u, 256LL);
  if ( v54 )
  {
    v55 = VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
            v54,
            0LL,
            BaseAddress,
            v50,
            v84,
            0LL,
            0LL,
            (v29->Unmap.Protection.Value & 8) == 0 ? 6 : 0,
            v29->Unmap.Protection.Value,
            0LL,
            0LL,
            0LL);
    if ( v55 )
    {
      v56 = (_QWORD *)*((_QWORD *)&v82 + 1);
      v57 = (_QWORD *)(v55 + 8);
      if ( **((__int128 ***)&v82 + 1) != &v82 )
        goto LABEL_14;
      v57[1] = *((_QWORD *)&v82 + 1);
      *v57 = &v82;
      *v56 = v57;
      *((_QWORD *)&v82 + 1) = v57;
      goto LABEL_40;
    }
  }
  v60 = 9;
  _InterlockedIncrement(&dword_1400817C4);
  WdLogSingleEntry1(6LL, 9LL);
  HIDWORD(Timeout) = 0;
  WdLogGlobalForLineNumber = 24487;
LABEL_60:
  DxgkLogInternalTriageEvent(v61, 262145LL);
LABEL_61:
  v20 = a3;
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
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaFailure(v62, v88, v58, v60);
  KeReleaseSemaphore((PRKSEMAPHORE)((char *)v20 + 24), 0, 1, 0);
  if ( v13 )
    VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'((VIDMM_DEVICE_COMMAND_UPDATEGPUVA *)v13);
  while ( 1 )
  {
    v63 = (_QWORD *)v82;
    if ( (__int128 *)v82 == &v82 )
      return (unsigned int)v58;
    if ( *(__int128 **)(v82 + 8) != &v82 )
      goto LABEL_14;
    v78 = *(_QWORD *)v82;
    if ( *(_QWORD *)(*(_QWORD *)v82 + 8LL) != (_QWORD)v82 )
      goto LABEL_14;
    *(_QWORD *)&v82 = *(_QWORD *)v82;
    *(_QWORD *)(v78 + 8) = &v82;
    *v63 = 0LL;
    v63[1] = 0LL;
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)(v63 - 1), (unsigned int)&v82);
  }
}
