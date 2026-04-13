/*
 * XREFs of _CreativeFramework::Actions::GetOptionalParameter_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______::_1_::dtor$1 @ 0x1800BB203
 * Callers:
 *     <none>
 * Callees:
 *     ??1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x18004C4F8 (--1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall CreativeFramework::Actions::GetOptionalParameter_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::~Tile(
      (CreativeFramework::TargetedContentLayoutHelpers::Tile *)(a2 + 80),
      a2);
  }
}
