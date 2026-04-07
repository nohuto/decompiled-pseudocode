/*
 * XREFs of ?FindPrecedingVisibleWindowVisual@CWindowList@@AEAAPEAVCVisual@@PEAU_LIST_ENTRY@@@Z @ 0x18002578C
 * Callers:
 *     ?InsertIntoVisualTree@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180025614 (-InsertIntoVisualTree@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall CWindowList::FindPrecedingVisibleWindowVisual(CWindowList *this, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *v2; // rbx
  struct _LIST_ENTRY *v4; // rax
  struct _LIST_ENTRY *v5; // rdx
  struct _LIST_ENTRY *i; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *Flink; // rcx
  _QWORD Buffer[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v11; // [rsp+30h] [rbp-58h]
  __int128 v12; // [rsp+40h] [rbp-48h]
  __int128 v13; // [rsp+50h] [rbp-38h]
  __int64 v14; // [rsp+60h] [rbp-28h]
  char v15; // [rsp+68h] [rbp-20h]
  __int128 v16; // [rsp+70h] [rbp-18h]

  v2 = 0LL;
  if ( a2->Flink != a2 )
  {
    Buffer[1] = 0LL;
    v14 = -1LL;
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    v16 = 0LL;
    v15 = 0;
    Buffer[0] = a2[8].Blink;
    v4 = (struct _LIST_ENTRY *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
    v5 = (struct _LIST_ENTRY *)&`CWindowList::GetWindowListForDesktop'::`5'::EmptyList;
    if ( v4 )
      v5 = v4 + 5;
    for ( i = a2->Blink; i != v5; i = i->Blink )
    {
      Blink = i[27].Blink;
      if ( Blink && Blink[1].Blink )
      {
        v2 = i[27].Blink;
        if ( (BYTE6(i[46].Flink) & 0x10) != 0 )
        {
          i = i[37].Blink;
          v2 = i[27].Blink;
        }
        Flink = i[29].Flink;
        if ( Flink && Flink[1].Blink )
          return i[29].Flink;
        return v2;
      }
    }
  }
  return v2;
}
