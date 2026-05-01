/*
 * XREFs of ??1SecondaryViewInfo@JointResize@@QEAA@XZ @ 0x1802CD64C
 * Callers:
 *     ?CalculateSecondaryViews@JointResize@@AEAAJXZ @ 0x1800EB8DC (-CalculateSecondaryViews@JointResize@@AEAAJXZ.c)
 *     ??$_Destroy_range@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAXPEAUSecondaryViewInfo@JointResize@@QEAU12@AEAV?$allocator@USecondaryViewInfo@JointResize@@@0@@Z @ 0x18029F17C (--$_Destroy_range@V-$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAXPEAUSecondaryViewI.c)
 *     _JointResize::CalculateSecondaryViews_::_1_::dtor$16 @ 0x1806D1840 (_JointResize--CalculateSecondaryViews_--_1_--dtor$16.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall JointResize::SecondaryViewInfo::~SecondaryViewInfo(JointResize::SecondaryViewInfo *this)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((JointResize::SecondaryViewInfo *)((char *)this + 48));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this);
}
