/*
 * XREFs of ?GetTechnologyLicenseResult@CSpatialAudioDolbyAtmosMAT@@UEBAJPEBG@Z @ 0x180139110
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMatEncoderEnabled@AtmosCheck@@QEAAJPEBG@Z @ 0x180008F1C (-IsMatEncoderEnabled@AtmosCheck@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall CSpatialAudioDolbyAtmosMAT::GetTechnologyLicenseResult(
        CSpatialAudioDolbyAtmosMAT *this,
        const unsigned __int16 *a2)
{
  __int64 result; // rax
  AtmosCheck *v3; // rcx

  result = 2147549183LL;
  if ( !byte_1801CE2BA )
    return 0LL;
  v3 = (AtmosCheck *)*((_QWORD *)this + 1);
  if ( v3 )
    return AtmosCheck::IsMatEncoderEnabled(v3, a2);
  return result;
}
