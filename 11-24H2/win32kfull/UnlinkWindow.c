/*
 * XREFs of UnlinkWindow @ 0x140075240
 * Callers:
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x14002E5E8 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140088950 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     SetWindowGroupBand @ 0x1401571C4 (SetWindowGroupBand.c)
 *     ?ImeSetTopmost@@YAXPEAUtagWND@@H0@Z @ 0x140170D90 (-ImeSetTopmost@@YAXPEAUtagWND@@H0@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x14022D690 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxDestroyWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x1402B4438 (-xxxDestroyWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     DirtyVisRgnTrackers @ 0x1400497E8 (DirtyVisRgnTrackers.c)
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x140062E44 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 *     IsDesktopWindow @ 0x140075580 (IsDesktopWindow.c)
 *     IsMessageParentWindow @ 0x1400755A8 (IsMessageParentWindow.c)
 */

LONG_PTR __fastcall UnlinkWindow(struct tagWND *a1, __int64 *a2)
{
  int v4; // r15d
  __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 *v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  LONG_PTR result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  void *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 *v28; // r8
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 *v31; // [rsp+20h] [rbp-50h] BYREF
  __int64 v32; // [rsp+28h] [rbp-48h]
  _OWORD v33[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v34; // [rsp+50h] [rbp-20h]
  int v35; // [rsp+58h] [rbp-18h]
  _QWORD v36[2]; // [rsp+5Ch] [rbp-14h]

  if ( (*((_DWORD *)a1 + 95) & 0x2000000) == 0
    || !(unsigned int)IsWindowDesktopComposed(a1)
    || (unsigned int)IsDesktopWindow(a1)
    || (unsigned int)IsMessageParentWindow()
    || a2 == *(__int64 **)(W32GetUserSessionState(v24, v23) + 68728) )
  {
    v4 = 0;
  }
  else
  {
    v4 = 1;
    DirtyVisRgnTrackers(a1, v25);
  }
  v5 = (__int64 *)((char *)a1 + 88);
  if ( (struct tagWND *)a2[14] == a1 )
  {
    v6 = *v5;
    if ( *v5 )
      v7 = *(_QWORD *)(v6 + 48);
    else
      v7 = 0LL;
    *(_QWORD *)(a2[5] + 56) = v7;
    v31 = a2 + 14;
    v32 = v6;
LABEL_7:
    HMAssignmentLock(&v31, 0LL);
    goto LABEL_8;
  }
  v26 = *((_QWORD *)a1 + 12);
  if ( v26 )
  {
    v27 = *v5;
    v28 = (__int64 *)(v26 + 88);
    v29 = *(_QWORD *)(v26 + 40);
    if ( *v5 )
      v30 = *(_QWORD *)(v27 + 48);
    else
      v30 = 0LL;
    *(_QWORD *)(v29 + 72) = v30;
    v31 = v28;
    v32 = v27;
    goto LABEL_7;
  }
LABEL_8:
  v8 = (__int64 *)((char *)a1 + 96);
  v9 = *v5;
  if ( *v5 )
  {
    v10 = *v8;
    v11 = (__int64 *)(v9 + 96);
    v12 = *(_QWORD *)(v9 + 40);
    if ( *v8 )
      v13 = *(_QWORD *)(v10 + 48);
    else
      v13 = 0LL;
    *(_QWORD *)(v12 + 80) = v13;
    v32 = v10;
    v31 = v11;
    HMAssignmentLock(&v31, 0LL);
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 72LL) = 0LL;
    HMAssignmentUnlock((char *)a1 + 88);
  }
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 80LL) = 0LL;
  result = HMAssignmentUnlock((char *)a1 + 96);
  *((_DWORD *)a1 + 95) &= 0xFCFFFFFF;
  if ( v4 )
  {
    v17 = *a2;
    v18 = *(_QWORD *)a1;
    v19 = (void *)ReferenceDwmApiPort(v16, v15);
    result = IncrementDWMWindowUniqueness(v21, v20, v22);
    if ( v19 )
    {
      memset(v33, 0, sizeof(v33));
      WORD2(v33[0]) = 0x8000;
      v34 = 0LL;
      LODWORD(v33[0]) = 3932180;
      v35 = 1073741843;
      v36[0] = v18;
      v36[1] = v17;
      LpcRequestPort(v19, v33);
      return ObfDereferenceObject(v19);
    }
  }
  return result;
}
