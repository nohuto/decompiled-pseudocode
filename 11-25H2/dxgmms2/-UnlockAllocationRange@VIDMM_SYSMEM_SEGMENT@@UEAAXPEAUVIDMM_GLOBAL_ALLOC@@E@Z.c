/*
 * XREFs of ?UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z @ 0x1400E5E10
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

void __fastcall VIDMM_SYSMEM_SEGMENT::UnlockAllocationRange(
        VIDMM_SYSMEM_SEGMENT *this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        char a3)
{
  int v6; // r15d
  PRKPROCESS **v7; // r14
  __int64 v8; // rbx
  char *v9; // rax
  void *v10[4]; // [rsp+58h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-60h] BYREF

  v10[2] = this;
  memset(&ApcState, 0, sizeof(ApcState));
  v6 = 0;
  v7 = (PRKPROCESS **)*((_QWORD *)a2 + 6);
  v10[3] = v7;
  v8 = *(_QWORD *)a2;
  v10[1] = *(void **)a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    WdLogGlobalForLineNumber = 1030;
  }
  if ( (*((_DWORD *)a2 + 7) & 0x4000) == 0 )
  {
    if ( *(_BYTE *)(v8 + 168) )
    {
      if ( (**((_DWORD **)a2 + 47) & 8) == 0 && v7 )
      {
        KeStackAttachProcess(*v7[1], &ApcState);
        v6 = 1;
      }
      v10[0] = 0LL;
      v9 = VidMmMapViewOfAllocation(
             (struct VIDMM_LOCAL_ALLOC *)v7,
             *(struct VIDMM_LOCAL_ALLOC **)(v8 + 152),
             *(_QWORD *)(v8 + 160),
             v10,
             0);
      if ( v9 )
      {
        memmove(v9, *((const void **)this + 37), *(_QWORD *)(v8 + 160));
        VidMmUnmapViewOfAllocation((struct VIDMM_LOCAL_ALLOC *)v7, v10[0]);
      }
      else
      {
        memset(*((void **)this + 37), 0, *(_QWORD *)(v8 + 160));
        *((_DWORD *)a2 + 6) |= 0x200000u;
      }
      if ( v6 )
        KeUnstackDetachProcess(&ApcState);
    }
    else
    {
      VIDMM_GLOBAL::UnlockAllocation(
        *((VIDMM_GLOBAL **)this + 3),
        (struct VIDMM_LOCAL_ALLOC *)v7,
        *(_QWORD *)(v8 + 152),
        *(_QWORD *)(v8 + 160),
        1,
        a3);
    }
  }
  *(_QWORD *)(v8 + 160) = 0LL;
  *(_QWORD *)(v8 + 152) = 0LL;
  *(_WORD *)(v8 + 168) = 0;
}
