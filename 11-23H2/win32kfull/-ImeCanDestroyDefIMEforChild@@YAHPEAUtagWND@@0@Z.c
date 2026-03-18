/*
 * XREFs of ?ImeCanDestroyDefIMEforChild@@YAHPEAUtagWND@@0@Z @ 0x1C009244C
 * Callers:
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 *     ?xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C013C1C0 (-xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C00E3684 (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 *     _GetDesktopWindow @ 0x1C00EA360 (_GetDesktopWindow.c)
 *     ?IsChildSameThread@@YAHPEAUtagWND@@0@Z @ 0x1C01B705C (-IsChildSameThread@@YAHPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall ImeCanDestroyDefIMEforChild(struct tagWND *a1, struct tagWND *a2)
{
  ULONG64 *v4; // rax
  ULONG64 v5; // rdx
  struct tagWND *v7; // rax
  struct tagWND *v8; // rbx

  v4 = (ULONG64 *)unsafe_cast_fnid_or_class_to_PIMEWND();
  if ( !v4 )
    return 0LL;
  v5 = *v4;
  if ( !*v4 || v5 == -1LL )
    return 0LL;
  if ( v5 >= MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  if ( (*(_DWORD *)(v5 + 44) & 0x10) == 0 )
    return 0LL;
  v7 = (struct tagWND *)*((_QWORD *)a1 + 15);
  if ( v7 )
  {
    if ( v7 != a2 )
      return 0LL;
  }
  v8 = (struct tagWND *)*((_QWORD *)a2 + 13);
  if ( !v8 || *((_QWORD *)a2 + 2) == *((_QWORD *)v8 + 2) )
    return 0LL;
  do
  {
    if ( v8 == (struct tagWND *)GetDesktopWindow(v8, v5) )
      break;
    if ( (unsigned int)IsChildSameThread(v8, a2) )
      return 0LL;
    v8 = (struct tagWND *)*((_QWORD *)v8 + 13);
  }
  while ( v8 );
  return 1LL;
}
