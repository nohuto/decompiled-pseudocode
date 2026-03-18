/*
 * XREFs of ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C0066D30
 * Callers:
 *     NtUserCheckImeShowStatusInThread @ 0x1C0066C50 (NtUserCheckImeShowStatusInThread.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01B7B08 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     _PostMessage @ 0x1C00983E0 (_PostMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     BuildHwndList @ 0x1C00B1DD0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00B26E0 (FreeHwndList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall xxxCheckImeShowStatus(struct tagWND *a1, struct tagTHREADINFO *a2)
{
  struct tagTHREADINFO *v2; // rsi
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 *i; // r14
  __int64 v7; // rdi
  struct tagWND *v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct tagWND **v13; // r15
  bool v14; // zf
  __int64 v15; // r8
  __int64 v16; // rdx
  ULONG64 *v17; // rdi
  char v19; // si
  PRKPROCESS *v20; // rcx
  ULONG64 v21; // rdi
  ULONG64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // [rsp+48h] [rbp-50h]

  v2 = a2;
  v4 = 0;
  if ( *(char *)(*((_QWORD *)a1 + 5) + 20LL) < 0 )
    return 0LL;
  v5 = BuildHwndList(*(ShellWindowManagement **)(*((_QWORD *)a1 + 13) + 112LL));
  v25 = v5;
  if ( v5 )
  {
    for ( i = (__int64 *)(v5 + 32); ; ++i )
    {
      v7 = *i;
      if ( *i == 1 )
        break;
      v8 = 0LL;
      PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( (unsigned __int64)(unsigned __int16)v7 < *(_QWORD *)(gpsi + 8LL) )
      {
        v9 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v7;
        v13 = (struct tagWND **)HMPkheFromPhe(v9);
        LOWORD(v7) = WORD1(v7) & 0x7FFF;
        if ( ((WORD1(v7) & 0x7FFF) == *(_WORD *)(v9 + 26)
           || (_WORD)v7 == 0x7FFF
           || !(_WORD)v7 && PsGetCurrentProcessWow64Process(v11, v10, v12))
          && (*(_BYTE *)(v9 + 25) & 1) == 0 )
        {
          v14 = *(_BYTE *)(v9 + 24) == 1;
          v2 = a2;
          if ( v14 )
            v8 = *v13;
        }
        else
        {
          v2 = a2;
        }
      }
      if ( v8 && a1 != v8 )
      {
        if ( (*(_WORD *)(*((_QWORD *)v8 + 5) + 42LL) & 0x1000) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 880LL);
        v15 = *((_QWORD *)v8 + 5);
        if ( (*(_WORD *)(v15 + 42) & 0x1000) == 0 )
        {
          v16 = **(unsigned __int16 **)(*((_QWORD *)v8 + 17) + 8LL);
          if ( (_WORD)v16 == *(_WORD *)(gpsi + 898LL) )
          {
            v17 = *(_DWORD *)(v15 + 248) ? (ULONG64 *)*((_QWORD *)v8 + 35) : *(ULONG64 **)(v15 + 296);
            if ( v17 && *(char *)(v15 + 20) >= 0 && (!v2 || v2 == *((struct tagTHREADINFO **)v8 + 2)) )
            {
              v19 = 0;
              v20 = *(PRKPROCESS **)(*((_QWORD *)v8 + 2) + 424LL);
              if ( v20 != *(PRKPROCESS **)(gptiCurrent + 424LL) )
              {
                KeAttachProcess(*v20);
                v19 = 1;
              }
              v21 = *v17;
              if ( v21 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
              {
                if ( v19 )
                  KeDetachProcess();
                v2 = a2;
              }
              else
              {
                v22 = v21;
                if ( v21 >= MmUserProbeAddress )
                  v22 = MmUserProbeAddress;
                if ( (*(_DWORD *)(v22 + 44) & 1) != 0 )
                {
                  LOBYTE(v16) = 1;
                  v23 = HMValidateHandleNoSecure(*(_QWORD *)(v21 + 16), v16);
                  if ( v23 )
                    *(_DWORD *)(v21 + 44) &= ~1u;
                }
                else
                {
                  v23 = 0LL;
                }
                if ( v19 )
                  KeDetachProcess();
                if ( v23 )
                {
                  v24 = *(_QWORD *)(v23 + 16);
                  if ( v24 )
                  {
                    if ( (*(_DWORD *)(v24 + 488) & 1) == 0 )
                      PostMessage(v23, 642LL, 1LL, 0LL);
                  }
                }
                v2 = a2;
              }
            }
          }
        }
      }
    }
    FreeHwndList(v25);
    return 1;
  }
  return v4;
}
