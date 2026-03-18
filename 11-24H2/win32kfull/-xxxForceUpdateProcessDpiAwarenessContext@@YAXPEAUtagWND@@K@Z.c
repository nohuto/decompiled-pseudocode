/*
 * XREFs of ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x1402524E0
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140088950 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14003E060 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x14003E6B0 (PopAndFreeW32ThreadLock.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     BuildHwndList @ 0x140047FC0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140048500 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     IsWindowBeingDestroyed @ 0x1400911AC (IsWindowBeingDestroyed.c)
 *     ?TraceChildWindowDpiTelemetry@@YAXPEAUtagWND@@0W4_CHILD_WINDOW_DPI_TELEMETRY@@@Z @ 0x1401F4C58 (-TraceChildWindowDpiTelemetry@@YAXPEAUtagWND@@0W4_CHILD_WINDOW_DPI_TELEMETRY@@@Z.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x14020890C (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 */

void __fastcall xxxForceUpdateProcessDpiAwarenessContext(struct tagWND *a1, unsigned int a2)
{
  __int64 v4; // rdi
  int v5; // edx
  unsigned int *v6; // rcx
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  _QWORD *v9; // rbx
  struct tagBWL *v10; // r14
  __int64 v11; // rdx
  __int64 *i; // rsi
  struct tagWND *v13; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+40h] [rbp-28h]
  _QWORD v17[3]; // [rsp+48h] [rbp-20h] BYREF

  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a1) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL);
    Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
    TraceChildWindowDpiTelemetry((__int64)a1, *((_QWORD *)a1 + 13), 2);
    v5 = *(_DWORD *)(v4 + 1064);
    v6 = (unsigned int *)(v4 + 268);
    if ( !v5 )
      *(_DWORD *)(v4 + 1068) = *v6;
    *(_DWORD *)(v4 + 1072) = *v6;
    *(_DWORD *)(v4 + 1064) = v5 + 1;
    *v6 = a2;
    if ( (a2 & 0xF) == 1 )
      *(_WORD *)(v4 + 272) = (a2 >> 8) & 0x1FF;
    GreIncrementDisplaySettingsUniqueness();
    v7 = *(_QWORD **)(v4 + 656);
    Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v15, v7);
    xxxForceUpdateWindowTreeDpiAwarenessContext(a1, a2, 1);
    if ( v7 )
      v9 = (_QWORD *)v7[2];
    else
      v9 = 0LL;
    while ( v9 )
    {
      v10 = BuildHwndList(*(struct tagWND **)(v9[1] + 24LL), 1LL, 0LL, 1);
      if ( v10 )
      {
        Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v17, v9);
        for ( i = (__int64 *)((char *)v10 + 32); *i != 1; ++i )
        {
          LOBYTE(v11) = 1;
          v13 = (struct tagWND *)HMValidateHandleNoSecure(*i, v11);
          if ( v13 && *(_QWORD *)(*((_QWORD *)v13 + 2) + 464LL) == v4 )
            xxxForceUpdateWindowTreeDpiAwarenessContext(v13, a2, 1);
        }
        FreeHwndList(v10, v11);
        v9 = (_QWORD *)v9[4];
        if ( v17[2] != -1LL )
          PopAndFreeW32ThreadLock((__int64)v17, v8);
      }
    }
    if ( v16 != -1 )
    {
      PopAndFreeW32ThreadLock((__int64)v15, v8);
      v16 = -1LL;
    }
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v8);
  }
}
