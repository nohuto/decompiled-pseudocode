/*
 * XREFs of ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z @ 0x1400C7894
 * Callers:
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1400C7778 (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x140016220 (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140019050 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DE0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ?UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z @ 0x14003C20C (-UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     VidMmAllocateVirtualMemoryFromPartition @ 0x140090508 (VidMmAllocateVirtualMemoryFromPartition.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C666C (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ @ 0x1400C68FC (-GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1400C7214 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_RECYCLE_RANGE::Commit(VIDMM_RECYCLE_RANGE *this, __int64 a2, unsigned __int8 *a3)
{
  __int64 v3; // rdi
  __int64 *v4; // rsi
  struct VIDMM_RECYCLE_BLOCK *v5; // rdx
  VIDMM_RECYCLE_HEAP_MGR *v8; // rcx
  __int64 v9; // r14
  __int64 *v10; // rcx
  __int64 **v11; // rax
  int v12; // eax
  __int64 v13; // rax
  __int64 **v14; // rcx
  __int64 v15; // rax
  int v16; // edx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rcx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  __int64 v24; // r8
  __int64 v25; // rcx
  int v26; // esi
  __int64 CurrentPartitionHandle; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int VirtualMemoryFromPartition; // eax
  unsigned int v30; // esi
  __int64 v31; // rsi
  _QWORD *v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // [rsp+90h] [rbp+8h] BYREF
  __int64 v37; // [rsp+A8h] [rbp+20h] BYREF

  v5 = (struct VIDMM_RECYCLE_BLOCK *)*((int *)this + 16);
  if ( (_DWORD)v5 )
  {
    v8 = (VIDMM_RECYCLE_HEAP_MGR *)(unsigned int)((_DWORD)v5 - 4);
    if ( (_DWORD)v5 == 4 )
    {
      v4 = (__int64 *)((char *)this + 104);
      v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL);
      v10 = (__int64 *)*((_QWORD *)this + 13);
      if ( (VIDMM_RECYCLE_RANGE *)v10[1] == (VIDMM_RECYCLE_RANGE *)((char *)this + 104) )
      {
        v11 = (__int64 **)*((_QWORD *)this + 14);
        if ( *v11 == v4 )
        {
          *v11 = v10;
          v3 = 1LL;
          v10[1] = (__int64)v11;
          v12 = *((_DWORD *)this + 16);
          *((_QWORD *)this + 14) = 0LL;
          *v4 = 0LL;
          *((_QWORD *)this + 12) = 0LL;
          if ( v12 == 5 )
          {
            VIDMM_RECYCLE_HEAP_MGR::UpdateOutstandingDecommit(*((_QWORD *)this + 4) - *((_QWORD *)this + 5), v5);
          }
          else if ( (unsigned int)(v12 - 3) <= 1 )
          {
            v17 = *((_QWORD *)this + 4) - *((_QWORD *)this + 5);
            if ( (__int64)(v17
                         + _InterlockedExchangeAdd64(
                             (volatile signed __int64 *)&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock,
                             v17)) < 0 )
            {
              if ( g_IsInternalRelease )
              {
                g_DxgMmsBugcheckExportIndex = 1;
                v13 = WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
                WdLogGlobalForLineNumber = 195;
                goto LABEL_21;
              }
            }
          }
          *((_QWORD *)this + 12) = *(_QWORD *)(v9 + 1576) + (unsigned int)dword_1400814CC;
          v13 = v9 + 1544;
          v14 = *(__int64 ***)(v9 + 1552);
          if ( *v14 == (__int64 *)(v9 + 1544) )
          {
LABEL_21:
            *v4 = v13;
            *((_QWORD *)this + 14) = v14;
            *v14 = v4;
            *(_QWORD *)(v13 + 8) = v4;
            if ( !_InterlockedExchange((volatile __int32 *)(v9 + 1536), 1) && !*(_DWORD *)(v9 + 1584) )
              KeSetTimer((PKTIMER)(v9 + 1376), (LARGE_INTEGER)-2000000LL, (PKDPC)(v9 + 1440));
            v18 = *((_QWORD *)this + 5) - *((_QWORD *)this + 4);
            if ( (__int64)(v18
                         + _InterlockedExchangeAdd64(
                             (volatile signed __int64 *)&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock,
                             v18)) >= 0 )
              goto LABEL_23;
            goto LABEL_43;
          }
        }
      }
      __fastfail(3u);
    }
LABEL_14:
    if ( (_DWORD)v8 != 1 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 52LL, 0LL, v5, 0LL);
      WdLogGlobalForLineNumber = 195;
LABEL_38:
      McTemplateK0pqq_EtwWriteTransfer();
LABEL_26:
      v4 = (__int64 *)*((_QWORD *)this + 9);
      v19 = (_QWORD *)v4[17];
      if ( !v19 )
      {
LABEL_27:
        *((_DWORD *)this + 16) = 3;
        goto LABEL_28;
      }
LABEL_45:
      v24 = *v19 + 144LL * v19[1];
      *(_DWORD *)v24 = 2;
      *(_QWORD *)(v24 + 8) = this;
      RtlCaptureStackBackTrace(v3, 0x10u, (PVOID *)(v24 + 16), 0LL);
      *(_QWORD *)(v4[17] + 8) += v3;
      v25 = v4[17];
      if ( *(_QWORD *)(v25 + 8) == *(_QWORD *)(v25 + 48) )
      {
        *(_QWORD *)(v25 + 8) = 0LL;
        *(_BYTE *)(v4[17] + 16) = v3;
      }
      goto LABEL_27;
    }
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v8, this);
    if ( !dword_1400814E0 || *((_DWORD *)this + 20) || !g_IsInternalRelease )
    {
      LODWORD(v3) = 1;
      VIDMM_RECYCLE_RANGE::Transition((__int64)this, 1);
      goto LABEL_28;
    }
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 195;
LABEL_43:
    if ( g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = v3;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 195;
      goto LABEL_45;
    }
LABEL_23:
    if ( !dword_1400814E0 || *((_DWORD *)this + 20) > (unsigned int)v3 )
    {
LABEL_25:
      WdLogSingleEntry3(4LL, this, *((int *)this + 16), 3LL);
      WdLogGlobalForLineNumber = 2248;
      if ( (byte_140081242 & 4) == 0 )
        goto LABEL_26;
      goto LABEL_38;
    }
LABEL_73:
    if ( !g_IsInternalRelease )
      goto LABEL_25;
    g_DxgMmsBugcheckExportIndex = v3;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 195;
LABEL_75:
    if ( g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = v3;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 195;
      goto LABEL_64;
    }
LABEL_56:
    if ( (byte_140081241 & 0x10) == 0 )
    {
LABEL_57:
      WdLogSingleEntry3(4LL, this, *((int *)this + 16), v3);
      WdLogGlobalForLineNumber = 2248;
      if ( (byte_140081242 & 4) != 0 )
        McTemplateK0pqq_EtwWriteTransfer();
      v31 = *((_QWORD *)this + 9);
      v32 = *(_QWORD **)(v31 + 136);
      if ( v32 )
      {
        v34 = *v32 + 144LL * v32[1];
        *(_DWORD *)v34 = 2;
        *(_QWORD *)(v34 + 8) = this;
        RtlCaptureStackBackTrace(v3, 0x10u, (PVOID *)(v34 + 16), 0LL);
        *(_QWORD *)(*(_QWORD *)(v31 + 136) + 8LL) += v3;
        v35 = *(_QWORD *)(v31 + 136);
        if ( *(_QWORD *)(v35 + 8) == *(_QWORD *)(v35 + 48) )
        {
          *(_QWORD *)(v35 + 8) = 0LL;
          *(_BYTE *)(*(_QWORD *)(v31 + 136) + 16LL) = v3;
        }
      }
      *((_DWORD *)this + 16) = v3;
LABEL_28:
      v20 = *((_DWORD *)this + 20);
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            if ( v22 != 1 )
              return 0LL;
          }
          else
          {
            *((_DWORD *)this + 20) = 3;
          }
          *((_BYTE *)this + 84) = *a3;
          return 0LL;
        }
      }
      else
      {
        *((_DWORD *)this + 20) = v3;
      }
      *((_BYTE *)this + 84) = 0;
      return 0LL;
    }
LABEL_64:
    McTemplateK0qxxx_EtwWriteTransfer();
    goto LABEL_57;
  }
  v15 = *((_QWORD *)this + 9);
  v3 = 1LL;
  v36 = *((_QWORD *)this + 5) - *((_QWORD *)this + 4);
  v16 = **(_DWORD **)(v15 + 32);
  if ( (unsigned int)(v16 - 9) <= 1 )
  {
    if ( !dword_1400814E0 || *((_DWORD *)this + 20) || !g_IsInternalRelease )
      goto LABEL_57;
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 195;
    goto LABEL_14;
  }
  if ( (unsigned int)(v16 - 3) <= 3 )
  {
    if ( !dword_1400814E0 || *((_DWORD *)this + 20) || !g_IsInternalRelease )
      goto LABEL_57;
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 195;
    goto LABEL_73;
  }
  if ( v16 == 2 || (v26 = 1028, v16 == 8) )
    v26 = 4;
  v37 = *((_QWORD *)this + 4);
  CurrentPartitionHandle = VIDMM_PROCESS::GetCurrentPartitionHandle();
  if ( CurrentPartitionHandle == -1 )
  {
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    VirtualMemoryFromPartition = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, __int64 *, int, int))VirtualMemoryInterface)(
                                   -1LL,
                                   &v37,
                                   0LL,
                                   &v36,
                                   4096,
                                   v26);
  }
  else
  {
    VirtualMemoryFromPartition = VidMmAllocateVirtualMemoryFromPartition(
                                   CurrentPartitionHandle,
                                   (__int64)&v37,
                                   (__int64)&v36,
                                   0x1000u,
                                   v26);
  }
  v30 = VirtualMemoryFromPartition;
  if ( VirtualMemoryFromPartition >= 0 )
  {
    if ( !dword_1400814E0 || !*((_DWORD *)this + 20) )
      goto LABEL_56;
    goto LABEL_75;
  }
  _InterlockedAdd(&dword_14008177C, 1u);
  WdLogSingleEntry1(6LL, VirtualMemoryFromPartition);
  WdLogGlobalForLineNumber = 1217;
  DxgkLogInternalTriageEvent(v33, 262145LL);
  return v30;
}
