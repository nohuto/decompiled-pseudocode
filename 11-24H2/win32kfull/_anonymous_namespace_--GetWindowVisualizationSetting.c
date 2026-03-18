/*
 * XREFs of _anonymous_namespace_::GetWindowVisualizationSetting @ 0x14018F1E8
 * Callers:
 *     _anonymous_namespace_::ContactVisualizationWorker @ 0x14018E770 (_anonymous_namespace_--ContactVisualizationWorker.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     FeedbackGetWindowSetting @ 0x1401C7590 (FeedbackGetWindowSetting.c)
 */

__int64 __fastcall anonymous_namespace_::GetWindowVisualizationSetting(__int64 a1, __int64 a2, int a3, int a4, int *a5)
{
  int *v5; // rdi
  __int64 v6; // r14
  BOOL v7; // ebp
  int v8; // eax
  unsigned int PointerVisualization; // ebx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 UserSessionState; // rax
  unsigned int Prop; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v25; // [rsp+58h] [rbp+10h] BYREF

  v25 = 0;
  v5 = a5;
  v6 = a1;
  v7 = a2 == 0;
  v24 = 0;
  *a5 = 0;
  v8 = *(_DWORD *)(a1 + 12);
  if ( (v8 & 0x10000) != 0 )
  {
    if ( a3 || a4 )
    {
      PointerVisualization = 1;
      v24 = 1;
    }
    else
    {
      PointerVisualization = a2 == 0;
      if ( !(_DWORD)a2 && *(_DWORD *)a1 == 2 )
      {
        a1 = *(_QWORD *)(a1 + 24);
        if ( a1 )
        {
          v18 = ValidateHwnd(a1);
          if ( v18 )
          {
            while ( 1 )
            {
              if ( !v18 )
              {
                PointerVisualization = v7;
                goto LABEL_19;
              }
              UserSessionState = W32GetUserSessionState(a1, a2);
              Prop = GetProp(v18, *(unsigned __int16 *)(UserSessionState + 41414), 1u);
              if ( (Prop & 0x20000) != 0 )
                break;
              if ( IsTopLevelWindow(v18) )
                v18 = 0LL;
              else
                v18 = *(_QWORD *)(v18 + 104);
            }
            PointerVisualization = (Prop >> 1) & 1;
            v25 = PointerVisualization;
          }
        }
      }
LABEL_19:
      if ( !PointerVisualization )
        goto LABEL_20;
    }
    if ( (unsigned int)(*(_DWORD *)v6 - 2) <= 1 )
    {
      a1 = *(_QWORD *)(v6 + 24);
      if ( a1 )
      {
        v22 = ValidateHwnd(a1);
        if ( v22 )
        {
          if ( (unsigned int)FeedbackGetWindowSetting(v22, 13LL, 1LL, &v25) && v25 )
          {
            PointerVisualization = 0;
            v24 = 0;
          }
        }
      }
    }
LABEL_20:
    v21 = W32GetUserSessionState(a1, a2);
    CTouchProcessor::SetPointerVisualization(
      *(CTouchProcessor **)(v21 + 3264),
      *(_WORD *)(v6 + 4),
      PointerVisualization,
      &v24,
      0);
    return PointerVisualization;
  }
  if ( (v8 & 0x40000) != 0 )
  {
    v14 = W32GetUserSessionState(a1, a2);
    PointerVisualization = CTouchProcessor::GetPointerVisualization(
                             *(CTouchProcessor **)(v14 + 3264),
                             *(_WORD *)(v6 + 4),
                             v5);
    v17 = W32GetUserSessionState(v16, v15);
    CTouchProcessor::SetPointerVisualization(*(CTouchProcessor **)(v17 + 3264), *(_WORD *)(v6 + 4), 1, 0LL, 0);
  }
  else
  {
    PointerVisualization = a2 == 0;
    if ( (v8 & 4) != 0 )
    {
      v10 = W32GetUserSessionState(a1, a2);
      PointerVisualization = CTouchProcessor::GetPointerVisualization(
                               *(CTouchProcessor **)(v10 + 3264),
                               *(_WORD *)(v6 + 4),
                               v5);
      if ( *v5 )
      {
        v23 = W32GetUserSessionState(v12, v11);
        CTouchProcessor::SetPointerVisualization(
          *(CTouchProcessor **)(v23 + 3264),
          *(_WORD *)(v6 + 4),
          PointerVisualization,
          0LL,
          0);
        if ( PointerVisualization )
          *v5 = 0;
      }
    }
  }
  return PointerVisualization;
}
