/*
 * XREFs of ?GetItemAt@?$ListPrincipalDetails@UVirtualTouchpadRect@@VBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@3@VBamoList_VirtualTouchpadRect_Stub@3456@$0A@$00$0A@@Bamo@Microsoft@@QEAAAEBUVirtualTouchpadRect@@I@Z @ 0x18013AF34
 * Callers:
 *     ?OnTouchpadRemoved@SystemContextManager@@QEAAX_K@Z @ 0x18013C230 (-OnTouchpadRemoved@SystemContextManager@@QEAAX_K@Z.c)
 *     ?OnTouchpadUpdated@SystemContextManager@@QEAAXAEBUVirtualTouchpadRect@@@Z @ 0x18013C304 (-OnTouchpadUpdated@SystemContextManager@@QEAAXAEBUVirtualTouchpadRect@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::Bamo::ListPrincipalDetails<VirtualTouchpadRect,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Stub,0,1,0>::GetItemAt(
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
  return Microsoft::Bamo::GetStructAt<VirtualTouchpadRect>(v5, (_QWORD *)(a1 + 56), a2);
}
