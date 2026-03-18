/*
 * XREFs of MagContextThreadCallout @ 0x1C01A2660
 * Callers:
 *     xxxSetThreadDesktop @ 0x1C002B6D4 (xxxSetThreadDesktop.c)
 *     MagContextDestroy @ 0x1C00A0370 (MagContextDestroy.c)
 *     MagControl @ 0x1C01A28A4 (MagControl.c)
 * Callees:
 *     MagpFindThreadContext @ 0x1C014DF9A (MagpFindThreadContext.c)
 *     ChangeComposableCursor @ 0x1C01A87C0 (ChangeComposableCursor.c)
 *     DwmAsyncMagnDestroy @ 0x1C026C04C (DwmAsyncMagnDestroy.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C026C0FC (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetDesktopTransform @ 0x1C026C368 (DwmAsyncMagnSetDesktopTransform.c)
 */

void __fastcall MagContextThreadCallout(_QWORD *a1, __int64 a2, _QWORD *a3, int a4)
{
  _QWORD *ThreadContext; // rdi
  _QWORD *v6; // r14
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  _QWORD *v9; // rcx
  __int64 *v10; // rbx
  __int64 v11; // rdx
  int v12; // eax
  void *v13; // rax
  __int64 v14; // rax
  void *v15; // rax
  __int64 v16; // rax
  void *v17; // rax
  void *v18; // rcx
  void *v19; // rcx
  __int64 v20; // rcx
  _QWORD *v21; // rax

  ThreadContext = a3;
  if ( (a3 || (ThreadContext = MagpFindThreadContext(a1, a2)) != 0LL) && a4 == 1 )
  {
    v6 = (_QWORD *)ThreadContext[5];
    while ( v6 != ThreadContext + 5 )
    {
      v7 = (_QWORD *)*v6;
      v8 = v6;
      v6 = v7;
      v9 = (_QWORD *)v8[1];
      if ( (_QWORD *)v7[1] != v8 || (_QWORD *)*v9 != v8 )
        goto LABEL_28;
      *v9 = v7;
      v10 = v8 + 3;
      v7[1] = v9;
      v11 = v8[3];
      if ( v11 == -1 )
      {
        v14 = *(_QWORD *)(ThreadContext[2] + 456LL);
        if ( *(_QWORD **)(v14 + 240) == v8 )
        {
          v15 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v14 + 8), -1LL);
          DwmAsyncMagnSetDesktopColorTransform(v15);
          *(_QWORD *)(*(_QWORD *)(ThreadContext[2] + 456LL) + 240LL) = 0LL;
        }
        v16 = *(_QWORD *)(ThreadContext[2] + 456LL);
        if ( *(_QWORD **)(v16 + 232) == v8 )
        {
          v17 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v16 + 8), v11);
          DwmAsyncMagnSetDesktopTransform(v17, 0);
          *(_QWORD *)(*(_QWORD *)(ThreadContext[2] + 456LL) + 232LL) = 0LL;
        }
      }
      else
      {
        v12 = *((_DWORD *)v8 + 4);
        if ( (v12 & 0x40) != 0 )
        {
          ChangeComposableCursor(0LL);
          *((_DWORD *)v8 + 4) &= ~0x40u;
          v12 = *((_DWORD *)v8 + 4);
          v11 = *v10;
        }
        if ( (v12 & 0x20) == 0 )
        {
          v13 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(ThreadContext[2] + 456LL) + 8LL), v11);
          DwmAsyncMagnDestroy(v13);
        }
        if ( *v10 )
          HMAssignmentUnlock(v8 + 3);
      }
      v18 = (void *)v8[29];
      if ( v18 )
        Win32FreePool(v18);
      v19 = (void *)v8[32];
      if ( v19 )
        Win32FreePool(v19);
      Win32FreePool(v8);
    }
    v20 = *ThreadContext;
    if ( *(_QWORD **)(*ThreadContext + 8LL) != ThreadContext
      || (v21 = (_QWORD *)ThreadContext[1], (_QWORD *)*v21 != ThreadContext) )
    {
LABEL_28:
      __fastfail(3u);
    }
    *v21 = v20;
    *(_QWORD *)(v20 + 8) = v21;
    Win32FreePool(ThreadContext);
    *(_DWORD *)(a2 + 1272) &= ~8u;
  }
}
