/*
 * XREFs of ?GetTechnologyLicenseResult@CSpatialAudioDolbyHeadphones@@UEBAJPEBG@Z @ 0x180081280
 * Callers:
 *     <none>
 * Callees:
 *     ?IsHeadphonesEncoderEnabled@AtmosCheck@@QEAAJPEBG@Z @ 0x180008EB4 (-IsHeadphonesEncoderEnabled@AtmosCheck@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall CSpatialAudioDolbyHeadphones::GetTechnologyLicenseResult(
        CSpatialAudioDolbyHeadphones *this,
        const unsigned __int16 *a2)
{
  __int64 result; // rax
  AtmosCheck *v3; // rcx

  result = 2147549183LL;
  if ( !byte_1801CE2BA )
    return 0LL;
  v3 = (AtmosCheck *)*((_QWORD *)this + 1);
  if ( v3 )
    return AtmosCheck::IsHeadphonesEncoderEnabled(v3, a2);
  return result;
}
