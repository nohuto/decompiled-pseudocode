/*
 * XREFs of DoTimer @ 0x14023E9B0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 * Callees:
 *     SetWakeBit @ 0x1400456D0 (SetWakeBit.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z @ 0x14010F3F0 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x14010FA90 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z @ 0x140289958 (-DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z.c)
 *     Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline @ 0x1402899F0 (Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DoTimer(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v5; // rbp
  LARGE_INTEGER *v6; // rbx
  LARGE_INTEGER v7; // rax
  int v8; // eax
  DWORD HighPart; // eax
  LARGE_INTEGER *v11; // r10
  LARGE_INTEGER *QuadPart; // rdx
  unsigned int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  DWORD v17; // r8d
  __int64 v18; // rcx
  LONGLONG v19; // rdx
  LARGE_INTEGER v20; // rax
  LARGE_INTEGER **v21; // rcx
  LARGE_INTEGER v23; // rcx
  LARGE_INTEGER *v24; // rbx
  LARGE_INTEGER *v25; // rax
  __int64 v26; // rax
  LARGE_INTEGER **v27; // rcx

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    v5 = *CurrentThreadWin32Thread;
  else
    v5 = 0LL;
  v6 = *(LARGE_INTEGER **)(v5 + 1344);
  if ( v6 == (LARGE_INTEGER *)(v5 + 1344) )
    return 0LL;
  while ( (v6[-1].LowPart & 0x1000) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1327LL);
LABEL_17:
    v6 = (LARGE_INTEGER *)v6->QuadPart;
    if ( v6 == (LARGE_INTEGER *)(v5 + 1344) )
      return 0LL;
  }
  v7 = v6[6];
  if ( a1 && a1 != v7.QuadPart && (a1 != 1 || v7.QuadPart) )
  {
    if ( v7.QuadPart )
    {
      while ( (*(_BYTE *)(*(_QWORD *)(v7.QuadPart + 40) + 31LL) & 0xC0) == 0x40 )
      {
        v7 = *(LARGE_INTEGER *)(v7.QuadPart + 104);
        if ( a1 == v7.QuadPart )
        {
          v8 = 1;
          goto LABEL_16;
        }
        if ( !v7.QuadPart )
          break;
      }
    }
    v8 = 0;
LABEL_16:
    if ( !v8 )
      goto LABEL_17;
  }
  HighPart = v6[10].HighPart;
  if ( v6[10].LowPart == HighPart )
    v6[10].LowPart = HighPart;
  v11 = (LARGE_INTEGER *)AllocQEntryEx(v5 + 848, 0LL, 1);
  if ( v11 )
  {
    QuadPart = (LARGE_INTEGER *)v6[6].QuadPart;
    if ( QuadPart )
    {
      v13 = *(_DWORD *)(QuadPart[5].QuadPart + 288);
    }
    else
    {
      v14 = *(_QWORD *)(v5 + 472);
      v15 = *(_QWORD *)(v14 + 128);
      if ( v15 )
        v16 = *(_QWORD *)(v15 + 16);
      else
        v16 = *(_QWORD *)(v14 + 104);
      v13 = *(_DWORD *)(*(_QWORD *)(v16 + 464) + 268LL);
    }
    v17 = 280;
    if ( (v6[-1].LowPart & 2) == 0 || (v18 = 280LL, !v6[-3].QuadPart) )
      v18 = v6[-3].QuadPart;
    if ( (v6[-1].LowPart & 2) == 0 )
      v17 = 275;
    StoreQMessage(v11, QuadPart, v17, v6[7], v18, 0, 0LL, 0, 0LL, 0, 0LL, v13, 0LL, 0LL);
    SetWakeBit(v5, 264LL);
  }
  if ( (unsigned int)Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline() )
  {
    DecTimerCountAndClearReadyFlag((struct tagTIMER *)&v6[-7]);
    goto LABEL_41;
  }
  v6[-1].LowPart &= ~1u;
  v19 = v6->QuadPart;
  v20 = v6[-4];
  if ( *(LARGE_INTEGER **)(v6->QuadPart + 8) != v6 )
    goto LABEL_45;
  v21 = (LARGE_INTEGER **)v6[1].QuadPart;
  if ( *v21 != v6 )
    goto LABEL_45;
  *v21 = (LARGE_INTEGER *)v19;
  *(_QWORD *)(v19 + 8) = v21;
  if ( (*(_DWORD *)(v20.QuadPart + 644))-- == 1 )
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v20.QuadPart + 488) + 8LL), 0xFFFFFFEF);
LABEL_41:
  v23 = v6[2];
  v24 = v6 + 2;
  if ( *(LARGE_INTEGER **)(v23.QuadPart + 8) != v24
    || (v25 = (LARGE_INTEGER *)v24[1].QuadPart, (LARGE_INTEGER *)v25->QuadPart != v24)
    || (*v25 = v23,
        *(_QWORD *)(v23.QuadPart + 8) = v25,
        v26 = ((__int64 (__fastcall *)(_QWORD, _QWORD))W32GetUserSessionState)((LARGE_INTEGER)v23.QuadPart, v19) + 57584,
        v27 = *(LARGE_INTEGER ***)(v26 + 8),
        *v27 != (LARGE_INTEGER *)v26) )
  {
LABEL_45:
    __fastfail(3u);
  }
  v24->QuadPart = v26;
  v24[1].QuadPart = (LONGLONG)v27;
  *v27 = v24;
  *(_QWORD *)(v26 + 8) = v24;
  return 1LL;
}
