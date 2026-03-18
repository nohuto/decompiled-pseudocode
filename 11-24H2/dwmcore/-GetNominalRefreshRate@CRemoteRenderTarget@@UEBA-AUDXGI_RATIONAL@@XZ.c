/*
 * XREFs of ?GetNominalRefreshRate@CRemoteRenderTarget@@UEBA?AUDXGI_RATIONAL@@XZ @ 0x1802769A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct DXGI_RATIONAL __fastcall CRemoteRenderTarget::GetNominalRefreshRate(CRemoteRenderTarget *this, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 4);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 152LL))(v2);
  else
    *a2 = 0x10000003CLL;
  return (struct DXGI_RATIONAL)a2;
}
