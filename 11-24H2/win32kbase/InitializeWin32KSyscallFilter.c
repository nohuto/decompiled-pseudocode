/*
 * XREFs of InitializeWin32KSyscallFilter @ 0x1401005C0
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402E25E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     FastGetProfileDwordEx @ 0x14009FAE0 (FastGetProfileDwordEx.c)
 *     ?CreateWin32KFilterBitmap@@YAJKQEBQEBDHKPEAE@Z @ 0x14010089C (-CreateWin32KFilterBitmap@@YAJKQEBQEBDHKPEAE@Z.c)
 *     IsCurrentSessionHostServiceSession @ 0x140100C78 (IsCurrentSessionHostServiceSession.c)
 *     ?FreeWin32KSyscallFilter@@YAXXZ @ 0x140154584 (-FreeWin32KSyscallFilter@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 InitializeWin32KSyscallFilter()
{
  int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  unsigned int (*v3)(void); // rax
  __int64 v4; // rcx
  unsigned int v5; // ebp
  __int64 UserSessionState; // rax
  __int64 v7; // rdi
  __int64 v8; // rcx
  unsigned int v9; // esi
  __int64 v10; // r14
  __int64 Pool2; // rax
  __int64 v12; // rax
  unsigned int i; // ebp
  unsigned __int8 *v14; // rax
  int v15; // r8d
  int Win32KFilterBitmap; // eax
  bool v17; // sf

  v0 = 0;
  if ( (unsigned int)IsCurrentSessionHostServiceSession() )
  {
    FastGetProfileDwordEx(0LL, 52LL, L"ServiceFilterAuditThrottleMode", 1, 0, &gdwServiceFilterAuditThrottleMode, 0LL);
    FastGetProfileDwordEx(0LL, 52LL, L"ServiceFilterAuditCaptureWER", 1, 0, &gdwServiceFilterAuditCaptureWER, 0LL);
    FastGetProfileDwordEx(
      0LL,
      52LL,
      L"ServiceFilterAuditStackCacheSize",
      4096,
      0,
      &gstServiceFilterAuditStackCacheSize,
      0LL);
  }
  v3 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v2, v1)
                                            + 24LL * ext_ms_win_moderncore_win32k_base_sysentry_l1_ApiSetTableIndex)
                                + 56LL);
  if ( v3 )
    v4 = v3();
  else
    v4 = 0LL;
  v5 = ((unsigned int)v4 >> 3) + 1;
  if ( (v4 & 7) == 0 )
    v5 = (unsigned int)v4 >> 3;
  UserSessionState = W32GetUserSessionState(v4);
  v7 = UserSessionState + 70976;
  *(_QWORD *)(UserSessionState + 71040) = 0LL;
  *(_QWORD *)(UserSessionState + 71056) = off_140248F70;
  *(_QWORD *)(UserSessionState + 71072) = off_140248120;
  *(_QWORD *)(UserSessionState + 71088) = &off_140248F60;
  *(_QWORD *)(UserSessionState + 71104) = off_140246F20;
  *(_QWORD *)(UserSessionState + 71120) = off_14024B510;
  *(_QWORD *)(UserSessionState + 71136) = off_14024A4E0;
  *(_QWORD *)(UserSessionState + 71048) = 0LL;
  *(_QWORD *)(UserSessionState + 71064) = 685LL;
  *(_QWORD *)(UserSessionState + 71080) = 456LL;
  *(_QWORD *)(UserSessionState + 71096) = 1LL;
  *(_QWORD *)(UserSessionState + 71112) = 575LL;
  *(_QWORD *)(UserSessionState + 71128) = 414LL;
  *(_DWORD *)(UserSessionState + 71144) = 518;
  *(_DWORD *)(UserSessionState + 71148) = 1;
  v9 = v5;
  v10 = W32GetUserSessionState(v8);
  if ( (_DWORD)gdwServiceFilterAuditCaptureWER )
  {
    if ( (v5 & 3) != 0 )
      v9 = v5 - (v5 & 3) + 4;
    Pool2 = ExAllocatePool2(64LL, v9, 1818653525LL);
    *(_QWORD *)(v10 + 71152) = Pool2;
    if ( !Pool2
      || !(_DWORD)gdwServiceFilterAuditThrottleMode
      && (gstServiceFilterAuditStackCacheSize = (gstServiceFilterAuditStackCacheSize + 3) & 0xFFFFFFFFFFFFFFFCuLL,
          v12 = ExAllocatePool2(64LL, gstServiceFilterAuditStackCacheSize, 1818653525LL),
          (*(_QWORD *)(v10 + 71160) = v12) == 0LL) )
    {
LABEL_12:
      v0 = -1073741801;
LABEL_26:
      FreeWin32KSyscallFilter();
      return (unsigned int)v0;
    }
  }
  for ( i = 0; i < 7; ++i )
  {
    if ( *(_DWORD *)(v7 + 16LL * i + 72) )
    {
      v14 = (unsigned __int8 *)ExAllocatePool2(64LL, v9, 1818653525LL);
      *(_QWORD *)(v7 + 8LL * i + 8) = v14;
      if ( !v14 )
        goto LABEL_12;
      Win32KFilterBitmap = CreateWin32KFilterBitmap(
                             *(_DWORD *)(v7 + 16LL * i + 72),
                             *(const char *const *const *)(v7 + 16 * (i + 4LL)),
                             v15,
                             v9,
                             v14);
      v0 = 0;
      if ( Win32KFilterBitmap != 127 )
        v0 = Win32KFilterBitmap;
      v17 = v0 < 0;
      if ( v0 )
        goto LABEL_25;
    }
    else
    {
      *(_QWORD *)(v7 + 8LL * i + 8) = 0LL;
    }
  }
  v17 = v0 < 0;
LABEL_25:
  if ( v17 )
    goto LABEL_26;
  return (unsigned int)v0;
}
