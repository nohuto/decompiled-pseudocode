/*
 * XREFs of ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4VIDMM_SCH_LOG_TYPE@@@Z @ 0x140024A94
 * Callers:
 *     VidSchiCreateNativeFenceLog @ 0x140024634 (VidSchiCreateNativeFenceLog.c)
 *     VidSchiCreateNodeSchedulingLog @ 0x1400523B8 (VidSchiCreateNodeSchedulingLog.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14001C724 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140034280 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x140039AF0 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     ?GetVaAllocator@VIDMM_SCH_LOG@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x140039C40 (-GetVaAllocator@VIDMM_SCH_LOG@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 *     ?SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z @ 0x140039CD4 (-SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z.c)
 *     ?RegisterSchLog@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_SCH_LOG@@@Z @ 0x14004A10C (-RegisterSchLog@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_SCH_LOG@@@Z.c)
 *     ??_GVIDMM_SCH_LOG@@AEAAPEAXI@Z @ 0x14004B4EC (--_GVIDMM_SCH_LOG@@AEAAPEAXI@Z.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x14009AF84 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1400B9DA4 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1400BC21C (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400BCAA4 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z @ 0x1400C43B0 (-VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z.c)
 *     ?VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z @ 0x1400F7C78 (-VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z.c)
 */

