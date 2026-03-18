/*
 * XREFs of FindQMsg @ 0x14008E400
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x14002E8AC (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z @ 0x14023D790 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DelQEntry @ 0x14008E870 (DelQEntry.c)
 *     HMValidateHandleNoRip @ 0x14008ED8C (HMValidateHandleNoRip.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1401532E0 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     ?CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z @ 0x14020B878 (-CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z.c)
 *     FreeDdeXact @ 0x140269EC0 (FreeDdeXact.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 *__fastcall FindQMsg(
        struct tagTHREADINFO *a1,
        struct tagMLIST *a2,
        _QWORD *a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  __int64 *v6; // r12
  struct tagMLIST *v8; // rdi
  struct tagTHREADINFO *v9; // r15
  __int64 v10; // rsi
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 UserSessionState; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  _QWORD *v20; // r15
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rax
  struct tagTHREADINFO *v25; // rax
  __int64 v26; // rdx
  bool v27; // bp
  bool v28; // r15
  __int64 *v29; // rax
  __int64 v30; // rsi
  unsigned __int8 v31; // al
  __int64 v32; // rdi
  char v33; // bl
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 *v38; // [rsp+60h] [rbp-48h]
  struct tagTHREADINFO *v39; // [rsp+B0h] [rbp+8h]
  struct tagMLIST *v40; // [rsp+B8h] [rbp+10h]

  v40 = a2;
  v39 = a1;
  v6 = *(__int64 **)a2;
  v8 = a2;
  v9 = a1;
  v38 = 0LL;
  while ( v6 )
  {
    v10 = v6[2];
    v11 = 0LL;
    W32GetCurrentThreadNonPaged(a1, a2);
    a1 = *(struct tagTHREADINFO **)(W32GetUserSessionState(v13, v12) + 19928);
    if ( (unsigned __int64)(unsigned __int16)v10 < *((_QWORD *)a1 + 1) )
    {
      UserSessionState = W32GetUserSessionState(a1, a2);
      v19 = *(_DWORD *)(W32GetUserSessionState(v18, v17) + 19952) * (unsigned int)(unsigned __int16)v10
          + *(_QWORD *)(UserSessionState + 19944);
      LOWORD(v10) = WORD1(v10) & 0x7FFF;
      v20 = (_QWORD *)HMPkheFromPhe(v19);
      if ( ((WORD1(v10) & 0x7FFF) == *(_WORD *)(v19 + 26)
         || (_WORD)v10 == 0x7FFF
         || !(_WORD)v10 && PsGetCurrentProcessWow64Process(a1, a2, v14))
        && (*(_BYTE *)(v19 + 25) & 1) == 0
        && *(_BYTE *)(v19 + 24) == 1 )
      {
        v11 = (_QWORD *)*v20;
        if ( *v20 )
          goto LABEL_8;
      }
      v8 = v40;
      v9 = v39;
    }
    if ( v6[2] )
    {
      if ( *((_DWORD *)v6 + 6) == 786 )
        CheckRemoveHotkeyBit(v9, v8);
      v22 = *((_QWORD *)v9 + 59);
      if ( *(__int64 **)(v22 + 80) == v6 && *(struct tagTHREADINFO **)(v22 + 72) == v9 )
      {
        EtwTraceInputQueueUnLocked();
        v27 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
        v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v27 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v30 = *(_QWORD *)(*((_QWORD *)v39 + 59) + 72LL);
          v31 = (unsigned __int8)PtiCurrent(*(__int64 *)&WPP_GLOBAL_Control, v26);
          v32 = *((_QWORD *)v39 + 59);
          v33 = v31;
          v36 = W32GetUserSessionState(v35, v34);
          WPP_RECORDER_AND_TRACE_SF_qqq(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v27,
            v28,
            *(_QWORD *)(v36 + 69416),
            4,
            18,
            28,
            (__int64)&WPP_097ed2134af63c79f9965b85d38c414a_Traceguids,
            v32,
            v33,
            v30);
        }
        v9 = v39;
        v8 = v40;
        *(_QWORD *)(*((_QWORD *)v39 + 59) + 72LL) = 0LL;
      }
LABEL_22:
      DelQEntry(v8, v6, 1LL);
      v6 = *(__int64 **)v8;
    }
    else
    {
LABEL_8:
      if ( a6 )
      {
        v24 = a3 ? *a3 : 0LL;
        if ( v24 == v6[2] && *((_DWORD *)v6 + 6) == -2147482652 )
        {
          LOBYTE(a2) = 11;
          v25 = (struct tagTHREADINFO *)HMValidateHandleNoRip(v6[5], a2, v14, v15);
          a1 = v25;
          if ( v25 )
          {
            if ( (*((_DWORD *)v25 + 16) & 0x200) != 0 )
            {
              FreeDdeXact(v25);
              v9 = v39;
              v8 = v40;
              goto LABEL_22;
            }
          }
        }
      }
      if ( !a3 || a3 == v11 || a3 == (_QWORD *)1 && !v11 )
        goto LABEL_10;
      while ( v11 )
      {
        a1 = (struct tagTHREADINFO *)*(unsigned __int8 *)(v11[5] + 31LL);
        LOBYTE(a1) = (unsigned __int8)a1 & 0xC0;
        if ( (_BYTE)a1 != 64 )
          break;
        v11 = (_QWORD *)v11[13];
        if ( a3 == v11 )
        {
          v23 = 1;
          goto LABEL_29;
        }
      }
      v23 = 0;
LABEL_29:
      if ( v23 )
      {
LABEL_10:
        a1 = (struct tagTHREADINFO *)*((unsigned int *)v6 + 6);
        if ( (unsigned int)((_DWORD)a1 + 2147482655) <= 7 )
          LODWORD(a1) = (unsigned int)a1 & 0x7FFFFFFF;
        if ( !a4 )
        {
          if ( a5 != -1 )
            goto LABEL_14;
          goto LABEL_15;
        }
        if ( a4 <= a5 )
        {
          if ( (unsigned int)a1 < a4 )
            goto LABEL_30;
LABEL_14:
          if ( (unsigned int)a1 > a5 )
            goto LABEL_30;
LABEL_15:
          if ( !a6 )
            return v6;
          v29 = v38;
          if ( !v38 )
            v29 = v6;
          v38 = v29;
          goto LABEL_30;
        }
        if ( (unsigned int)a1 < a5 || (unsigned int)a1 > a4 )
          goto LABEL_15;
        v6 = (__int64 *)*v6;
        v8 = v40;
        v9 = v39;
      }
      else
      {
LABEL_30:
        v6 = (__int64 *)*v6;
        v8 = v40;
        v9 = v39;
      }
    }
  }
  return v38;
}
