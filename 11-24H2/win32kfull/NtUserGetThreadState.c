/*
 * XREFs of NtUserGetThreadState @ 0x140296F50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     _GetQueueStatus @ 0x140065B90 (_GetQueueStatus.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserGetThreadState(int a1)
{
  __int64 TID; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // rsi
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  __int64 *v14; // rax
  __int64 v15; // rdx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  __int64 v22; // rax
  tagTHREADINFO *v23; // rcx
  int v24; // ecx
  HANDLE v25; // rbx
  __int64 v26; // rdx

  if ( a1 == 14 )
    return 1LL;
  TID = 0LL;
  v4 = EnterSharedCrit(0LL, 1LL);
  v7 = (_QWORD *)v4;
  if ( a1 <= 8 )
  {
    if ( a1 == 8 )
    {
      v6 = *(_QWORD *)(v4 + 552);
      if ( v6 )
      {
        if ( *(_QWORD *)(v6 + 32) )
        {
          v15 = 1LL;
        }
        else
        {
          v15 = 4LL;
          if ( (*(_DWORD *)(v6 + 84) & 0x300) == 0 )
            v15 = 2LL;
        }
        TID = v15 | 8;
        if ( (*(_DWORD *)(v6 + 84) & 1) == 0 )
          TID = v15;
      }
      goto LABEL_54;
    }
    if ( a1 )
    {
      v8 = a1 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            v11 = v10 - 1;
            if ( v11 )
            {
              v12 = v11 - 1;
              if ( v12 )
              {
                v13 = v12 - 1;
                if ( v13 )
                {
                  if ( v13 == 1 )
                    TID = *(_QWORD *)(*(_QWORD *)(v4 + 472) + 448LL);
                }
                else
                {
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 8764);
                  TID = *(int *)(v7[61] + 4LL);
                }
              }
              else
              {
                LOBYTE(TID) = (GetQueueStatus(7295LL, v5) & 5) != 0;
              }
              goto LABEL_54;
            }
            v14 = *(__int64 **)(v4 + 832);
          }
          else
          {
            v14 = *(__int64 **)(v4 + 824);
          }
          if ( v14 )
            TID = *v14;
          goto LABEL_54;
        }
        v6 = *(_QWORD *)(*(_QWORD *)(v4 + 472) + 112LL);
      }
      else
      {
        v6 = *(_QWORD *)(*(_QWORD *)(v4 + 472) + 128LL);
      }
    }
    else
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v4 + 472) + 120LL);
    }
    if ( v6 )
      TID = *(_QWORD *)v6;
    goto LABEL_54;
  }
  v16 = a1 - 9;
  if ( !v16 )
  {
    TID = *(int *)(v4 + 608);
    goto LABEL_54;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v6 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 18944);
    LOBYTE(TID) = v7[59] == v6;
    goto LABEL_54;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    TID = *(unsigned int *)(*(_QWORD *)(v4 + 464) + 768LL);
    goto LABEL_54;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    TID = *(_QWORD *)(v4 + 840);
    goto LABEL_54;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    v25 = *(HANDLE *)(W32GetUserSessionState(v6, v5) + 63584);
    if ( PsGetCurrentProcessId() == v25 || (v6 = *(_QWORD *)(W32GetUserSessionState(v6, v26) + 63016), v7[62] == v6) )
      TID = 1LL;
    goto LABEL_54;
  }
  v21 = v20 - 2;
  if ( !v21 )
  {
    TID = (*(_DWORD *)(v4 + 1360) >> 29) & 1;
    goto LABEL_54;
  }
  if ( v21 == 1 )
  {
    v22 = *(_QWORD *)(v4 + 552);
    if ( v22 )
    {
      v23 = *(tagTHREADINFO **)(v22 + 32);
      if ( v23 )
      {
        TID = tagTHREADINFO::GetTID(v23);
        goto LABEL_54;
      }
      v24 = 50;
    }
    else
    {
      v24 = 5023;
    }
    UserSetLastError(v24);
  }
LABEL_54:
  UserSessionSwitchLeaveCrit(v6);
  return TID;
}
