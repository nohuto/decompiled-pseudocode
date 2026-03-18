/*
 * XREFs of ?OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1400CBC98
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1400E7C48 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALL.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140027B84 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400B85FC (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DE.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1400C33E4 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2W4_.c)
 *     ?CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@PEAEPEAX@Z @ 0x1400CC1F4 (-CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@PEAEPEAX@Z.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_N@Z @ 0x1400CCC64 (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_N@Z.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1400E5800 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@PEAVVIDMM.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1400E604C (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 *     ?TransferAllocationDecommit@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@1@Z @ 0x140106C34 (-TransferAllocationDecommit@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@1@.c)
 */

struct VIDMM_LOCAL_ALLOC *__fastcall VIDMM_GLOBAL::OpenLocalAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        struct VIDMM_PROCESS *a3,
        void *a4,
        unsigned __int8 *a5)
{
  __int64 v5; // rsi
  struct VIDMM_PROCESS *v7; // rbp
  struct VIDMM_GLOBAL_ALLOC *v10; // rdx
  VIDMM_GLOBAL *v11; // rcx
  _QWORD *v12; // rax
  char *v13; // rdi
  _QWORD *v14; // rax
  struct VIDMM_GLOBAL_ALLOC *v15; // rax
  struct VIDMM_GLOBAL_ALLOC **v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  struct VIDMM_LOCAL_ALLOC *v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rdx
  char **v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  char v29; // al
  __int64 v30; // rcx
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // r9
  enum _LOCK_OPERATION v34; // [rsp+28h] [rbp-B0h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-88h] BYREF

  v5 = *(_QWORD *)a2;
  v7 = a3;
  if ( !a3 )
    v7 = (struct VIDMM_PROCESS *)*((_QWORD *)this + 5048);
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    WdLogGlobalForLineNumber = 12421;
  }
  if ( !v7 )
  {
    WdLogSingleEntry0(1LL);
    v19 = 12432;
LABEL_27:
    v20 = 0x40000LL;
    goto LABEL_18;
  }
  v10 = (struct VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 14);
  if ( v10 != (struct VIDMM_GLOBAL_ALLOC *)((char *)a2 + 112) && (**((_DWORD **)a2 + 47) & 0x20000000) == 0 )
  {
    WdLogSingleEntry0(1LL);
    v19 = 12442;
    goto LABEL_27;
  }
  v11 = (VIDMM_GLOBAL *)(**((_DWORD **)a2 + 47) & 0x20000010);
  if ( (_DWORD)v11 == 536870928 )
  {
    v17 = *((_QWORD *)a2 + 6);
    if ( v17 )
    {
      if ( *(struct VIDMM_PROCESS **)(v17 + 8) != v7 )
      {
        if ( v7 == *((struct VIDMM_PROCESS **)this + 5048) )
          return 0LL;
        WdLogSingleEntry0(1LL);
        v19 = 12461;
        goto LABEL_27;
      }
    }
  }
  while ( 1 )
  {
    if ( v10 == (struct VIDMM_GLOBAL_ALLOC *)((char *)a2 + 112) )
    {
      v12 = (_QWORD *)operator new(96LL, 0x32306956u, 256LL);
      v13 = (char *)v12;
      if ( !v12 )
      {
        _InterlockedIncrement(&dword_140081690);
        WdLogSingleEntry0(6LL);
        v19 = 12523;
        v20 = 262145LL;
LABEL_18:
        WdLogGlobalForLineNumber = v19;
        DxgkLogInternalTriageEvent(v18, v20);
        return 0LL;
      }
      *v12 = a2;
      v11 = (struct VIDMM_GLOBAL_ALLOC *)((char *)a2 + 112);
      v12[1] = v7;
      v14 = v12 + 4;
      v14[1] = v14;
      *v14 = v14;
      v15 = (struct VIDMM_GLOBAL_ALLOC *)(v13 + 48);
      ++*((_DWORD *)a2 + 32);
      v16 = (struct VIDMM_GLOBAL_ALLOC **)*((_QWORD *)a2 + 15);
      if ( *v16 == (struct VIDMM_GLOBAL_ALLOC *)((char *)a2 + 112) )
      {
        *(_QWORD *)v15 = v11;
        *((_QWORD *)v13 + 7) = v16;
        *v16 = v15;
        *((_QWORD *)a2 + 15) = v15;
        if ( (*((_DWORD *)a2 + 8) & 0x20) == 0
          || VIDMM_GLOBAL::CommitLocalBackingStore(this, (struct VIDMM_LOCAL_ALLOC *)v13, a5, a4) >= 0 )
        {
          goto LABEL_22;
        }
        goto LABEL_36;
      }
LABEL_12:
      __fastfail(3u);
    }
    v13 = (char *)v10 - 48;
    if ( *((struct VIDMM_PROCESS **)v10 - 5) == v7 )
      break;
    v10 = *(struct VIDMM_GLOBAL_ALLOC **)v10;
  }
  v29 = v13[24];
  if ( (v29 & 1) != 0 )
  {
    v13[24] = v29 & 0xFE;
    WdLogSingleEntry1(4LL, (char *)v10 - 48);
    v32 = *((_QWORD *)a2 + 6);
    WdLogGlobalForLineNumber = 12483;
    if ( !v32 || (*(_BYTE *)(v32 + 24) & 1) != 0 )
    {
      *((_QWORD *)a2 + 6) = v13;
      v33 = *(_QWORD *)(v5 + 64);
      if ( v33 )
        VidMmRecordAlloc(this, a2, v13, v33, *(_QWORD *)(v5 + 16), 0);
    }
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v11) + 24) = v13;
    WdLogGlobalForLineNumber = 12503;
  }
