/*
 * XREFs of ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1400322B0
 * Callers:
 *     ?xxxUpdateThreadsWindows@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAUHRGN__@@@Z @ 0x140032130 (-xxxUpdateThreadsWindows@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxInternalInvalidate @ 0x1400428C0 (xxxInternalInvalidate.c)
 *     xxxMNInvertItem @ 0x14006BB74 (xxxMNInvertItem.c)
 *     xxxMNOpenHierarchy @ 0x14009BE5C (xxxMNOpenHierarchy.c)
 *     xxxPrintWindow @ 0x14023A30C (xxxPrintWindow.c)
 *     NtUserUpdateWindow @ 0x140247A60 (NtUserUpdateWindow.c)
 *     xxxDragObject @ 0x1402DF924 (xxxDragObject.c)
 * Callees:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1400322FC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 */

void __fastcall xxxInternalUpdateWindow(struct tagWND *a1, unsigned int a2)
{
  struct tagWND *v2; // r8
  __int64 v3; // rax

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 24LL) & 0x20) != 0 )
  {
    v2 = a1;
    while ( 1 )
    {
      v2 = (struct tagWND *)*((_QWORD *)v2 + 11);
      if ( !v2 )
        break;
      if ( *((_QWORD *)v2 + 2) == *((_QWORD *)a1 + 2) )
      {
        v3 = *((_QWORD *)v2 + 5);
        if ( *(_QWORD *)(v3 + 136) || (*(_BYTE *)(v3 + 17) & 0x10) != 0 )
          return;
      }
    }
  }
  xxxUpdateWindow2(a1, a2);
}
