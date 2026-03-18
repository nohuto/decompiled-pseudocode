/*
 * XREFs of ?Clear@?$DoublyLinkedList@UCOMMITVIDPNREQUEST@VIDPN_MGR@@U?$DoubleLinkedListElementDeleter@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@@@QEAAXXZ @ 0x14006075C
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x14008CF78 (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ??_G?$DoublyLinkedList@UCOMMITVIDPNREQUEST@VIDPN_MGR@@U?$DoubleLinkedListElementDeleter@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@@@UEAAPEAXI@Z @ 0x14008D4F0 (--_G-$DoublyLinkedList@UCOMMITVIDPNREQUEST@VIDPN_MGR@@U-$DoubleLinkedListElementDeleter@UCOMMITV.c)
 *     ??_G?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@UEAAPEAXI@Z @ 0x14008D6D0 (--_G-$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@UEAAPEAXI@Z.c)
 *     ?Clear@?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@UEAAXXZ @ 0x14008D9B0 (-Clear@-$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@UEAAXXZ.c)
 * Callees:
 *     ?Release@NonReferenceCounted@@QEAA_KXZ @ 0x140012900 (-Release@NonReferenceCounted@@QEAA_KXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?RemoveHead@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@@@@QEAAPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@XZ @ 0x140045CF8 (-RemoveHead@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@U-$DoubleLinkedLis.c)
 */

void __fastcall DoublyLinkedList<VIDPN_MGR::COMMITVIDPNREQUEST,DoubleLinkedListElementDeleter<VIDPN_MGR::COMMITVIDPNREQUEST>>::Clear(
        __int64 a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rax

  v2 = (_QWORD *)(a1 + 16);
  while ( (_QWORD *)*v2 != v2 )
  {
    v3 = DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::RemoveHead(a1);
    NonReferenceCounted::Release((NonReferenceCounted *)(v3 + 3));
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 394;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"this->GetNumElements() == 0", 394LL, 0LL, 0LL, 0LL, 0LL);
  }
}
