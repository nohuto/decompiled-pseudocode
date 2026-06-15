/*
 * XREFs of ?GetTechnologyLicenseResult@CSpatialAudioDtsxStereo@@UEBAJPEBG@Z @ 0x180081240
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDtsxSpeakersEnabled@AtmosCheck@@QEAAJPEBG@Z @ 0x180008E4C (-IsDtsxSpeakersEnabled@AtmosCheck@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall CSpatialAudioDtsxStereo::GetTechnologyLicenseResult(
        CSpatialAudioDtsxStereo *this,
        const unsigned __int16 *a2)
{
  __int64 result; // rax
  AtmosCheck *v3; // rcx

  result = 2147549183LL;
  if ( !byte_1801CE2BA )
    return 0LL;
  v3 = (AtmosCheck *)*((_QWORD *)this + 1);
  if ( v3 )
    return AtmosCheck::IsDtsxSpeakersEnabled(v3, a2);
  return result;
}
