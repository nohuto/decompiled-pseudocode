/*
 * XREFs of memcpy_0 @ 0x180048BAC
 * Callers:
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x18000A450 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18001024C (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x1800106C0 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180015110 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?GetACE@CAccessAce@CDacl@ATL@@UEBAPEAXXZ @ 0x180016350 (-GetACE@CAccessAce@CDacl@ATL@@UEBAPEAXXZ.c)
 *     ?LoadPropertyStore@CAudioSessionPropertyStore@@AEAAJXZ @ 0x180016BF0 (-LoadPropertyStore@CAudioSessionPropertyStore@@AEAAJXZ.c)
 *     ?GrowBuffer@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@AEAA_N_K@Z @ 0x180017A70 (-GrowBuffer@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAcce.c)
 *     memcpy_s @ 0x180017BA0 (memcpy_s.c)
 *     ?Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z @ 0x1800191C0 (-Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z.c)
 *     memcpy_s_0 @ 0x180019718 (memcpy_s_0.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001B844 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x18001D180 (-memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z.c)
 *     ??$_Construct@$01PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x18002B87C (--$_Construct@$01PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x18002BAFC (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     ?SetNotificationData@@YAJAEBV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@PEAE_K@Z @ 0x18003E874 (-SetNotificationData@@YAJAEBV-$vector@PEAVCApplication@@V-$allocator@PEAVCApplication@@@std@@@st.c)
 *     ?TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z @ 0x1800405E4 (-TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z.c)
 *     _lambda_27a4ba88670a0d404d45da27056d59bf_::operator() @ 0x180041F78 (_lambda_27a4ba88670a0d404d45da27056d59bf_--operator().c)
 *     ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800429E4 (-Fork@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEBGHPEAUIAtlStringMgr@1@@Z @ 0x180044F40 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEBGHPEAUIAtlStringMgr@1@@Z.c)
 *     ?GetPackageFamilyName@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x180047A48 (-GetPackageFamilyName@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@.c)
 *     ?GetPackageRelativeApplicationId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x180047B18 (-GetPackageRelativeApplicationId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  return memcpy(a1, Src, Size);
}
