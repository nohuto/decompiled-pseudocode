/*
 * XREFs of ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x14002E5E8
 * Callers:
 *     ?xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x14002E024 (-xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU-$Win32HMOptionalThreadLockAlways@UtagWND@.c)
 * Callees:
 *     UnredirectDCEs @ 0x14002DEE0 (UnredirectDCEs.c)
 *     ?xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x14002E024 (-xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU-$Win32HMOptionalThreadLockAlways@UtagWND@.c)
 *     GetStyleWindow @ 0x14002F5E0 (GetStyleWindow.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14002F994 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     UnlinkWindow @ 0x140075240 (UnlinkWindow.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140118D30 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     xxxSetModernAppWindow @ 0x14024CD58 (xxxSetModernAppWindow.c)
 */

void __fastcall xxxFW_DestroyAllChildren(struct tagWND *a1)
{
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rcx
  struct tagTHREADINFO *v4; // rbp
  struct tagWND *v5; // rbx
  __int64 StyleWindow; // rax
  BOOL v7; // esi
  struct tagQ **v8; // rcx
  struct tagTHREADINFO *v9; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-18h] BYREF

  v2 = PtiCurrent();
  v3 = *((_QWORD *)a1 + 2);
  v4 = v2;
  if ( (*(_DWORD *)(v3 + 1360) & 0x40000) != 0 && *(struct tagWND **)(v3 + 1584) == a1 && *(_QWORD *)(v3 + 1592) )
    xxxSetModernAppWindow(a1);
  while ( 1 )
  {
    v5 = (struct tagWND *)*((_QWORD *)a1 + 14);
    if ( !v5 )
      break;
    Win32HM_LockIntoThread<0>(v4, *((_QWORD *)a1 + 14), BugCheckParameter3);
    if ( (*(_BYTE *)(*((_QWORD *)v5 + 5) + 31LL) & 0x10) != 0 )
      SetVisible(v5, 0LL);
    StyleWindow = GetStyleWindow(v5, 2848LL);
    v7 = StyleWindow && (struct tagWND *)StyleWindow != v5;
    UnlinkWindow(v5);
    if ( v7 )
      UnredirectDCEs((__int64)v5);
    SetOrClrWF(1LL, v5, 1152LL, 1LL);
    SetOrClrWF(1LL, v5, 896LL, 1LL);
    v8 = (struct tagQ **)*((_QWORD *)v5 + 2);
    if ( v8 == (struct tagQ **)v4 )
      xxxFreeWindow(v4, v5, (ULONG_PTR)BugCheckParameter3);
    else
      PostEventMessageEx((struct tagTHREADINFO *)v8, v8[59], 8u, 0LL, 0, *(_QWORD *)v5, 0LL, 0LL);
    if ( BugCheckParameter3[0] != -1LL )
    {
      v9 = PtiCurrent();
      Win32HM_UnlockFromThread<0>((ULONG_PTR)v9, (ULONG_PTR)BugCheckParameter3);
    }
  }
}
