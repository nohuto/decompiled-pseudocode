/*
 * XREFs of NtUserSetParent @ 0x1C0086D80
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00ACC1C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     _GetDesktopWindow @ 0x1C00EA360 (_GetDesktopWindow.c)
 */

__int64 __fastcall NtUserSetParent(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  struct tagWND *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagWND *DesktopWindow; // rdi
  __int64 v15; // r8
  struct tagWND *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rax
  __int128 v22; // [rsp+20h] [rbp-38h] BYREF
  __int64 v23; // [rsp+30h] [rbp-28h]
  __int128 v24; // [rsp+38h] [rbp-20h] BYREF
  __int64 v25; // [rsp+48h] [rbp-10h]

  v24 = 0LL;
  v25 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v9 = 0LL;
  v10 = (struct tagWND *)v4;
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 40);
    v5 = (*(_WORD *)(v6 + 42) & 0x2FFFu) - 669;
    if ( (v5 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v22 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v22;
      *((_QWORD *)&v22 + 1) = v4;
      HMLockObject(v4);
      if ( a2 )
      {
        if ( a2 == -3 )
        {
          v21 = *((_QWORD *)v10 + 3);
          DesktopWindow = 0LL;
          if ( v21 )
            DesktopWindow = *(struct tagWND **)(v21 + 104);
        }
        else
        {
          DesktopWindow = (struct tagWND *)ValidateHwnd(a2);
          if ( !DesktopWindow )
          {
LABEL_11:
            ThreadUnlock1(v13, v12, v15);
            goto LABEL_12;
          }
        }
      }
      else
      {
        DesktopWindow = (struct tagWND *)GetDesktopWindow(v10, v11);
      }
      *(_QWORD *)&v24 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v24;
      *((_QWORD *)&v24 + 1) = DesktopWindow;
      if ( DesktopWindow )
        HMLockObject(DesktopWindow);
      v16 = xxxSetParentWorker(v10, DesktopWindow, 0LL, 0);
      if ( v16 )
        v9 = *(_QWORD *)v16;
      ThreadUnlock1(v18, v17, v19);
      goto LABEL_11;
    }
  }
LABEL_12:
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
