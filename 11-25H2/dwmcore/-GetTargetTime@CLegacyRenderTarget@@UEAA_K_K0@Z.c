/*
 * XREFs of ?GetTargetTime@CLegacyRenderTarget@@UEAA_K_K0@Z @ 0x18013FFE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CLegacyRenderTarget::GetTargetTime(
        CLegacyRenderTarget *this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  if ( *((_DWORD *)this + 8348) == 1 )
    return 0LL;
  else
    return CTargetStats::GetTargetTime((CLegacyRenderTarget *)((char *)this + 33352), a2, a3);
}
