/*
 * XREFs of NtUserMessageCall @ 0x140061360
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??1CDisableILCheckAuto@@QEAA@XZ @ 0x140061790 (--1CDisableILCheckAuto@@QEAA@XZ.c)
 *     ??0CDisableILCheckAuto@@QEAA@XZ @ 0x1400617A8 (--0CDisableILCheckAuto@@QEAA@XZ.c)
 *     LeaveEditionCrit @ 0x140186D40 (LeaveEditionCrit.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     ??0EnterLeaveCritSharedOrExclusive@@QEAA@_NW4HandleToObjILCheck@@@Z @ 0x1402909C4 (--0EnterLeaveCritSharedOrExclusive@@QEAA@_NW4HandleToObjILCheck@@@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserMessageCall(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  ULONG_PTR v7; // rdi
  __int64 v8; // r14
  unsigned __int8 v9; // bp
  __int64 v12; // rbx
  int v13; // r13d
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  ULONG_PTR *v28; // rax
  __int64 UserSessionState; // rax
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp-58h] BYREF
  __int64 v32; // [rsp+48h] [rbp-50h]
  _BYTE v33[16]; // [rsp+50h] [rbp-48h] BYREF
  char v34; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v35; // [rsp+B0h] [rbp+18h]

  v35 = a3;
  v7 = 0LL;
  v8 = a2;
  v9 = 0;
  v12 = 0LL;
  if ( (a2 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87);
    UserSetLastError(87);
    return 0LL;
  }
  else
  {
    v13 = a6;
    if ( a6 == 672 || a6 == 694 )
    {
      return 0LL;
    }
    else
    {
      if ( ((a1 + 1) & 0xFFFFFFFFFFFEFFFFuLL) != 0 || (unsigned int)(a6 - 695) > 1 )
      {
        if ( a6 == 689 && a2 - 992 > 8 )
          goto LABEL_7;
      }
      else
      {
        v12 = -1LL;
      }
      v9 = 1;
LABEL_7:
      while ( 1 )
      {
        EnterLeaveCritSharedOrExclusive::EnterLeaveCritSharedOrExclusive(&v34, v9);
        CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(v15, v14);
        v19 = CurrentThreadNonPaged ? *CurrentThreadNonPaged : 0LL;
        if ( v12 == -1 )
          break;
        v20 = ValidateHwnd(a1);
        v12 = v20;
        if ( !v20 )
        {
          LeaveEditionCrit(&v34);
          return 0LL;
        }
        if ( *(_QWORD *)(v20 + 16) == v19 )
        {
          v18 = *(_QWORD *)(v20 + 40);
          if ( (*(_BYTE *)(v18 + 18) & 4) == 0 )
            break;
        }
        if ( v9 )
          break;
        v9 = 1;
        LeaveEditionCrit(&v34);
      }
      v32 = 0LL;
      BugCheckParameter3 = -1LL;
      if ( v12 != -1 )
      {
        BugCheckParameter3 = *(_QWORD *)(v19 + 456);
        *(_QWORD *)(v19 + 456) = &BugCheckParameter3;
        v32 = v12;
        HMLockObject(v12);
      }
      if ( v9 )
      {
        if ( (unsigned int)v8 >= 0x400 )
        {
          UserSessionState = W32GetUserSessionState(v18, v17);
          v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(UserSessionState
                                                                                      + 8LL * (((_BYTE)v13 + 6) & 0x1F)
                                                                                      + 71176))(
                  v12,
                  (unsigned int)v8,
                  v35,
                  a4,
                  a5);
        }
        else
        {
          _mm_lfence();
          v23 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, int, bool))gapfnMessageCall[(unsigned __int8)MessageTable[v8]])(
                  v12,
                  (unsigned int)v8,
                  v35,
                  a4,
                  a5,
                  v13,
                  a7 != 0);
        }
      }
      else
      {
        CDisableILCheckAuto::CDisableILCheckAuto((CDisableILCheckAuto *)v33);
        if ( (unsigned int)v8 < 0x400 )
        {
          _mm_lfence();
          v27 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, int, bool))gapfnMessageCall[(unsigned __int8)MessageTable[v8]])(
                  v12,
                  (unsigned int)v8,
                  v35,
                  a4,
                  a5,
                  v13,
                  a7 != 0);
        }
        else
        {
          v26 = W32GetUserSessionState(v25, v24);
          v27 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(v26
                                                                                      + 8LL * (((_BYTE)v13 + 6) & 0x1F)
                                                                                      + 71176))(
                  v12,
                  (unsigned int)v8,
                  v35,
                  a4,
                  a5);
        }
        v23 = v27;
        CDisableILCheckAuto::~CDisableILCheckAuto((CDisableILCheckAuto *)v33);
      }
      if ( BugCheckParameter3 != -1LL )
      {
        v28 = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v22, v21);
        if ( v28 )
          v7 = *v28;
        Win32HM_UnlockFromThread<0>(v7, (ULONG_PTR)&BugCheckParameter3);
      }
      LeaveEditionCrit(&v34);
      return v23;
    }
  }
}
