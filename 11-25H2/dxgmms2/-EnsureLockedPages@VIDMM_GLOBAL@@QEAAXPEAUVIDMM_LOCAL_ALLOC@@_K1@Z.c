/*
 * XREFs of ?EnsureLockedPages@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1@Z @ 0x1401119C8
 * Callers:
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1400E604C (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140027B84 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400C36AC (-VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVID.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::EnsureLockedPages(
        VIDMM_GLOBAL *this,
        struct VIDMM_LOCAL_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  VIDMM_GLOBAL *v8; // rbx
  __int64 v9; // rcx
  PRKPROCESS *v10; // rcx
  void **v11; // rax
  void *v12; // rcx
  VIDMM_GLOBAL **v13; // rcx
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-68h] BYREF

  v8 = (VIDMM_GLOBAL *)operator new(32LL, 0x39356956u, 256LL);
  if ( v8 )
  {
    v10 = (PRKPROCESS *)*((_QWORD *)a2 + 1);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*v10, &ApcState);
    *((_QWORD *)v8 + 2) = VidMmiProbeAndLockAllocation(
                            *(struct VIDMM_GLOBAL_ALLOC **)a2,
                            a3,
                            a4,
                            IoModifyAccess,
                            0LL,
                            a2);
    KeUnstackDetachProcess(&ApcState);
    v11 = (void **)*((_QWORD *)a2 + 1);
    v12 = *v11;
    *((_QWORD *)v8 + 3) = *v11;
    ObfReferenceObject(v12);
    if ( *((_QWORD *)v8 + 2) )
      goto LABEL_6;
    WdLogSingleEntry1(3LL, a2);
    WdLogGlobalForLineNumber = 22994;
  }
  else
  {
    _InterlockedIncrement(&dword_1400817DC);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 22973;
    DxgkLogInternalTriageEvent(v9, 262145LL);
  }
  g_DxgMmsBugcheckExportIndex = 1;
  WdLogSingleEntry5(0LL, 270LL, 55LL, 0LL, 0LL, 0LL);
  WdLogGlobalForLineNumber = 195;
LABEL_6:
  v13 = (VIDMM_GLOBAL **)*((_QWORD *)this + 4993);
  if ( *v13 != (VIDMM_GLOBAL *)((char *)this + 39936) )
    __fastfail(3u);
  *(_QWORD *)v8 = (char *)this + 39936;
  *((_QWORD *)v8 + 1) = v13;
  *v13 = v8;
  *((_QWORD *)this + 4993) = v8;
}
