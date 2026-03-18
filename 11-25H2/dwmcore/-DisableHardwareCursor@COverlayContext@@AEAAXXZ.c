/*
 * XREFs of ?DisableHardwareCursor@COverlayContext@@AEAAXXZ @ 0x18020F5D0
 * Callers:
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x18020F4BC (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x18023CA68 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?DisableHardwareCursor@CCursorState@@QEAAXU_LUID@@I@Z @ 0x1802BC0DC (-DisableHardwareCursor@CCursorState@@QEAAXU_LUID@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall COverlayContext::DisableHardwareCursor(COverlayContext *this)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rbx
  unsigned int v5; // ebp
  struct _LUID *v6; // rax
  CCursorState *v7; // rcx
  CResource *v8; // rcx
  char v9; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 2451) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 280LL))(*(_QWORD *)this);
    v3 = v2;
    if ( v2 )
    {
      v4 = *((_QWORD *)this + 2451);
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 224LL))(v2);
      v6 = (struct _LUID *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v3 + 216LL))(v3, &v9);
      v7 = *(CCursorState **)(v4 + 696);
      if ( v7 )
        CCursorState::DisableHardwareCursor(v7, *v6, v5);
    }
    v8 = (CResource *)*((_QWORD *)this + 2451);
    *((_QWORD *)this + 2451) = 0LL;
    if ( v8 )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v8);
  }
}
