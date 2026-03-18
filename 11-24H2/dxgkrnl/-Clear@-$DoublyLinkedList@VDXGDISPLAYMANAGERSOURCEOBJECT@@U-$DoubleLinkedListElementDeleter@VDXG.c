/*
 * XREFs of ?Clear@?$DoublyLinkedList@VDXGDISPLAYMANAGERSOURCEOBJECT@@U?$DoubleLinkedListElementDeleter@VDXGDISPLAYMANAGERSOURCEOBJECT@@@@@@QEAAXXZ @ 0x14004DE08
 * Callers:
 *     ??_E?$DoublyLinkedList@VDXGDISPLAYMANAGERSOURCEOBJECT@@U?$DoubleLinkedListElementDeleter@VDXGDISPLAYMANAGERSOURCEOBJECT@@@@@@UEAAPEAXI@Z @ 0x14006F340 (--_E-$DoublyLinkedList@VDXGDISPLAYMANAGERSOURCEOBJECT@@U-$DoubleLinkedListElementDeleter@VDXGDIS.c)
 *     ?Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ @ 0x1403AFF30 (-Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ.c)
 *     ??1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ @ 0x1403BCBE4 (--1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??R?$DoubleLinkedListElementDeleter@VDXGDISPLAYMANAGERSOURCEOBJECT@@@@QEAAXPEAVDXGDISPLAYMANAGERSOURCEOBJECT@@@Z @ 0x14018A884 (--R-$DoubleLinkedListElementDeleter@VDXGDISPLAYMANAGERSOURCEOBJECT@@@@QEAAXPEAVDXGDISPLAYMANAGER.c)
 */

_QWORD *__fastcall DoublyLinkedList<DXGDISPLAYMANAGERSOURCEOBJECT,DoubleLinkedListElementDeleter<DXGDISPLAYMANAGERSOURCEOBJECT>>::Clear(
        __int64 a1)
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
    *result = 0LL;
    result[1] = 0LL;
    DoubleLinkedListElementDeleter<DXGDISPLAYMANAGERSOURCEOBJECT>::operator()();
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
