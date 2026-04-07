/*
 * XREFs of ?InsertIntoVisualTree@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180044F48
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800482A0 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z @ 0x18010B6B0 (-ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18010CC54 (-ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?FindPrecedingVisibleWindowVisual@CWindowList@@AEAAPEAVCVisual@@PEAU_LIST_ENTRY@@@Z @ 0x180044E7C (-FindPrecedingVisibleWindowVisual@CWindowList@@AEAAPEAVCVisual@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CWindowList::InsertIntoVisualTree(CWindowList *this, struct _LIST_ENTRY *a2)
{
  PVOID v4; // rax
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *PrecedingVisibleWindowVisual; // rax
  VisualCollection *v7; // rsi
  int inserted; // eax
  unsigned int v9; // edi
  struct _LIST_ENTRY *v10; // rdx
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // [rsp+20h] [rbp-78h]
  int v15; // [rsp+20h] [rbp-78h]
  int v16; // [rsp+20h] [rbp-78h]
  _QWORD Buffer[2]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v18; // [rsp+40h] [rbp-58h]
  __int128 v19; // [rsp+50h] [rbp-48h]
  __int128 v20; // [rsp+60h] [rbp-38h]
  __int64 v21; // [rsp+70h] [rbp-28h]
  char v22; // [rsp+78h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  if ( (BYTE6(a2[42].Flink) & 0x10) != 0 )
  {
    Flink = a2[37].Blink[27].Blink[18].Flink;
    PrecedingVisibleWindowVisual = (struct _LIST_ENTRY *)*((_QWORD *)&Flink[3].Flink->Flink
                                                         + (unsigned int)(LODWORD(Flink[4].Blink) - 1));
  }
  else
  {
    Buffer[1] = 0LL;
    v21 = -1LL;
    v18 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    v22 = 0;
    Buffer[0] = a2[8].Blink;
    v4 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
    if ( v4 )
      Flink = (struct _LIST_ENTRY *)*((_QWORD *)v4 + 3);
    else
      Flink = 0LL;
    PrecedingVisibleWindowVisual = CWindowList::FindPrecedingVisibleWindowVisual(this, a2);
  }
  v7 = (VisualCollection *)&Flink[2];
  inserted = VisualCollection::InsertRelative(
               (VisualCollection *)&Flink[2],
               (unsigned __int64)a2[27].Blink,
               (struct CVisual *)PrecedingVisibleWindowVisual,
               1u,
               v14);
  v9 = inserted;
  if ( inserted < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB3F,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)inserted,
      v15);
    return v9;
  }
  else
  {
    v10 = a2[29].Flink;
    if ( v10
      && v10[1].Blink
      && (v12 = VisualCollection::InsertRelative(v7, (unsigned __int64)v10, (struct CVisual *)a2[27].Blink, 1u, v15),
          v13 = v12,
          v12 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB43,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v12,
        v16);
      return v13;
    }
    else
    {
      return 0LL;
    }
  }
}
