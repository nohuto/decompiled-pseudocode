/*
 * XREFs of ?GetTechnologyLicenseResult@CSpatialAudioDtsxHeadphones@@UEBAJPEBG@Z @ 0x180141C70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDtsxHeadphonesEnabled@AtmosCheck@@QEAAJPEBG@Z @ 0x180151034 (-IsDtsxHeadphonesEnabled@AtmosCheck@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall CSpatialAudioDtsxHeadphones::GetTechnologyLicenseResult(
        CSpatialAudioDtsxHeadphones *this,
        const unsigned __int16 *a2)
{
  __int64 result; // rax
  AtmosCheck *v3; // rcx

  result = 2147549183LL;
  if ( !byte_1801DA2FA )
    return 0LL;
  v3 = (AtmosCheck *)*((_QWORD *)this + 1);
  if ( v3 )
    return AtmosCheck::IsDtsxHeadphonesEnabled(v3, a2);
  return result;
}
