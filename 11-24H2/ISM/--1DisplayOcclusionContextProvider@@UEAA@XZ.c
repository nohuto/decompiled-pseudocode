/*
 * XREFs of ??1DisplayOcclusionContextProvider@@UEAA@XZ @ 0x1801A1B50
 * Callers:
 *     ??_EDisplayOcclusionContextProvider@@UEAAPEAXI@Z @ 0x1801A1BD0 (--_EDisplayOcclusionContextProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ @ 0x18010A5E0 (-_Tidy@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall DisplayOcclusionContextProvider::~DisplayOcclusionContextProvider(
        DisplayOcclusionContextProvider *this)
{
  std::vector<DisplayOcclusionRect>::_Tidy((__int64)this + 88);
  SystemContextProvider::~SystemContextProvider(this);
}
