/*
 * XREFs of ?RegisterSchLog@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_SCH_LOG@@@Z @ 0x14004A9FC
 * Callers:
 *     ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4VIDMM_SCH_LOG_TYPE@@@Z @ 0x140033230 (-CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4V.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035890 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400FF540 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::RegisterSchLog(VIDMM_GLOBAL *this, struct VIDMM_SCH_LOG *a2)
{
  char *v2; // rbx
  __int64 v5; // rcx
  bool v6; // zf
  struct _MDL *v7; // rbx
  unsigned __int64 LogicalAddress; // rax
  int v9; // eax
  unsigned int v10; // ebx
  VIDMM_GLOBAL **v12; // rdx
  VIDMM_GLOBAL *v13; // rax
  char *v14; // [rsp+20h] [rbp-18h] BYREF
  char v15; // [rsp+28h] [rbp-10h]

  v2 = (char *)this + 3760;
  v14 = (char *)this + 3760;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline(v5);
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  v6 = *((_BYTE *)this + 40109) == 0;
  v15 = 1;
  if ( v6
    || (v7 = (struct _MDL *)*((_QWORD *)a2 + 9),
        LogicalAddress = VidMmiGetLogicalAddress(*((void **)a2 + 10), 0LL),
        v9 = SysMmMapIommuRange(*(struct SYSMM_ADAPTER **)(*((_QWORD *)this + 3) + 224LL), LogicalAddress, v7, 0),
        v10 = v9,
        v9 >= 0) )
  {
    v12 = (VIDMM_GLOBAL **)*((_QWORD *)this + 469);
    v13 = (struct VIDMM_SCH_LOG *)((char *)a2 + 8);
    if ( *v12 != (VIDMM_GLOBAL *)((char *)this + 3744) )
      __fastfail(3u);
    *(_QWORD *)v13 = (char *)this + 3744;
    *((_QWORD *)a2 + 2) = v12;
    *v12 = v13;
    *((_QWORD *)this + 469) = v13;
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v14);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(3LL, v9);
    WdLogGlobalForLineNumber = 471;
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v14);
    return v10;
  }
}
