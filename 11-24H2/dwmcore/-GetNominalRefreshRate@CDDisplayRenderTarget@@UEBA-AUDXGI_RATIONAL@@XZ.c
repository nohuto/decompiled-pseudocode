/*
 * XREFs of ?GetNominalRefreshRate@CDDisplayRenderTarget@@UEBA?AUDXGI_RATIONAL@@XZ @ 0x180219D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct DXGI_RATIONAL __fastcall CDDisplayRenderTarget::GetNominalRefreshRate(CDDisplayRenderTarget *this, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax

  v2 = *((_QWORD *)this + 6);
  if ( v2 && *(_DWORD *)(v2 + 128) && *(_DWORD *)(v2 + 132) )
    v3 = *(_QWORD *)(v2 + 128);
  else
    v3 = 0x10000003CLL;
  *a2 = v3;
  return (struct DXGI_RATIONAL)a2;
}
