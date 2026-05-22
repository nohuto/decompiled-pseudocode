/*
 * XREFs of ?GetItemAt@?$ListPrincipalDetails@UDisplayOcclusionRect@@VBamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@3@VBamoList_DisplayOcclusionRect_Stub@3456@$0A@$00$0A@@Bamo@Microsoft@@QEAAAEBUDisplayOcclusionRect@@I@Z @ 0x18013D0D8
 * Callers:
 *     ?OnOcclusionRectRemoved@SystemContextManager@@QEAAXAEBUDockInputIdentity@@@Z @ 0x18013E0FC (-OnOcclusionRectRemoved@SystemContextManager@@QEAAXAEBUDockInputIdentity@@@Z.c)
 *     ?OnOcclusionRectUpdated@SystemContextManager@@QEAAXAEBUDockInputIdentity@@AEBUtagRECT@@@Z @ 0x18013E1DC (-OnOcclusionRectUpdated@SystemContextManager@@QEAAXAEBUDockInputIdentity@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::Bamo::ListPrincipalDetails<DisplayOcclusionRect,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Stub,0,1,0>::GetItemAt(
        __int64 a1,
        unsigned int a2)
{
  __int64 v2; // rax
  Microsoft::Bamo::BaseBamoConnection *v5; // rcx
  __int64 v6; // r8

  v2 = *(_QWORD *)(a1 + 32);
  v5 = 0LL;
  v6 = *(_QWORD *)(v2 + 32);
  if ( *(int *)(v6 + 8) > 0 )
    v5 = *(Microsoft::Bamo::BaseBamoConnection **)(v6 + 16);
  return Microsoft::Bamo::GetStructAt<DisplayOcclusionRect>(v5, (_QWORD *)(a1 + 56), a2);
}
