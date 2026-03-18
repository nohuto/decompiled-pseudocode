/*
 * XREFs of ?NotifyAtlasEntryInvalidated@CGradientBrush@@UEAAXXZ @ 0x1802A2AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyAtlasEntryInvalidated@CGradientSource@@MEAAXXZ @ 0x1802A2804 (-NotifyAtlasEntryInvalidated@CGradientSource@@MEAAXXZ.c)
 */

void __fastcall CGradientBrush::NotifyAtlasEntryInvalidated(CGradientBrush *this)
{
  CGradientSource::NotifyAtlasEntryInvalidated(this);
  (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this - 13) + 80LL))((char *)this - 104, 5LL);
}
