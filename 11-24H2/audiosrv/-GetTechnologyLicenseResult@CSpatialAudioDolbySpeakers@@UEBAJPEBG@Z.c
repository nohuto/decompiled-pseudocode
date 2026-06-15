/*
 * XREFs of ?GetTechnologyLicenseResult@CSpatialAudioDolbySpeakers@@UEBAJPEBG@Z @ 0x180141BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSpeakersEncoderEnabled@AtmosCheck@@QEAAJPEBG@Z @ 0x180057350 (-IsSpeakersEncoderEnabled@AtmosCheck@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall CSpatialAudioDolbySpeakers::GetTechnologyLicenseResult(
        CSpatialAudioDolbySpeakers *this,
        const unsigned __int16 *a2)
{
  __int64 result; // rax
  AtmosCheck *v3; // rcx

  result = 2147549183LL;
  if ( !byte_1801DA2FA )
    return 0LL;
  v3 = (AtmosCheck *)*((_QWORD *)this + 1);
  if ( v3 )
    return AtmosCheck::IsSpeakersEncoderEnabled(v3, a2);
  return result;
}
