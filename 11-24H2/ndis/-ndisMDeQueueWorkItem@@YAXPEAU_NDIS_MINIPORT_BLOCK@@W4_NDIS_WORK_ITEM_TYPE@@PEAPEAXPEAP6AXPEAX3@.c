/*
 * XREFs of ?ndisMDeQueueWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAPEAXPEAP6AXPEAX3@Z@Z @ 0x14006B4D0
 * Callers:
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14017AC30 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140181E10 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisMDeQueueWorkItem(
        struct _NDIS_MINIPORT_BLOCK *a1,
        enum _NDIS_WORK_ITEM_TYPE a2,
        _SINGLE_LIST_ENTRY **a3,
        _SINGLE_LIST_ENTRY **a4)
{
  __int64 v4; // rbx
  _SINGLE_LIST_ENTRY *Next; // rax
  int v6; // edx
  int v7; // edx

  v4 = a2;
  Next = a1->WorkQueue[a2].Next;
  if ( Next )
  {
    a1->WorkQueue[a2] = (_SINGLE_LIST_ENTRY)Next->Next;
    if ( a3 )
      *a3 = Next[2].Next;
    if ( a4 )
      *a4 = Next[3].Next;
    v6 = a2 - 3;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 2 )
        {
          ExFreePoolWithTag(Next, 0);
        }
        else
        {
          Next->Next = (_SINGLE_LIST_ENTRY *)a1->SingleWorkItems[v4];
          a1->SingleWorkItems[v4].Next = Next;
        }
      }
      else
      {
        Next->Next = (_SINGLE_LIST_ENTRY *)a1->SingleWorkItems[3];
        a1->SingleWorkItems[3].Next = Next;
      }
    }
    else
    {
      LODWORD(Next[1].Next) = 4;
      Next->Next = (_SINGLE_LIST_ENTRY *)a1->WorkQueue[4];
      a1->WorkQueue[4].Next = Next;
    }
  }
}
