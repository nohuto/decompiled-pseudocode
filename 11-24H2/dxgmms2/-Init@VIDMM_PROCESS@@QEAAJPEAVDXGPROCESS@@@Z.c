/*
 * XREFs of ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1400FA060
 * Callers:
 *     VidMmCreateProcess @ 0x14003D630 (VidMmCreateProcess.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14001C724 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ @ 0x1400359E0 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140035A00 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036BA0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetProcessID@DXGPROCESS@@QEBAQEAXXZ @ 0x140046080 (-GetProcessID@DXGPROCESS@@QEBAQEAXXZ.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     ??0VIDMM_PROCESS_HEAP@@QEAA@XZ @ 0x1400A16A4 (--0VIDMM_PROCESS_HEAP@@QEAA@XZ.c)
 *     ??0VIDMM_PROCESS_FENCE_STORAGE@@QEAA@PEAVVIDMM_PROCESS@@@Z @ 0x1400FA38C (--0VIDMM_PROCESS_FENCE_STORAGE@@QEAA@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z @ 0x1400FA42C (-VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z.c)
 *     ??0VIDMM_RECYCLE_HEAP_MGR@@QEAA@XZ @ 0x1400FA8BC (--0VIDMM_RECYCLE_HEAP_MGR@@QEAA@XZ.c)
 */

__int64 __fastcall VIDMM_PROCESS::Init(struct VIDMM_PARTITION **this, struct DXGPROCESS *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  struct VIDMM_PARTITION *v6; // rcx
  VIDMM_PROCESS_FENCE_STORAGE *v7; // rax
  VIDMM_PROCESS_FENCE_STORAGE *v8; // rax
  int v9; // eax
  void *v10; // rax
  VIDMM_PROCESS_HEAP *v11; // rax
  struct _KPROCESS *v12; // rcx
  int v13; // ebp
  DXGGLOBAL *Global; // rax
  __int64 v15; // rax
  unsigned __int64 MaximumGlobalAdapterCount; // kr00_8
  __int64 v17; // rax
  int v18; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  VIDMM_PROCESS_HEAP *v24; // rax
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-58h] BYREF

  v2 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
    WdLogGlobalForLineNumber = 220;
  }
  v5 = *((_DWORD *)a2 + 102);
  if ( (v5 & 0x100) != 0 )
  {
    v6 = *(struct VIDMM_PARTITION **)(*((_QWORD *)a2 + 74) + 608LL);
  }
  else if ( (v5 & 0x80u) != 0 )
  {
    v6 = (struct VIDMM_PARTITION *)*((_QWORD *)a2 + 76);
  }
  else
  {
    v6 = (struct VIDMM_PARTITION *)*((_QWORD *)a2 + 7);
  }
  *this = v6;
  this[1] = (struct VIDMM_PARTITION *)DXGPROCESS::GetProcessID(a2);
  this[4] = a2;
  v7 = (VIDMM_PROCESS_FENCE_STORAGE *)operator new(136LL, 0x34346956u, 64LL);
  if ( v7 )
    v8 = VIDMM_PROCESS_FENCE_STORAGE::VIDMM_PROCESS_FENCE_STORAGE(v7, (struct VIDMM_PROCESS *)this);
  else
    v8 = 0LL;
  this[5] = v8;
  if ( !v8 )
  {
    _InterlockedIncrement(&dword_140081728);
    WdLogSingleEntry0(6LL);
    v21 = 238;
    goto LABEL_24;
  }
  v9 = *((_DWORD *)a2 + 102);
  if ( (v9 & 0x100) != 0 )
  {
    v22 = *(_QWORD *)(*((_QWORD *)a2 + 74) + 64LL);
    if ( v22 )
      v23 = *(_QWORD *)(v22 + 8);
    else
      v23 = 0LL;
    this[3] = *(struct VIDMM_PARTITION **)(v23 + 24);
    goto LABEL_15;
  }
  if ( !dword_1400814E8 && (v9 & 0x80) == 0 )
  {
    v24 = (VIDMM_PROCESS_HEAP *)operator new(320LL, 0x30316956u, 64LL);
    if ( v24 )
    {
      v11 = VIDMM_PROCESS_HEAP::VIDMM_PROCESS_HEAP(v24);
      goto LABEL_13;
    }
    goto LABEL_25;
  }
  v10 = (void *)operator new(1696LL, 0x30316956u, 64LL);
  if ( !v10 )
  {
LABEL_25:
    v11 = 0LL;
    goto LABEL_13;
  }
  v11 = VIDMM_RECYCLE_HEAP_MGR::VIDMM_RECYCLE_HEAP_MGR(v10);
LABEL_13:
  this[3] = v11;
  if ( !v11 )
  {
    _InterlockedIncrement(dword_14008177C);
    WdLogSingleEntry0(6LL);
    v21 = 273;
    goto LABEL_24;
  }
  v12 = *this;
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(v12, &ApcState);
  v13 = (*(__int64 (__fastcall **)(struct VIDMM_PARTITION *, struct VIDMM_PARTITION **))(*(_QWORD *)this[3] + 8LL))(
          this[3],
          this);
  KeUnstackDetachProcess(&ApcState);
  if ( v13 < 0 )
    return (unsigned int)v13;
LABEL_15:
  Global = DXGGLOBAL::GetGlobal();
  MaximumGlobalAdapterCount = (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(Global);
  v15 = 8 * MaximumGlobalAdapterCount;
  if ( !is_mul_ok(MaximumGlobalAdapterCount, 8uLL) )
    v15 = -1LL;
  v17 = operator new[](v15, 0x33316956u, 256LL);
  this[2] = (struct VIDMM_PARTITION *)v17;
  if ( !v17 )
  {
    _InterlockedIncrement(&dword_140081718);
    WdLogSingleEntry0(6LL);
    v21 = 308;
LABEL_24:
    WdLogGlobalForLineNumber = v21;
    DxgkLogInternalTriageEvent(v20, 262145LL);
    return 3221225495LL;
  }
  if ( (*((_DWORD *)a2 + 102) & 2) != 0 )
  {
    *((_DWORD *)this + 24) |= 2u;
    g_pVidMmSystemProcess = (VIDMM_PROCESS *)this;
  }
  v18 = VidMmiOpenCurrentPartition((struct VIDMM_PROCESS *)this, this + 37);
  if ( v18 < 0 )
    return (unsigned int)v18;
  return v2;
}
