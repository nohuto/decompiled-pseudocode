/*
 * XREFs of ?Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z @ 0x180209CC4
 * Callers:
 *     ??$AdjustRegionsForInitialSnapPosition@V?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXPEAUHWND__@@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAUIImmersiveMonitor@@@Z @ 0x18008D468 (--$AdjustRegionsForInitialSnapPosition@V-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@CS.c)
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x1800B5D74 (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 *     ?PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801ADD74 (-PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?Initialize@GuidedSnapAssistData@@AEAAXAEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@3@AEBUCRect@Geometry@@H@Z @ 0x1802BBE7C (-Initialize@GuidedSnapAssistData@@AEAAXAEBV-$vector@V-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V.c)
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803D1EB0 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803DC1E0 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?NotifyVisibleRectChanged@CSwitchItemGrid@@UEAAXAEBUtagRECT@@@Z @ 0x1804C8CD0 (-NotifyVisibleRectChanged@CSwitchItemGrid@@UEAAXAEBUtagRECT@@@Z.c)
 *     ?IsWindowValidForGroupInclusion@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA_NUWindowId@WindowManagement@ApplicationModel@567@AEBUTaskGroup@34567@@Z @ 0x1805881FC (-IsWindowValidForGroupInclusion@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Win.c)
 *     ??$AdjustRegionsForInitialSnapPosition@V?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXPEAUHWND__@@AEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@PEAUIImmersiveMonitor@@@Z @ 0x1805A4468 (--$AdjustRegionsForInitialSnapPosition@V-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@.c)
 *     ?DoesWindowOverlapPrimaryOrEmptyRegion@XamlSnapAssistViewHost@@AEAA_NPEAUHWND__@@@Z @ 0x1806A71B4 (-DoesWindowOverlapPrimaryOrEmptyRegion@XamlSnapAssistViewHost@@AEAA_NPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Geometry::CRect::Intersects(Geometry::CRect *this, const struct tagRECT *a2)
{
  LONG top; // r9d
  LONG bottom; // r10d
  LONG right; // eax
  LONG left; // r8d

  top = *((_DWORD *)this + 1);
  bottom = *((_DWORD *)this + 3);
  if ( top <= a2->top )
    top = a2->top;
  right = *((_DWORD *)this + 2);
  if ( bottom >= a2->bottom )
    bottom = a2->bottom;
  left = *(_DWORD *)this;
  if ( right >= a2->right )
    right = a2->right;
  if ( left <= a2->left )
    left = a2->left;
  return left < right && top < bottom;
}
