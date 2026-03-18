/*
 * XREFs of ReleaseCacheDC @ 0x1400225A0
 * Callers:
 *     NtUserReleaseDC @ 0x140023030 (NtUserReleaseDC.c)
 *     _ReleaseDC @ 0x140023770 (_ReleaseDC.c)
 *     UserReleaseDC @ 0x140024770 (UserReleaseDC.c)
 *     xxxEnumDisplayMonitors @ 0x140042F90 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     GreUnlockVisRgn @ 0x140021330 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x140021770 (GreLockVisRgn.c)
 *     GreValidateVisrgn @ 0x140022F24 (GreValidateVisrgn.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     ?TraceLoggingProcessDCsInUse@@YAXKK@Z @ 0x1400C26C8 (-TraceLoggingProcessDCsInUse@@YAXKK@Z.c)
 *     ?TraceLoggingGlobalDCsInUse@@YAXK@Z @ 0x1400C2748 (-TraceLoggingGlobalDCsInUse@@YAXK@Z.c)
 *     DeleteHrgnClip @ 0x140109100 (DeleteHrgnClip.c)
 *     IsDeleteHrgnClipSupported @ 0x14010AB44 (IsDeleteHrgnClipSupported.c)
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x14011FDD0 (FlushWEFCOMPOSITEDDCEBounds.c)
 *     IsFlushWEFCOMPOSITEDDCEBoundsSupported @ 0x14012101C (IsFlushWEFCOMPOSITEDDCEBoundsSupported.c)
 *     DestroyCacheDC @ 0x1401689F0 (DestroyCacheDC.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1401C5BB0 (GreCleanDCAndSetOwnerEx.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ReleaseCacheDC(__int64 a1, int a2)
{
  __int64 UserSessionState; // rax
  __int64 *i; // rdi
  int v6; // ecx
  int (*v7)(void); // rax
  void (__fastcall *v8)(__int64, _QWORD, _QWORD, _QWORD, _DWORD); // rax
  __int64 v9; // rsi
  unsigned int *v10; // rsi
  __int64 v11; // rax
  LARGE_INTEGER PerformanceCounter; // rbp
  unsigned int v13; // ebx
  HDC v14; // rcx
  int (*v15)(void); // rax
  __int64 v16; // rbx
  void (__fastcall *v17)(__int64, _QWORD); // rax
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  LONGLONG v24; // rbx
  __int64 v25; // rbx
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax

  UserSessionState = W32GetUserSessionState();
  GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL));
  for ( i = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState() + 57008) + 24LL); ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)(*(_QWORD *)(W32GetUserSessionState() + 57008) + 24LL) )
    {
      v28 = W32GetUserSessionState();
      GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v28 + 57008) + 48LL));
      UserSetLastError(1425LL);
      return 2LL;
    }
    if ( i[2] == a1 )
      break;
  }
  v6 = *((_DWORD *)i + 12);
  if ( v6 < 0 )
  {
    if ( (unsigned int)DestroyCacheDC(i) )
    {
LABEL_34:
      v22 = W32GetUserSessionState();
      GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v22 + 57008) + 48LL));
      return 1LL;
    }
    goto LABEL_37;
  }
  if ( (v6 & 0x401800) != 0x1000 )
    goto LABEL_37;
  if ( (v6 & 0x4000) != 0
    && (*(_BYTE *)(*(_QWORD *)(i[12] + 40) + 27LL) & 2) != 0
    && (int)IsFlushWEFCOMPOSITEDDCEBoundsSupported() >= 0 )
  {
    FlushWEFCOMPOSITEDDCEBounds(i);
  }
  if ( (i[6] & 2) != 0 )
  {
    v7 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2616LL);
    if ( v7 )
    {
      if ( v7() >= 0 )
      {
        v8 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable()
                                                                                        + 24)
                                                                            + 2624LL);
        if ( v8 )
          v8(a1, 0LL, 0LL, 0LL, 0);
      }
    }
    if ( (unsigned int)GreCleanDCAndSetOwnerEx((HDC)i[2]) )
    {
      v9 = i[7];
      if ( v9 )
        v10 = *(unsigned int **)(v9 + 464);
      else
        v10 = (unsigned int *)i[8];
      if ( !*(_DWORD *)(W32GetUserSessionState() + 19712) )
      {
        if ( !*(_QWORD *)(W32GetUserSessionState() + 19688) )
        {
          v24 = 60 * gliQpcFreq.QuadPart * *(_QWORD *)(W32GetUserSessionState() + 19696);
          *(_QWORD *)(W32GetUserSessionState() + 19688) = v24;
        }
        --v10[272];
        v11 = W32GetUserSessionState();
        --*(_DWORD *)(v11 + 19720);
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        if ( !(v10[273] % *(_DWORD *)(W32GetUserSessionState() + 19708)) )
        {
          v25 = *(_QWORD *)(W32GetUserSessionState() + 19664);
          if ( PerformanceCounter.QuadPart - v25 >= *(_QWORD *)(W32GetUserSessionState() + 19688) )
          {
            TraceLoggingProcessDCsInUse(v10[273], v10[14]);
            *(LARGE_INTEGER *)(W32GetUserSessionState() + 19664) = PerformanceCounter;
          }
        }
        v13 = *(_DWORD *)(W32GetUserSessionState() + 19680);
        if ( !(v13 % *(_DWORD *)(W32GetUserSessionState() + 19704)) )
        {
          v26 = *(_QWORD *)(W32GetUserSessionState() + 19672);
          if ( PerformanceCounter.QuadPart - v26 >= *(_QWORD *)(W32GetUserSessionState() + 19688) )
          {
            v27 = W32GetUserSessionState();
            TraceLoggingGlobalDCsInUse(*(_DWORD *)(v27 + 19680));
            *(LARGE_INTEGER *)(W32GetUserSessionState() + 19672) = PerformanceCounter;
          }
        }
      }
      v14 = (HDC)i[2];
      i[7] = 0LL;
      i[8] = 0LL;
      *((_DWORD *)i + 12) &= ~0x1000u;
      GreValidateVisrgn(v14);
      if ( (i[6] & 0x4000) != 0 )
      {
        v15 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2584LL);
        if ( v15 )
        {
          if ( v15() >= 0 )
          {
            v16 = i[2];
            v17 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2592LL);
            if ( v17 )
              v17(v16, 0LL);
          }
        }
      }
      v18 = W32GetUserSessionState();
      ++*(_DWORD *)(v18 + 19716);
      if ( *(int *)(W32GetUserSessionState() + 19716) > 32 && (unsigned int)DestroyCacheDC(i) )
        goto LABEL_34;
      goto LABEL_27;
    }
LABEL_37:
    v23 = W32GetUserSessionState();
    GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v23 + 57008) + 48LL));
    return 2LL;
  }
LABEL_27:
  v19 = *((_DWORD *)i + 12);
  if ( (v19 & 0xC0) != 0 && ((v19 & 2) != 0 || a2) && (int)IsDeleteHrgnClipSupported() >= 0 )
    DeleteHrgnClip(i);
  v20 = W32GetUserSessionState();
  GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v20 + 57008) + 48LL));
  return 0LL;
}
