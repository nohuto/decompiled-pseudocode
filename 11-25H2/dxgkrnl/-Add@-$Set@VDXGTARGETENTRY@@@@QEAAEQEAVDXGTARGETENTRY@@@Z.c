/*
 * XREFs of ?Add@?$Set@VDXGTARGETENTRY@@@@QEAAEQEAVDXGTARGETENTRY@@@Z @ 0x140050988
 * Callers:
 *     ?TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z @ 0x1401C2F68 (-TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z.c)
 *     ?AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1403BBB3C (-AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?FindByValue@?$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x140050A40 (-FindByValue@-$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x14005F3A0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 */

char __fastcall Set<DXGTARGETENTRY>::Add(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r11
  __int64 v6; // r11
  _QWORD *v7; // rdx
  _QWORD *v8; // rax

  if ( Set<DXGTARGETENTRY>::FindByValue() )
    return 0;
  if ( (unsigned __int8)DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
                          v4 + 8,
                          v3) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 108;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"bInsertTailStatus == TRUE", 108LL, 0LL, 0LL, 0LL, 0LL);
  }
  else
  {
    v7 = *(_QWORD **)(v6 + 32);
    v8 = (_QWORD *)(a2 + 8);
    if ( *v7 != v6 + 24 )
      __fastfail(3u);
    *v8 = v6 + 24;
    *(_QWORD *)(a2 + 16) = v7;
    *v7 = v8;
    *(_QWORD *)(v6 + 32) = v8;
    ++*(_QWORD *)(v6 + 40);
  }
  return 1;
}
