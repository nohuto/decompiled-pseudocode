/*
 * XREFs of ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x1C021F054
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00ACC1C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     ?TraceChildWindowDpiTelemetry@@YAXPEAUtagWND@@0W4_CHILD_WINDOW_DPI_TELEMETRY@@@Z @ 0x1C000F68C (-TraceChildWindowDpiTelemetry@@YAXPEAUtagWND@@0W4_CHILD_WINDOW_DPI_TELEMETRY@@@Z.c)
 *     IsWindowBeingDestroyed @ 0x1C00AD46C (IsWindowBeingDestroyed.c)
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00AD580 (PopAndFreeW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     BuildHwndList @ 0x1C00B1DD0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00B26E0 (FreeHwndList.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C021F254 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 */

void __fastcall xxxForceUpdateProcessDpiAwarenessContext(struct tagWND *a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  int v6; // edx
  unsigned int *v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rbx
  struct tagBWL *v13; // r15
  _QWORD *i; // r14
  struct tagWND *v15; // rax
  __int128 v16; // [rsp+20h] [rbp-50h] BYREF
  __int64 v17; // [rsp+30h] [rbp-40h]
  __int128 v18; // [rsp+38h] [rbp-38h] BYREF
  __int64 v19; // [rsp+48h] [rbp-28h]
  __int128 v20; // [rsp+50h] [rbp-20h] BYREF
  __int64 v21; // [rsp+60h] [rbp-10h]

  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a1) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 424LL);
    v21 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    v18 = 0LL;
    ThreadLock(v4, &v20);
    TraceChildWindowDpiTelemetry((__int64)a1, *((_QWORD *)a1 + 13), 2);
    v6 = *(_DWORD *)(v5 + 1088);
    v7 = (unsigned int *)(v5 + 280);
    if ( !v6 )
      *(_DWORD *)(v5 + 1092) = *v7;
    *(_DWORD *)(v5 + 1096) = *v7;
    *(_DWORD *)(v5 + 1088) = v6 + 1;
    *v7 = a2;
    if ( (a2 & 0xF) == 1 )
      *(_WORD *)(v5 + 284) = (a2 >> 8) & 0x1FF;
    GreIncrementDisplaySettingsUniqueness();
    v8 = *(_QWORD **)(v5 + 664);
    if ( v8 )
    {
      PushW32ThreadLock(*(_QWORD *)(v5 + 664), &v18, UserDereferenceObject);
      ObfReferenceObject(v8);
    }
    xxxForceUpdateWindowTreeDpiAwarenessContext(a1, a2, 1);
    if ( v8 )
    {
      v12 = (_QWORD *)v8[2];
      while ( v12 )
      {
        v13 = BuildHwndList(*(ShellWindowManagement **)(v12[1] + 24LL), (const struct tagWND *)1, 0LL, 1LL);
        if ( v13 )
        {
          v17 = 0LL;
          v16 = 0LL;
          PushW32ThreadLock((__int64)v12, &v16, UserDereferenceObject);
          ObfReferenceObject(v12);
          for ( i = (_QWORD *)((char *)v13 + 32); *i != 1LL; ++i )
          {
            v15 = (struct tagWND *)HMValidateHandleNoSecure(*i, 1);
            if ( v15 )
            {
              if ( *(_QWORD *)(*((_QWORD *)v15 + 2) + 424LL) == v5 )
                xxxForceUpdateWindowTreeDpiAwarenessContext(v15, a2, 1);
            }
          }
          FreeHwndList(v13);
          v12 = (_QWORD *)v12[4];
          PopAndFreeW32ThreadLock((__int64)&v16);
        }
      }
      PopAndFreeW32ThreadLock((__int64)&v18);
    }
    ThreadUnlock1(v10, v9, v11);
  }
}
