/*
 * XREFs of ?xxxInterceptSetWindowPos@WindowActions@@YAXPEAUtagSMWP@@@Z @ 0x1402D0620
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x140076014 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140092DD0 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void __fastcall WindowActions::xxxInterceptSetWindowPos(WindowActions *this, struct tagSMWP *a2)
{
  __int64 v2; // r14
  char v3; // si
  int v5; // r13d
  __int64 v6; // rax
  __int64 v7; // r12
  char v8; // di
  __int64 v9; // rbx
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // rdx
  __int64 v14; // rcx
  char v15; // di
  char v16; // bl
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  int v20; // eax
  __int64 v21; // rax
  char v22; // di
  char v23; // bl
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  int v27; // eax
  char v28; // di
  char v29; // bl
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  int v33; // eax
  char v34; // di
  char v35; // bl
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  char v39; // di
  char v40; // bl
  __int64 v41; // rax
  int v42; // edx
  int v43; // r8d
  __int64 v44; // rax
  char v45; // di
  char v46; // bl
  __int64 v47; // rax
  int v48; // r8d
  int v49; // edx
  char v50; // di
  int v51; // ebx
  __int64 v52; // rax
  int v53; // r8d
  int v54; // edx
  int v55; // eax
  __int64 *v56; // rbx
  int v57; // edi
  struct tagTHREADINFO *v58; // rax
  __int64 v59; // rdx
  __int16 v60; // [rsp+38h] [rbp-79h]
  int v61; // [rsp+58h] [rbp-59h]
  ULONG_PTR BugCheckParameter3[3]; // [rsp+60h] [rbp-51h] BYREF
  int v63; // [rsp+78h] [rbp-39h] BYREF
  int v64; // [rsp+7Ch] [rbp-35h]
  int v65; // [rsp+80h] [rbp-31h]
  int v66; // [rsp+84h] [rbp-2Dh]
  int v67; // [rsp+88h] [rbp-29h]
  int v68; // [rsp+8Ch] [rbp-25h]
  int v69; // [rsp+90h] [rbp-21h]
  __int64 v70; // [rsp+98h] [rbp-19h]
  int v71; // [rsp+C8h] [rbp+17h]
  int v72; // [rsp+CCh] [rbp+1Bh]

  v2 = *((_QWORD *)this + 5);
  v3 = 0;
  v61 = 0;
  v5 = 0;
  if ( *((int *)this + 7) <= 0 )
    return;
  do
  {
    LOBYTE(a2) = 1;
    v6 = HMValidateHandleNoSecure(*(_QWORD *)v2, (__int64)a2);
    v7 = v6;
    if ( !v6 || (*(_DWORD *)(v2 + 32) & 0x1000000) != 0 || (*(_DWORD *)(v6 + 384) & 0x10) == 0 )
      goto LABEL_110;
    ++v5;
    *(_QWORD *)v2 = 0LL;
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u )
    {
      v3 = 1;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v8 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v8 = 0;
    }
    if ( v3 || v8 )
    {
      v9 = *(_QWORD *)v6;
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      LOBYTE(v11) = v8;
      LOBYTE(v12) = v3;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v12,
        v11,
        *(_QWORD *)(UserSessionState + 69416),
        5,
        4,
        36,
        (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
        v9);
    }
    memset_0(&v63, 0, 0x60uLL);
    if ( (*(_DWORD *)(v2 + 32) & 0x10) != 0 )
    {
      v3 = 0;
    }
    else
    {
      v63 = 16;
      v14 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u )
      {
        v3 = 0;
        v15 = 0;
      }
      else
      {
        v15 = 1;
        v3 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v16 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v16 = 0;
      }
      if ( v15 || v16 )
      {
        v17 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
        LOBYTE(v18) = v16;
        LOBYTE(v19) = v15;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v19,
          v18,
          *(_QWORD *)(v17 + 69416),
          5,
          4,
          37,
          (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids);
      }
    }
    v20 = *(_DWORD *)(v2 + 32);
    if ( (v20 & 4) == 0 )
    {
      v21 = *(_QWORD *)(v2 + 8);
      v63 |= 8u;
      v70 = v21;
      v14 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v22 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v22 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v23 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v23 = 0;
      }
      if ( v22 || v23 )
      {
        v24 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
        LOBYTE(v25) = v23;
        LOBYTE(v26) = v22;
        WPP_RECORDER_AND_TRACE_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v26,
          v25,
          *(_QWORD *)(v24 + 69416),
          5,
          4,
          38,
          (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
          v70);
      }
      v20 = *(_DWORD *)(v2 + 32);
      if ( (v20 & 0x200) != 0 )
        v64 |= 0x10u;
    }
    if ( (v20 & 2) == 0 )
    {
      v27 = *(_DWORD *)(v2 + 16);
      v63 |= 2u;
      v66 = v27;
      v67 = *(_DWORD *)(v2 + 20);
      v14 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v28 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v28 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v29 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v29 = 0;
      }
      if ( v28 || v29 )
      {
        v30 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
        LOBYTE(v31) = v29;
        LOBYTE(v32) = v28;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v32,
          v31,
          *(_QWORD *)(v30 + 69416),
          5,
          4,
          39,
          (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
          v66,
          v67);
      }
    }
    if ( (*(_DWORD *)(v2 + 32) & 1) == 0 )
    {
      v33 = *(_DWORD *)(v2 + 24);
      v63 |= 4u;
      v68 = v33;
      v69 = *(_DWORD *)(v2 + 28);
      v14 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v34 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v34 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v35 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v35 = 0;
      }
      if ( v34 || v35 )
      {
        v36 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
        LOBYTE(v37) = v35;
        LOBYTE(v38) = v34;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v38,
          v37,
          *(_QWORD *)(v36 + 69416),
          5,
          4,
          40,
          (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
          v68,
          v69);
      }
    }
    a2 = (struct tagSMWP *)*(unsigned int *)(v2 + 32);
    if ( (*(_BYTE *)(*(_QWORD *)(v7 + 40) + 31LL) & 0x10) != 0 )
    {
      if ( (char)a2 >= 0 )
        goto LABEL_87;
      v63 |= 1u;
      v65 = 0;
      v14 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v39 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v39 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v40 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v40 = 0;
      }
      if ( !v39 && !v40 )
        goto LABEL_87;
      v41 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      v60 = 42;
    }
    else
    {
      if ( ((unsigned __int8)a2 & 0x40) == 0 )
        goto LABEL_87;
      v63 |= 1u;
      v65 = 1;
      v14 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v39 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v39 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v40 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v40 = 0;
      }
      if ( !v39 && !v40 )
        goto LABEL_87;
      v41 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      v60 = 41;
    }
    LOBYTE(v43) = v40;
    LOBYTE(v42) = v39;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v42,
      v43,
      *(_QWORD *)(v41 + 69416),
      5,
      4,
      v60,
      (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids);
LABEL_87:
    if ( (*(_DWORD *)(v2 + 156) & 0x200) != 0 )
    {
      v44 = ValidateHmonitor(*(_QWORD *)(v2 + 128));
      v64 |= 0x400u;
      a2 = (struct tagSMWP *)*(unsigned int *)(*(_QWORD *)(v44 + 40) + 44LL);
      v71 = *(_DWORD *)(*(_QWORD *)(v44 + 40) + 44LL);
      v72 = *(_DWORD *)(*(_QWORD *)(v44 + 40) + 48LL);
      v14 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v45 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v45 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v46 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v46 = 0;
      }
      if ( v45 || v46 )
      {
        v47 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
        LOBYTE(v48) = v46;
        LOBYTE(v49) = v45;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v49,
          v48,
          *(_QWORD *)(v47 + 69416),
          5,
          4,
          43,
          (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
          v71,
          v72);
      }
    }
    if ( v63 )
    {
      v58 = PtiCurrent(v14, (__int64)a2);
      Win32HM_LockIntoThread<0>((__int64)v58, v7, BugCheckParameter3);
      xxxSendTransformableMessageTimeout(
        (struct tagTHREADINFO **)v7,
        838LL,
        0LL,
        (struct tagDRAWITEMSTRUCT *)&v63,
        0,
        0,
        0LL,
        1,
        1);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v59);
    }
    else
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u )
      {
        v3 = 1;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v50 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v50 = 0;
      }
      if ( v3 || v50 )
      {
        v51 = *(_DWORD *)(v2 + 32);
        v52 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
        LOBYTE(v53) = v50;
        LOBYTE(v54) = v3;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v54,
          v53,
          *(_QWORD *)(v52 + 69416),
          5,
          4,
          44,
          (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
          v51);
      }
      v3 = 0;
    }
LABEL_110:
    v55 = *((_DWORD *)this + 7);
    v2 += 168LL;
    ++v61;
  }
  while ( v61 < v55 );
  if ( v5 > 0 && v5 < v55 )
  {
    v56 = (__int64 *)*((_QWORD *)this + 5);
    v57 = 0;
    if ( v55 > 0 )
    {
      do
      {
        if ( *v56 )
        {
          LOBYTE(a2) = 1;
          if ( !HMValidateHandleNoSecure(*v56, (__int64)a2) )
            *v56 = 0LL;
        }
        v56 += 21;
        ++v57;
      }
      while ( v57 < *((_DWORD *)this + 7) );
    }
  }
}
