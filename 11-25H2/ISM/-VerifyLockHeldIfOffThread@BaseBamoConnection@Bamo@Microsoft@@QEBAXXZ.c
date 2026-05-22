/*
 * XREFs of ?VerifyLockHeldIfOffThread@BaseBamoConnection@Bamo@Microsoft@@QEBAXXZ @ 0x180023084
 * Callers:
 *     ?GetItemAt@?$ListPrincipalDetails@VBamoActivatableEntityPrincipal@@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@3@VBamoList_ActivatableEntityPrincipal_Stub@3456@$00$0A@$0A@@Bamo@Microsoft@@QEAAPEAVBamoActivatableEntityPrincipal@@I@Z @ 0x180023018 (-GetItemAt@-$ListPrincipalDetails@VBamoActivatableEntityPrincipal@@VBamoList_ActivatableEntityPr.c)
 *     ??$GetStructAt@UDisplayOcclusionRect@@@Bamo@Microsoft@@YAAEBUDisplayOcclusionRect@@PEAVBaseBamoConnection@01@AEAV?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@I@Z @ 0x1801379C0 (--$GetStructAt@UDisplayOcclusionRect@@@Bamo@Microsoft@@YAAEBUDisplayOcclusionRect@@PEAVBaseBamoC.c)
 *     ??$GetStructAt@UVirtualTouchpadRect@@@Bamo@Microsoft@@YAAEBUVirtualTouchpadRect@@PEAVBaseBamoConnection@01@AEAV?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@I@Z @ 0x180138CE4 (--$GetStructAt@UVirtualTouchpadRect@@@Bamo@Microsoft@@YAAEBUVirtualTouchpadRect@@PEAVBaseBamoCon.c)
 *     ?RemoveRIMDevice@HapticDeviceManager@@QEAAXPEAX@Z @ 0x180187988 (-RemoveRIMDevice@HapticDeviceManager@@QEAAXPEAX@Z.c)
 *     ?InjectTouchInput@InputInjectionClientProxy@@MEAAJPEAVBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x180195D80 (-InjectTouchInput@InputInjectionClientProxy@@MEAAJPEAVBamoList_TouchInjectionContact_Proxy@ISMBa.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Microsoft::Bamo::BaseBamoConnection::VerifyLockHeldIfOffThread(
        Microsoft::Bamo::BaseBamoConnection *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v1; // rax

  v1 = (Microsoft::BamoImpl::BaseBamoConnectionImpl *)(*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)this + 56LL))(this);
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(v1);
}
