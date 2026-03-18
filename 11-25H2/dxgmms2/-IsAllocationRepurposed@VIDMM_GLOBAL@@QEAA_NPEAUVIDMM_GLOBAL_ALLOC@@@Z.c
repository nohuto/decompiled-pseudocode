/*
 * XREFs of ?IsAllocationRepurposed@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140108144
 * Callers:
 *     ?IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x140108070 (-IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1400341A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140034390 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     ?QueryLocalAllocationResidency@VIDMM_GLOBAL@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEBUVIDMM_LOCAL_ALLOC@@@Z @ 0x140105E4C (-QueryLocalAllocationResidency@VIDMM_GLOBAL@@QEAA-AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEBUVIDM.c)
 */

bool __fastcall VIDMM_GLOBAL::IsAllocationRepurposed(VIDMM_GLOBAL *this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  struct _KTHREAD **v2; // rdi
  bool v5; // si
  __int64 v7; // rbx
  PRKPROCESS *v8; // rcx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-58h] BYREF

  v2 = (struct _KTHREAD **)((char *)a2 + 136);
  v5 = 0;
  DXGFASTMUTEX::Acquire((struct VIDMM_GLOBAL_ALLOC *)((char *)a2 + 136));
  if ( *(_WORD *)(*((_QWORD *)a2 + 47) + 8LL) == 3 )
  {
    v7 = *((_QWORD *)a2 + 6);
    v8 = *(PRKPROCESS **)(v7 + 8);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*v8, &ApcState);
    LODWORD(v7) = VIDMM_GLOBAL::QueryLocalAllocationResidency(this, (const struct VIDMM_LOCAL_ALLOC *)v7);
    KeUnstackDetachProcess(&ApcState);
    v5 = (_DWORD)v7 == 3;
  }
  DXGFASTMUTEX::Release(v2);
  return v5;
}
