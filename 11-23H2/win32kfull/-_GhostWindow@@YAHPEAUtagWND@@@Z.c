/*
 * XREFs of ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F3794
 * Callers:
 *     ?_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z @ 0x1C01F371C (-_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C0026C40 (InternalRemoveProp.c)
 *     IsNonImmersiveBand @ 0x1C00AD39C (IsNonImmersiveBand.c)
 *     PostShellHookMessagesEx @ 0x1C00B2C00 (PostShellHookMessagesEx.c)
 *     ?SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z @ 0x1C01F341C (-SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01F3508 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 */

_BOOL8 __fastcall _GhostWindow(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  BOOL v5; // edi
  __int64 v6; // rsi
  __int64 v7; // rdx
  struct _KTHREAD *v8; // rcx
  unsigned int ThreadProcessId; // eax
  struct _KTHREAD *v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  int v14; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+24h] [rbp-34h]
  unsigned int v16; // [rsp+2Ch] [rbp-2Ch]
  unsigned int ThreadId; // [rsp+30h] [rbp-28h]
  __int128 v18; // [rsp+34h] [rbp-24h]
  __int64 v19; // [rsp+68h] [rbp+10h] BYREF

  v5 = 0;
  if ( (unsigned int)SetGhostProp(a1, (HWND)0xFFFFFFFFFFFFFFFFLL, a3, a4) )
  {
    v6 = *((_QWORD *)a1 + 2);
    if ( IsNonImmersiveBand((__int64)a1) )
    {
      v8 = *(struct _KTHREAD **)v6;
      v18 = 0LL;
      v14 = 1;
      v15 = v7;
      ThreadProcessId = (unsigned int)PsGetThreadProcessId(v8);
      v10 = *(struct _KTHREAD **)v6;
      v16 = ThreadProcessId;
      ThreadId = (unsigned int)PsGetThreadId(v10);
      v5 = SendAsyncSGHOSTINFO((struct _GHOSTINFO *const)&v14, v11);
      if ( !v5 )
      {
        InternalRemoveProp((__int64)a1, *(unsigned __int16 *)(gpsi + 900LL), 1u);
        return v5;
      }
    }
    else
    {
      PostShellHookMessagesEx(0x33u, v7, 0LL);
      v5 = 1;
    }
    if ( *(int *)(v6 + 488) >= 0 )
    {
      v19 = 0LL;
      v12 = *(_QWORD **)(v6 + 424);
      LODWORD(v19) = 4;
      PsSetProcessFaultInformation(*v12, &v19);
      *(_DWORD *)(v6 + 488) |= 0x80000000;
    }
  }
  return v5;
}
