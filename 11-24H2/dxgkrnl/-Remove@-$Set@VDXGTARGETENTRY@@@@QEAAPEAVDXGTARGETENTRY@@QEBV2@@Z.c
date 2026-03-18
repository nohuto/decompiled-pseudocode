/*
 * XREFs of ?Remove@?$Set@VDXGTARGETENTRY@@@@QEAAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x14005FBF0
 * Callers:
 *     ?ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1401C742C (-ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z.c)
 *     ?TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z @ 0x1401C75BC (-TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z.c)
 *     ?Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ @ 0x1403AFF30 (-Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ.c)
 *     ?ReleaseTargetOwnershipNoDmm@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x140401130 (-ReleaseTargetOwnershipNoDmm@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z.c)
 * Callees:
 *     ?FindByValue@?$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x1400504B4 (-FindByValue@-$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x14005FC58 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 */

__int64 __fastcall Set<DXGTARGETENTRY>::Remove(__int64 a1)
{
  __int64 v1; // r11
  __int64 v2; // rbx
  char v3; // al
  __int64 v4; // r11
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rdx

  v2 = Set<DXGTARGETENTRY>::FindByValue(a1);
  v3 = DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
         v1 + 8,
         v2);
  v5 = 0LL;
  if ( v3 )
  {
    v6 = (_QWORD *)(v2 + 8);
    v7 = *(_QWORD *)(v2 + 8);
    if ( *(_QWORD *)(v7 + 8) != v2 + 8 || (v8 = *(_QWORD **)(v2 + 16), (_QWORD *)*v8 != v6) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    *v6 = 0LL;
    *(_QWORD *)(v2 + 16) = 0LL;
    v5 = v2;
    --*(_QWORD *)(v4 + 40);
  }
  return v5;
}
