/*
 * XREFs of ?GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x14005AB20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct tWAVEFORMATEX *__fastcall CAudioMediaType::GetAudioFormat(CAudioMediaType *this)
{
  return (const struct tWAVEFORMATEX *)*((_QWORD *)this + 2);
}
