/*
 * XREFs of ?xxxNextWindow@@YAXPEAUtagQ@@K@Z @ 0x1402DB524
 * Callers:
 *     EditionHandleAndPostKeyEvent @ 0x1402481C0 (EditionHandleAndPostKeyEvent.c)
 * Callees:
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSetWindowPos @ 0x140076C44 (xxxSetWindowPos.c)
 *     GetNonChildAncestor @ 0x140091F0C (GetNonChildAncestor.c)
 *     ?_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z @ 0x1400F829C (-_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z.c)
 *     ?xxxSwitchToThisWindow@@YAXPEAUtagWND@@W4SwitchToThisWindowOptions@@@Z @ 0x140277614 (-xxxSwitchToThisWindow@@YAXPEAUtagWND@@W4SwitchToThisWindowOptions@@@Z.c)
 */

void __fastcall xxxNextWindow(struct tagQ *a1, __int64 a2)
{
  int v2; // esi
  struct tagTHREADINFO *v4; // r12
  unsigned int v5; // ebp
  __int64 v6; // rdi
  __int64 NonChildAncestor; // r14
  unsigned int v8; // r15d
  struct tagWND *NextQueueWindow; // rbx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-58h] BYREF
  ULONG_PTR v16[2]; // [rsp+60h] [rbp-48h] BYREF
  ULONG_PTR v17[2]; // [rsp+70h] [rbp-38h] BYREF
  __int64 v18; // [rsp+B0h] [rbp+8h] BYREF

  v2 = a2;
  v18 = 0LL;
  v4 = PtiCurrent((__int64)a1, a2);
  if ( a1 )
  {
    v5 = (unsigned __int16)_GetAsyncKeyState(16LL) >> 15;
    if ( (v2 == 9 || v2 == 27) && (*((_DWORD *)a1 + 109) & 0x4000000) == 0 )
    {
      v6 = *((_QWORD *)a1 + 16);
      if ( v6
        || (v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 496LL) + 8LL) + 24LL) + 112LL)) != 0 )
      {
        NonChildAncestor = GetNonChildAncestor(*((_QWORD *)a1 + 15));
        Win32HM_LockIntoThread<1>((__int64)v4, NonChildAncestor, (__int64 *)v17);
        Win32HM_LockIntoThread<0>((__int64)v4, v6, v16);
        v8 = 2;
        xxxSendTransformableMessageTimeout(
          (struct tagTHREADINFO **)v6,
          31LL,
          0LL,
          0LL,
          2u,
          0x64u,
          (unsigned __int64 *)&v18,
          1,
          0);
        NextQueueWindow = _GetNextQueueWindow((struct tagWND *)v6, v5, 1);
        Win32HM_LockIntoThread<1>((__int64)v4, (__int64)NextQueueWindow, (__int64 *)BugCheckParameter3);
        if ( NextQueueWindow != (struct tagWND *)v6 && NextQueueWindow )
        {
          if ( NonChildAncestor )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 31LL) & 0xC0) != 0x40 )
            {
              v11 = *(_QWORD *)(NonChildAncestor + 168);
              if ( v11 )
                *(_DWORD *)(*(_QWORD *)(v11 + 40) + 40LL) &= ~4u;
            }
          }
          if ( !v5 && (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 24LL) & 8) == 0 )
            xxxSetWindowPos((struct tagWND *)v6, 1LL, 0LL, 0LL, 0, 0, 25619);
          if ( (*(_BYTE *)(*((_QWORD *)NextQueueWindow + 5) + 31LL) & 0xC0) != 0x40 )
          {
            v12 = *((_QWORD *)NextQueueWindow + 21);
            if ( v12 )
              *(_DWORD *)(*(_QWORD *)(v12 + 40) + 40LL) |= 4u;
          }
          LastWokenThread::Set(*((_QWORD *)NextQueueWindow + 2), 1LL, 0LL);
          if ( v2 != 9 )
            v8 = 0;
          xxxSwitchToThisWindow((__int64)NextQueueWindow, v8);
          if ( v2 == 9 && (*(_BYTE *)(*((_QWORD *)NextQueueWindow + 5) + 31LL) & 0x40) != 0 )
            xxxSetWindowPos(NextQueueWindow, 0LL, 0LL, 0LL, 0, 0, 16387);
        }
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v10);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v16, v13);
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v17, v14);
      }
    }
  }
}
