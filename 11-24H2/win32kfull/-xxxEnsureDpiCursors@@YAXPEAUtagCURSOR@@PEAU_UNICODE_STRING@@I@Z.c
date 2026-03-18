/*
 * XREFs of ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1401333EC
 * Callers:
 *     ?xxxEnsureAllDpiCursors@@YAXXZ @ 0x140132C48 (-xxxEnsureAllDpiCursors@@YAXXZ.c)
 *     ?xxxEnsureDpiCursorsForSysCur@@YAXI@Z @ 0x140133350 (-xxxEnsureDpiCursorsForSysCur@@YAXI@Z.c)
 * Callees:
 *     ?W32AcquirePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140076B14 (-W32AcquirePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140076B48 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1400786A4 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     xxxClientCopyImage @ 0x14007ACF4 (xxxClientCopyImage.c)
 *     xxxClientLoadImage @ 0x1401338E8 (xxxClientLoadImage.c)
 *     ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1401341EC (-FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z.c)
 *     ?LinkDpiCursor@@YAXPEAUtagCURSOR@@0I@Z @ 0x140134208 (-LinkDpiCursor@@YAXPEAUtagCURSOR@@0I@Z.c)
 *     ?EnsureDpiCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@@Z @ 0x140134258 (-EnsureDpiCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@@Z.c)
 *     ?zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z @ 0x1401347D8 (-zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z.c)
 */

void __fastcall xxxEnsureDpiCursors(struct tagCURSOR *a1, struct _UNICODE_STRING *a2, int a3)
{
  struct tagCURSOR *v3; // rdi
  INT v4; // r15d
  int v5; // r12d
  __int64 v6; // rbp
  __int64 i; // r13
  __int64 v8; // rsi
  CPushLock *v9; // rbx
  unsigned int v10; // esi
  char v11; // r14
  INT v12; // ebx
  INT v13; // eax
  __int64 v14; // rax
  struct tagCURSOR *v15; // rbx
  unsigned int v16; // edx
  struct tagCURSOR *v17; // rcx
  __int64 v18; // rdx
  __int64 v21; // [rsp+98h] [rbp+20h]

  v3 = a1;
  if ( a2 || (*((_DWORD *)a1 + 20) & 8) == 0 )
  {
    if ( a1 )
    {
      if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
        a1 = (struct tagCURSOR *)**((_QWORD **)a1 + 12);
      v4 = *((_DWORD *)a1 + 35);
      v5 = *((_DWORD *)a1 + 36);
    }
    else
    {
      v5 = 0;
      v4 = 0;
    }
    v6 = 0LL;
    for ( i = 5LL; i; --i )
    {
      v8 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 36400);
      v9 = (CPushLock *)(v8 + 64);
      W32AcquirePushLockShared((struct W32_PUSH_LOCK *)(v8 + 64));
      if ( *(_DWORD *)(v8 + v6 + 24) )
      {
        v10 = *(_DWORD *)(v8 + v6 + 28);
        if ( v10 )
        {
          v11 = 1;
          goto LABEL_11;
        }
      }
      else
      {
        v10 = 0;
      }
      v11 = 0;
LABEL_11:
      CPushLock::ReleaseLock(v9);
      if ( v11 && !FindDPICursor(v3, v10) )
      {
        v21 = *((_QWORD *)v3 + 11);
        v12 = EngMulDiv(v4, (INT)a2, *((_DWORD *)v3 + 19));
        v13 = EngMulDiv(v5 / 2, v10, *((_DWORD *)v3 + 19));
        v14 = a2
            ? xxxClientLoadImage((_DWORD)a2, a3 | 0x40000u, 2, v12, v13, a3 | 0x40000u)
            : xxxClientCopyImage(*(_QWORD *)v3, 2, v12, v13, a3 | 0x40000u);
        v15 = (struct tagCURSOR *)v14;
        if ( v14 )
        {
          if ( *(_QWORD *)(v14 + 40)
            || *(_QWORD *)(v14 + 48) != v14
            || (*(_DWORD *)(v14 + 80) & 0x2000) != 0
            || FindDPICursor(v3, v10)
            || *((_QWORD *)v3 + 11) != v21
            || FindDPICursor(v17, v16) )
          {
            _DestroyCursor(v15, 0LL);
          }
          else
          {
            v18 = *((_QWORD *)v3 + 3);
            if ( v18 )
            {
              if ( (*((_DWORD *)v3 + 20) & 0x200) == 0 )
                HMChangeOwnerProcess(v15, *(_QWORD *)(v18 + 328));
            }
            LinkDpiCursor(v3, v15, v10);
            InputTraceLogging::Cursor::EnsureDpiCursor(v15);
            zzzFixupGlobalCursorWhenChanged(v3);
          }
        }
      }
      v6 += 8LL;
    }
  }
}
