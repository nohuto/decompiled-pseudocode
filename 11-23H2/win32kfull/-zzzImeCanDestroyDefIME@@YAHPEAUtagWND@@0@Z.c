/*
 * XREFs of ?zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z @ 0x1C00E352C
 * Callers:
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 *     ?xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C013C1C0 (-xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ?zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z @ 0x1C00A6958 (-zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z.c)
 *     ?ImeCheckTopmost@@YAXPEAUtagWND@@@Z @ 0x1C00A6CD8 (-ImeCheckTopmost@@YAXPEAUtagWND@@@Z.c)
 *     DwmAsyncOwnerChange @ 0x1C00AA8FC (DwmAsyncOwnerChange.c)
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C00E3684 (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 */

__int64 __fastcall zzzImeCanDestroyDefIME(struct tagWND *a1, struct tagWND *a2)
{
  ULONG64 *v4; // rax
  ULONG64 v5; // rdx
  struct tagWND **v7; // rsi
  struct tagWND *v8; // rax
  struct tagWND *i; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  void *v14; // rax

  v4 = (ULONG64 *)unsafe_cast_fnid_or_class_to_PIMEWND();
  if ( !v4 )
    return 0LL;
  v5 = *v4;
  if ( !*v4 || v5 == -1LL )
    return 0LL;
  if ( v5 >= MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  if ( (*(_DWORD *)(v5 + 44) & 4) != 0 )
    return 0LL;
  v7 = (struct tagWND **)((char *)a1 + 120);
  v8 = (struct tagWND *)*((_QWORD *)a1 + 15);
  if ( v8 )
  {
    while ( v8 != a2 )
    {
      if ( !v8 )
        return 0LL;
      v8 = (struct tagWND *)*((_QWORD *)v8 + 15);
    }
    if ( !v8 )
      return 0LL;
  }
  for ( i = a2; i; i = (struct tagWND *)*((_QWORD *)i + 15) )
  {
    v10 = *(_QWORD *)(*((_QWORD *)i + 17) + 8LL);
    if ( (*(_BYTE *)(v10 + 10) & 1) != 0 || *(_WORD *)v10 == *(_WORD *)(gpsi + 898LL) )
      return 0LL;
  }
  zzzImeSetFutureOwner(a1, a2);
  ImeCheckTopmost(a1);
  if ( *v7 && a2 != *v7 )
    return 0LL;
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 64LL) = 0LL;
  HMAssignmentUnlock((char *)a1 + 120);
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v13 = *(_QWORD *)a1;
    v14 = (void *)ReferenceDwmApiPort(v12, v11);
    DwmAsyncOwnerChange(v14, v13, 0LL);
  }
  return 1LL;
}
