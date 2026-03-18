/*
 * XREFs of ?Clear@?$DoublyLinkedList@VDMMVIDPN@@U?$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAXXZ @ 0x14006004C
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x14008CF78 (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ??_G?$DoublyLinkedList@VDMMVIDPN@@U?$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@UEAAPEAXI@Z @ 0x14008D5F0 (--_G-$DoublyLinkedList@VDMMVIDPN@@U-$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@UEAAPEAXI@Z.c)
 *     ??_E?$Set@VDMMVIDPN@@@@UEAAPEAXI@Z @ 0x14008D770 (--_E-$Set@VDMMVIDPN@@@@UEAAPEAXI@Z.c)
 *     ?Clear@?$Queue@VDMMVIDPN@@@@UEAAXXZ @ 0x14008D9F0 (-Clear@-$Queue@VDMMVIDPN@@@@UEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?RemoveHead@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@@@@QEAAPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@XZ @ 0x140045CF8 (-RemoveHead@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@U-$DoubleLinkedLis.c)
 */

void __fastcall DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::Clear(__int64 a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rax

  v2 = (_QWORD *)(a1 + 16);
  while ( (_QWORD *)*v2 != v2 )
  {
    v3 = DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::RemoveHead(a1);
    ReferenceCounted::Release((ReferenceCounted *)(v3 + 3));
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 394;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"this->GetNumElements() == 0", 394LL, 0LL, 0LL, 0LL, 0LL);
  }
}
