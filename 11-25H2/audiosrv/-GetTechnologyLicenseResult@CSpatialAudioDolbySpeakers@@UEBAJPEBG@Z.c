/*
 * XREFs of ?GetTechnologyLicenseResult@CSpatialAudioDolbySpeakers@@UEBAJPEBG@Z @ 0x180139150
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSpeakersEncoderEnabled@AtmosCheck@@QEAAJPEBG@Z @ 0x180008F84 (-IsSpeakersEncoderEnabled@AtmosCheck@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall CSpatialAudioDolbySpeakers::GetTechnologyLicenseResult(
        CSpatialAudioDolbySpeakers *this,
        const unsigned __int16 *a2)
{
  __int64 result; // rax
  AtmosCheck *v3; // rcx

  result = 2147549183LL;
  if ( !byte_1801CE2BA )
    return 0LL;
  v3 = (AtmosCheck *)*((_QWORD *)this + 1);
  if ( v3 )
    return AtmosCheck::IsSpeakersEncoderEnabled(v3, a2);
  return result;
}
