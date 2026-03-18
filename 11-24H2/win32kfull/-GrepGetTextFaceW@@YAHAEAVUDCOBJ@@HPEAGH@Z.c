/*
 * XREFs of ?GrepGetTextFaceW@@YAHAEAVUDCOBJ@@HPEAGH@Z @ 0x14005EFB0
 * Callers:
 *     NtGdiGetTextFaceW @ 0x1400BB210 (NtGdiGetTextFaceW.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x14005D970 (IsThreadCrossSessionAttached.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x14005D9E4 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?bGotFonts@PDEVOBJ@@QEBAHXZ @ 0x14005EF9C (-bGotFonts@PDEVOBJ@@QEBAHXZ.c)
 *     ?BuildMapperParameters@@YAXAEAUPARAMETERS@MAPPER@@AEAVUDCOBJ@@_N2@Z @ 0x140060290 (-BuildMapperParameters@@YAXAEAUPARAMETERS@MAPPER@@AEAVUDCOBJ@@_N2@Z.c)
 *     ?ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z @ 0x1400606A0 (-ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400BBE78 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     GrepReleasePublicPFTSemaphoreEx @ 0x14015CA30 (GrepReleasePublicPFTSemaphoreEx.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x14020EEF8 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memmove @ 0x140340480 (memmove.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall GrepGetTextFaceW(struct UDCOBJ *a1, int a2, unsigned __int16 *a3, int a4)
{
  __int64 v4; // rax
  struct LFONT *v6; // r14
  int v8; // esi
  __int64 v9; // rdx
  _QWORD *HDEV; // r15
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rax
  _DWORD *v16; // rbx
  bool v17; // zf
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct _KTHREAD *CurrentThread; // r14
  __int64 v22; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v24; // rbx
  __int64 v25; // r8
  char v26; // cl
  struct PFE *v27; // r9
  _DWORD *v28; // rax
  int v29; // ecx
  __int64 v30; // rcx
  const wchar_t *v31; // rdi
  void *v32; // r15
  int v33; // edx
  __int64 v34; // rsi
  struct _KTHREAD *v35; // rdi
  __int64 v36; // rbx
  __int64 *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rbx
  _QWORD *v40; // rcx
  __int64 v42; // rsi
  const wchar_t *v43; // rbx
  int v44; // r15d
  const wchar_t *v45; // r12
  __int64 v46; // rax
  int v47; // edi
  int v48; // edi
  int v49; // edi
  __int64 v50; // rcx
  int v51; // edx
  unsigned __int64 i; // rcx
  int v53; // eax
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  const wchar_t *v56; // rbx
  int v57; // r15d
  const wchar_t *v58; // r12
  __int64 v59; // rax
  unsigned int v60; // [rsp+30h] [rbp-89h] BYREF
  int v61; // [rsp+34h] [rbp-85h]
  _DWORD *v62; // [rsp+38h] [rbp-81h] BYREF
  struct LFONT *v63; // [rsp+40h] [rbp-79h]
  unsigned int v64; // [rsp+48h] [rbp-71h] BYREF
  _QWORD *v65; // [rsp+50h] [rbp-69h] BYREF
  HSEMAPHORE v66; // [rsp+58h] [rbp-61h] BYREF
  void *v67; // [rsp+60h] [rbp-59h]
  struct _POINTL v68; // [rsp+68h] [rbp-51h] BYREF
  _BYTE v69[96]; // [rsp+70h] [rbp-49h] BYREF

  v4 = *(_QWORD *)a1;
  v6 = 0LL;
  v67 = a3;
  v61 = a2;
  v8 = 0;
  v65 = *(_QWORD **)(v4 + 48);
  if ( !(unsigned int)PDEVOBJ::bGotFonts((PDEVOBJ *)&v65) )
    PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v65);
  LOBYTE(v9) = 10;
  HDEV = v65;
  v11 = HmgShareLock(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 296LL), v9);
  v14 = v11 + 24;
  v15 = -v11;
  v16 = (_DWORD *)(v14 & -(__int64)(v15 != 0));
  v62 = v16;
  if ( v16 )
  {
    v17 = (*(_BYTE *)((v14 & -(__int64)(v15 != 0)) + 4) & 1) == 0;
    v6 = (struct LFONT *)(v16 - 6);
    v63 = (struct LFONT *)(v16 - 6);
    if ( !v17 )
    {
      v47 = *v16;
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)(v16 - 6));
      v6 = 0LL;
      v63 = 0LL;
      if ( HDEV || (HDEV = (_QWORD *)UserGetHDEV()) != 0LL )
      {
        v48 = v47 - 4;
        if ( v48 )
        {
          v49 = v48 - 1;
          if ( v49 )
          {
            if ( v49 != 1 )
            {
LABEL_61:
              v14 = (__int64)v6 + 24;
              v16 = (_DWORD *)(((unsigned __int64)v6 + 24) & -(__int64)(v6 != 0LL));
              v62 = v16;
              goto LABEL_5;
            }
            v50 = HDEV[181];
          }
          else
          {
            v50 = HDEV[180];
          }
        }
        else
        {
          v50 = HDEV[179];
        }
        if ( v50 )
        {
          LOBYTE(v12) = 10;
          v6 = (struct LFONT *)HmgShareLock(v50, v12);
          v63 = v6;
        }
        goto LABEL_61;
      }
    }
  }
  else
  {
    v63 = 0LL;
  }
LABEL_5:
  if ( v16 && UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization(v14, v12, v13) >= 0 )
  {
    v66 = *(HSEMAPHORE *)(*(_QWORD *)(W32GetSessionState(v19, v18, v20) + 96) + 20344LL);
    GreAcquireSemaphoreInternal(v66);
    CurrentThread = KeGetCurrentThread();
    v22 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v22 = *ThreadWin32Thread;
    }
    v24 = (__int64 *)((v22 + 8) & -(__int64)(v22 != 0));
    if ( v24 )
    {
      v25 = *v24;
      if ( (*v24 & 0xFFFFFFFFFFFE0000uLL) != 0 && (*v24 & 0x20000) == 0 )
      {
        v51 = 37;
        for ( i = 0LL; i < 0x40; ++i )
        {
          v53 = i;
          if ( !_bittest64(&v25, i) )
            v53 = v51;
          v51 = v53;
        }
        if ( v53 > 17 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v53, v25);
      }
      v26 = *(_BYTE *)(((v22 + 8) & -(__int64)(v22 != 0)) + 0x19);
      *(_BYTE *)(((v22 + 8) & -(__int64)(v22 != 0)) + 0x19) = v26 + 1;
      if ( !v26 )
        *v24 |= 0x20000uLL;
    }
    v64 = 0;
    v60 = 0;
    v68 = 0LL;
    memset_0(v69, 0, sizeof(v69));
    v6 = v63;
    BuildMapperParameters((struct MAPPER::PARAMETERS *)v69, a1, (*((_DWORD *)v63 + 7) & 2) != 0, 0);
    v27 = LFONTCOREOBJ::ppfeMapFont((LFONTCOREOBJ *)&v62, (struct MAPPER::PARAMETERS *)v69, &v64, &v68, &v60);
    if ( !v27 )
    {
      SEMOBJ<17>::vUnlock(&v66);
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v6);
      return 0LL;
    }
    v28 = v62;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 4LL) = v60 >> 8;
    v29 = 0;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) &= ~0x10u;
    if ( (v60 & 2) == 0 || (v31 = (const wchar_t *)(v28 + 70), !*((_WORD *)v28 + 140)) )
    {
      v30 = *((_QWORD *)v27 + 4);
      v31 = (const wchar_t *)(v30 + *(int *)(v30 + 8));
      v29 = (*(_DWORD *)(v30 + 48) >> 27) & 1;
    }
    v32 = v67;
    if ( v67 )
    {
      v33 = v61;
      if ( v61 >= 1 )
      {
        v34 = -1LL;
        if ( a4 && v29 )
        {
          v43 = v31;
          v44 = 0;
          if ( *v31 )
          {
            v45 = (const wchar_t *)(v28 + 70);
            do
            {
              if ( !_wcsicmp(v45, v43) )
                break;
              v46 = -1LL;
              do
                ++v46;
              while ( v43[v46] );
              v44 += v46 + 1;
              v43 = &v31[v44];
            }
            while ( *v43 );
            v33 = v61;
          }
          v32 = v67;
          if ( *v43 )
            v31 = v43;
        }
        do
          ++v34;
        while ( v31[v34] );
        v8 = v34 + 1;
        if ( v33 < v8 )
          v8 = v33;
        memmove(v32, v31, 2LL * v8);
        *((_WORD *)v32 + v8 - 1) = 0;
      }
    }
    else
    {
      v42 = -1LL;
      if ( a4 && v29 )
      {
        v56 = v31;
        v57 = 0;
        if ( *v31 )
        {
          v58 = (const wchar_t *)(v28 + 70);
          do
          {
            if ( !_wcsicmp(v58, v56) )
              break;
            v59 = -1LL;
            do
              ++v59;
            while ( v56[v59] );
            v57 += v59 + 1;
            v56 = &v31[v57];
          }
          while ( *v56 );
        }
        if ( *v56 )
          v31 = v56;
      }
      do
        ++v42;
      while ( v31[v42] );
      v8 = v42 + 1;
    }
    if ( v66 == (HSEMAPHORE)-2LL )
    {
      GrepReleasePublicPFTSemaphoreEx();
    }
    else if ( v66 )
    {
      EtwTraceGreLockReleaseSemaphore(L"PublicPFT", v66);
      v35 = KeGetCurrentThread();
      v36 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        v37 = (__int64 *)PsGetThreadWin32Thread(v35);
        if ( v37 )
          v36 = *v37;
      }
      v38 = v36 + 8;
      v39 = -v36;
      v40 = (_QWORD *)(v38 & -(__int64)(v39 != 0));
      if ( v40 )
      {
        v17 = (*(_BYTE *)((v38 & -(__int64)(v39 != 0)) + 0x19))-- == 1;
        if ( v17 )
          *v40 &= ~0x20000uLL;
        if ( !*v40 )
          GrepOnAllLocksReleased();
      }
      GreReleaseSemaphoreExclusiveInternal(v66);
      v6 = v63;
    }
  }
  if ( v6 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v6);
  return (unsigned int)v8;
}
