/*
 * XREFs of ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1C00AE414
 * Callers:
 *     UpdateMonitorForWindowAndChildren @ 0x1C00A4B9C (UpdateMonitorForWindowAndChildren.c)
 *     xxxInheritWindowMonitor @ 0x1C00B04C0 (xxxInheritWindowMonitor.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00B1464 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00B14A8 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x1C00B48E0 (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     OffsetChildren @ 0x1C00B5A7C (OffsetChildren.c)
 *     OffsetWindow @ 0x1C00B5B70 (OffsetWindow.c)
 */

void __fastcall UpdateWindowPositionsForDpiBoundaryChange(struct tagWLDBI *a1, __int64 a2)
{
  struct tagWLDBI *v2; // rbx
  const struct tagWND *v3; // rax
  struct tagWND *v4; // rdi
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
          OffsetChildren(v4);
        }
      }
      v2 = *(struct tagWLDBI **)v2;
    }
    while ( v2 );
  }
}