__int64 __fastcall VIDMM_SCH_LOG::CreateSchLog(
        VIDMM_GLOBAL *a1,
        int a2,
        __int64 a3,
        __int64 *a4,
        _QWORD *a5,
        _QWORD *a6,
        VIDMM_PROCESS *a7,
        int a8)
{
  SIZE_T v11; // r12
  __int64 v12; // rsi
  unsigned int v13; // edx
  int v14; // r14d
  __int64 v15; // rax
  VIDMM_PROCESS *v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  struct _MDL *Mdl; // rax
  __int64 v20; // rcx
  int LogicalMemory; // eax
  CVirtualAddressAllocator *VaAllocator; // rbx
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r9
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  int v28; // r14d
  __int64 v29; // rax
  unsigned __int64 LogicalAddress; // rax
  __int64 v32; // [rsp+80h] [rbp-C8h] BYREF
  char v33; // [rsp+88h] [rbp-C0h]
  SIZE_T v34; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+98h] [rbp-B0h] BYREF
  SIZE_T v36[2]; // [rsp+A0h] [rbp-A8h] BYREF
  _QWORD v37[19]; // [rsp+B0h] [rbp-98h] BYREF
  unsigned __int64 v38; // [rsp+150h] [rbp+8h] BYREF
  int v39; // [rsp+158h] [rbp+10h]
  __int64 v40; // [rsp+160h] [rbp+18h]
  __int64 *v41; // [rsp+168h] [rbp+20h]

  v41 = a4;
  v39 = a2;
  v11 = (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v35 = 0LL;
  memset(v37, 0, 0x58uLL);
  v12 = 0LL;
  v32 = *(_QWORD *)a1 + 136LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v32, 0LL);
  *(_QWORD *)(v32 + 8) = KeGetCurrentThread();
  v33 = 1;
  if ( *(_BYTE *)(*(_QWORD *)a1 + 212LL) != 1 )
    goto LABEL_2;
  v15 = operator new(104LL, 0x65356956u, 256LL);
  v12 = v15;
  if ( v15 )
  {
    *(_QWORD *)v15 = 0LL;
    *(_OWORD *)(v15 + 8) = 0LL;
    *(_DWORD *)(v15 + 24) = 0;
    *(_QWORD *)(v15 + 32) = 0LL;
    *(_QWORD *)(v15 + 40) = 0LL;
    *(_QWORD *)(v15 + 48) = 0LL;
    *(_QWORD *)(v15 + 56) = 0LL;
    *(_QWORD *)(v15 + 64) = 0LL;
    *(_QWORD *)(v15 + 72) = 0LL;
    *(_QWORD *)(v15 + 80) = 0LL;
    *(_WORD *)(v15 + 88) = 0;
    *(_DWORD *)(v15 + 92) = 0;
    *(_QWORD *)(v15 + 96) = 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  v40 = v12;
  if ( !v12 )
    goto LABEL_2;
  *(_QWORD *)v12 = a1;
  *(_DWORD *)(v12 + 24) = a2;
  *(_QWORD *)(v12 + 32) = v11;
  *(_DWORD *)(v12 + 92) = a8;
  v16 = a7;
  if ( !a7 )
    v16 = g_pVidMmSystemProcess;
  *(_QWORD *)(v12 + 96) = v16;
  v34 = v11;
  v17 = MmCreateSection(v12 + 40, 0LL, 0LL, &v34, 4, 0x8000000, 0LL, 0LL);
  v14 = v17;
  if ( v17 < 0 )
  {
    _InterlockedIncrement(&dword_140081830);
    WdLogSingleEntry1(6LL, v17);
    WdLogGlobalForLineNumber = 115;
LABEL_11:
    DxgkLogInternalTriageEvent(v18, 262145LL);
    goto LABEL_32;
  }
  v36[0] = v11;
  v14 = MmMapViewInSystemSpaceEx(*(_QWORD *)(v12 + 40), v12 + 48, v36, &v35, 0LL);
  if ( v14 < 0 )
  {
    _InterlockedIncrement(&dword_1400817C0);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 130;
    goto LABEL_11;
  }
  Mdl = VidMmiAllocateMdl(*(PVOID *)(v12 + 48), v11);
  *(_QWORD *)(v12 + 72) = Mdl;
  if ( !Mdl )
  {
    _InterlockedIncrement(&dword_140081834);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 139;
    DxgkLogInternalTriageEvent(v20, 262145LL);
LABEL_2:
    v14 = -1073741801;
    goto LABEL_32;
  }
  MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
  *(_BYTE *)(v12 + 88) = 1;
  LogicalMemory = SysMmAllocateLogicalMemory(
                    *(struct SYSMM_ADAPTER **)(*((_QWORD *)a1 + 3) + 224LL),
                    *(_QWORD *)(v12 + 32),
                    (const void *)v12,
                    (void **)(v12 + 80));
  v14 = LogicalMemory;
  if ( LogicalMemory >= 0 )
  {
    VaAllocator = VIDMM_SCH_LOG::GetVaAllocator((VIDMM_SCH_LOG *)v12);
    if ( VaAllocator )
    {
      v38 = 0LL;
      v24 = 0LL;
      if ( a8 )
      {
        v26 = *((_QWORD *)a1 + 3);
        v25 = *(_QWORD *)(v26 + 2952);
        v24 = *(_QWORD *)(v26 + 2960);
      }
      else
      {
        v25 = *((_QWORD *)a1 + 5122);
      }
      v14 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(VaAllocator, v11, v23, v25, v24, 0x1000u, &v38);
      if ( v14 < 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 201;
        goto LABEL_32;
      }
      v27 = v38;
      *(_QWORD *)(v12 + 56) = v38;
      v28 = v39;
      v29 = CVirtualAddressAllocator::MapVirtualAddressRange(
              VaAllocator,
              v12,
              0LL,
              7LL,
              v11,
              v27,
              0LL,
              0LL,
              4096,
              17LL,
              0LL,
              v39,
              0LL,
              0,
              0);
      if ( !v29 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 222;
        v14 = -1073741823;
        goto LABEL_32;
      }
      *(_QWORD *)(v12 + 64) = v29;
      LODWORD(v37[0]) = 113;
      v37[6] = v29;
      v37[5] = VaAllocator;
      HIDWORD(v37[0]) = v28;
      LogicalAddress = SysMmGetLogicalAddress(*(void *const *)(v12 + 80));
      VidMmiInitializeAdlForPfnArray(
        (struct _DXGK_ADL *)&v37[7],
        (const unsigned __int64 *)(*(_QWORD *)(v12 + 72) + 48LL),
        *(_DWORD *)(*(_QWORD *)(v12 + 72) + 40LL) >> 12,
        LogicalAddress);
      v14 = VIDMM_GLOBAL::QueueSystemCommandAndWait(a1, (struct _VIDMM_SYSTEM_COMMAND *)v37, 1);
      if ( v14 < 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 241;
        goto LABEL_32;
      }
    }
    else
    {
      WdLogSingleEntry0(4LL);
      WdLogGlobalForLineNumber = 171;
    }
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v32);
    v14 = VIDMM_GLOBAL::RegisterSchLog(a1, (struct VIDMM_SCH_LOG *)v12);
    if ( v14 >= 0 )
    {
      VIDMM_PROCESS::OpenAdapter(*(VIDMM_PROCESS **)(v12 + 96), a1);
      *(_BYTE *)(v12 + 89) = 1;
      *a4 = v12;
      *a5 = *(_QWORD *)(v12 + 48);
      *a6 = *(_QWORD *)(v12 + 56);
      goto LABEL_35;
    }
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 253;
  }
  else
  {
    WdLogSingleEntry1(3LL, LogicalMemory);
    WdLogGlobalForLineNumber = 164;
  }
LABEL_32:
  if ( v12 )
    VIDMM_SCH_LOG::`scalar deleting destructor'((VIDMM_SCH_LOG *)v12, v13);
  *a4 = 0LL;
  *a5 = 0LL;
  *a6 = 0LL;
LABEL_35:
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v32);
  return (unsigned int)v14;
}
