/*
 * XREFs of ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x14005D30C
 * Callers:
 *     ??1PFFREFOBJ@@QEAA@XZ @ 0x14005D2E8 (--1PFFREFOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x14005DC90 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1400BB830 (-vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?GrepGetKerningPairs@@YAKAEAVUDCOBJ@@KPEAUtagKERNINGPAIR@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1400C1550 (-GrepGetKerningPairs@@YAKAEAVUDCOBJ@@KPEAUtagKERNINGPAIR@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVUDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1401F6558 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVUDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 *     vKillRFONTList @ 0x140200E28 (vKillRFONTList.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z @ 0x140200EE0 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z.c)
 *     ?vRestartbRealizeFont@@YAXPEAVRFONT@@@Z @ 0x14030E760 (-vRestartbRealizeFont@@YAXPEAVRFONT@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     GrepReleasePublicPFTSemaphoreEx @ 0x14015CA30 (GrepReleasePublicPFTSemaphoreEx.c)
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x14019F11C (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall PFFOBJ::vDeleteRFONTRef(PFFOBJ *this, __int64 a2, __int64 a3)
{
  int v4; // r15d
  HSEMAPHORE v5; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v7; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v9; // rdi
  __int64 v10; // r8
  char v11; // cl
  __int64 v12; // rax
  struct _KTHREAD *v13; // rbp
  __int64 v14; // rsi
  __int64 *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  _QWORD *v18; // rcx
  int v20; // edx
  unsigned __int64 i; // rcx
  int v22; // eax
  int CurrentWin32kSessionId; // edi
  __int64 CurrentThreadProcess; // rax
  int v25; // edi
  __int64 v26; // rax
  __int128 v27; // [rsp+20h] [rbp-38h] BYREF
  __int64 v28; // [rsp+30h] [rbp-28h]

  v27 = 0LL;
  v28 = 0LL;
  v4 = 0;
  v5 = *(HSEMAPHORE *)(*(_QWORD *)(W32GetSessionState(this, a2, a3) + 96) + 20344LL);
  GreAcquireSemaphoreInternal(v5);
  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v7 = *ThreadWin32Thread;
  }
  v9 = (__int64 *)((v7 + 8) & -(__int64)(v7 != 0));
  if ( v9 )
  {
    v10 = *v9;
    if ( (*v9 & 0xFFFFFFFFFFFE0000uLL) != 0 && (*v9 & 0x20000) == 0 )
    {
      v20 = 37;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v22 = i;
        if ( !_bittest64(&v10, i) )
          v22 = v20;
        v20 = v22;
      }
      if ( v22 > 17 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v22, v10);
    }
    v11 = *(_BYTE *)(((v7 + 8) & -(__int64)(v7 != 0)) + 0x19);
    *(_BYTE *)(((v7 + 8) & -(__int64)(v7 != 0)) + 0x19) = v11 + 1;
    if ( !v11 )
      *v9 |= 0x20000uLL;
  }
  --*(_DWORD *)(*(_QWORD *)this + 68LL);
  v12 = *(_QWORD *)this;
  if ( !*(_DWORD *)(*(_QWORD *)this + 56LL)
    && !*(_DWORD *)(v12 + 60)
    && !*(_QWORD *)(v12 + 152)
    && !*(_DWORD *)(v12 + 68)
    && !*(_DWORD *)(v12 + 64) )
  {
    PFFOBJ::vPFFC_Delete(this, (struct PFFCLEANUP *)&v27);
    v4 = 1;
  }
  if ( v5 == (HSEMAPHORE)-2LL )
  {
    GrepReleasePublicPFTSemaphoreEx();
  }
  else if ( v5 )
  {
    EtwTraceGreLockReleaseSemaphore(L"PublicPFT", v5);
    v13 = KeGetCurrentThread();
    v14 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v25 = W32GetCurrentWin32kSessionId(),
          v26 = PsGetCurrentThreadProcess(),
          v25 == (unsigned int)PsGetProcessSessionIdEx(v26)) )
    {
      v15 = (__int64 *)PsGetThreadWin32Thread(v13);
      if ( v15 )
        v14 = *v15;
    }
    v16 = v14 + 8;
    v17 = -v14;
    v18 = (_QWORD *)(v16 & -(__int64)(v17 != 0));
    if ( v18 )
    {
      if ( (*(_BYTE *)((v16 & -(__int64)(v17 != 0)) + 0x19))-- == 1 )
        *v18 &= ~0x20000uLL;
      if ( !*v18 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v5);
  }
  if ( v4 && *((_QWORD *)&v27 + 1) && !v28 )
    (*(void (**)(void))(v27 + 3048))();
}
