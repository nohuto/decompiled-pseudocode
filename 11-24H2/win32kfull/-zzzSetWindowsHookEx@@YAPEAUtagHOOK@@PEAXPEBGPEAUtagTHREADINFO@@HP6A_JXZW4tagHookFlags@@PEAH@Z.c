/*
 * XREFs of ?zzzSetWindowsHookEx@@YAPEAUtagHOOK@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z @ 0x1402396A8
 * Callers:
 *     ?zzzSetWindowsHookAW@@YAP6A_JXZHP6A_JXZW4tagHookFlags@@@Z @ 0x140283BD0 (-zzzSetWindowsHookAW@@YAP6A_JXZHP6A_JXZW4tagHookFlags@@@Z.c)
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

__int64 __fastcall zzzSetWindowsHookEx(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, char a6, _DWORD *a7)
{
  __int64 v7; // r12
  __int64 v9; // rdi
  __int64 v10; // rdx
  bool v11; // di
  bool v12; // si
  int v13; // edx
  int v14; // r8d
  __int64 v15; // r9
  struct tagTHREADINFO *v16; // rax
  struct tagTHREADINFO *v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
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
  __int64 v32; // rdx
  bool v33; // di
  bool v34; // si
  __int64 UserSessionState; // rax
  int v36; // r8d
  int v37; // edx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rdx
  int HmodTableIndex; // eax
  __int64 v42; // rdx
  bool v43; // di
  bool v44; // si
  __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  char v48; // di
  int v49; // edx
  __int64 v50; // r8
  __int64 *v51; // r15
  PRKPROCESS *v52; // rcx
  int v53; // edx
  int v54; // r13d
  __int64 v55; // r12
  __int64 v56; // rcx
  bool v57; // si
  __int64 v58; // rax
  int v59; // r8d
  int v60; // edx
  __int64 v62; // rdx
  char v63; // [rsp+20h] [rbp-168h]
  __int16 v64; // [rsp+30h] [rbp-158h]
  __int16 v65; // [rsp+30h] [rbp-158h]
  char v66; // [rsp+40h] [rbp-148h]
  __int64 v70; // [rsp+78h] [rbp-110h]
  _BYTE v71[48]; // [rsp+B8h] [rbp-D0h] BYREF
  _BYTE v72[48]; // [rsp+E8h] [rbp-A0h] BYREF
  _BYTE v73[48]; // [rsp+118h] [rbp-70h] BYREF

  v7 = a4;
  v9 = a1;
  if ( (unsigned int)(a4 + 1) > 0xF )
  {
    UserSetLastError(1426);
    v21 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
    v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v21 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v25 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v62) + 69416);
    v66 = v7;
    v65 = 22;
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
    v64 = 23;
    goto LABEL_84;
  }
  v16 = PtiCurrent(a1, a2);
  v17 = v16;
  if ( a3 )
  {
    v19 = *((unsigned int *)&unk_140353510 + v7 + 1);
    if ( (v19 & 2) != 0 )
    {
      if ( *(_QWORD *)(a3 + 496) == *((_QWORD *)v16 + 62) )
      {
        if ( *((_QWORD *)v16 + 58) == *(_QWORD *)(a3 + 464) )
          goto LABEL_74;
        if ( a1 || (v19 & 0x20) != 0 )
        {
          if ( (unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline(v19)
            || UIPrivilegeIsolation::Enforced(v28)
            || (v29 = *(_QWORD *)(a3 + 464),
                v30 = *((_QWORD *)v17 + 58),
                *(_DWORD *)(v29 + 772) == *(_DWORD *)(v30 + 772))
            && *(_DWORD *)(v29 + 776) == *(_DWORD *)(v30 + 776)
            || (_InterlockedCompareExchange((volatile signed __int32 *)(a3 + 528), 0, 0) & 0x400000) != 0 )
          {
            if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a3 + 528), 0, 0) & 0xC) != 0
              && (*((_DWORD *)&unk_140353510 + v7 + 1) & 0x10) == 0 )
            {
              UserSetLastError(1458);
              v33 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
                 && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) != 0
                 && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
              v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( v33 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v32);
                LOBYTE(v36) = v34;
                LOBYTE(v37) = v33;
                WPP_RECORDER_AND_TRACE_SF_d(
                  *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                  v37,
                  v36,
                  *(_QWORD *)(UserSessionState + 69416),
                  3,
                  5,
                  29,
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
          v15 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v31) + 69416);
          v64 = 28;
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
          v15 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v27) + 69416);
          v64 = 27;
        }
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
        v64 = 26;
      }
LABEL_84:
      v63 = 3;
LABEL_94:
      LOBYTE(v14) = v12;
      LOBYTE(v13) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v13,
        v14,
        v15,
        v63,
        5,
        v64,
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
    v66 = v7;
    v65 = 25;
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
      v65,
      (__int64)&WPP_55a9d3539d723e79cd67d5f5f09277a6_Traceguids,
      v66);
    return 0LL;
  }
  if ( v9 )
    goto LABEL_75;
  if ( (*((_DWORD *)&unk_140353510 + v7 + 1) & 0x20) == 0 )
  {
    UserSetLastError(1428);
    v11 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v15 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v18) + 69416);
    v64 = 24;
    goto LABEL_84;
  }
LABEL_74:
  v9 = a1;
LABEL_75:
  if ( !RtlAreAllAccessesGranted(*((_DWORD *)v17 + 234), 8u) )
  {
    UserSetLastError(5);
    v11 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v15 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v38) + 69416);
    v64 = 30;
    goto LABEL_84;
  }
  DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::ObjectLock<>((__int64)v71);
  LOBYTE(v39) = 5;
  v70 = HMAllocObject(v17, *((_QWORD *)v17 + 62), v39, 104LL);
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v71);
  if ( !v70 )
  {
    v11 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v11 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v15 = *(_QWORD *)(W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v40) + 69416);
    v64 = 31;
    v63 = 2;
    goto LABEL_94;
  }
  *(_DWORD *)(v70 + 68) = -1;
  if ( v9 )
  {
    HmodTableIndex = GetHmodTableIndex(a2);
    *(_DWORD *)(v70 + 68) = HmodTableIndex;
    if ( HmodTableIndex == -1 )
    {
      UserSetLastError(126);
      v43 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
      v44 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v43 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v45 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v42);
        LOBYTE(v46) = v44;
        LOBYTE(v47) = v43;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v47,
          v46,
          *(_QWORD *)(v45 + 69416),
          3,
          5,
          32,
          (__int64)&WPP_55a9d3539d723e79cd67d5f5f09277a6_Traceguids);
      }
      DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::ObjectLock<>((__int64)v72);
      HMFreeObject(v70);
      DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v72);
      return 0LL;
    }
    if ( HmodTableIndex >= 0 )
      AddHmodDependency(HmodTableIndex);
  }
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::ObjectLock<>((__int64)v73);
  v48 = 1;
  v49 = 1 << (v7 + 1);
  v50 = 8LL * ((int)v7 + 1);
  if ( a3 )
  {
    v51 = (__int64 *)(v50 + a3 + 960);
    *(_DWORD *)(a3 + 720) |= v49;
    if ( *(_QWORD *)(a3 + 520) )
    {
      v52 = *(PRKPROCESS **)(a3 + 464);
      if ( v52 == *((PRKPROCESS **)v17 + 58) )
      {
        v53 = 0;
      }
      else
      {
        KeAttachProcess(*v52);
        v53 = 1;
      }
      *(_DWORD *)(*(_QWORD *)(a3 + 520) + 56LL) = *(_DWORD *)(a3 + 720);
      v54 = a4;
      v55 = v70;
      if ( v53 )
        KeDetachProcess();
      goto LABEL_118;
    }
    v54 = v7;
  }
  else
  {
    v51 = (__int64 *)(v50 + *((_QWORD *)v17 + 63) + 40LL);
    *(_DWORD *)(v70 + 64) |= 1u;
    *(_DWORD *)(**((_QWORD **)v17 + 63) + 16LL) |= v49;
    a3 = 0LL;
    v54 = a4;
  }
  v55 = v70;
LABEL_118:
  *(_QWORD *)(v55 + 72) = a3;
  *(_DWORD *)(v70 + 64) |= a6 & 0x42;
  *(_DWORD *)(v70 + 48) = v54;
  *(_QWORD *)(v70 + 56) = a5 - a1;
  v56 = *v51;
  *(_QWORD *)(v70 + 40) = *v51;
  if ( a7 )
    *a7 = v56 == 0;
  *v51 = v70;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v48 = 0;
  }
  v57 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v48 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v58 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, a7);
    LOBYTE(v59) = v57;
    LOBYTE(v60) = v48;
    WPP_RECORDER_AND_TRACE_SF_qDD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v60,
      v59,
      *(_QWORD *)(v58 + 69416));
  }
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v73);
  return v70;
}
