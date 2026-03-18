/*
 * XREFs of ?GetNominalRefreshRate@CLegacyRenderTarget@@UEBA?AUDXGI_RATIONAL@@XZ @ 0x18022DE10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct DXGI_RATIONAL __fastcall CLegacyRenderTarget::GetNominalRefreshRate(CLegacyRenderTarget *this, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 5);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 24) + 240LL))(v2 + 24);
  else
    *a2 = 0x10000003CLL;
  return (struct DXGI_RATIONAL)a2;
}
