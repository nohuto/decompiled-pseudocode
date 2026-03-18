/*
 * XREFs of ?UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z @ 0x1400A38D0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     memmove @ 0x140056480 (memmove.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1400C39D4 (-VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAUVIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1400C3BF4 (-VidMmMapViewOfAllocation@@YAPEAXPEAUVIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1400E604C (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::UnlockAllocationRange(
        VIDMM_GLOBAL **this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        char a3)
{
  int v4; // r12d
  PRKPROCESS **v5; // r14
  _BYTE *v6; // rdi
  size_t *v7; // r15
  void *v8; // rax
  _QWORD *v9; // rsi
  char v10; // [rsp+50h] [rbp-A8h]
  const void **v11; // [rsp+58h] [rbp-A0h]
  void *v12[7]; // [rsp+60h] [rbp-98h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-60h] BYREF

  v10 = a3;
  v11 = (const void **)this;
  v12[2] = this;
  memset(&ApcState, 0, sizeof(ApcState));
  v4 = 0;
  v5 = (PRKPROCESS **)*((_QWORD *)a2 + 6);
  v12[3] = v5;
  v6 = *(_BYTE **)a2;
  v12[1] = *(void **)a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    WdLogGlobalForLineNumber = 1410;
    this = (VIDMM_GLOBAL **)v11;
    a3 = v10;
  }
  v12[4] = v6 + 168;
  if ( v6[168] )
  {
    if ( (**((_DWORD **)a2 + 47) & 8) == 0 && v5 )
    {
      KeStackAttachProcess(*v5[1], &ApcState);
      v4 = 1;
    }
    v12[0] = 0LL;
    v7 = (size_t *)(v6 + 160);
    v12[6] = v6 + 160;
    v12[5] = v6 + 152;
    v8 = VidMmMapViewOfAllocation((struct VIDMM_LOCAL_ALLOC *)v5, *((_QWORD *)v6 + 19), *((_QWORD *)v6 + 20), v12, 0);
    if ( v8 )
    {
      memmove(v8, v11[37], *v7);
      v9 = v6 + 152;
      VidMmUnmapViewOfAllocation((struct VIDMM_LOCAL_ALLOC *)v5, v12[0]);
    }
    else
    {
      memset((void *)v11[37], 0, *v7);
      *((_DWORD *)a2 + 6) |= 0x200000u;
      v9 = v6 + 152;
    }
    if ( v4 )
      KeUnstackDetachProcess(&ApcState);
  }
  else
  {
    v7 = (size_t *)(v6 + 160);
    v9 = v6 + 152;
    VIDMM_GLOBAL::UnlockAllocation(
      this[3],
      (struct VIDMM_LOCAL_ALLOC *)v5,
      *((_QWORD *)v6 + 19),
      *((_QWORD *)v6 + 20),
      1,
      a3);
  }
  *v9 = 0LL;
  *v7 = 0LL;
  v6[168] = 0;
  v6[169] = 0;
}
