/*
 * XREFs of NtUserPostMessage @ 0x1C011EBC0
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0030E2C (IAMThreadAccessGranted.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C0034EAC (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ?GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C0035844 (-GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     ?IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z @ 0x1C003732C (-IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C011EE90 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ForwardTouchMessage @ 0x1C01AF9AC (ForwardTouchMessage.c)
 *     ValidateDDEConvPair @ 0x1C01FA7A0 (ValidateDDEConvPair.c)
 */

__int64 __fastcall NtUserPostMessage(unsigned __int64 a1, unsigned int a2, unsigned __int64 a3, volatile void *a4)
{
  __int64 v4; // rbx
  __int16 *v8; // rcx
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  BOOL v14; // ebp
  __int64 v15; // r14
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v17; // rbp
  struct tagQMSG *v18; // rax
  void *const *WindowMessageFilter; // rax
  int v21; // ecx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // [rsp+50h] [rbp-38h] BYREF

  v4 = a2;
  EnterCrit(0LL, 1LL);
  if ( (v4 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87);
    v9 = 0;
    goto LABEL_25;
  }
  if ( (unsigned int)v4 < 0x400 )
  {
    v8 = MessageTable;
    if ( _bittest16(&MessageTable[v4], 0xDu) )
    {
      v9 = 0;
      v21 = 5;
      goto LABEL_36;
    }
  }
  v9 = 0;
  if ( a1 >= 0x10000 && a1 != -1LL )
    goto LABEL_6;
  if ( !a1 )
  {
    v11 = 0LL;
    goto LABEL_7;
  }
  if ( a1 == 0xFFFF || a1 == -1LL )
  {
    v11 = -1LL;
  }
  else
  {
LABEL_6:
    v11 = ValidateHwnd(a1);
    if ( !v11 )
    {
      if ( (_DWORD)v4 == 993 )
        v9 = 1;
      goto LABEL_25;
    }
  }
LABEL_7:
  if ( (_DWORD)v4 == 576 )
  {
    if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v9 = ForwardTouchMessage(gptiCurrent, a4, 1, 0LL, 0, 0LL);
      goto LABEL_25;
    }
    v21 = 1400;
    goto LABEL_36;
  }
  if ( (((_DWORD)v4 - 281) & 0xFFFFFFFD) == 0
    || (unsigned int)(v4 - 577) <= 3
    || (unsigned int)(v4 - 581) <= 0x12 && (_DWORD)v4 != 589 )
  {
    v21 = 1002;
    goto LABEL_36;
  }
  v14 = 0;
  if ( (unsigned int)(v4 - 992) <= 8 )
    v14 = ValidateDDEConvPair(a3, v11) != 0;
  if ( (_DWORD)v4 == 274 && a3 == 61488 )
  {
    LOBYTE(v22) = IAMThreadAccessGranted(gptiCurrent);
    if ( v22 )
      v14 = 1;
  }
  if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL && !v14 )
  {
    v15 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 424LL);
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v8);
    v17 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
      v17 = 0LL;
    if ( (_QWORD *)v15 != v17 )
    {
      if ( (_DWORD)v4 == 717 )
        goto LABEL_25;
      if ( !(unsigned int)IsMessageAllowedByFilterEx(*(void *const **)(v15 + 872), v4, 0LL, 0LL) )
      {
        WindowMessageFilter = GetWindowMessageFilter((struct tagWND *)v11);
        if ( !(unsigned int)IsMessageAllowedByFilterEx(WindowMessageFilter, v4, 0LL, 0LL)
          && !(unsigned int)IsMessageAlwaysAllowedAcrossIL(v4)
          && ((_DWORD)v4 != 274 || ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || a3 == 61792) )
        {
          v24 = *(_QWORD *)v15 == gpepCSRSS ? 0x2000LL : *(_QWORD *)(v15 + 896);
          if ( !(unsigned __int8)CheckAccess(v17 + 112, &v24) )
          {
            if ( (_DWORD)v4 != 793
              || (v23 = *(_QWORD *)(v11 + 16), *(_QWORD *)(v23 + 1432) != v11)
              || *(_QWORD *)(v23 + 432) != *(_QWORD *)(gptiCurrent + 432LL) )
            {
              EtwTraceUIPIMsgError(v17, v15, (unsigned int)v4, a3, a4);
              v21 = 5;
LABEL_36:
              UserSetLastError(v21);
              goto LABEL_25;
            }
          }
        }
      }
    }
  }
  v18 = _PostTransformableMessageExtended((struct tagWND *)v11, v4, a3, (__int64)a4, 0LL, 1);
  v8 = (__int16 *)MmSystemRangeStart;
  if ( v18 >= MmSystemRangeStart )
  {
    if ( v18 )
      v9 = 1;
    LODWORD(v18) = v9;
  }
  v9 = (int)v18;
LABEL_25:
  UserSessionSwitchLeaveCrit(v8, v10, v12, v13);
  return v9;
}
