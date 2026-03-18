/*
 * XREFs of ??1MAPIDCOBJ@@QEAA@XZ @ 0x1400C3704
 * Callers:
 *     GreAlphaBlend @ 0x140010F88 (GreAlphaBlend.c)
 *     NtGdiMaskBlt @ 0x1400C3730 (NtGdiMaskBlt.c)
 *     NtGdiPlgBlt @ 0x140305D30 (NtGdiPlgBlt.c)
 * Callees:
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14001980C (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 */

void __fastcall MAPIDCOBJ::~MAPIDCOBJ(MAPIDCOBJ *this)
{
  OPTAPIDCOBJ::~OPTAPIDCOBJ((MAPIDCOBJ *)((char *)this + 112));
  APIDCOBJ::~APIDCOBJ(this);
}
