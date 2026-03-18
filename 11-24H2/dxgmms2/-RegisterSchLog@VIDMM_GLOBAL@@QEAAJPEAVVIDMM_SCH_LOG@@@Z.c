/*
 * XREFs of ?RegisterSchLog@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_SCH_LOG@@@Z @ 0x14004A10C
 * Callers:
 *     ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4VIDMM_SCH_LOG_TYPE@@@Z @ 0x140024A94 (-CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4V.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140034280 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400F7E8C (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::RegisterSchLog(VIDMM_GLOBAL *this, struct VIDMM_SCH_LOG *a2)
{
  char *v2; // rbx
  bool v5; // zf
  struct _MDL *v6; // rbx
  unsigned __int64 LogicalAddress; // rax
  int v8; // eax
  unsigned int v9; // ebx
  VIDMM_GLOBAL **v11; // rdx
  VIDMM_GLOBAL *v12; // rax
  char *v13; // [rsp+20h] [rbp-18h] BYREF
  char v14; // [rsp+28h] [rbp-10h]

  v2 = (char *)this + 3760;
  v13 = (char *)this + 3760;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  v5 = *((_BYTE *)this + 40109) == 0;
  v14 = 1;
  if ( v5
    || (v6 = (struct _MDL *)*((_QWORD *)a2 + 9),
        LogicalAddress = VidMmiGetLogicalAddress(*((void **)a2 + 10), 0LL),
        v8 = SysMmMapIommuRange(*(struct SYSMM_ADAPTER **)(*((_QWORD *)this + 3) + 224LL), LogicalAddress, v6, 0),
        v9 = v8,
        v8 >= 0) )
  {
    v11 = (VIDMM_GLOBAL **)*((_QWORD *)this + 469);
    v12 = (struct VIDMM_SCH_LOG *)((char *)a2 + 8);
    if ( *v11 != (VIDMM_GLOBAL *)((char *)this + 3744) )
      __fastfail(3u);
    *(_QWORD *)v12 = (char *)this + 3744;
    *((_QWORD *)a2 + 2) = v11;
    *v11 = v12;
    *((_QWORD *)this + 469) = v12;
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v13);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(3LL, v8);
    WdLogGlobalForLineNumber = 471;
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v13);
    return v9;
  }
}