LABEL_22:
  ++*((_DWORD *)v13 + 7);
  if ( (**((_DWORD **)a2 + 47) & 0x20000000) == 0 )
  {
    *((_QWORD *)a2 + 6) = v13;
    goto LABEL_24;
  }
  v22 = (struct VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 6);
  if ( v22 && (*((_DWORD *)a2 + 8) & 4) == 0 )
  {
LABEL_34:
    *a5 = 1;
LABEL_24:
    if ( *((_DWORD *)a2 + 18) )
    {
      v26 = 304LL * (*((_WORD *)a2 + 12) & 0x3F);
      v27 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL)) + 16LL);
      v28 = *(_QWORD *)(v5 + 16);
      if ( (*(_DWORD *)(*(_QWORD *)(v5 + 64) + 104LL) & 0x1001) != 0 )
        *(_QWORD *)(v27 + v26 + 248) += v28;
      else
        *(_QWORD *)(v27 + v26 + 240) += v28;
    }
    return (struct VIDMM_LOCAL_ALLOC *)v13;
  }
  if ( (*((_BYTE *)a2 + 32) & 0x60) == 0x60 )
    VIDMM_GLOBAL::TransferAllocationDecommit(v11, a2, v22, (struct VIDMM_LOCAL_ALLOC *)v13);
  *((_QWORD *)v13 + 1) = v7;
  if ( !*((_QWORD *)a2 + 6) )
  {
LABEL_32:
    if ( (*((_DWORD *)a2 + 8) & 4) != 0 )
    {
      v31 = *(_QWORD *)(v5 + 64);
      if ( v31 )
        VidMmRecordAlloc(this, a2, v13, v31, *(_QWORD *)(v5 + 16), 0);
    }
    *((_DWORD *)a2 + 8) &= ~4u;
    *((_QWORD *)a2 + 6) = v13;
    goto LABEL_34;
  }
  *(_QWORD *)v13 = a2;
  if ( *((int *)a2 + 47) <= 0 )
  {
LABEL_51:
    v30 = *((_QWORD *)a2 + 6);
    if ( (*(_BYTE *)(v30 + 24) & 1) == 0 )
    {
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(**(PRKPROCESS **)(v30 + 8), &ApcState);
      VIDMM_GLOBAL::CloseOneAllocation(
        this,
        (struct VIDMM_ALLOC *)(*(_QWORD *)(*((_QWORD *)a2 + 6) + 32LL) - 40LL),
        0LL,
        0,
        0,
        0LL);
      KeUnstackDetachProcess(&ApcState);
    }
    goto LABEL_32;
  }
  if ( (int)VIDMM_GLOBAL::ProbeAndLockAllocation(
              this,
              (struct VIDMM_LOCAL_ALLOC *)v13,
              a2,
              0LL,
              *(_QWORD *)(v5 + 16),
              v34,
              *(struct VIDMM_SEGMENT **)(v5 + 64),
              0) >= 0 )
  {
    VIDMM_GLOBAL::UnlockAllocation(this, *((struct VIDMM_LOCAL_ALLOC **)a2 + 6), 0LL, *(_QWORD *)(v5 + 16), 0, 0);
    goto LABEL_51;
  }
  _InterlockedIncrement(&dword_140081684);
  WdLogSingleEntry2(6LL, a2, *(_QWORD *)(v5 + 16));
  WdLogGlobalForLineNumber = 12609;
  DxgkLogInternalTriageEvent(v23, 262145LL);
LABEL_36:
  VIDMM_GLOBAL::UncommitLocalBackingStore(this, (struct VIDMM_LOCAL_ALLOC *)v13, 1);
  --*((_DWORD *)a2 + 32);
  v24 = *((_QWORD *)v13 + 6);
  if ( *(char **)(v24 + 8) != v13 + 48 )
    goto LABEL_12;
  v25 = (char **)*((_QWORD *)v13 + 7);
  if ( *v25 != v13 + 48 )
    goto LABEL_12;
  *v25 = (char *)v24;
  *(_QWORD *)(v24 + 8) = v25;
  operator delete(v13);
  return 0LL;
}
