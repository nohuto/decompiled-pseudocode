/*
 * XREFs of ??1DisplayOcclusionContextProvider@@UEAA@XZ @ 0x18019A560
 * Callers:
 *     ??_EDisplayOcclusionContextProvider@@UEAAPEAXI@Z @ 0x18019A5E0 (--_EDisplayOcclusionContextProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ @ 0x1801086D0 (-_Tidy@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall DisplayOcclusionContextProvider::~DisplayOcclusionContextProvider(
        DisplayOcclusionContextProvider *this)
{
  std::vector<DisplayOcclusionRect>::_Tidy((__int64)this + 88);
  SystemContextProvider::~SystemContextProvider(this);
}
