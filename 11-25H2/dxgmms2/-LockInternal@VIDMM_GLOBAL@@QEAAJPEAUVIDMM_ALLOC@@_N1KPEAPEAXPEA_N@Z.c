/*
 * XREFs of ?LockInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_N1KPEAPEAXPEA_N@Z @ 0x1400CD020
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DD034 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?LockCommon@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NKPEAPEAX@Z @ 0x1400F35B8 (-LockCommon@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NKPEAPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     ?VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z @ 0x1400CD238 (-VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400CD300 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400CD320 (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     MapInSystemMemory @ 0x1400CD340 (MapInSystemMemory.c)
 *     ?MapInVideoMemory@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_ALLOC@@_NPEA_N@Z @ 0x1400CD4F8 (-MapInVideoMemory@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_ALLOC@@_NPEA_N@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::LockInternal(
        VIDMM_GLOBAL *this,
        volatile signed __int32 **a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned int a5,
        void **a6,
        bool *a7)
{
  int v10; // r15d
  volatile signed __int32 *v11; // rdi
  __int64 *v12; // rbx
  __int64 v13; // rbp
  VIDMM_PROCESS *v14; // rcx
  int v15; // ebp
  bool v16; // zf
  void *v17; // rax
  __int64 result; // rax
  VIDMM_PROCESS *v19; // rcx
  VIDMM_PROCESS *v20; // rcx
  int v21; // [rsp+20h] [rbp-98h]
  struct _KAPC_STATE v22; // [rsp+28h] [rbp-90h] BYREF
  VIDMM_PROCESS *v23; // [rsp+58h] [rbp-60h]

  v10 = a3;
  if ( *(_BYTE *)(*((_QWORD *)this + 3) + 3053LL) || *(_BYTE *)(*((_QWORD *)this + 2) + 1025LL) )
  {
    WdLogSingleEntry3(3LL, a2, a3, a4);
    result = 3221226166LL;
    WdLogGlobalForLineNumber = 22096;
  }
  else
  {
    v11 = *a2;
    v12 = *(__int64 **)*a2;
    v13 = *v12;
    if ( !*((_DWORD *)v12 + 46) )
    {
      v23 = (VIDMM_PROCESS *)*((_QWORD *)v11 + 1);
      VIDMM_PROCESS::SafeAttach(v23, &v22);
      if ( (*(_DWORD *)(v13 + 56) & 0x10) != 0 )
      {
        v21 = VIDMM_PHYSICAL_ADAPTER::MapInVideoMemory(
                *(VIDMM_PHYSICAL_ADAPTER **)(*((_QWORD *)this + 5029) + 8 * (v12[3] & 0x3F)),
                (struct VIDMM_ALLOC *)a2,
                v10,
                a7);
        if ( v21 < 0 )
        {
          WdLogSingleEntry1(3LL, a2);
          WdLogGlobalForLineNumber = 22121;
          VIDMM_PROCESS::SafeDetach(v19, &v22);
          return (unsigned int)v21;
        }
      }
      if ( (*(_DWORD *)(v13 + 56) & 0x10) == 0 )
      {
        v15 = MapInSystemMemory(v11);
        if ( v15 < 0 )
        {
          WdLogSingleEntry1(3LL, a2);
          WdLogGlobalForLineNumber = 22137;
          VIDMM_PROCESS::SafeDetach(v20, &v22);
          return (unsigned int)v15;
        }
      }
      VIDMM_PROCESS::SafeDetach(v14, &v22);
    }
    _InterlockedIncrement((volatile signed __int32 *)v12 + 46);
    _InterlockedIncrement(v11 + 17);
    v16 = (*((_DWORD *)v12 + 7) & 0xC000) == 0;
    *((_BYTE *)v12 + 40) = a4;
    if ( v16 )
    {
      if ( (*(_DWORD *)v12[47] & 8) != 0 )
        v17 = (void *)v12[27];
      else
        v17 = (void *)*((_QWORD *)v11 + 2);
    }
    else
    {
      v17 = (void *)v12[52];
    }
    *a6 = v17;
    *((_BYTE *)v12 + 42) = 1;
    VidMmRecordLock((VIDMM_GLOBAL *)((char *)this + 7112), a5, a3, v10);
    return 0LL;
  }
  return result;
}
