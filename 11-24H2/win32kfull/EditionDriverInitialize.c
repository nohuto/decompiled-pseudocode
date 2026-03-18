/*
 * XREFs of EditionDriverInitialize @ 0x140238F20
 * Callers:
 *     <none>
 * Callees:
 *     FreeWin32kApiSetTable @ 0x1401F309C (FreeWin32kApiSetTable.c)
 *     CreateWin32kApiSetTable @ 0x140209610 (CreateWin32kApiSetTable.c)
 *     ?InitializeWinArrangeGlobal@@YAJXZ @ 0x140217504 (-InitializeWinArrangeGlobal@@YAJXZ.c)
 *     _anonymous_namespace_::InitializeTimerGlobals @ 0x140282374 (_anonymous_namespace_--InitializeTimerGlobals.c)
 *     ?Initialize@ForegroundLaunch@@YAJXZ @ 0x14028CBE0 (-Initialize@ForegroundLaunch@@YAJXZ.c)
 *     ?InitializeFeedbackData@@YAJXZ @ 0x1402A3C48 (-InitializeFeedbackData@@YAJXZ.c)
 *     ?Initialize@CursorApiRouter@@SAJXZ @ 0x1402DA570 (-Initialize@CursorApiRouter@@SAJXZ.c)
 *     ?Initialize@ShellForegroundBoost@@YAJXZ @ 0x1402DC78C (-Initialize@ShellForegroundBoost@@YAJXZ.c)
 *     CreatePerSessionWin32kCall @ 0x14033F560 (CreatePerSessionWin32kCall.c)
 *     wil_InitializeFeatureStaging @ 0x1403E93FC (wil_InitializeFeatureStaging.c)
 */

__int64 __fastcall EditionDriverInitialize(int a1, __int64 a2)
{
  int v3; // eax
  __int64 SessionState; // rax
  int Win32kApiSetTable; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 UserSessionState; // rbx
  __int64 KernelEvent; // rax
  ForegroundLaunch *v18; // rcx
  ShellForegroundBoost *v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx

  if ( a1 )
  {
    v3 = wil_InitializeFeatureStaging();
    if ( v3 < 0 )
      KeBugCheckEx(0x164u, 0x3EuLL, v3, 0LL, 0LL);
  }
  SessionState = W32GetSessionState(a1, a2);
  Win32kApiSetTable = CreateWin32kApiSetTable((__int64 *)(SessionState + 144));
  if ( Win32kApiSetTable < 0 )
  {
    if ( a1 )
      KeBugCheckEx(0x164u, 0x3EuLL, Win32kApiSetTable, 0LL, 0LL);
    v8 = W32GetSessionState(v7, v6);
    FreeWin32kApiSetTable((PVOID **)(v8 + 144));
    return 3221225473LL;
  }
  if ( a1 )
    W32PageEntireDriver(EditionDriverInitialize);
  *(_DWORD *)(W32GetUserSessionState(v7, v6) + 32) = 1;
  *(_QWORD *)(W32GetUserSessionState(v11, v10) + 57044) = 0x100000000LL;
  v13 = W32GetSessionState(0, v12);
  result = CreatePerSessionWin32kCall(v13 + 144);
  if ( (int)result < 0 )
  {
    if ( a1 )
      KeBugCheckEx(0x164u, 0x3EuLL, (int)result, 0LL, 0LL);
    return result;
  }
  result = anonymous_namespace_::InitializeTimerGlobals();
  if ( (int)result < 0 )
  {
    if ( a1 )
      KeBugCheckEx(0x164u, 0x3EuLL, (int)result, 0LL, 0LL);
    return result;
  }
  UserSessionState = W32GetUserSessionState(v15, v14);
  KernelEvent = CreateKernelEvent(1LL, 0LL);
  *(_QWORD *)(UserSessionState + 18768) = KernelEvent;
  if ( !KernelEvent )
  {
    if ( a1 )
      KeBugCheckEx(0x164u, 0x3EuLL, 0xFFFFFFFFC0000017uLL, 0LL, 0LL);
    return 3221225495LL;
  }
  *(_QWORD *)(UserSessionState + 18776) = 0LL;
  result = ForegroundLaunch::Initialize(v18);
  if ( (int)result >= 0 )
  {
    result = ShellForegroundBoost::Initialize(v19);
    if ( (int)result >= 0 )
    {
      result = CursorApiRouter::Initialize();
      if ( (int)result >= 0 )
      {
        result = InitializeFeedbackData();
        if ( (int)result >= 0 )
        {
          v20 = CreateKernelEvent(1LL, 0LL);
          *(_QWORD *)(W32GetUserSessionState(v22, v21) + 62984) = v20;
          if ( !*(_QWORD *)(W32GetUserSessionState(v24, v23) + 62984) )
          {
            if ( a1 )
              KeBugCheckEx(0x164u, 0x3EuLL, 0xFFFFFFFFC0000017uLL, 0LL, 0LL);
            return 3221225495LL;
          }
          result = InitializeWinArrangeGlobal(v26, v25);
          if ( (int)result < 0 && a1 )
            KeBugCheckEx(0x164u, 0x3EuLL, (int)result, 0LL, 0LL);
        }
        else if ( a1 )
        {
          KeBugCheckEx(0x164u, 0x3EuLL, (int)result, 0LL, 0LL);
        }
      }
      else if ( a1 )
      {
        KeBugCheckEx(0x164u, 0x3EuLL, (int)result, 0LL, 0LL);
      }
    }
    else if ( a1 )
    {
      KeBugCheckEx(0x164u, 0x3EuLL, (int)result, 0LL, 0LL);
    }
  }
  else if ( a1 )
  {
    KeBugCheckEx(0x164u, 0x3EuLL, (int)result, 0LL, 0LL);
  }
  return result;
}
