/*
 * XREFs of ?zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z @ 0x140170BB0
 * Callers:
 *     ?xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1402B452C (-xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     DwmAsyncOwnerChange @ 0x14009188C (DwmAsyncOwnerChange.c)
 *     ?zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z @ 0x14009194C (-zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z.c)
 *     ?ImeCheckTopmost@@YAXPEAUtagWND@@@Z @ 0x140170D18 (-ImeCheckTopmost@@YAXPEAUtagWND@@@Z.c)
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x140282FC8 (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 */

__int64 __fastcall zzzImeCanDestroyDefIME(struct tagWND **a1, struct tagWND *a2)
{
  __int64 v4; // rdx
  ULONG64 v5; // rcx
  struct tagWND *v7; // rax
  struct tagWND *i; // r14
  __int16 *v9; // rbx
  __int16 v10; // bx
  struct tagWND *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  void *v15; // rax
  ULONG64 v16; // [rsp+70h] [rbp+18h]
  ULONG64 *v17; // [rsp+78h] [rbp+20h]

  v17 = (ULONG64 *)unsafe_cast_fnid_or_class_to_PIMEWND(a1);
  if ( !v17 )
    return 0LL;
  v16 = *v17;
  if ( !*v17 || v16 == -1LL )
    return 0LL;
  v5 = MmUserProbeAddress;
  if ( v16 < MmUserProbeAddress )
    v5 = *v17;
  if ( (*(_DWORD *)(v5 + 44) & 4) != 0 )
    return 0LL;
  v7 = a1[15];
  if ( v7 )
  {
    while ( v7 != a2 )
    {
      if ( !v7 )
        return 0LL;
      v7 = (struct tagWND *)*((_QWORD *)v7 + 15);
    }
    if ( !v7 )
      return 0LL;
  }
  for ( i = a2; i; i = (struct tagWND *)*((_QWORD *)i + 15) )
  {
    v9 = *(__int16 **)(*((_QWORD *)i + 17) + 8LL);
    if ( (v9[5] & 1) != 0 )
      return 0LL;
    v10 = *v9;
    v5 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19928);
    if ( v10 == *(_WORD *)(v5 + 898) )
      return 0LL;
  }
  zzzImeSetFutureOwner((struct tagWND *)a1, a2);
  ImeCheckTopmost((struct tagWND *)a1);
  v11 = a1[15];
  if ( v11 )
  {
    if ( a2 != v11 )
      return 0LL;
  }
  *((_QWORD *)a1[5] + 8) = 0LL;
  HMAssignmentUnlock(a1 + 15);
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v14 = (__int64)*a1;
    v15 = (void *)ReferenceDwmApiPort(v13, v12);
    DwmAsyncOwnerChange(v15, v14, 0LL);
  }
  return 1LL;
}
