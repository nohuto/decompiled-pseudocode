/*
 * XREFs of ?Release@String@Internal@Windows@@QEAAXXZ @ 0x1800A95C0
 * Callers:
 *     ??$_Partition_by_median_guess_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YA?AU?$pair@PEAVString@Internal@Windows@@PEAV123@@0@PEAVString@Internal@Windows@@0U?$less@X@0@@Z @ 0x1800A7D38 (--$_Partition_by_median_guess_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YA-AU-.c)
 *     ?CachePersistingStateName@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1800A8B64 (-CachePersistingStateName@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel.c)
 *     ?GetStringFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@W4GameProperty_t@ExecutionModel@@PEAVString@Internal@Windows@@@Z @ 0x1800A8DE4 (-GetStringFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@W4GameProperty_t@ExecutionModel@@PEAVS.c)
 *     ?IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z @ 0x1800A90D0 (-IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z.c)
 *     ?GetGlobalStringFromGameConfigStore@IsGameManager@@AEAAJW4GlobalProperty_t@ExecutionModel@@PEAVString@Internal@Windows@@@Z @ 0x1800A9774 (-GetGlobalStringFromGameConfigStore@IsGameManager@@AEAAJW4GlobalProperty_t@ExecutionModel@@PEAVS.c)
 *     ??$_Med3_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@00U?$less@X@0@@Z @ 0x1800A98F4 (--$_Med3_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal@Wind.c)
 *     ??$_Insertion_sort_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAPEAVString@Internal@Windows@@QEAV123@0U?$less@X@0@@Z @ 0x1800AA91C (--$_Insertion_sort_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAPEAVString@Inte.c)
 *     ??$_Pop_heap_hole_by_index@PEAVString@Internal@Windows@@V123@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@_J1$$QEAV123@U?$less@X@0@@Z @ 0x1803145C4 (--$_Pop_heap_hole_by_index@PEAVString@Internal@Windows@@V123@U-$less@X@std@@@std@@YAXPEAVString@.c)
 *     ??$_Pop_heap_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0U?$less@X@0@@Z @ 0x1803146E4 (--$_Pop_heap_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal@.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::String::Release(HSTRING *this)
{
  HSTRING v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    WindowsDeleteString(v2);
    *this = 0LL;
  }
}
