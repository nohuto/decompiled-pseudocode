/*
 * XREFs of ??0?$ListPrincipal@USimpleHapticsControllerFeedback@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEAA@PEAVBamoConnection@1@@Z @ 0x18018BC08
 * Callers:
 *     ?UpdateBamoProperties@PenHapticDevice@@QEAAXXZ @ 0x18018E4FC (-UpdateBamoProperties@PenHapticDevice@@QEAAXXZ.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18000E01C (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 */

_QWORD *__fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<SimpleHapticsControllerFeedback>::ListPrincipal<SimpleHapticsControllerFeedback>(
        _QWORD *a1,
        struct Microsoft::Bamo::BaseBamoConnection *a2)
{
  *a1 = &Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Principal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  a1[1] = &Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Principal::`vftable'{for `Microsoft::Bamo::Lib::ISMBamos_AutoBamos::IList_SimpleHapticsControllerFeedback_Principal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((Microsoft::BamoImpl::BamoPrincipalImpl *)(a1 + 2), a2);
  a1[2] = &Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_PrincipalImpl::`vftable';
  a1[7] = 0LL;
  a1[8] = 0LL;
  a1[9] = 0LL;
  *a1 = &Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<SimpleHapticsControllerFeedback>::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  a1[1] = &Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Principal::`vftable'{for `Microsoft::Bamo::Lib::ISMBamos_AutoBamos::IList_SimpleHapticsControllerFeedback_Principal'};
  return a1;
}
