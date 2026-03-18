/*
 * XREFs of ?zzzSetWindowsHookEx_New@@YAPEAUHHOOK__@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z @ 0x140283CE0
 * Callers:
 *     ?zzzSetWindowsHookAW_New@@YAPEAUHHOOK__@@HP6A_JXZW4tagHookFlags@@@Z @ 0x140283C58 (-zzzSetWindowsHookAW_New@@YAPEAUHHOOK__@@HP6A_JXZW4tagHookFlags@@@Z.c)
 *     NtUserSetWindowsHookEx @ 0x14029F7A0 (NtUserSetWindowsHookEx.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x140078964 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     GetHmodTableIndex @ 0x140083C34 (GetHmodTableIndex.c)
 *     AddHmodDependency @ 0x140083E60 (AddHmodDependency.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400840AC (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@@QEAA@XZ @ 0x140084510 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x140148CA4 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x140274ECC (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall zzzSetWindowsHookEx_New(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, char a6, _DWORD *a7)
{
  __int64 v7; // r12
  __int64 v10; // rdx
  bool v11; // di
  bool v12; // si
  int v13; // edx
  int v14; // r8d
  __int64 v15; // r9
  struct tagTHREADINFO *v16; // rax
  struct tagTHREADINFO *v17; // r13
  __int64 v18; // rdx
  int v19; // ecx
  __int64 v20; // rdx
  bool v21; // di
  bool v22; // si
  int v23; // edx
  int v24; // r8d
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rdx
  UIPrivilegeIsolation *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdx
  bool v32; // r14
  __int64 v33; // rdx
  bool v34; // di
  bool v35; // si
  __int64 UserSessionState; // rax
  int v37; // r8d
  int v38; // edx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rdx
  bool v42; // di
  bool v43; // si
  __int64 v44; // rax
  int v45; // r8d
  int v46; // edx
  int HmodTableIndex; // eax
  __int64 v48; // rdx
  bool v49; // di
  bool v50; // si
  __int64 v51; // rax
  int v52; // r8d
  int v53; // edx
  char v54; // di
  int v55; // edx
  __int64 v56; // r8
  __int64 *v57; // r12
  PRKPROCESS *v58; // rcx
  int v59; // edx
  int v60; // r13d
  __int64 v61; // rax
  __int64 v62; // rcx
  bool v63; // si
  __int64 v64; // rax
  int v65; // r8d
  int v66; // edx
  __int64 v67; // rbx
  __int64 v69; // rdx
  __int16 v70; // [rsp+30h] [rbp-158h]
  __int16 v71; // [rsp+30h] [rbp-158h]
  char v72; // [rsp+40h] [rbp-148h]
  __int64 v76; // [rsp+80h] [rbp-108h]
  _BYTE v77[48]; // [rsp+B8h] [rbp-D0h] BYREF
  _BYTE v78[48]; // [rsp+E8h] [rbp-A0h] BYREF
  _BYTE v79[48]; // [rsp+118h] [rbp-70h] BYREF

  v7 = a4;
  if ( (unsigned int)(a4 + 1) > 0xF )
  {
    UserSetLastError(1426);
    v21 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
    v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v21 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v25 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v69) + 69416);
    v72 = v7;
    v71 = 10;
    goto LABEL_136;
  }
  if ( !a5 )
  {
    UserSetLastError(1427);
    v11 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v15 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v10) + 69416);
    v70 = 11;
    goto LABEL_83;
  }
  v16 = PtiCurrent(15LL, a2);
  v17 = v16;
  if ( a3 )
  {
    v19 = *((_DWORD *)&unk_140353510 + v7 + 1);
    if ( (v19 & 2) != 0 )
    {
      if ( *(_QWORD *)(a3 + 496) == *((_QWORD *)v16 + 62) )
      {
        if ( *((_QWORD *)v16 + 58) == *(_QWORD *)(a3 + 464) )
          goto LABEL_74;
        if ( a1 || (v19 & 0x20) != 0 )
        {
          if ( !(unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline()
            && !UIPrivilegeIsolation::Enforced(v28) )
          {
            v29 = *(_QWORD *)(a3 + 464);
            v30 = *((_QWORD *)v17 + 58);
            if ( (*(_DWORD *)(v29 + 772) != *(_DWORD *)(v30 + 772) || *(_DWORD *)(v29 + 776) != *(_DWORD *)(v30 + 776))
              && (_InterlockedCompareExchange((volatile signed __int32 *)(a3 + 528), 0, 0) & 0x400000) == 0 )
            {
              UserSetLastError(5);
              v11 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
                 && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) != 0
                 && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
              v32 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
                return 0LL;
              v15 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v31) + 69416);
              v70 = 16;
              LOBYTE(v14) = v32;
              goto LABEL_84;
            }
          }
          if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a3 + 528), 0, 0) & 0xC) != 0
            && (*((_DWORD *)&unk_140353510 + v7 + 1) & 0x10) == 0 )
          {
            UserSetLastError(1458);
            v34 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
               && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) != 0
               && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
            v35 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v34 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v33);
              LOBYTE(v37) = v35;
              LOBYTE(v38) = v34;
              WPP_RECORDER_AND_TRACE_SF_d(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v38,
                v37,
                *(_QWORD *)(UserSessionState + 69416),
                3,
                5,
                17,
                (__int64)&WPP_55a9d3539d723e79cd67d5f5f09277a6_Traceguids,
                v7);
            }
            return 0LL;
          }
          goto LABEL_74;
        }
        UserSetLastError(5);
        v11 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
        v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0LL;
        v15 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v27) + 69416);
        v70 = 15;
      }
      else
      {
        UserSetLastError(5);
        v11 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
        v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0LL;
        v15 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v26) + 69416);
        v70 = 14;
      }
LABEL_83:
      LOBYTE(v14) = v12;
LABEL_84:
      LOBYTE(v13) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v13,
        v14,
        v15,
        3,
        5,
        v70,
        (__int64)&WPP_55a9d3539d723e79cd67d5f5f09277a6_Traceguids);
      return 0LL;
    }
    UserSetLastError(1429);
    v21 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
    v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v21 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v25 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v20) + 69416);
    v72 = v7;
    v71 = 13;
LABEL_136:
    LOBYTE(v24) = v22;
    LOBYTE(v23) = v21;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v23,
      v24,
      v25,
      3,
      5,
      v71,
      (__int64)&WPP_55a9d3539d723e79cd67d5f5f09277a6_Traceguids,
      v72);
    return 0LL;
  }
  if ( !a1 && (*((_DWORD *)&unk_140353510 + v7 + 1) & 0x20) == 0 )
  {
    UserSetLastError(1428);
    v11 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v15 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v18) + 69416);
    v70 = 12;
    goto LABEL_83;
  }
LABEL_74:
  if ( !RtlAreAllAccessesGranted(*((_DWORD *)v17 + 234), 8u) )
  {
    UserSetLastError(5);
    v11 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v15 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v39) + 69416);
    v70 = 18;
    goto LABEL_83;
  }
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::ObjectLock<>((__int64)v77);
  DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::ObjectLock<>((__int64)v78);
  LOBYTE(v40) = 5;
  v76 = HMAllocObject(v17, *((_QWORD *)v17 + 62), v40, 104LL);
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v78);
  if ( !v76 )
  {
    v42 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
    v43 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v42 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v44 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v41);
      LOBYTE(v45) = v43;
      LOBYTE(v46) = v42;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v46,
        v45,
        *(_QWORD *)(v44 + 69416),
        2,
        5,
        19,
        (__int64)&WPP_55a9d3539d723e79cd67d5f5f09277a6_Traceguids);
    }
LABEL_94:
    DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v77);
    return 0LL;
  }
  *(_DWORD *)(v76 + 68) = -1;
  if ( a1 )
  {
    HmodTableIndex = GetHmodTableIndex(a2);
    *(_DWORD *)(v76 + 68) = HmodTableIndex;
    if ( HmodTableIndex == -1 )
    {
      UserSetLastError(126);
      v49 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
      v50 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v49 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v51 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v48);
        LOBYTE(v52) = v50;
        LOBYTE(v53) = v49;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v53,
          v52,
          *(_QWORD *)(v51 + 69416),
          3,
          5,
          20,
          (__int64)&WPP_55a9d3539d723e79cd67d5f5f09277a6_Traceguids);
      }
      DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::ObjectLock<>((__int64)v79);
      HMFreeObject(v76);
      DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v79);
      goto LABEL_94;
    }
    if ( HmodTableIndex >= 0 )
      AddHmodDependency(HmodTableIndex);
  }
  v54 = 1;
  v55 = 1 << (v7 + 1);
  v56 = 8LL * ((int)v7 + 1);
  if ( a3 )
  {
    v57 = (__int64 *)(v56 + a3 + 960);
    *(_DWORD *)(a3 + 720) |= v55;
    if ( *(_QWORD *)(a3 + 520) )
    {
      v58 = *(PRKPROCESS **)(a3 + 464);
      if ( v58 == *((PRKPROCESS **)v17 + 58) )
      {
        v59 = 0;
      }
      else
      {
        KeAttachProcess(*v58);
        v59 = 1;
      }
      *(_DWORD *)(*(_QWORD *)(a3 + 520) + 56LL) = *(_DWORD *)(a3 + 720);
      v60 = a4;
      if ( v59 )
        KeDetachProcess();
    }
    else
    {
      v60 = a4;
    }
    v61 = v76;
  }
  else
  {
    v57 = (__int64 *)(v56 + *((_QWORD *)v17 + 63) + 40LL);
    *(_DWORD *)(v76 + 64) |= 1u;
    *(_DWORD *)(**((_QWORD **)v17 + 63) + 16LL) |= v55;
    a3 = 0LL;
    v61 = v76;
    v60 = a4;
  }
  *(_QWORD *)(v61 + 72) = a3;
  *(_DWORD *)(v76 + 64) |= a6 & 0x42;
  *(_DWORD *)(v76 + 48) = v60;
  *(_QWORD *)(v76 + 56) = a5 - a1;
  v62 = *v57;
  *(_QWORD *)(v76 + 40) = *v57;
  if ( a7 )
    *a7 = v62 == 0;
  *v57 = v76;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v54 = 0;
  }
  v63 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v54 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v64 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, a7);
    LOBYTE(v65) = v63;
    LOBYTE(v66) = v54;
    WPP_RECORDER_AND_TRACE_SF_qDD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v66,
      v65,
      *(_QWORD *)(v64 + 69416));
  }
  v67 = *(_QWORD *)v76;
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v77);
  return v67;
}
