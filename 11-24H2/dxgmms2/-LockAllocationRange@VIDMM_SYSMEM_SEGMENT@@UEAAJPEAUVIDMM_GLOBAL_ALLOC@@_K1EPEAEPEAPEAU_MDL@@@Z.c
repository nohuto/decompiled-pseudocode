/*
 * XREFs of ?LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1400C3910
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     memmove @ 0x140056040 (memmove.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400B3F08 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1400C3D24 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2W4_.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1400C4210 (-VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAUVIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1400C4430 (-VidMmMapViewOfAllocation@@YAPEAXPEAUVIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 */

__int64 __fastcall VIDMM_SYSMEM_SEGMENT::LockAllocationRange(
        VIDMM_SYSMEM_SEGMENT *this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        size_t a4,
        char a5,
        unsigned __int8 *a6,
        struct _MDL **a7)
{
  unsigned __int8 *v11; // rdx
  int v12; // r13d
  struct VIDMM_LOCAL_ALLOC *v13; // rcx
  __int64 v14; // rsi
  _QWORD *v15; // rax
  struct VIDMM_LOCAL_ALLOC *v16; // rcx
  VIDMM_GLOBAL *v17; // r10
  int v18; // r15d
  __int64 v20; // r8
  const void *v21; // rax
  struct _MDL **v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rcx
  enum _LOCK_OPERATION v25; // [rsp+28h] [rbp-F0h]
  char v26; // [rsp+50h] [rbp-C8h]
  struct VIDMM_LOCAL_ALLOC *v27; // [rsp+58h] [rbp-C0h]
  void *v28; // [rsp+60h] [rbp-B8h] BYREF
  struct _MDL **v29; // [rsp+68h] [rbp-B0h]
  size_t Size; // [rsp+70h] [rbp-A8h]
  VIDMM_SYSMEM_SEGMENT *v31; // [rsp+78h] [rbp-A0h]
  struct VIDMM_LOCAL_ALLOC *v32; // [rsp+80h] [rbp-98h]
  __int64 v33; // [rsp+88h] [rbp-90h]
  unsigned __int64 v34; // [rsp+90h] [rbp-88h]
  struct _MDL **v35; // [rsp+98h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+A0h] [rbp-78h] BYREF

  v31 = this;
  v34 = a3;
  Size = a4;
  v11 = a6;
  v28 = a6;
  v29 = a7;
  v35 = a7;
  memset(&ApcState, 0, sizeof(ApcState));
  v12 = 0;
  v26 = 0;
  *a7 = 0LL;
  v13 = (struct VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 6);
  v27 = v13;
  v32 = v13;
  v14 = *(_QWORD *)a2;
  v33 = *(_QWORD *)a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v13);
    v15[3] = a2;
    v15[4] = a3;
    v15[5] = a4;
    WdLogGlobalForLineNumber = 794;
    v11 = (unsigned __int8 *)v28;
  }
  *v11 = 0;
  if ( *(_BYTE *)(v14 + 169) )
  {
    if ( a3 == *(_QWORD *)(v14 + 152) && a4 == *(_QWORD *)(v14 + 160) )
    {
      *v11 = 1;
      return 0LL;
    }
    VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 3), a2);
    LOBYTE(v20) = 1;
    (*(void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *, struct VIDMM_GLOBAL_ALLOC *, __int64))(*(_QWORD *)this + 104LL))(
      this,
      a2,
      v20);
  }
  v16 = v27;
  if ( (**((_DWORD **)a2 + 49) & 8) == 0 && v27 )
  {
    KeStackAttachProcess(**((PRKPROCESS **)v27 + 1), &ApcState);
    v12 = 1;
    v16 = v27;
  }
  if ( (*((_DWORD *)a2 + 7) & 0x4000) != 0 )
  {
LABEL_11:
    *(_QWORD *)(v14 + 160) = a4;
    *(_QWORD *)(v14 + 152) = a3;
    *(_BYTE *)(v14 + 168) = v26;
    *(_BYTE *)(v14 + 169) = 1;
    if ( v12 )
      KeUnstackDetachProcess(&ApcState);
    return 0LL;
  }
  if ( a5 )
  {
    v26 = 1;
    v28 = 0LL;
    v21 = VidMmMapViewOfAllocation(v16, a3, a4, &v28, 0);
    if ( v21 )
    {
      memmove(*((void **)this + 37), v21, a4);
      v22 = v29;
      VidMmUnmapViewOfAllocation(v27, v28);
    }
    else
    {
      memset(*((void **)this + 37), 0, a4);
      *((_DWORD *)a2 + 6) |= 0x200000u;
      v22 = v29;
    }
    *v22 = (struct _MDL *)*((_QWORD *)this + 38);
    goto LABEL_11;
  }
  v17 = (VIDMM_GLOBAL *)*((_QWORD *)this + 3);
  if ( (*((_DWORD *)v17 + 1746) & 4) != 0 )
  {
    _InterlockedIncrement(&dword_1400816A4);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 950;
    DxgkLogInternalTriageEvent(v23, 262145LL);
    if ( v12 )
      KeUnstackDetachProcess(&ApcState);
    return 3223191809LL;
  }
  else
  {
    v18 = VIDMM_GLOBAL::ProbeAndLockAllocation(v17, v16, a2, a3, a4, v25, this, 1u);
    if ( v18 >= 0 )
      goto LABEL_11;
    _InterlockedIncrement(&dword_1400816A4);
    WdLogSingleEntry3(6LL, a2, a3, a4);
    WdLogGlobalForLineNumber = 971;
    DxgkLogInternalTriageEvent(v24, 262145LL);
    if ( v12 )
      KeUnstackDetachProcess(&ApcState);
    return (unsigned int)v18;
  }
}
