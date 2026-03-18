/*
 * XREFs of ?FreeVmMapping@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ @ 0x14010139C
 * Callers:
 *     ?FreeVmProcessFencePageInGlobalStorage@VIDMM_PROCESS@@QEAAXXZ @ 0x140097CD8 (-FreeVmProcessFencePageInGlobalStorage@VIDMM_PROCESS@@QEAAXXZ.c)
 *     ?FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@AEAAXXZ @ 0x140101304 (-FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@AEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400338D0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140033D04 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1401014AC (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
 */

void __fastcall VIDMM_FENCE_STORAGE_PAGE::FreeVmMapping(VIDMM_FENCE_STORAGE_PAGE *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  _QWORD *v5; // rax
  _BYTE v6[32]; // [rsp+50h] [rbp-28h] BYREF

  if ( *((_QWORD *)this + 19) )
  {
    if ( !*((_QWORD *)this + 4) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1622;
      DxgkLogInternalTriageEvent(v2, 262146LL);
    }
    VIDMM_PROCESS::UnmapHostAddressesFromGuest(
      *((VIDMM_PROCESS **)this + 4),
      *((void **)this + 19),
      *((_QWORD *)this + 18),
      0x1000uLL,
      0);
    if ( *((_BYTE *)this + 160) )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v6,
        (struct _KTHREAD **)(*((_QWORD *)this + 4) + 64LL));
      v3 = (_QWORD *)((char *)this + 16);
      v4 = *((_QWORD *)this + 2);
      if ( *(VIDMM_FENCE_STORAGE_PAGE **)(v4 + 8) != (VIDMM_FENCE_STORAGE_PAGE *)((char *)this + 16)
        || (v5 = (_QWORD *)*((_QWORD *)this + 3), (_QWORD *)*v5 != v3) )
      {
        __fastfail(3u);
      }
      *v5 = v4;
      *(_QWORD *)(v4 + 8) = v5;
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v6);
      *v3 = 0LL;
      *((_QWORD *)this + 3) = 0LL;
    }
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
  }
}
