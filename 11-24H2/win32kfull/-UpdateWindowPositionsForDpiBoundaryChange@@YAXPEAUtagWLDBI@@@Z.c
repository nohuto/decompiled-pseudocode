/*
 * XREFs of ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x14008D624
 * Callers:
 *     zzzUpdateWindowsAfterModeChange @ 0x14008B5E8 (zzzUpdateWindowsAfterModeChange.c)
 *     UpdateMonitorForWindowAndChildren @ 0x14008BA78 (UpdateMonitorForWindowAndChildren.c)
 *     xxxInheritWindowMonitor @ 0x14008C114 (xxxInheritWindowMonitor.c)
 * Callees:
 *     OffsetChildren @ 0x140030CE0 (OffsetChildren.c)
 *     OffsetWindow @ 0x140030E80 (OffsetWindow.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x14004544C (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x14008D6FC (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x14008D804 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 */

void __fastcall UpdateWindowPositionsForDpiBoundaryChange(struct tagWLDBI *a1, __int64 a2)
{
  struct tagWLDBI *v2; // rbx
  const struct tagWND *v3; // rax
  tagWND *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned int v7; // esi
  unsigned int v8; // ebp
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 )
  {
    v2 = a1;
    do
    {
      LOBYTE(a2) = 1;
      v3 = (const struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)v2 + 1), a2);
      v4 = v3;
      if ( v3 && (*((_DWORD *)v2 + 6) || IsChildWindowDpiBoundary(v3)) )
      {
        v5 = *((_QWORD *)v4 + 13);
        v9 = *(_OWORD *)(*(_QWORD *)(v5 + 40) + 104LL);
        LogicalToPhysicalInPlaceRectWithSubpixel(v5, &v9, 0LL);
        PhysicalToLogicalInPlaceRectWithSubpixel(v4, &v9, 0LL);
        v6 = *((_QWORD *)v4 + 5);
        v7 = DWORD1(v9) + *((_DWORD *)v2 + 5) - *(_DWORD *)(v6 + 92);
        v8 = v9 + *((_DWORD *)v2 + 4) - *(_DWORD *)(v6 + 88);
        if ( v8 || v7 )
        {
          OffsetWindow(v4, v8, v7);
          OffsetChildren(v4, v8, v7, 0LL);
        }
      }
      v2 = *(struct tagWLDBI **)v2;
    }
    while ( v2 );
  }
}
