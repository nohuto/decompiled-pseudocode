/*
 * XREFs of VidSchiCreateNodeSchedulingLog @ 0x140052888
 * Callers:
 *     ?VidSchiProcessAsyncOperation@@YAXPEAX@Z @ 0x140027170 (-VidSchiProcessAsyncOperation@@YAXPEAX@Z.c)
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1400D773C (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x140019BE8 (-VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14002D720 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4VIDMM_SCH_LOG_TYPE@@@Z @ 0x140033230 (-CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4V.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x140033860 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     ??_GVIDMM_SCH_LOG@@AEAAPEAXI@Z @ 0x14004BDDC (--_GVIDMM_SCH_LOG@@AEAAPEAXI@Z.c)
 *     ?DdiSetSchedulingLogBuffer@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETSCHEDULINGLOGBUFFER@@@Z @ 0x14004BF60 (-DdiSetSchedulingLogBuffer@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETSCHEDULINGLOGBUFFER@@@Z.c)
 *     VidSchiSerializeSchedulingLog @ 0x14010D784 (VidSchiSerializeSchedulingLog.c)
 */

__int64 __fastcall VidSchiCreateNodeSchedulingLog(struct _VIDSCH_NODE *a1, unsigned int a2)
{
  __int64 v2; // rdi
  UINT64 v3; // r14
  __int64 v4; // rax
  __int64 v6; // rcx
  int v7; // esi
  DXGK_SCHEDULING_LOG_BUFFER *v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  UINT v12; // ecx
  int v13; // eax
  VIDMM_SCH_LOG *v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r12
  __int64 v17; // r13
  D3DGPU_VIRTUAL_ADDRESS v18; // rax
  struct _DXGKARG_SETSCHEDULINGLOGBUFFER v20; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v21[88]; // [rsp+68h] [rbp-1h] BYREF
  D3DGPU_VIRTUAL_ADDRESS v22; // [rsp+D0h] [rbp+67h] BYREF
  VIDMM_SCH_LOG *v23; // [rsp+E0h] [rbp+77h] BYREF
  DXGK_SCHEDULING_LOG_BUFFER *v24; // [rsp+E8h] [rbp+7Fh] BYREF

  v2 = *((_QWORD *)a1 + 3);
  v3 = a2;
  v4 = *((unsigned __int16 *)a1 + 2);
  memset(&v20, 0, sizeof(v20));
  v23 = 0LL;
  v6 = *(_QWORD *)(v2 + 688);
  v24 = 0LL;
  v22 = 0LL;
  if ( (unsigned int)v4 < *(_DWORD *)(v2 + 760) )
    v6 += 8 * v4;
  v7 = VIDMM_SCH_LOG::CreateSchLog(
         *(VIDMM_GLOBAL **)(*(_QWORD *)(v2 + 8) + 768LL),
         *(unsigned __int16 *)(*(_QWORD *)v6 + 6LL),
         32 * (a2 + 1),
         (__int64 *)&v23,
         &v24,
         &v22,
         0LL,
         0);
  if ( v7 < 0 )
    goto LABEL_16;
  v8 = v24;
  v24->Header.NumberOfEntries = v3;
  v9 = *((unsigned __int16 *)a1 + 2);
  v10 = *(_QWORD *)(v2 + 688);
  if ( (unsigned int)v9 < *(_DWORD *)(v2 + 760) )
    v10 += 8 * v9;
  v20.EngineOrdinal = *(unsigned __int16 *)(*(_QWORD *)v10 + 6LL);
  v11 = *(_QWORD *)(v2 + 688);
  if ( (unsigned int)v9 < *(_DWORD *)(v2 + 760) )
    v11 += 8 * v9;
  v12 = *(unsigned __int16 *)(*(_QWORD *)v11 + 8LL);
  v20.InterruptEntry = (unsigned int)(3 * v3) >> 2;
  v20.LogBufferGpuVa = v22;
  v20.NodeOrdinal = v12;
  v20.NumberOfEntries = v3;
  v20.LogBufferCpuVa = v8;
  v13 = ADAPTER_RENDER::DdiSetSchedulingLogBuffer(*(ADAPTER_RENDER **)(v2 + 8), &v20);
  v7 = 0;
  if ( v13 != -1073741822 )
    v7 = v13;
  if ( v7 < 0 )
  {
LABEL_16:
    if ( v23 )
      VIDMM_SCH_LOG::`scalar deleting destructor'(v23);
    return (unsigned int)v7;
  }
  else
  {
    AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v21, (unsigned __int64 *)(v2 + 1984), 1, 0);
    v14 = (VIDMM_SCH_LOG *)*((_QWORD *)a1 + 2052);
    v15 = *((_QWORD *)a1 + 2057);
    v16 = *((_QWORD *)a1 + 2058);
    v17 = *((_QWORD *)a1 + 2059);
    v24 = (DXGK_SCHEDULING_LOG_BUFFER *)*((_QWORD *)a1 + 2060);
    *((_QWORD *)a1 + 2052) = v23;
    v18 = v22;
    *((_DWORD *)a1 + 4106) = v3;
    *((_QWORD *)a1 + 2055) = v18;
    *((_QWORD *)a1 + 2054) = v8;
    *((_QWORD *)a1 + 2060) = 0LL;
    *((_QWORD *)a1 + 2058) = 0LL;
    *((_QWORD *)a1 + 2059) = 0LL;
    *((_QWORD *)a1 + 2057) = 0LL;
    *((_QWORD *)a1 + 2056) = 0LL;
    VidSchiCalibrateHwClock(a1);
    AcquireSpinLock::Release((AcquireSpinLock *)v21);
    if ( v14 )
    {
      if ( (byte_140081243 & 8) != 0 )
        VidSchiSerializeSchedulingLog((_DWORD)a1, (_DWORD)v14, v15, v16, v17, (__int64)v24);
      VIDMM_SCH_LOG::`scalar deleting destructor'(v14);
    }
    return 0LL;
  }
}
