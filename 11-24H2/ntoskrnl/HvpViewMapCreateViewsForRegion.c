/*
 * XREFs of HvpViewMapCreateViewsForRegion @ 0x140967F8C
 * Callers:
 *     HvpViewMapExtendStorage @ 0x140968314 (HvpViewMapExtendStorage.c)
 *     HvpViewMapStart @ 0x14096B2F8 (HvpViewMapStart.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1403651C0 (RtlRbInsertNodeEx.c)
 *     CmSiGetMemoryAllocationGranularity @ 0x1404A375C (CmSiGetMemoryAllocationGranularity.c)
 *     HvpDetermineFinalViewReservationEnd @ 0x140967BE4 (HvpDetermineFinalViewReservationEnd.c)
 *     HvpViewMapCreateView @ 0x14096821C (HvpViewMapCreateView.c)
 *     HvpViewMapMakeViewRangeValid @ 0x140968810 (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapFreeView @ 0x140A40FA4 (HvpViewMapFreeView.c)
 */

__int64 __fastcall HvpViewMapCreateViewsForRegion(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  PRTL_BALANCED_NODE **v4; // rbx
  __int64 v7; // r14
  __int64 MemoryAllocationGranularity; // rax
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // r14
  int v12; // r13d
  int v13; // eax
  int ViewRangeValid; // edi
  PRTL_BALANCED_NODE *v15; // rax
  PRTL_BALANCED_NODE v16; // rcx
  _RTL_BALANCED_NODE *v17; // rax
  _RTL_BALANCED_NODE **v18; // rdi
  unsigned __int64 v19; // rdx
  BOOLEAN v20; // r8
  unsigned __int64 v21; // rax
  _RTL_BALANCED_NODE *v22; // rax
  PRTL_BALANCED_NODE v23; // rax
  _RTL_BALANCED_NODE *v25; // rcx
  PRTL_BALANCED_NODE Node; // [rsp+30h] [rbp-18h] BYREF
  PRTL_BALANCED_NODE *p_Node; // [rsp+38h] [rbp-10h]
  PRTL_BALANCED_NODE **v29; // [rsp+98h] [rbp+50h] BYREF
  __int64 v30; // [rsp+A0h] [rbp+58h]
  char v31; // [rsp+A8h] [rbp+60h]

  v31 = a4;
  v4 = 0LL;
  p_Node = &Node;
  v29 = 0LL;
  Node = (PRTL_BALANCED_NODE)&Node;
  v7 = a1;
  MemoryAllocationGranularity = CmSiGetMemoryAllocationGranularity();
  v30 = MemoryAllocationGranularity;
  v9 = 0x200000LL;
  while ( 1 )
  {
    if ( a2 >= a3 )
    {
      v16 = Node;
      v17 = Node->Children[0];
      if ( (PRTL_BALANCED_NODE *)Node->Children[1] == &Node && v17->Children[1] == Node )
      {
        Node = Node->Children[0];
        v17->Children[1] = (_RTL_BALANCED_NODE *)&Node;
        if ( v16 == (PRTL_BALANCED_NODE)&Node )
        {
LABEL_23:
          ViewRangeValid = 0;
          goto LABEL_24;
        }
        v18 = (_RTL_BALANCED_NODE **)(v7 + 40);
        v4 = 0LL;
        while ( 1 )
        {
          v19 = (unsigned __int64)*v18;
          if ( (*(_BYTE *)(v7 + 48) & 1) != 0 && v19 )
            v19 ^= (unsigned __int64)v18;
          v20 = 0;
          if ( v19 )
          {
            while ( 1 )
            {
              if ( (signed __int64)v16[1].ParentValue < *(_QWORD *)(v19 + 40) )
              {
                v21 = *(_QWORD *)v19;
                if ( (*(_BYTE *)(v7 + 48) & 1) != 0 )
                {
                  if ( !v21 )
                    goto LABEL_42;
                  v21 ^= v19;
                }
                if ( !v21 )
                {
LABEL_42:
                  v20 = 0;
                  break;
                }
              }
              else
              {
                v21 = *(_QWORD *)(v19 + 8);
                if ( (*(_BYTE *)(v7 + 48) & 1) != 0 )
                {
                  if ( !v21 )
                    goto LABEL_19;
                  v21 ^= v19;
                }
                if ( !v21 )
                {
LABEL_19:
                  v20 = 1;
                  break;
                }
              }
              v19 = v21;
            }
          }
          RtlRbInsertNodeEx((PRTL_RB_TREE)(v7 + 40), (PRTL_BALANCED_NODE)v19, v20, v16);
          v16 = Node;
          if ( (PRTL_BALANCED_NODE *)Node->Children[1] != &Node )
            break;
          v22 = Node->Children[0];
          if ( Node->Children[0]->Children[1] != Node )
            break;
          Node = Node->Children[0];
          v22->Children[1] = (_RTL_BALANCED_NODE *)&Node;
          if ( v16 == (PRTL_BALANCED_NODE)&Node )
            goto LABEL_23;
        }
      }
LABEL_8:
      __fastfail(3u);
    }
    v10 = a2 & -MemoryAllocationGranularity;
    if ( v9 <= a3 - v10 )
    {
      v11 = v9 + v10;
      v12 = v9 + v10;
    }
    else
    {
      v11 = HvpDetermineFinalViewReservationEnd(v7);
      v12 = a3;
    }
    v13 = HvpViewMapCreateView(a1, v10, v11, &v29);
    v4 = v29;
    ViewRangeValid = v13;
    if ( v13 < 0 )
      break;
    ViewRangeValid = HvpViewMapMakeViewRangeValid(a1, (_DWORD)v29, a2, v12, v31);
    if ( ViewRangeValid < 0 )
      goto LABEL_28;
    v15 = p_Node;
    if ( *p_Node != (PRTL_BALANCED_NODE)&Node )
      goto LABEL_8;
    v4[1] = p_Node;
    *v4 = &Node;
    a2 = v11;
    *v15 = (PRTL_BALANCED_NODE)v4;
    p_Node = (PRTL_BALANCED_NODE *)v4;
    v4 = 0LL;
    v29 = 0LL;
LABEL_37:
    MemoryAllocationGranularity = v30;
    v7 = a1;
  }
  if ( v9 > v30 )
  {
    v9 /= 2LL;
    goto LABEL_37;
  }
LABEL_28:
  v7 = a1;
LABEL_24:
  if ( v4 )
    HvpViewMapFreeView(v7, v4);
  v23 = Node;
  if ( Node != (PRTL_BALANCED_NODE)&Node )
  {
    v25 = Node->Children[0];
    if ( (PRTL_BALANCED_NODE *)Node->Children[1] == &Node )
    {
      while ( v25->Children[1] == v23 )
      {
        Node = v25;
        v25->Children[1] = (_RTL_BALANCED_NODE *)&Node;
        if ( v23 == (PRTL_BALANCED_NODE)&Node )
          return (unsigned int)ViewRangeValid;
        HvpViewMapFreeView(v7, v23);
        v23 = Node;
        if ( (PRTL_BALANCED_NODE *)Node->Children[1] != &Node )
          goto LABEL_8;
        v25 = Node->Children[0];
      }
    }
    goto LABEL_8;
  }
  return (unsigned int)ViewRangeValid;
}
