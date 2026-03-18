/*
 * XREFs of ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1400B26AC
 * Callers:
 *     CitDisplayPowerChange @ 0x1400B59E4 (CitDisplayPowerChange.c)
 *     CitProcessCallout @ 0x1400B5AC4 (CitProcessCallout.c)
 *     ?CitpProcessForegroundChange@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@0@Z @ 0x14012BCCC (-CitpProcessForegroundChange@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@0@Z.c)
 *     CitSessionConnectChange @ 0x140150F90 (CitSessionConnectChange.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x140151F2C (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@_K@Z @ 0x14023C0F8 (-CitEtwEnableCallback@@YAXPEBU_GUID@@_K@Z.c)
 * Callees:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x140016D60 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1400B2AA8 (-CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?CitpInteractionSummariesCheckPeriodAndFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1400B2C08 (-CitpInteractionSummariesCheckPeriodAndFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpInputTimesAddTo@@YAXPEAU_CIT_INPUT_TIMES@@PEBU1@@Z @ 0x1400B2C58 (-CitpInputTimesAddTo@@YAXPEAU_CIT_INPUT_TIMES@@PEBU1@@Z.c)
 *     ?CalculateDeltaFrom@CIT_USER_ACTIVITY_STAT@@QEBA?AU1@AEBU1@@Z @ 0x1400B2D44 (-CalculateDeltaFrom@CIT_USER_ACTIVITY_STAT@@QEBA-AU1@AEBU1@@Z.c)
 *     ?CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z @ 0x1400B2E00 (-CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1400B3D28 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpGetForegroundWindowInfo@@YAHPEAU_CIT_WINDOW_INFO@@PEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1400B420C (-CitpGetForegroundWindowInfo@@YAHPEAU_CIT_WINDOW_INFO@@PEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ?CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1400B5EF4 (-CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x14023C4B0 (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpProgDataNotifyUseUpdate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROG_DATA@@@Z @ 0x14023C99C (-CitpProgDataNotifyUseUpdate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROG_DATA@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall CitpSetForegroundProcess(
        struct _CIT_IMPACT_CONTEXT *a1,
        unsigned int a2,
        struct tagPROCESSINFO *a3,
        struct tagWND *a4)
{
  unsigned __int64 v4; // r15
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdi
  struct tagPROCESSINFO **v11; // rcx
  unsigned int v12; // esi
  bool v13; // zf
  struct _CIT_INTERACTION_SUMMARY *v14; // rax
  unsigned int v15; // ecx
  int v16; // ebx
  struct _CIT_INTERACTION_SUMMARY *v17; // rdi
  int v18; // r8d
  int v19; // edx
  unsigned int v20; // eax
  unsigned int v21; // ecx
  int v22; // eax
  unsigned int v23; // edx
  unsigned int v24; // ecx
  bool v25; // cf
  int v26; // eax
  int v27; // edx
  int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // edx
  unsigned int v31; // edx
  unsigned int v32; // ecx
  int v33; // eax
  struct tagPROCESSINFO *v34; // rdx
  int v35; // eax
  int v36; // eax
  struct _CIT_PROG_DATA *v37; // rax
  struct _CIT_PROG_DATA *v38; // rsi
  unsigned int v39; // ecx
  int v40; // r8d
  int v41; // edx
  int v42; // ecx
  int v43; // r8d
  unsigned int v44; // eax
  __int64 v45; // rcx
  __int64 UserSessionState; // rax
  struct tagPROCESSINFO **v47; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v48[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v49; // [rsp+40h] [rbp-38h] BYREF
  __int64 v50; // [rsp+48h] [rbp-30h] BYREF
  struct tagWND *v51; // [rsp+50h] [rbp-28h]
  __int64 v52; // [rsp+58h] [rbp-20h] BYREF
  int v53; // [rsp+60h] [rbp-18h]

  v4 = (unsigned __int64)a3;
  v51 = a4;
  if ( *((struct tagPROCESSINFO **)a1 + 15) != a3 )
  {
    v7 = *(_QWORD *)(W32GetUserSessionState(a1) + 18968);
    CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 204), a2);
    v8 = *(_QWORD *)((char *)a1 + 220);
    v49 = v8;
    CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 228), a2);
    v9 = *((_QWORD *)a1 + 15);
    v10 = *(_QWORD *)((char *)a1 + 244);
    v50 = v10;
    if ( v9
      && dword_14029AF48
      && (qword_14029AF58 & 0x800000000800LL) != 0
      && (qword_14029AF60 & 0x800000000800LL) == qword_14029AF60 )
    {
      v11 = *(struct tagPROCESSINFO ***)(v9 + 920);
      v12 = a2 - *((_DWORD *)a1 + 34);
      v13 = *(_BYTE *)(v7 + 25) == 0;
      v48[0] = v12;
      v47 = v11;
      if ( !v13 )
      {
        v37 = CitpProcessEnsureProgData(v11[1]);
        v38 = v37;
        if ( v37 )
        {
          v39 = *((_DWORD *)v37 + 20);
          v40 = -1;
          v41 = v39 + 1;
          v25 = v39 + 1 < v39;
          v42 = v48[0];
          if ( !v25 )
            v40 = v41;
          *((_DWORD *)v37 + 20) = v40;
          v43 = -1;
          v44 = *((_DWORD *)v37 + 21);
          v45 = v44 + v42;
          if ( (unsigned int)v45 >= v44 )
            v43 = v45;
          *((_DWORD *)v38 + 21) = v43;
          UserSessionState = W32GetUserSessionState(v45);
          CitpProgDataNotifyUseUpdate(
            *(struct _CIT_IMPACT_CONTEXT **)(*(_QWORD *)(UserSessionState + 18968) + 32LL),
            v38);
        }
        v11 = v47;
        v12 = v48[0];
      }
      if ( (*(_DWORD *)(v7 + 12) & 1) != 0 )
      {
        v14 = CitpInteractionSummaryEnsure(a1, v11, 2);
        if ( v14 )
        {
          v15 = *((_DWORD *)v14 + 33);
          v16 = -1;
          v17 = v14;
          v18 = -1;
          if ( v15 + 1 >= v15 )
            v18 = v15 + 1;
          v19 = -1;
          *((_DWORD *)v14 + 33) = v18;
          v20 = *((_DWORD *)v14 + 34);
          if ( v20 + v12 >= v20 )
            v19 = v20 + v12;
          *((_DWORD *)v17 + 34) = v19;
          CIT_USER_ACTIVITY_STAT::CalculateDeltaFrom(&v49, &v47, (char *)a1 + 184);
          CIT_USER_ACTIVITY_STAT::CalculateDeltaFrom(&v50, v48, (char *)a1 + 192);
          v21 = *((_DWORD *)v17 + 35);
          v22 = -1;
          if ( v21 + (HIDWORD(v47) & 0x7FFFFFFF) >= v21 )
            v22 = v21 + (HIDWORD(v47) & 0x7FFFFFFF);
          v23 = *((_DWORD *)v17 + 36);
          v24 = v23 + (_DWORD)v47;
          *((_DWORD *)v17 + 35) = v22;
          v25 = v24 < v23;
          v26 = -1;
          v27 = v48[1];
          if ( !v25 )
            v26 = v24;
          *((_DWORD *)v17 + 36) = v26;
          v28 = -1;
          v29 = *((_DWORD *)v17 + 37);
          v30 = v29 + (v27 & 0x7FFFFFFF);
          if ( v30 >= v29 )
            v28 = v30;
          v31 = *((_DWORD *)v17 + 38);
          v32 = v31 + v48[0];
          *((_DWORD *)v17 + 37) = v28;
          if ( v32 >= v31 )
            v16 = v32;
          *((_DWORD *)v17 + 38) = v16;
          CitpInputTimesAddTo(
            (struct _CIT_INTERACTION_SUMMARY *)((char *)v17 + 32),
            (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 140));
          v33 = *(_DWORD *)((char *)a1 + 178);
          v34 = (struct tagPROCESSINFO *)*((_QWORD *)a1 + 15);
          v52 = *(_QWORD *)((char *)a1 + 170);
          v53 = v33;
          CitpGetForegroundWindowInfo((struct _CIT_WINDOW_INFO *)&v52, v34, 0LL);
          v35 = v53;
          *(_QWORD *)((char *)v17 + 62) = v52;
          *(_DWORD *)((char *)v17 + 70) = v35;
          CitpBitmapUpdateForTimeRange(
            (struct _CIT_INTERACTION_SUMMARY *)((char *)v17 + 160),
            *((_DWORD *)a1 + 34),
            a2,
            *((_DWORD *)a1 + 72),
            *(_DWORD *)(v7 + 20));
          v8 = v49;
          v10 = v50;
        }
        CitpInteractionSummariesCheckPeriodAndFlush(a1, a2);
      }
    }
    if ( v4 )
    {
      if ( (unsigned int)CitpAllowForegroundProcess(a1) )
        v4 &= -(__int64)(CitpProcessEnsureContext((struct tagPROCESSINFO *)v4) != 0LL);
      else
        v4 = 0LL;
    }
    *((_QWORD *)a1 + 15) = v4;
    *((_DWORD *)a1 + 34) = a2;
    *((_QWORD *)a1 + 23) = v8;
    *((_QWORD *)a1 + 24) = v10;
    *(_OWORD *)((char *)a1 + 140) = 0LL;
    *(_QWORD *)((char *)a1 + 156) = 0LL;
    *((_DWORD *)a1 + 41) = 0;
    *((_WORD *)a1 + 84) = 0;
    *(_QWORD *)((char *)a1 + 170) = 0LL;
    *(_DWORD *)((char *)a1 + 178) = 0;
    if ( v4
      && dword_14029AF48
      && (qword_14029AF58 & 0x800000000800LL) != 0
      && (qword_14029AF60 & 0x800000000800LL) == qword_14029AF60 )
    {
      if ( (*(_DWORD *)(v7 + 12) & 1) != 0
        && *((struct _CIT_IMPACT_CONTEXT **)a1 + 33) == (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 264) )
      {
        *((_DWORD *)a1 + 72) = a2;
        *((_QWORD *)a1 + 35) = MEMORY[0xFFFFF78000000014];
      }
      v52 = 0LL;
      v53 = 0;
      CitpGetForegroundWindowInfo((struct _CIT_WINDOW_INFO *)&v52, (struct tagPROCESSINFO *)v4, v51);
      v36 = v53;
      *(_QWORD *)((char *)a1 + 170) = v52;
      *(_DWORD *)((char *)a1 + 178) = v36;
    }
  }
}
