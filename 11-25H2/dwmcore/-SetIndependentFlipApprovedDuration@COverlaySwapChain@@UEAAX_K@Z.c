/*
 * XREFs of ?SetIndependentFlipApprovedDuration@COverlaySwapChain@@UEAAX_K@Z @ 0x1802CF870
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall COverlaySwapChain::SetIndependentFlipApprovedDuration(COverlaySwapChain *this, __int64 a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 19);
  if ( v2 != a2 )
  {
    if ( a2 )
    {
      if ( !v2 )
        (*(void (__fastcall **)(COverlaySwapChain *, _QWORD, _QWORD))(*(_QWORD *)this + 264LL))(this, 0LL, 0LL);
    }
    else
    {
      *(_BYTE *)(*((_QWORD *)g_pComposition + 77) + 749LL) = 1;
    }
    *((_QWORD *)this + 19) = a2;
  }
}
