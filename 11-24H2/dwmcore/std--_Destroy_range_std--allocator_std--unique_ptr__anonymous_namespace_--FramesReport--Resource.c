/*
 * XREFs of std::_Destroy_range_std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______ @ 0x18025FD04
 * Callers:
 *     _anonymous_namespace_::FramesReport::_FramesReport @ 0x18025FE68 (_anonymous_namespace_--FramesReport--_FramesReport.c)
 * Callees:
 *     std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn___::_unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn___ @ 0x18025FE44 (std--unique_ptr__anonymous_namespace_--FramesReport--ResourcesForPsn_std--default_delete__anonym.c)
 */

__int64 __fastcall std::_Destroy_range_std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn_______(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = std::unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn___::_unique_ptr__anonymous_namespace_::FramesReport::ResourcesForPsn_std::default_delete__anonymous_namespace_::FramesReport::ResourcesForPsn___(v3);
      v3 += 8LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
