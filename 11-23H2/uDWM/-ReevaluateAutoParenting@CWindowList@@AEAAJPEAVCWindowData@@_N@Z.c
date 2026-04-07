/*
 * XREFs of ?ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z @ 0x18010B6B0
 * Callers:
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800478B4 (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180049060 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x18010C78C (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 * Callees:
 *     ?GetWindowListForDesktopCanFail@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18001FE64 (-GetWindowListForDesktopCanFail@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?InsertIntoVisualTree@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180044F48 (-InsertIntoVisualTree@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ @ 0x18004FAD8 (-PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18010CC54 (-ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowList::ReevaluateAutoParenting(CWindowList *this, struct CWindowData *a2, char a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  struct _LIST_ENTRY *WindowListForDesktopCanFail; // rbp
  struct CWindowData *v10; // rbx
  CWindowList *v11; // rcx
  __int64 i; // rax
  __int64 v13; // rdx
  int inserted; // esi
  __int64 v15; // rdx
  __int64 v16; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(struct CWindowData **)a2 == a2 )
  {
    if ( (*((_BYTE *)a2 + 678) & 0x10) != 0 )
    {
      v6 = CWindowList::ToggleAutoParenting(this, a2);
      v7 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1FE8,
          (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
          (const char *)(unsigned int)v6);
        return v7;
      }
    }
    return 0LL;
  }
  WindowListForDesktopCanFail = CWindowList::GetWindowListForDesktopCanFail(this, *((_QWORD *)a2 + 17));
  v10 = a2;
  if ( !a3 )
    goto LABEL_35;
LABEL_6:
  v11 = (CWindowList *)*((_QWORD *)v10 + 3);
  if ( v11 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CWindowList *))(*(_QWORD *)v11 + 440LL))(v11) )
    {
      if ( CWindowData::PropertiesAllowAutoParenting(v10) )
      {
        if ( (*((_BYTE *)v10 + 677) & 0x10) == 0 && !*((_QWORD *)v10 + 58) && (*((_BYTE *)v10 + 676) & 2) == 0 )
        {
          v11 = (CWindowList *)*((_QWORD *)v10 + 75);
          if ( (*((_BYTE *)v11 + 672) & 1) != 0 && *((_QWORD *)v11 + 55) && (*((_BYTE *)v11 + 678) & 0x10) == 0 )
          {
            for ( i = *((_QWORD *)v10 + 1); (struct _LIST_ENTRY *)i != WindowListForDesktopCanFail; i = *(_QWORD *)(i + 8) )
            {
              if ( (CWindowList *)i == v11 )
                goto LABEL_29;
              if ( (*(_BYTE *)(i + 672) & 1) != 0 )
              {
                v13 = *(_QWORD *)(i + 440);
                if ( v13 )
                {
                  if ( *(_QWORD *)(v13 + 24) )
                  {
                    if ( *(CWindowList **)(i + 600) == v11 && (*(_BYTE *)(i + 678) & 0x10) != 0 )
                    {
LABEL_29:
                      LOBYTE(v11) = 1;
                      goto LABEL_23;
                    }
                    break;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  LOBYTE(v11) = 0;
LABEL_23:
  if ( (_BYTE)v11 == ((*((_BYTE *)v10 + 678) & 0x10) != 0) )
  {
    if ( a3 )
    {
      inserted = CWindowList::InsertIntoVisualTree(this, (struct _LIST_ENTRY *)v10);
      if ( inserted >= 0 )
        goto LABEL_32;
      v15 = 0x1FFFLL;
      goto LABEL_26;
    }
  }
  else
  {
    inserted = CWindowList::ToggleAutoParenting(v11, v10);
    if ( inserted < 0 )
    {
      v15 = 8184LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)inserted);
      return (unsigned int)inserted;
    }
LABEL_32:
    while ( 1 )
    {
      v10 = *(struct CWindowData **)v10;
      a3 = 0;
      if ( !v10 || v10 == (struct CWindowData *)WindowListForDesktopCanFail || v10 == a2 )
        break;
LABEL_35:
      if ( (*((_BYTE *)v10 + 672) & 1) != 0 )
      {
        v16 = *((_QWORD *)v10 + 55);
        if ( v16 )
        {
          if ( *(_QWORD *)(v16 + 24) )
            goto LABEL_6;
        }
      }
    }
  }
  return 0LL;
}
