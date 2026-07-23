/*
 * XREFs of RtlGetElementGenericTableAvl @ 0x1404860C0
 * Callers:
 *     DifObjTrkQeuryInvokeDeleteRange @ 0x140616450 (DifObjTrkQeuryInvokeDeleteRange.c)
 *     DifObjTrkRemoveItem @ 0x140616780 (DifObjTrkRemoveItem.c)
 * Callees:
 *     RealSuccessor @ 0x1403D9D30 (RealSuccessor.c)
 *     RealPredecessor @ 0x1403D9F18 (RealPredecessor.c)
 */

PVOID __stdcall RtlGetElementGenericTableAvl(PRTL_AVL_TABLE Table, ULONG I)
{
  unsigned int WhichOrderedElement; // r9d
  ULONG v3; // r10d
  PRTL_AVL_TABLE v4; // r11
  unsigned int NumberGenericTableElements; // edx
  _QWORD *OrderedPointer; // rcx
  _QWORD *i; // rax
  int v9; // r9d
  _QWORD *k; // rax
  int v11; // r8d
  unsigned int v12; // edx
  int v13; // r8d
  _QWORD *j; // rax
  int v15; // r9d

  WhichOrderedElement = Table->WhichOrderedElement;
  v3 = I;
  v4 = Table;
  if ( I == -1 )
    return 0LL;
  NumberGenericTableElements = Table->NumberGenericTableElements;
  if ( v3 + 1 > NumberGenericTableElements )
    return 0LL;
  OrderedPointer = Table->OrderedPointer;
  if ( !OrderedPointer )
  {
    OrderedPointer = &v4->BalancedRoot.RightChild->Parent;
    for ( i = (_QWORD *)OrderedPointer[1]; i; i = (_QWORD *)i[1] )
      OrderedPointer = i;
    WhichOrderedElement = 0;
    v4->OrderedPointer = OrderedPointer;
    v4->WhichOrderedElement = 0;
  }
  if ( v3 != WhichOrderedElement )
  {
    if ( v3 >= WhichOrderedElement )
    {
      v12 = NumberGenericTableElements - v3;
      if ( v3 - WhichOrderedElement > v12 )
      {
        OrderedPointer = &v4->BalancedRoot.RightChild->Parent;
        for ( j = (_QWORD *)OrderedPointer[2]; j; j = (_QWORD *)j[2] )
          OrderedPointer = j;
        if ( v12 != 1 )
        {
          do
            OrderedPointer = RealPredecessor(OrderedPointer);
          while ( v15 != 1 );
        }
      }
      else if ( v3 != WhichOrderedElement )
      {
        do
          OrderedPointer = RealSuccessor(OrderedPointer);
        while ( v13 != 1 );
      }
    }
    else if ( v3 < WhichOrderedElement >> 1 )
    {
      OrderedPointer = &v4->BalancedRoot.RightChild->Parent;
      for ( k = (_QWORD *)OrderedPointer[1]; k; k = (_QWORD *)k[1] )
        OrderedPointer = k;
      if ( v3 )
      {
        do
          OrderedPointer = RealSuccessor(OrderedPointer);
        while ( v11 != 1 );
      }
    }
    else if ( WhichOrderedElement != v3 )
    {
      do
        OrderedPointer = RealPredecessor(OrderedPointer);
      while ( v9 != 1 );
    }
    v4->OrderedPointer = OrderedPointer;
    v4->WhichOrderedElement = v3;
  }
  return OrderedPointer + 4;
}
