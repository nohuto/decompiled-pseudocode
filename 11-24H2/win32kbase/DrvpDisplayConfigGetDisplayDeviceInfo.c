/*
 * XREFs of DrvpDisplayConfigGetDisplayDeviceInfo @ 0x140023B1C
 * Callers:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400F6978 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 * Callees:
 *     UserIsConsoleConnection @ 0x140013950 (UserIsConsoleConnection.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002357C (--$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     UserIsCurrentProcessDwm @ 0x140024300 (UserIsCurrentProcessDwm.c)
 *     UserIsWddmConnectedSession @ 0x14004E070 (UserIsWddmConnectedSession.c)
 *     DCompositionIsShellProcess @ 0x140073840 (DCompositionIsShellProcess.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvpDisplayConfigGetDisplayDeviceInfo(int *a1)
{
  int v1; // edi
  int v2; // r12d
  __int64 DxgkWin32kInterface; // rax
  __int64 v5; // rcx
  int v6; // r15d
  __int64 v7; // r13
  __int64 v8; // rbp
  int v9; // ecx
  int v10; // eax
  __int64 v11; // rcx
  char v12; // r14
  __int64 *i; // rsi
  int v14; // r8d
  struct _ERESOURCE *v15; // r14
  struct _GRETHREAD *v16; // rax
  _WORD *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rbp
  __int16 v21; // ax
  _WORD *v22; // rax
  int v24; // ecx
  int IsWddmConnectedSession; // eax
  int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // ecx
  unsigned int v30; // eax
  int v31; // ecx
  unsigned int v32; // eax
  __int64 v33; // rcx
  int v34; // ecx
  int v35; // edx
  __int64 v36; // rax
  unsigned int v37; // edx
  int v38; // eax
  unsigned int v39; // edx
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  int v47; // eax
  int v48; // edx

  v1 = 0;
  v2 = *a1;
  if ( (unsigned int)a1[1] < 0x808 )
  {
    v6 = -1073741789;
    if ( v2 == -21 )
    {
      v1 = 1144084225;
      WdLogSingleEntry3(2LL, (unsigned int)a1[1], 2056LL, 1144084225LL);
      WdLogGlobalForLineNumber = 18905;
      goto LABEL_74;
    }
    return (unsigned int)v6;
  }
  a1[513] = 0;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *))(DxgkWin32kInterface + 256))(
         *((_QWORD *)a1 + 1),
         (unsigned int)a1[4],
         0LL,
         a1);
  if ( v6 < 0 && v2 == -21 )
  {
    WdLogSingleEntry4(2LL, a1[3], (unsigned int)a1[2]);
    v1 = a1[506];
    WdLogGlobalForLineNumber = 18929;
    goto LABEL_74;
  }
  if ( a1[4] == -1 )
    goto LABEL_32;
  v7 = *(_QWORD *)(W32GetSessionState(v5) + 88);
  v8 = *(_QWORD *)(v7 + 1096);
  if ( !v8 )
    goto LABEL_92;
  v9 = a1[2];
  while ( _bittest((const signed __int32 *)(v8 + 160), 0x17u) )
  {
    if ( v9 == *(_DWORD *)(v8 + 240) )
    {
      v10 = *(_DWORD *)(v8 + 244);
      goto LABEL_9;
    }
LABEL_10:
    v8 = *(_QWORD *)(v8 + 128);
    if ( !v8 )
      goto LABEL_13;
  }
  if ( v9 != *(_DWORD *)(v8 + 288) )
    goto LABEL_10;
  v10 = *(_DWORD *)(v8 + 292);
LABEL_9:
  if ( a1[3] != v10 || *(_DWORD *)(v8 + 248) != a1[4] )
    goto LABEL_10;
LABEL_13:
  if ( v8 && (*(_QWORD *)(v8 + 144) || *(_QWORD *)(v8 + 296)) )
  {
    if ( !_bittest((const signed __int32 *)(v8 + 160), 0x17u) && !*(_DWORD *)(v8 + 288) && !*(_DWORD *)(v8 + 292) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 19002;
    }
    if ( (*(_DWORD *)(v8 + 164) & 1) != 0 )
    {
      v6 = -1073741130;
      if ( v2 == -21 )
      {
        v1 = 1144084228;
        WdLogSingleEntry5(
          2LL,
          a1[3],
          (unsigned int)a1[2],
          (unsigned int)a1[4],
          *(unsigned int *)(v8 + 160),
          1144084228LL);
        WdLogGlobalForLineNumber = 19019;
      }
      else
      {
        WdLogSingleEntry1(4LL, -1073741130LL);
        WdLogGlobalForLineNumber = 19024;
      }
    }
    else
    {
      GreAcquireSemaphore<19,>((struct _ERESOURCE **)v7);
      if ( !(unsigned int)UserIsCurrentProcessDwm() && !(unsigned __int8)DCompositionIsShellProcess() && v2 != -30
        || (v12 = 1, !(unsigned int)UserIsWddmConnectedSession()) )
      {
        v12 = 0;
      }
      for ( i = *(__int64 **)(*(_QWORD *)(W32GetSessionState(v11) + 88) + 3848LL); i; i = (__int64 *)*i )
      {
        v24 = *((_DWORD *)i + 10);
        if ( (v24 & 0x401) == 1 )
        {
          if ( v12 )
          {
            if ( (v24 & 0x20000) == 0 )
            {
              v33 = i[321];
              if ( ((v33 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 && (*(_DWORD *)(v33 + 160) & 0x800000) != 0 )
              {
                v34 = *((_DWORD *)i + 644);
                if ( a1[411] == v34 )
                {
                  v35 = *((_DWORD *)i + 645);
                  if ( a1[412] == v35 )
                  {
                    v36 = i[267];
                    if ( a1[413] == (_DWORD)v36 + v34 && a1[414] == v35 + HIDWORD(v36) )
                    {
                      v37 = a1[513] & 0xFFFFFFFE;
                      a1[513] = v37;
                      if ( *((_DWORD *)i + 644) || (v38 = 2, *((_DWORD *)i + 645)) )
                        v38 = 0;
                      v39 = v38 | v37 & 0xFFFFFFFD;
                      v40 = 0;
                      a1[513] = v39;
                      if ( i[321] == v8 )
                        v40 = 4;
                      v32 = v39 & 0xFFFFFFFB | v40;
                      goto LABEL_45;
                    }
                  }
                }
              }
            }
          }
          else if ( i[321] == v8 )
          {
            IsWddmConnectedSession = UserIsWddmConnectedSession();
            v14 = 0x20000;
            a1[411] = *((_DWORD *)i + 644);
            a1[412] = *((_DWORD *)i + 645);
            v26 = i[5] & 0x20000;
            if ( IsWddmConnectedSession )
            {
              if ( v26 )
                v27 = *(__int64 *)((char *)i + 1700);
              else
                v27 = i[267];
              a1[413] = v27 + *((_DWORD *)i + 644);
              if ( (i[5] & 0x20000) != 0 )
                v28 = *(__int64 *)((char *)i + 1700);
              else
                v28 = i[267];
              v29 = HIDWORD(v28) + *((_DWORD *)i + 645);
              v30 = a1[513] & 0xFFFFFFFE;
              a1[513] = v30;
              a1[414] = v29;
              if ( *((_DWORD *)i + 644) || (v31 = 2, *((_DWORD *)i + 645)) )
                v31 = 0;
              v32 = v31 | v30 & 0xFFFFFFFD | 4;
            }
            else
            {
              if ( v26 )
                v41 = *(__int64 *)((char *)i + 1700);
              else
                v41 = i[267];
              a1[413] = v41 + *((_DWORD *)i + 644);
              if ( (i[5] & 0x20000) != 0 )
                v42 = *(__int64 *)((char *)i + 1700);
              else
                v42 = i[267];
              LODWORD(v42) = a1[4];
              a1[414] = HIDWORD(v42) + *((_DWORD *)i + 645);
              *(_QWORD *)(a1 + 479) = (unsigned int)v42;
              if ( (i[5] & 0x20000) != 0 )
                v43 = *(__int64 *)((char *)i + 1700);
              else
                v43 = i[267];
              a1[481] = v43;
              if ( (i[5] & 0x20000) != 0 )
                v44 = *(__int64 *)((char *)i + 1700);
              else
                v44 = i[267];
              a1[482] = HIDWORD(v44);
              *((_QWORD *)a1 + 244) = 0LL;
              if ( (i[5] & 0x20000) != 0 )
                v45 = *(__int64 *)((char *)i + 1700);
              else
                v45 = i[267];
              a1[490] = v45;
              if ( (i[5] & 0x20000) != 0 )
                v46 = *(__int64 *)((char *)i + 1700);
              else
                v46 = i[267];
              a1[491] = HIDWORD(v46);
              v47 = a1[513] | 1;
              a1[483] = 4;
              a1[513] = v47;
              a1[484] = 60000;
              a1[485] = 1000;
              *((_QWORD *)a1 + 243) = 1LL;
              if ( *((_DWORD *)i + 644) || (v48 = 2, *((_DWORD *)i + 645)) )
                v48 = 0;
              v32 = v48 | v47 & 0xFFFFFFFD | 4;
            }
LABEL_45:
            a1[513] = v32;
            break;
          }
        }
      }
      v15 = *(struct _ERESOURCE **)v7;
      EtwTraceGreLockReleaseSemaphore((__int64)L"DriverMgmt", *(_QWORD *)v7, v14);
      v16 = GreGetCurrentThreadCrossSessionCheck();
      if ( v16 )
      {
        if ( (*((_BYTE *)v16 + 27))-- == 1 )
          *(_QWORD *)v16 &= ~0x80000uLL;
      }
      GreReleaseSemaphoreSharedInternal(v15);
      if ( !i && (!a1[507] || !(unsigned int)UserIsWddmConnectedSession()) )
      {
        *(_QWORD *)(a1 + 481) = 0LL;
        *(_QWORD *)(a1 + 483) = 5LL;
        a1[485] = 1;
        *((_QWORD *)a1 + 243) = 1LL;
        *(_OWORD *)(a1 + 411) = 0LL;
        *((_OWORD *)a1 + 122) = 0LL;
        a1[513] = !UserIsConsoleConnection() | a1[513] & 0xFFFFFFF8;
      }
      v18 = a1 + 415;
      v19 = 128LL;
      v20 = v8 - (_QWORD)(a1 + 415);
      do
      {
        if ( v19 == 96 )
          break;
        v21 = *(_WORD *)((char *)v18 + v20 + 64);
        if ( !v21 )
          break;
        *v18++ = v21;
        --v19;
      }
      while ( v19 );
      v22 = v18 - 1;
      if ( v19 )
        v22 = v18;
      *v22 = 0;
LABEL_32:
      if ( v6 >= 0 )
        return 0LL;
    }
    if ( v2 == -21 )
LABEL_74:
      a1[506] = v1;
    return (unsigned int)v6;
  }
LABEL_92:
  v6 = -1073741275;
  if ( v2 == -21 )
  {
    if ( v8 )
    {
      v1 = 1144084227;
      WdLogSingleEntry5(2LL, a1[3], (unsigned int)a1[2], (unsigned int)a1[4], *(unsigned int *)(v8 + 160), 1144084227LL);
      WdLogGlobalForLineNumber = 18988;
    }
    else
    {
      v1 = 1144084226;
      WdLogSingleEntry4(2LL, a1[3], (unsigned int)a1[2]);
      WdLogGlobalForLineNumber = 18978;
    }
    goto LABEL_74;
  }
  WdLogSingleEntry0(3LL);
  WdLogGlobalForLineNumber = 18993;
  return (unsigned int)v6;
}
