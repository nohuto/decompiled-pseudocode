/*
 * XREFs of ?InvalidateCache@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAUVIDMM_MULTI_ALLOC@@_K3@Z @ 0x1400956F8
 * Callers:
 *     VidMmInvalidateCache @ 0x14004BE20 (VidMmInvalidateCache.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x140031790 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140034988 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1400356B0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     VidMmFlushCpuCacheWorker @ 0x140096A3C (VidMmFlushCpuCacheWorker.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400D93E0 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400D9400 (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InvalidateCache(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct VIDMM_MULTI_GLOBAL_ALLOC *a3,
        struct VIDMM_MULTI_GLOBAL_ALLOC ***a4,
        unsigned __int64 a5,
        unsigned __int64 Length)
{
  unsigned int v6; // ebx
  struct VIDMM_MULTI_GLOBAL_ALLOC *v8; // rdi
  struct VIDMM_MULTI_GLOBAL_ALLOC **v10; // r14
  __int64 v11; // rcx
  __int64 v13; // rcx
  __int64 v14; // r13
  __int64 v15; // rcx
  int v16; // eax
  _QWORD *i; // rax
  unsigned __int64 v18; // rbp
  _QWORD *v19; // rax
  unsigned __int64 v20; // rdx
  struct VIDMM_MULTI_GLOBAL_ALLOC *v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rcx
  VIDMM_PROCESS *v24; // rcx
  _BYTE v25[16]; // [rsp+50h] [rbp-88h] BYREF
  struct _KAPC_STATE v26; // [rsp+60h] [rbp-78h] BYREF
  VIDMM_PROCESS *v27; // [rsp+90h] [rbp-48h]

  v6 = 0;
  v8 = a3;
  v10 = 0LL;
  if ( !*((_BYTE *)this + 7018) && (!a2 || (*(_DWORD *)(*((_QWORD *)a2 + 4) + 408LL) & 0x1000) == 0) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 26062;
    DxgkLogInternalTriageEvent(v11, 0x40000LL);
    return 0LL;
  }
  if ( a4 )
  {
    v10 = *a4;
    v8 = **a4;
  }
  else if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 26071;
    DxgkLogInternalTriageEvent(v13, 0x40000LL);
    return 3221225485LL;
  }
  v14 = *(_QWORD *)v8;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, (struct VIDMM_MULTI_GLOBAL_ALLOC *)((char *)v8 + 136), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
  if ( !a4 )
  {
    if ( !a2 )
    {
      WdLogSingleEntry0(1LL);
      v16 = 26094;
LABEL_13:
      WdLogGlobalForLineNumber = v16;
LABEL_14:
      DxgkLogInternalTriageEvent(v15, 0x40000LL);
      DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v25);
      return 3221225485LL;
    }
    for ( i = (_QWORD *)*((_QWORD *)v8 + 14); i != (_QWORD *)((char *)v8 + 112); i = (_QWORD *)*i )
    {
      if ( (struct VIDMM_PROCESS *)*(i - 5) == a2 )
      {
        v10 = (struct VIDMM_MULTI_GLOBAL_ALLOC **)(i - 6);
        break;
      }
    }
    if ( !v10 )
    {
      WdLogSingleEntry0(1LL);
      v16 = 26114;
      goto LABEL_13;
    }
  }
  v18 = Length;
  if ( g_IsInternalReleaseOrDbg )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdTrace();
    v19[3] = a4;
    v19[4] = a5;
    v19[5] = Length;
    WdLogGlobalForLineNumber = 26120;
  }
  if ( !Length )
    v18 = *(_QWORD *)(v14 + 16);
  v20 = *(_QWORD *)(v14 + 16);
  if ( a5 >= v20 )
  {
    WdLogSingleEntry1(1LL, v20);
    WdLogGlobalForLineNumber = 26133;
    goto LABEL_14;
  }
  if ( v18 > v20 - a5 )
  {
    WdLogSingleEntry1(1LL, v20);
    WdLogGlobalForLineNumber = 26141;
    goto LABEL_14;
  }
  if ( (*((_DWORD *)v8 + 7) & 0x14000) != 0 )
  {
    v22 = *((_QWORD *)v8 + 51);
    if ( (*(_BYTE *)(v22 + 10) & 5) != 0 )
      v21 = *(struct VIDMM_MULTI_GLOBAL_ALLOC **)(v22 + 24);
    else
      v21 = (struct VIDMM_MULTI_GLOBAL_ALLOC *)MmMapLockedPagesSpecifyCache((PMDL)v22, 0, MmCached, 0LL, 0, 0x40000010u);
  }
  else if ( (**((_DWORD **)v8 + 49) & 8) != 0 )
  {
    v21 = (struct VIDMM_MULTI_GLOBAL_ALLOC *)*((_QWORD *)v8 + 29);
  }
  else
  {
    v21 = v10[2];
  }
  if ( v21 )
  {
    v27 = v10[1];
    VIDMM_PROCESS::SafeAttach(v27, &v26);
    if ( *((_DWORD *)v8 + 18) == 2 && (*(_DWORD *)(v14 + 56) & 4) != 0 || (*((_DWORD *)v8 + 7) & 0x200000) != 0 )
      v6 = VidMmFlushCpuCacheWorker((char *)v21 + a5, v18);
    VIDMM_PROCESS::SafeDetach(v24, &v26);
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 26169;
    DxgkLogInternalTriageEvent(v23, 0x40000LL);
    v6 = -1073741811;
  }
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v25);
  return v6;
}
