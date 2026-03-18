/*
 * XREFs of ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x140047AFC
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x14022C22C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x140034C70 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ??0?$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14003F454 (--0-$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140040808 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x140048130 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     FreeHwndList @ 0x140048500 (FreeHwndList.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x140061700 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     unsafe_cast_class_to_PIMEWND @ 0x140282E4C (unsafe_cast_class_to_PIMEWND.c)
 */

void __fastcall xxxImeWindowPosChanged(struct tagSMWP *a1, __int64 a2)
{
  ULONG_PTR v2; // r13
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r12
  struct tagWND *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct tagBWL *v17; // r14
  _QWORD *v18; // rax
  __int64 *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  _QWORD *i; // rax
  __int64 v28; // rbx
  __int64 v29; // rdx
  ULONG64 v30; // rcx
  ULONG64 v31; // r15
  __int64 v32; // r15
  _QWORD *v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 UserSessionState; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rbx
  __int64 v42; // rdx
  _QWORD **v43; // rcx
  __int64 v44; // r8
  bool v45; // zf
  struct tagSMWP *v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  int v49; // ebx
  _QWORD *v50; // rbx
  ULONG_PTR *v51; // rax
  ULONG_PTR v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  ULONG_PTR *v55; // rax
  ULONG_PTR v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rax
  ULONG_PTR BugCheckParameter3; // [rsp+20h] [rbp-98h] BYREF
  _QWORD *v60; // [rsp+28h] [rbp-90h]
  ULONG64 v61; // [rsp+30h] [rbp-88h]
  _QWORD *v62; // [rsp+38h] [rbp-80h]
  ULONG_PTR v63[15]; // [rsp+40h] [rbp-78h] BYREF
  ULONG64 *v65; // [rsp+C8h] [rbp+10h]
  _QWORD **v66; // [rsp+C8h] [rbp+10h]
  struct tagWND *v67; // [rsp+D0h] [rbp+18h]

  v2 = 0LL;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v6 = *CurrentThreadNonPaged;
  else
    v6 = 0LL;
  if ( v6 )
  {
    v5 = *(_QWORD *)(v6 + 504);
    if ( v5 )
      v2 = *(_QWORD *)(v5 + 24);
  }
  v63[4] = v2;
  v7 = (__int64 *)W32GetCurrentThreadNonPaged(v5, v4);
  if ( v7 )
    v10 = *v7;
  else
    v10 = 0LL;
  v63[5] = v10;
  if ( v2 )
  {
    v11 = *(struct tagWND **)(v2 + 112);
    v14 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 63480);
    if ( v14 )
    {
      *(_QWORD *)(W32GetUserSessionState(v13, v12) + 63480) = 0LL;
LABEL_11:
      *(_QWORD *)(v14 + 8) = v14 + 32;
      *(_QWORD *)(v14 + 24) = v10;
      v17 = InternalBuildHwndList((struct tagBWL *)v14, v11, 2u);
      v18 = (_QWORD *)*((_QWORD *)v17 + 1);
      if ( (unsigned __int64)v18 >= *((_QWORD *)v17 + 2) )
      {
        Win32FreePool(v17);
        return;
      }
      *v18 = 1LL;
      v19 = (__int64 *)W32GetCurrentThreadNonPaged(v16, v15);
      if ( v19 )
        v21 = *v19;
      else
        v21 = 0LL;
      *((_QWORD *)v17 + 3) = v21;
      v22 = (__int64 *)W32GetCurrentThreadNonPaged(v21, v20);
      if ( v22 )
        v24 = *v22;
      else
        v24 = 0LL;
      *((_QWORD *)v17 + 3) = v24;
      v25 = *(_QWORD *)(W32GetUserSessionState(v24, v23) + 63288);
      *(_QWORD *)v17 = v25;
      *(_QWORD *)(W32GetUserSessionState(v25, v26) + 63288) = v17;
      v63[3] = (ULONG_PTR)v17;
      for ( i = (_QWORD *)((char *)v17 + 32); ; i = v62 + 1 )
      {
        v62 = i;
        if ( *i == 1LL
          || (v28 = ValidateHwnd(*i),
              v67 = (struct tagWND *)v28,
              (_InterlockedCompareExchange((volatile signed __int32 *)(v10 + 528), 0, 0) & 1) != 0) )
        {
          FreeHwndList(v17);
          return;
        }
        if ( v28 )
        {
          if ( *(_QWORD *)(v28 + 16) == v10 )
          {
            v65 = (ULONG64 *)unsafe_cast_class_to_PIMEWND(v28);
            if ( v65 )
              break;
          }
        }
LABEL_24:
        ;
      }
      v30 = *v65;
      v61 = *v65;
      v31 = MmUserProbeAddress;
      if ( v61 < MmUserProbeAddress )
        v31 = v61;
      v32 = *(_QWORD *)(v31 + 16);
      v33 = 0LL;
      W32GetCurrentThreadNonPaged(v30, v29);
      v37 = *(_QWORD *)(W32GetUserSessionState(v35, v34) + 19928);
      if ( (unsigned __int64)(unsigned __int16)v32 >= *(_QWORD *)(v37 + 8) )
      {
LABEL_33:
        if ( v33 )
        {
          Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(v63, v10, v28);
          Win32HMOptionalThreadLock<tagWND>::Win32HMOptionalThreadLock<tagWND>(&BugCheckParameter3, v10, (__int64)v33);
          do
          {
            if ( v33 == (_QWORD *)v2 )
              break;
            v47 = *v33;
            v46 = a1;
            v48 = *((_QWORD *)a1 + 5);
            v49 = *((_DWORD *)a1 + 7);
            while ( --v49 >= 0 )
            {
              if ( v47 == *(_QWORD *)v48 )
              {
                if ( (~*(_BYTE *)(v48 + 32) & 3) != 0 )
                  xxxSendMessage(v67, 0x287u);
                break;
              }
              v48 += 168LL;
            }
            if ( v49 >= 0 )
              break;
            v33 = (_QWORD *)v33[13];
            v50 = v60;
            v60 = v33;
            if ( v33 )
              HMLockObject(v33);
            if ( v50 )
              HMUnlockObject(v50);
          }
          while ( v33 );
          v51 = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v47, v46);
          if ( v51 )
            v52 = *v51;
          else
            v52 = 0LL;
          Win32HM_UnlockFromThread<1>(v52, &BugCheckParameter3);
          v60 = 0LL;
          BugCheckParameter3 = -1LL;
          v55 = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v54, v53);
          if ( v55 )
            v56 = *v55;
          else
            v56 = 0LL;
          Win32HM_UnlockFromThread<0>(v56, (ULONG_PTR)v63);
          v63[1] = 0LL;
          v63[0] = -1LL;
          Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(&BugCheckParameter3, v57);
          Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>((ULONG_PTR)v63);
        }
        goto LABEL_24;
      }
      UserSessionState = W32GetUserSessionState(v37, v36);
      v41 = *(_DWORD *)(W32GetUserSessionState(v40, v39) + 19952) * (unsigned int)(unsigned __int16)v32
          + *(_QWORD *)(UserSessionState + 19944);
      v43 = (_QWORD **)HMPkheFromPhe(v41);
      v66 = v43;
      LOWORD(v32) = WORD1(v32) & 0x7FFF;
      if ( (WORD1(v32) & 0x7FFF) != *(_WORD *)(v41 + 26) && (_WORD)v32 != 0x7FFF )
      {
        if ( (_WORD)v32 || !PsGetCurrentProcessWow64Process(v43, v42, v44) )
          goto LABEL_61;
        v43 = v66;
      }
      if ( (*(_BYTE *)(v41 + 25) & 1) == 0 )
      {
        v45 = *(_BYTE *)(v41 + 24) == 1;
        v28 = (__int64)v67;
        if ( v45 )
          v33 = *v43;
        goto LABEL_33;
      }
LABEL_61:
      v28 = (__int64)v67;
      goto LABEL_33;
    }
    v58 = Win32AllocPoolZInit(296LL, 1819767637LL);
    v14 = v58;
    if ( v58 )
    {
      *(_QWORD *)(v58 + 16) = v58 + 280;
      goto LABEL_11;
    }
  }
}
