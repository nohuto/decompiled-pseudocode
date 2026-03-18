/*
 * XREFs of NtUserGetThreadState @ 0x1C0078F80
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _GetQueueStatus @ 0x1C01B2D18 (_GetQueueStatus.c)
 */

__int64 __fastcall NtUserGetThreadState(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rsi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  __int64 *v17; // rax
  int v18; // edi
  int v19; // edi
  int v20; // edi
  int v21; // edi
  int v22; // edi
  int v23; // edi
  HANDLE CurrentProcessId; // rax

  v3 = a1;
  if ( (_DWORD)a1 == 14 )
    return 1LL;
  v5 = EnterSharedCrit(a1, a2, a3);
  v10 = 0LL;
  v11 = v5;
  if ( v3 > 7 )
  {
    v18 = v3 - 8;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            v22 = v21 - 1;
            if ( v22 )
            {
              v23 = v22 - 1;
              if ( v23 )
              {
                v6 = 2LL;
                if ( v23 == 2 )
                  v10 = (*(_DWORD *)(v5 + 1272) >> 29) & 1;
              }
              else
              {
                CurrentProcessId = PsGetCurrentProcessId();
                v7 = gpidLogon;
                if ( CurrentProcessId == (HANDLE)gpidLogon || *(PVOID *)(v11 + 456) == grpdeskLogon )
                  v10 = 1LL;
              }
            }
            else
            {
              v10 = *(_QWORD *)(v5 + 800);
            }
          }
          else
          {
            v10 = *(unsigned int *)(*(_QWORD *)(v5 + 424) + 776LL);
          }
        }
        else
        {
          v7 = gpqForeground;
          LOBYTE(v10) = *(_QWORD *)(v5 + 432) == gpqForeground;
        }
      }
      else
      {
        v10 = *(int *)(v5 + 568);
      }
    }
    else
    {
      v7 = *(_QWORD *)(v5 + 512);
      if ( v7 )
      {
        if ( *(_QWORD *)(v7 + 32) )
        {
          v6 = 1LL;
        }
        else
        {
          v6 = 4LL;
          if ( (*(_DWORD *)(v7 + 84) & 0x300) == 0 )
            v6 = 2LL;
        }
        v10 = v6 | 8;
        if ( (*(_DWORD *)(v7 + 84) & 1) == 0 )
          v10 = v6;
      }
    }
    goto LABEL_46;
  }
  if ( v3 != 7 )
  {
    if ( v3 )
    {
      v12 = v3 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            v15 = v14 - 1;
            if ( v15 )
            {
              v16 = v15 - 1;
              if ( v16 )
              {
                if ( v16 == 1 )
                {
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 8608LL);
                  v10 = *(int *)(*(_QWORD *)(v11 + 448) + 4LL);
                }
              }
              else
              {
                LOBYTE(v10) = (GetQueueStatus(7295LL) & 5) != 0;
              }
              goto LABEL_46;
            }
            v17 = *(__int64 **)(v5 + 792);
          }
          else
          {
            v17 = *(__int64 **)(v5 + 784);
          }
          if ( v17 )
            v10 = *v17;
          goto LABEL_46;
        }
        v7 = *(_QWORD *)(*(_QWORD *)(v5 + 432) + 112LL);
      }
      else
      {
        v7 = *(_QWORD *)(*(_QWORD *)(v5 + 432) + 128LL);
      }
    }
    else
    {
      v7 = *(_QWORD *)(*(_QWORD *)(v5 + 432) + 120LL);
    }
    if ( v7 )
      v10 = *(_QWORD *)v7;
    goto LABEL_46;
  }
  v10 = *(_QWORD *)(*(_QWORD *)(v5 + 432) + 408LL);
LABEL_46:
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v10;
}
