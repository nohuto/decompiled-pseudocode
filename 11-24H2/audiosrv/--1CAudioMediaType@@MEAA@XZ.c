/*
 * XREFs of ??1CAudioMediaType@@MEAA@XZ @ 0x1800A64EC
 * Callers:
 *     ??_ECAudioMediaType@@MEAAPEAXI@Z @ 0x1800A6520 (--_ECAudioMediaType@@MEAAPEAXI@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x1800A6574 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1800A6B80 (-Release@CAudioMediaType@@UEAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180021540 (--3@YAXPEAX@Z.c)
 */

void __fastcall CAudioMediaType::~CAudioMediaType(void **this)
{
  *this = &CAudioMediaType::`vftable';
  operator delete(this[2]);
  this[2] = 0LL;
}
