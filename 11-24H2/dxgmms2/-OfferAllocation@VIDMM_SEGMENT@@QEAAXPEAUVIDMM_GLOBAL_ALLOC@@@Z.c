/*
 * XREFs of ?OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140100B04
 * Callers:
 *     ?ProcessPendingOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400EB160 (-ProcessPendingOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140100B80 (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_SEGMENT::OfferAllocation(VIDMM_GLOBAL **this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  char *v2; // rax
  char **v3; // rcx
  char *v4; // rdx

  if ( *((_DWORD *)a2 + 78) == 1 )
  {
    if ( *(_WORD *)(*((_QWORD *)a2 + 49) + 8LL) == 2 )
    {
      *((_DWORD *)a2 + 7) |= 0x40u;
      VIDMM_GLOBAL::MarkGlobalAllocation(this[3], a2);
    }
  }
  else
  {
    if ( *((_DWORD *)a2 + 78) == 2 )
    {
      v2 = (char *)(this + 40);
    }
    else
    {
      if ( *((_DWORD *)a2 + 78) != 3 )
        return;
      v2 = (char *)(this + 42);
    }
    v3 = (char **)*((_QWORD *)v2 + 1);
    v4 = (char *)a2 + 280;
    if ( *v3 != v2 )
      __fastfail(3u);
    *(_QWORD *)v4 = v2;
    *((_QWORD *)v4 + 1) = v3;
    *v3 = v4;
    *((_QWORD *)v2 + 1) = v4;
  }
}
