/*
 * XREFs of xxxInternalDoSyncPaint @ 0x140047490
 * Callers:
 *     xxxInternalDoSyncPaint @ 0x140047490 (xxxInternalDoSyncPaint.c)
 *     xxxDoSyncPaint @ 0x1401A7398 (xxxDoSyncPaint.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxInternalDoSyncPaint @ 0x140047490 (xxxInternalDoSyncPaint.c)
 *     xxxSimpleDoSyncPaint @ 0x1400477B0 (xxxSimpleDoSyncPaint.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x140048130 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     FreeHwndList @ 0x140048500 (FreeHwndList.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall xxxInternalDoSyncPaint(struct tagWND *a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagWND *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  struct tagBWL *v10; // rax
  __int64 v11; // rdx
  struct tagBWL *v12; // r12
  _QWORD *v13; // rcx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r15
  __int64 v26; // rdi
  _QWORD *i; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 UserSessionState; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rbp
  ULONG_PTR *v34; // rbx
  __int64 v35; // r8
  ULONG_PTR v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  ULONG_PTR *v39; // rax
  ULONG_PTR v40; // rcx
  __int64 v41; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-38h] BYREF

  xxxSimpleDoSyncPaint(a1);
  if ( (a2 & 0x20) != 0 || (a2 & 4) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 2) != 0 )
  {
    v6 = (struct tagWND *)*((_QWORD *)a1 + 14);
    v9 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 63480);
    if ( v9 )
    {
      *(_QWORD *)(W32GetUserSessionState(v8, v7) + 63480) = 0LL;
    }
    else
    {
      v41 = Win32AllocPoolZInit(296LL, 1819767637LL);
      v9 = v41;
      if ( !v41 )
        return;
      *(_QWORD *)(v41 + 16) = v41 + 280;
    }
    *(_QWORD *)(v9 + 8) = v9 + 32;
    *(_QWORD *)(v9 + 24) = 0LL;
    v10 = InternalBuildHwndList((struct tagBWL *)v9, v6, 2u);
    v12 = v10;
    v13 = (_QWORD *)*((_QWORD *)v10 + 1);
    if ( (unsigned __int64)v13 >= *((_QWORD *)v10 + 2) )
    {
      Win32FreePool(v10);
    }
    else
    {
      *v13 = 1LL;
      CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v13, v11);
      if ( CurrentThreadNonPaged )
        v15 = *CurrentThreadNonPaged;
      else
        v15 = 0LL;
      *((_QWORD *)v12 + 3) = v15;
      *((_QWORD *)v12 + 3) = PtiCurrent();
      v18 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 63288);
      *(_QWORD *)v12 = v18;
      *(_QWORD *)(W32GetUserSessionState(v18, v19) + 63288) = v12;
      v22 = (__int64 *)W32GetCurrentThreadNonPaged(v21, v20);
      if ( v22 )
        v25 = *v22;
      else
        v25 = 0LL;
      v26 = *((_QWORD *)v12 + 4);
      for ( i = (_QWORD *)((char *)v12 + 32); v26 != 1; ++i )
      {
        if ( v26 )
        {
          W32GetCurrentThreadNonPaged(v24, v23);
          v24 = *(_QWORD *)(W32GetUserSessionState(v29, v28) + 19928);
          if ( (unsigned __int64)(unsigned __int16)v26 < *(_QWORD *)(v24 + 8) )
          {
            UserSessionState = W32GetUserSessionState(v24, v23);
            v33 = *(_QWORD *)(UserSessionState + 19944)
                + *(_DWORD *)(W32GetUserSessionState(v32, v31) + 19952) * (unsigned int)(unsigned __int16)v26;
            v34 = (ULONG_PTR *)HMPkheFromPhe(v33);
            LOWORD(v26) = WORD1(v26) & 0x7FFF;
            if ( ((WORD1(v26) & 0x7FFF) == *(_WORD *)(v33 + 26)
               || (_WORD)v26 == 0x7FFF
               || !(_WORD)v26 && PsGetCurrentProcessWow64Process(v24, v23, v35))
              && (*(_BYTE *)(v33 + 25) & 1) == 0
              && *(_BYTE *)(v33 + 24) == 1 )
            {
              v36 = *v34;
              if ( v36 )
              {
                if ( (*(_BYTE *)(*(_QWORD *)(v36 + 40) + 31LL) & 0x40) == 0 || v25 == *(_QWORD *)(v36 + 16) )
                {
                  BugCheckParameter3[0] = *(_QWORD *)(v25 + 456);
                  *(_QWORD *)(v25 + 456) = BugCheckParameter3;
                  BugCheckParameter3[1] = v36;
                  HMLockObject(v36);
                  xxxInternalDoSyncPaint(v36, a2);
                  v39 = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v38, v37);
                  if ( v39 )
                    v40 = *v39;
                  else
                    v40 = 0LL;
                  Win32HM_UnlockFromThread<0>(v40, (ULONG_PTR)BugCheckParameter3);
                }
              }
            }
          }
        }
        v26 = i[1];
      }
      FreeHwndList(v12);
    }
  }
}
