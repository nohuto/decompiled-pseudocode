/*
 * XREFs of ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400C1E30
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x14003835C (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?AcquireProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x140039504 (-AcquireProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?ReleaseProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1400398C0 (-ReleaseProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     McTemplateK0ppq_EtwWriteTransfer @ 0x140040078 (McTemplateK0ppq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400A9714 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVI.c)
 *     ?VidMmiEnsureSystemCommitMdl@@YAJPEAVVIDMM_SEGMENT@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C00CC (-VidMmiEnsureSystemCommitMdl@@YAJPEAVVIDMM_SEGMENT@@PEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1400C2210 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z @ 0x1400C2240 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C2360 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1400C2F6C (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?MapAllocationToIoMmu@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010F5CC (-MapAllocationToIoMmu@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SYSMEM_SEGMENT::CommitResource(VIDMM_GLOBAL **this, struct VIDMM_PHYSICAL_ALLOC *a2)
{
  __int64 v2; // rsi
  __int64 v5; // rax
  char v6; // bp
  int v7; // edi
  __int64 v8; // r8
  __int64 v9; // rbp
  __int64 v10; // r12
  int v11; // r13d
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 result; // rax
  unsigned int v18; // edx
  unsigned int i; // ecx
  __int64 v20; // rax
  unsigned __int16 v21; // ax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  PVOID v25; // rax
  __int64 v26; // rcx
  ULONG Priority[2]; // [rsp+28h] [rbp-70h]
  char v28; // [rsp+A0h] [rbp+8h]
  unsigned __int16 v29; // [rsp+A8h] [rbp+10h]
  unsigned __int16 v30; // [rsp+B0h] [rbp+18h]
  VIDMM_PROCESS_ADAPTER_INFO *v31; // [rsp+B8h] [rbp+20h]

  v2 = *(_QWORD *)a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    v5 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v5 + 24) = v2;
    *(_QWORD *)(v5 + 32) = *(int *)(v2 + 188);
    WdLogGlobalForLineNumber = 205;
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(this[3], (struct VIDMM_GLOBAL_ALLOC *)v2, 1u);
  if ( VIDMM_GLOBAL::IsTdrPending(this[3]) )
  {
    WdLogSingleEntry1(4LL, v2);
    result = 3221226166LL;
    WdLogGlobalForLineNumber = 244;
    return result;
  }
  v6 = 0;
  v28 = 0;
  if ( (*(_DWORD *)(v2 + 32) & 2) != 0 )
  {
    v28 = 1;
  }
  else
  {
    v7 = VIDMM_SEGMENT::LockAllocationBackingStore((VIDMM_SEGMENT *)this, (struct VIDMM_GLOBAL_ALLOC *)v2);
    if ( v7 < 0 )
      return (unsigned int)v7;
    v6 = 1;
  }
  if ( (**(_DWORD **)(v2 + 376) & 0x4000) != 0 )
  {
    v7 = VidMmiEnsureSystemCommitMdl((struct VIDMM_SEGMENT *)this, (struct VIDMM_GLOBAL_ALLOC *)v2);
    if ( v7 >= 0 )
    {
      v24 = *(_QWORD *)(v2 + 56);
      if ( (*(_BYTE *)(v24 + 10) & 5) != 0 )
        v25 = *(PVOID *)(v24 + 24);
      else
        v25 = MmMapLockedPagesSpecifyCache((PMDL)v24, 0, MmCached, 0LL, 0, 0x40000010u);
      if ( v25 )
        goto LABEL_8;
      WdLogSingleEntry1(1LL, v2);
      WdLogGlobalForLineNumber = 294;
      DxgkLogInternalTriageEvent(v26, 0x40000LL);
      v7 = -1073741801;
    }
LABEL_33:
    if ( v6 )
      VIDMM_SEGMENT::UnlockAllocationBackingStore(this[3], (struct VIDMM_GLOBAL_ALLOC *)v2, 0LL);
    return (unsigned int)v7;
  }
LABEL_8:
  if ( *((_BYTE *)this[3] + 40107) )
  {
    v22 = VIDMM_SEGMENT::MapAllocationToIoMmu((VIDMM_SEGMENT *)this, (struct VIDMM_GLOBAL_ALLOC *)v2);
    v7 = v22;
    if ( v22 < 0 )
    {
      _InterlockedAdd(&dword_14008180C, 1u);
      WdLogSingleEntry2(6LL, v2, v22);
      WdLogGlobalForLineNumber = 310;
      DxgkLogInternalTriageEvent(v23, 262145LL);
      goto LABEL_33;
    }
  }
  (*((void (__fastcall **)(VIDMM_GLOBAL **, __int64))*this + 7))(this, v2);
  if ( (byte_140081241 & 0x10) != 0 )
  {
    v21 = *((_WORD *)this + 20) + 1;
    Priority[0] = v21;
    McTemplateK0ppq_EtwWriteTransfer(
      v21,
      &EventPagingOpSysmemCommit,
      v8,
      *((_QWORD *)this[3] + 3),
      v2,
      *(_QWORD *)Priority);
  }
  *((_QWORD *)a2 + 8) = *((_QWORD *)a2 + 13);
  *((_QWORD *)a2 + 9) = *((_QWORD *)a2 + 12);
  *((_QWORD *)a2 + 13) = 0LL;
  *((_QWORD *)a2 + 12) = 0LL;
  *(_DWORD *)(v2 + 32) &= ~8u;
  v9 = *(_QWORD *)(v2 + 48);
  if ( v9 && *(_QWORD *)(v9 + 8) )
  {
    v10 = *((_QWORD *)a2 + 2);
    v30 = *((_WORD *)this + 20);
    v29 = *((_WORD *)this + 210);
    v11 = VIDMM_SEGMENT::DriverId((VIDMM_SEGMENT *)this);
    v12 = *(_DWORD *)(*(_QWORD *)v2 + 44LL);
    v14 = *(unsigned int *)(*((_QWORD *)this[3] + 3) + 240LL);
    v31 = *(VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(v13 + 16) + 8 * v14);
    VIDMM_PROCESS_ADAPTER_INFO::AcquireProcessAdapterInfoLock(v31);
    v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL) + 8 * v14);
    if ( v15 )
      v16 = *(_QWORD *)(304LL * v29 + *(_QWORD *)(v15 + 16)) + 184LL * v30;
    else
      v16 = 0LL;
    if ( !v12 || (v12 & 0x1F) == v11 )
    {
      ++*(_DWORD *)(v16 + 64);
      *(_QWORD *)(v16 + 72) += v10;
    }
    else
    {
      v18 = 1;
      for ( i = 6; i < 0x1E; i += 6 )
      {
        if ( ((v12 >> i) & 0x1F) == v11 )
        {
          v20 = 2LL * v18;
          *(_QWORD *)(v16 + 8 * v20 + 72) += v10;
          ++*(_DWORD *)(v16 + 8 * v20 + 64);
          goto LABEL_17;
        }
        ++v18;
      }
      *(_QWORD *)(v16 + 152) += v10;
      ++*(_DWORD *)(v16 + 144);
    }
LABEL_17:
    VIDMM_PROCESS_ADAPTER_INFO::ReleaseProcessAdapterInfoLock(v31);
  }
  if ( v28 )
  {
    VIDMM_GLOBAL::ReturnPinnedBackingStore(this[3], *((_QWORD *)a2 + 2));
    *(_DWORD *)(v2 + 32) &= ~2u;
  }
  return 0LL;
}
