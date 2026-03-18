/*
 * XREFs of ?IsValid@CDDASwapChain@@UEBAJXZ @ 0x1801FDC10
 * Callers:
 *     ?CheckOcclusionState@CDDARenderTarget@@UEAAJ_N@Z @ 0x1801FDBB0 (-CheckOcclusionState@CDDARenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDASwapChain::IsValid(CDDASwapChain *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 8);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  else
    return 2291662989LL;
}
