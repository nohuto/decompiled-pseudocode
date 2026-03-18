/*
 * XREFs of ?Clear@?$DoublyLinkedList@VDXGTARGETENTRY@@U?$DoubleLinkedListElementDeleter@VDXGTARGETENTRY@@@@@@QEAAXXZ @ 0x14004D0AC
 * Callers:
 *     ?Clear@?$Set@VDXGTARGETENTRY@@@@UEAAXXZ @ 0x14004D090 (-Clear@-$Set@VDXGTARGETENTRY@@@@UEAAXXZ.c)
 *     ??_E?$DoublyLinkedList@VDXGTARGETENTRY@@U?$DoubleLinkedListElementDeleter@VDXGTARGETENTRY@@@@@@UEAAPEAXI@Z @ 0x14006F380 (--_E-$DoublyLinkedList@VDXGTARGETENTRY@@U-$DoubleLinkedListElementDeleter@VDXGTARGETENTRY@@@@@@U.c)
 *     ??_E?$Set@VDXGTARGETENTRY@@@@UEAAPEAXI@Z @ 0x14006F3C0 (--_E-$Set@VDXGTARGETENTRY@@@@UEAAPEAXI@Z.c)
 *     ??1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ @ 0x1403BCBE4 (--1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

_QWORD *__fastcall DoublyLinkedList<DXGTARGETENTRY,DoubleLinkedListElementDeleter<DXGTARGETENTRY>>::Clear(__int64 a1)
{
  _QWORD **v2; // rbx
  _QWORD *result; // rax
  _QWORD *v4; // rcx

  v2 = (_QWORD **)(a1 + 16);
  while ( 1 )
  {
    result = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)result[1] != v2 || (v4 = (_QWORD *)*result, *(_QWORD **)(*result + 8LL) != result) )
      __fastfail(3u);
    *v2 = v4;
    v4[1] = v2;
    --*(_QWORD *)(a1 + 32);
    result[1] = 0LL;
    *result = 0LL;
    if ( result != (_QWORD *)8 )
      (*(void (__fastcall **)(_QWORD *, __int64))*(result - 1))(result - 1, 1LL);
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 394;
    return (_QWORD *)DxgkLogInternalTriageEvent(
                       0LL,
                       262146LL,
                       0xFFFFFFFFLL,
                       L"this->GetNumElements() == 0",
                       394LL,
                       0LL,
                       0LL,
                       0LL,
                       0LL);
  }
  return result;
}
