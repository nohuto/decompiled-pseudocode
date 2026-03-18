/*
 * XREFs of NtUserSystemParametersInfo @ 0x140171AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ??1?$Win32RawOptionalLockedItemAlways@X$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1400D1188 (--1-$Win32RawOptionalLockedItemAlways@X$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400E5170 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     EtwTraceUIPISystemError @ 0x14016A710 (EtwTraceUIPISystemError.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     xxxSystemParametersInfo @ 0x140173780 (xxxSystemParametersInfo.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x1401A3340 (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A5A58 (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1401A9280 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x14023F500 (memset.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall NtUserSystemParametersInfo(__int64 a1, unsigned int a2, ULONG64 a3, char a4)
{
  unsigned int v5; // r13d
  unsigned int v6; // edi
  unsigned int v7; // r14d
  _QWORD *UserSessionState; // rbx
  __int64 v9; // rsi
  __int64 v10; // rcx
  bool HasUILimit; // al
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rcx
  __int64 CurrentProcessWin32Process; // rax
  bool v15; // r9
  int v16; // eax
  unsigned __int8 v17; // cf
  bool v18; // zf
  unsigned int v19; // eax
  bool v20; // zf
  bool v21; // zf
  unsigned int v22; // eax
  bool v23; // zf
  bool v24; // zf
  unsigned int v25; // eax
  __int64 v26; // rsi
  bool v27; // zf
  unsigned int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // rcx
  volatile void **v31; // r12
  int v32; // ebx
  int v33; // ecx
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v35; // rax
  int v36; // eax
  unsigned int *v37; // rdx
  __int64 v38; // rcx
  const void *v39; // r14
  size_t v40; // rsi
  ULONG64 v41; // rdx
  __int64 v42; // rcx
  struct tagTHREADINFO *v43; // rax
  struct tagTHREADINFO *v44; // rax
  unsigned int v45; // eax
  __int64 CurrentProcessWow64Process; // rax
  ULONG64 v47; // rax
  __int64 v48; // rcx
  ULONG64 v49; // rdx
  bool v50; // zf
  bool v51; // zf
  unsigned int v52; // eax
  __int64 v53; // rax
  _OWORD *v54; // rax
  volatile void **v55; // rcx
  volatile void **v56; // rcx
  _OWORD *v57; // rax
  int v58; // eax
  __int64 v59; // rax
  _DWORD *v60; // rbx
  _DWORD *v61; // rdx
  unsigned __int64 v62; // rax
  unsigned int Size; // [rsp+30h] [rbp-338h]
  int Size_4; // [rsp+34h] [rbp-334h]
  unsigned int v67; // [rsp+40h] [rbp-328h]
  ULONG_PTR v68[2]; // [rsp+48h] [rbp-320h] BYREF
  void (__fastcall *v69)(char *); // [rsp+58h] [rbp-310h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+60h] [rbp-308h] BYREF
  void (__fastcall *v71)(char *); // [rsp+70h] [rbp-2F8h]
  int v72; // [rsp+78h] [rbp-2F0h]
  int v73; // [rsp+7Ch] [rbp-2ECh]
  int v74; // [rsp+80h] [rbp-2E8h]
  volatile void *Address; // [rsp+88h] [rbp-2E0h]
  _DWORD v76[6]; // [rsp+A0h] [rbp-2C8h] BYREF
  __int128 v77; // [rsp+B8h] [rbp-2B0h] BYREF
  volatile void *v78; // [rsp+C8h] [rbp-2A0h]
  __int128 v79; // [rsp+D0h] [rbp-298h]
  ULONG64 v80; // [rsp+E0h] [rbp-288h]
  ULONG64 v81; // [rsp+E8h] [rbp-280h]
  _BYTE v82[616]; // [rsp+100h] [rbp-268h] BYREF

  v5 = a2;
  v6 = a1;
  v7 = a2;
  v67 = a2;
  v79 = 0LL;
  Size = 0;
  Address = 0LL;
  v72 = 0;
  v76[0] = 0x2000;
  v76[1] = -1;
  v76[2] = 0;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v9 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v9;
  if ( v9 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2468));
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>((__int64)v68);
  v73 = a4 & 3;
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    HasUILimit = tagPROCESSINFO::HasUILimit(*(tagPROCESSINFO **)(v9 + 464), 8u);
  }
  else
  {
    v13 = PtiCurrent(v10);
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v13 + 132, 0, 0) & 0x20000000) != 0 )
      v12 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)PtiCurrent((__int64)v13) + 58) + 760LL) + 32LL) & 8;
    else
      v12 = 0LL;
    v7 = v67;
    if ( (_DWORD)v12 )
      goto LABEL_15;
    HasUILimit = 0;
  }
  if ( !HasUILimit )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    if ( UIPrivilegeIsolation::CheckAccessEx(
           (UIPrivilegeIsolation *)(CurrentProcessWin32Process + 872),
           (const struct tagUIPI_INFO *)v76,
           0LL,
           v15) )
    {
      goto LABEL_125;
    }
  }
LABEL_15:
  if ( v6 <= 0x6D )
  {
    if ( v6 == 109 )
      goto LABEL_423;
    if ( v6 <= 0x37 )
    {
      if ( v6 == 55 )
        goto LABEL_423;
      if ( v6 <= 0x1D )
      {
        if ( v6 == 29 )
          goto LABEL_423;
        if ( v6 <= 0x13 )
        {
          v16 = 698452;
          v17 = _bittest(&v16, v6);
          goto LABEL_23;
        }
        if ( v6 == 20 || v6 == 21 || v6 == 23 )
          goto LABEL_423;
        v19 = v6 - 24;
        v18 = v6 == 24;
        goto LABEL_120;
      }
      if ( v6 <= 0x2A )
      {
        if ( v6 == 42 || v6 == 30 || v6 == 32 || v6 == 33 || v6 == 34 || v6 == 36 )
          goto LABEL_423;
        v20 = v6 == 37;
LABEL_124:
        if ( v20 )
          goto LABEL_423;
        goto LABEL_125;
      }
      if ( v6 == 44 || v6 == 46 )
        goto LABEL_423;
      v22 = v6 - 47;
      v21 = v6 == 47;
      goto LABEL_118;
    }
    if ( v6 <= 0x55 )
    {
      if ( v6 == 85 )
        goto LABEL_423;
      if ( v6 <= 0x49 )
      {
        if ( v6 - 57 <= 0x10 )
        {
          v12 = 87317LL;
          v17 = _bittest((const int *)&v12, v6 - 57);
LABEL_23:
          if ( !v17 )
            goto LABEL_125;
LABEL_423:
          v62 = PsGetCurrentProcessWin32Process(v12);
          if ( v62 )
            v62 &= -(__int64)(*(_QWORD *)v62 != 0LL);
          EtwTraceUIPISystemError((PEPROCESS *)v62, 0LL, 1);
          v32 = 0;
          v33 = 5;
          goto LABEL_426;
        }
LABEL_125:
        v26 = 4LL;
        goto LABEL_126;
      }
      if ( v6 == 75 || v6 == 76 || v6 == 77 || v6 == 78 || v6 == 81 )
        goto LABEL_423;
      v23 = v6 == 82;
LABEL_51:
      if ( !v23 )
        goto LABEL_125;
      goto LABEL_423;
    }
    if ( v6 > 0x60 )
    {
      if ( v6 - 97 > 0xA )
        goto LABEL_125;
      v23 = (((_BYTE)v6 - 97) & 1) == 0;
      goto LABEL_51;
    }
    if ( v6 == 96 || v6 == 86 || v6 == 87 || v6 == 88 || v6 == 90 )
      goto LABEL_423;
    v25 = v6 - 91;
    v24 = v6 == 91;
LABEL_122:
    if ( v24 )
      goto LABEL_423;
    v20 = v25 == 2;
    goto LABEL_124;
  }
  if ( v6 > 0x1017 )
  {
    if ( v6 <= 0x2003 )
    {
      if ( v6 == 8195 )
        goto LABEL_423;
      if ( v6 > 0x1049 )
      {
        if ( v6 == 4171 || v6 == 4173 || v6 == 4175 || v6 == 4177 || v6 == 4179 )
          goto LABEL_423;
        v20 = v6 == 8193;
        goto LABEL_124;
      }
      if ( v6 == 4169 )
        goto LABEL_423;
      if ( v6 == 4121 )
        goto LABEL_423;
      v26 = 4LL;
      if ( v6 == 4125 || v6 == 4127 || v6 == 4135 )
        goto LABEL_423;
      v28 = v6 - 4161;
      v27 = v6 == 4161;
      goto LABEL_112;
    }
    if ( v6 > 0x2019 )
    {
      if ( v6 == 8219 || v6 == 8221 )
        goto LABEL_423;
      v22 = v6 - 8241;
      v21 = v6 == 8241;
LABEL_118:
      if ( v21 )
        goto LABEL_423;
      v19 = v22 - 2;
      v18 = v19 == 0;
      goto LABEL_120;
    }
    if ( v6 == 8217 )
      goto LABEL_423;
    if ( v6 == 8197 )
      goto LABEL_423;
    v26 = 4LL;
    if ( v6 == 8201 )
      goto LABEL_423;
    if ( v6 == 8207 )
      goto LABEL_423;
    v29 = v6 - 8209;
    if ( v6 == 8209 )
      goto LABEL_423;
LABEL_111:
    v28 = v29 - 4;
    v27 = v28 == 0;
    goto LABEL_112;
  }
  if ( v6 == 4119 )
    goto LABEL_423;
  if ( v6 > 0xAD )
  {
    if ( v6 <= 0x1007 )
    {
      if ( v6 == 4103 || v6 == 175 || v6 == 177 || v6 == 179 )
        goto LABEL_423;
      v19 = v6 - 4097;
      v18 = v6 == 4097;
LABEL_120:
      if ( v18 )
        goto LABEL_423;
      v25 = v19 - 2;
      v24 = v25 == 0;
      goto LABEL_122;
    }
    switch ( v6 )
    {
      case 0x1009u:
        goto LABEL_423;
      case 0x100Bu:
        goto LABEL_423;
      case 0x100Du:
        goto LABEL_423;
    }
    v29 = v6 - 4111;
    if ( v6 == 4111 )
      goto LABEL_423;
    v26 = 4LL;
    goto LABEL_111;
  }
  if ( v6 == 173 )
    goto LABEL_423;
  if ( v6 > 0x99 )
  {
    if ( v6 == 155 || v6 == 161 || v6 == 163 || v6 == 166 )
      goto LABEL_423;
    v25 = v6 - 169;
    v24 = v6 == 169;
    goto LABEL_122;
  }
  switch ( v6 )
  {
    case 0x99u:
      goto LABEL_423;
    case 0x6Fu:
      goto LABEL_423;
    case 0x71u:
      goto LABEL_423;
  }
  v26 = 4LL;
  if ( v6 == 117 || v6 == 119 || v6 == 147 )
    goto LABEL_423;
  v28 = v6 - 149;
  v27 = v6 == 149;
LABEL_112:
  if ( v27 || v28 == 2 )
    goto LABEL_423;
LABEL_126:
  v31 = (volatile void **)Win32AllocPoolWithQuotaZInitImpl(v12, 0x228uLL, 0x79747355u);
  if ( !v31 )
  {
    v32 = 0;
    v33 = 8;
LABEL_426:
    UserSetLastError(v33);
LABEL_427:
    Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>((__int64)v68);
    Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>((__int64)BugCheckParameter2);
    goto LABEL_428;
  }
  if ( v71 != (void (__fastcall *)(char *))-1LL )
  {
    BugCheckParameter4 = PtiCurrent(v30);
    KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v31, (ULONG_PTR)BugCheckParameter4);
  }
  v35 = PtiCurrent(v30);
  BugCheckParameter2[0] = *((_QWORD *)v35 + 48);
  *((_QWORD *)v35 + 48) = BugCheckParameter2;
  BugCheckParameter2[1] = (ULONG_PTR)v31;
  v71 = GreDeleteFastMutex;
  if ( v6 > 0x1026 )
  {
    if ( v6 == 4135 )
      goto LABEL_420;
    if ( v6 == 8221 )
    {
      if ( a3 > 2 )
        goto LABEL_327;
      goto LABEL_420;
    }
    goto LABEL_400;
  }
  if ( v6 == 4134 )
    goto LABEL_416;
  if ( v6 <= 0x62 )
  {
    if ( v6 == 98 )
      goto LABEL_416;
    if ( v6 <= 0x32 )
    {
      if ( v6 == 50 )
      {
        Size = 24;
        goto LABEL_397;
      }
      if ( v6 <= 0x19 )
      {
        if ( v6 == 25 )
          goto LABEL_416;
        if ( v6 <= 0xE )
        {
          if ( v6 == 14 || v6 == 1 )
            goto LABEL_416;
          if ( v6 != 3 )
          {
            if ( v6 != 4 )
            {
              if ( v6 == 5 || v6 == 10 )
                goto LABEL_416;
              if ( v6 != 13 )
                goto LABEL_400;
LABEL_155:
              if ( (a3 & 0xFFFFFFFFFFFF0000uLL) == 0 )
                goto LABEL_420;
              goto LABEL_416;
            }
            goto LABEL_147;
          }
          goto LABEL_148;
        }
        switch ( v6 )
        {
          case 0x10u:
          case 0x12u:
            goto LABEL_416;
          case 0x14u:
            if ( !a3 )
              a3 = -1LL;
            if ( a3 == -2LL || a3 == -1LL )
              goto LABEL_159;
            break;
          case 0x15u:
            if ( v7 == -1 )
              goto LABEL_420;
            if ( !a3 )
            {
LABEL_159:
              v36 = xxxSystemParametersInfo(v6, 0xFFFFFFFF);
              goto LABEL_421;
            }
            break;
          case 0x16u:
            goto LABEL_416;
          case 0x18u:
            goto LABEL_155;
          default:
            goto LABEL_400;
        }
        v37 = (unsigned int *)a3;
        if ( a3 >= MmUserProbeAddress )
          v37 = (unsigned int *)MmUserProbeAddress;
        v38 = *v37;
        v74 = v38;
        LODWORD(v79) = v38;
        v39 = (const void *)*((_QWORD *)v37 + 1);
        *((_QWORD *)&v79 + 1) = v39;
        if ( ((unsigned __int8)v39 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v40 = (unsigned __int16)v38;
        v41 = (ULONG64)v39 + (unsigned __int16)v38 + 2;
        if ( v41 <= (unsigned __int64)v39 || v41 >= MmUserProbeAddress )
          ExRaiseAccessViolation();
        if ( (unsigned __int16)v38 > HIWORD(v74) )
        {
          if ( (v38 & 1) == 0 )
            goto LABEL_179;
        }
        else if ( (v38 & 1) == 0 )
        {
          a3 = Win32AllocPoolWithQuotaZInitImpl(v38, (unsigned __int16)v38 + 2LL, 0x79747355u);
          if ( !a3 )
            ExRaiseStatus(-1073741801);
          if ( v69 != (void (__fastcall *)(char *))-1LL )
          {
            v43 = PtiCurrent(v42);
            KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)v68, a3, (ULONG_PTR)v43);
          }
          v44 = PtiCurrent(v42);
          v68[0] = *((_QWORD *)v44 + 48);
          *((_QWORD *)v44 + 48) = v68;
          v68[1] = a3;
          v69 = GreDeleteFastMutex;
          memmove((void *)a3, v39, v40);
          *(_WORD *)(a3 + 2 * (v40 >> 1)) = 0;
          goto LABEL_420;
        }
        v73 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 336LL);
LABEL_179:
        ExRaiseAccessViolation();
      }
      if ( v6 <= 0x2A )
      {
        if ( v6 != 42 )
        {
          if ( v6 == 27 )
            goto LABEL_416;
          if ( v6 == 31 )
          {
            Size = 92;
            goto LABEL_397;
          }
          if ( v6 != 34 )
          {
            if ( v6 == 35 || v6 == 38 )
              goto LABEL_416;
            if ( v6 == 41 )
            {
              if ( ((v7 - 500) & 0xFFFFFFFB) != 0 )
                goto LABEL_327;
              Size = v7;
              goto LABEL_397;
            }
            goto LABEL_400;
          }
          Size = 92;
LABEL_390:
          if ( (a3 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          goto LABEL_392;
        }
        if ( ((v7 - 500) & 0xFFFFFFFB) != 0 )
          goto LABEL_327;
        Size = v7;
LABEL_389:
        if ( !Size )
        {
LABEL_392:
          memmove(v31, (const void *)a3, Size);
          a3 = (ULONG64)v31;
          goto LABEL_420;
        }
        goto LABEL_390;
      }
      switch ( v6 )
      {
        case '+':
          Size = 20;
          goto LABEL_397;
        case ',':
          Size = 20;
          goto LABEL_390;
        case '-':
          Size = 108;
          goto LABEL_397;
        case '.':
          Size = 108;
          goto LABEL_390;
      }
      if ( v6 != 47 )
      {
        if ( v6 != 48 )
          goto LABEL_400;
LABEL_202:
        Size = 16;
        goto LABEL_397;
      }
      goto LABEL_334;
    }
    if ( v6 > 0x43 )
    {
      if ( v6 > 0x50 )
      {
        if ( v6 == 83 || v6 == 84 )
          goto LABEL_416;
        if ( v6 != 89 )
        {
          if ( v6 != 90 )
          {
            v45 = v6 - 94;
            if ( v6 == 94 )
              goto LABEL_416;
LABEL_255:
            v50 = v45 == 1;
LABEL_281:
            if ( v50 )
              goto LABEL_416;
            goto LABEL_400;
          }
          goto LABEL_219;
        }
      }
      else
      {
        if ( v6 == 80 || v6 == 68 || v6 == 70 )
          goto LABEL_416;
        if ( v6 != 72 )
        {
          if ( v6 != 73 )
          {
            if ( v6 == 74 )
              goto LABEL_416;
            v50 = v6 == 79;
            goto LABEL_281;
          }
          goto LABEL_219;
        }
      }
LABEL_256:
      Size = 8;
      goto LABEL_397;
    }
    if ( v6 != 67 )
    {
      if ( v6 <= 0x3A )
      {
        if ( v6 != 58 )
        {
          if ( v6 == 51 )
          {
            Size = 24;
            goto LABEL_390;
          }
          if ( v6 != 52 )
          {
            if ( v6 != 53 )
            {
              if ( v6 != 54 )
              {
                v45 = v6 - 55;
                if ( v6 == 55 )
                {
LABEL_217:
                  Size = 28;
                  goto LABEL_390;
                }
                goto LABEL_255;
              }
LABEL_218:
              Size = 28;
              goto LABEL_397;
            }
LABEL_219:
            Size = 8;
            goto LABEL_390;
          }
        }
        goto LABEL_256;
      }
      if ( v6 == 59 )
        goto LABEL_219;
      if ( v6 != 60 )
      {
        if ( v6 != 61 )
        {
          if ( v6 != 64 )
          {
            if ( v6 != 65 )
            {
              if ( v6 != 66 )
                goto LABEL_400;
              Size = 16;
              CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
              ProbeForWrite((volatile void *)a3, 0x10uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
              Address = (volatile void *)a3;
              *(_OWORD *)v31 = *(_OWORD *)a3;
              a3 = (ULONG64)v31;
              ProbeForWrite(v31[1], 0x100uLL, 2u);
              goto LABEL_310;
            }
LABEL_228:
            Size = 56;
            goto LABEL_390;
          }
          goto LABEL_229;
        }
LABEL_147:
        Size = 12;
        goto LABEL_390;
      }
LABEL_148:
      Size = 12;
LABEL_397:
      Address = (volatile void *)a3;
      a3 = (ULONG64)v31;
      v59 = PsGetCurrentProcessWow64Process();
      v60 = Address;
      ProbeForWrite(Address, Size, v59 != 0 ? 1 : 4);
      v72 = 1;
      *(_DWORD *)v31 = *v60;
      goto LABEL_420;
    }
    v77 = 0LL;
    v78 = 0LL;
    RtlCopyFromUser(&v77, (void *)a3, 0x18uLL);
    *(_OWORD *)v31 = v77;
    v31[2] = v78;
    a3 = (ULONG64)v31;
    v47 = (ULONG64)v31[2];
    if ( (v47 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v48 = *((unsigned __int16 *)v31 + 4);
    v49 = v47 + v48 + 2;
    if ( v49 <= v47 || v49 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v48 > *((_WORD *)v31 + 5) )
    {
      if ( (v48 & 1) == 0 )
        goto LABEL_240;
    }
    else if ( (v48 & 1) == 0 )
    {
      if ( !(_WORD)v48 )
        v31[2] = 0LL;
      goto LABEL_420;
    }
    v74 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 478LL);
LABEL_240:
    ExRaiseAccessViolation();
  }
  if ( v6 <= 0x94 )
  {
    if ( v6 == 148 )
    {
      if ( v7 != 40 )
        goto LABEL_327;
      Size = 40;
      goto LABEL_397;
    }
    if ( v6 <= 0x7A )
    {
      if ( v6 == 122 )
        goto LABEL_416;
      if ( v6 <= 0x70 )
      {
        if ( ((v6 - 100) & 0xFFFFFFF1) == 0 )
          goto LABEL_416;
        goto LABEL_400;
      }
      switch ( v6 )
      {
        case 'r':
          goto LABEL_416;
        case 's':
          Address = (volatile void *)a3;
          a3 = (ULONG64)v31;
          ProbeForWrite(Address, 2LL * v67, 2u);
          if ( v5 >= 0x104 )
            v5 = 260;
          v67 = v5;
          Size = 2 * v5;
          goto LABEL_310;
        case 't':
          goto LABEL_148;
        case 'u':
          goto LABEL_147;
      }
      v52 = v6 - 118;
      v51 = v6 == 118;
LABEL_279:
      if ( v51 )
        goto LABEL_416;
      v50 = v52 == 2;
      goto LABEL_281;
    }
    if ( v6 <= 0x88 )
    {
      if ( v6 == 136 || v6 == 124 || v6 == 126 || v6 == 128 || v6 == 130 )
        goto LABEL_416;
      v52 = v6 - 132;
      v51 = v6 == 132;
      goto LABEL_279;
    }
    switch ( v6 )
    {
      case 0x8Au:
      case 0x8Cu:
      case 0x8Eu:
      case 0x90u:
        goto LABEL_416;
      case 0x92u:
        if ( v7 != 68 )
          goto LABEL_327;
        Size = 68;
        goto LABEL_397;
      case 0x93u:
        if ( v7 != 68 )
          goto LABEL_327;
        Size = 68;
        goto LABEL_390;
    }
LABEL_400:
    if ( v6 < 0xB6 )
      goto LABEL_420;
    if ( v6 - 4096 > 0x55 && v6 - 0x2000 > 0x37
      || v7 && (*((_DWORD *)PtiCurrent((__int64)BugCheckParameter2) + 168) > 0x400u || v6 != 4159 || v7 != 1) )
    {
      goto LABEL_327;
    }
    if ( (v6 & 1) != 0 )
    {
      if ( v6 != 8203 )
      {
        if ( v6 == 8211 )
        {
          v80 = a3;
          if ( (a3 & 0xFFFFFFFE) != 0 )
            goto LABEL_327;
        }
        goto LABEL_420;
      }
      v81 = a3;
      if ( (a3 & 0xFFFFFFFC) != 0 )
        goto LABEL_327;
LABEL_420:
      v36 = xxxSystemParametersInfo(v6, v67);
LABEL_421:
      v32 = v36;
      Size_4 = v36;
      if ( v72 )
      {
        memmove((void *)Address, (const void *)a3, Size);
        v32 = Size_4;
      }
      goto LABEL_427;
    }
LABEL_416:
    Size = 4;
    Address = (volatile void *)a3;
    a3 = (ULONG64)v31;
    v61 = Address;
    if ( (unsigned __int64)Address >= MmUserProbeAddress )
      v61 = (_DWORD *)MmUserProbeAddress;
    *v61 = *v61;
    v72 = 1;
    goto LABEL_420;
  }
  if ( v6 <= 0xA5 )
  {
    if ( v6 != 165 )
    {
      if ( v6 > 0x9B )
      {
        if ( v6 == 156 )
        {
          if ( v7 != 16 )
            goto LABEL_327;
          goto LABEL_202;
        }
        if ( v6 != 157 )
        {
          if ( v6 == 158 || v6 == 160 )
            goto LABEL_416;
          if ( v6 == 162 )
            goto LABEL_202;
          if ( v6 != 163 )
            goto LABEL_400;
        }
LABEL_334:
        Size = 16;
        goto LABEL_390;
      }
      switch ( v6 )
      {
        case 0x9Bu:
          if ( v7 != 548 )
            goto LABEL_327;
          Size = 548;
          memset(v82, 0, 0x224uLL);
          RtlCopyFromUser(v82, (void *)a3, 0x224uLL);
          v56 = v31;
          v57 = v82;
          do
          {
            *(_OWORD *)v56 = *v57;
            *((_OWORD *)v56 + 1) = v57[1];
            *((_OWORD *)v56 + 2) = v57[2];
            *((_OWORD *)v56 + 3) = v57[3];
            *((_OWORD *)v56 + 4) = v57[4];
            *((_OWORD *)v56 + 5) = v57[5];
            *((_OWORD *)v56 + 6) = v57[6];
            v56 += 16;
            *((_OWORD *)v56 - 1) = v57[7];
            v57 += 8;
            --v26;
          }
          while ( v26 );
          *(_OWORD *)v56 = *v57;
          *((_OWORD *)v56 + 1) = v57[1];
          *((_DWORD *)v56 + 8) = *((_DWORD *)v57 + 8);
          a3 = (ULONG64)v31;
          if ( *((_DWORD *)v31 + 6) > 0x104u )
            goto LABEL_327;
          goto LABEL_420;
        case 0x95u:
          if ( v7 != 40 )
            goto LABEL_327;
          Size = 40;
          goto LABEL_390;
        case 0x96u:
          if ( v7 != 28 )
            goto LABEL_327;
          goto LABEL_218;
        case 0x97u:
          if ( v7 != 28 )
            goto LABEL_327;
          goto LABEL_217;
        case 0x98u:
          if ( v7 != 128 )
            goto LABEL_327;
          Size = 128;
          goto LABEL_397;
        case 0x99u:
          if ( v7 != 128 )
            goto LABEL_327;
          Size = 128;
          goto LABEL_390;
      }
      if ( v7 != 548 )
        goto LABEL_327;
      Size = 548;
      v53 = PsGetCurrentProcessWow64Process();
      ProbeForWrite((volatile void *)a3, 0x224uLL, v53 != 0 ? 1 : 4);
      Address = (volatile void *)a3;
      v54 = (_OWORD *)a3;
      v55 = v31;
      do
      {
        *(_OWORD *)v55 = *v54;
        *((_OWORD *)v55 + 1) = v54[1];
        *((_OWORD *)v55 + 2) = v54[2];
        *((_OWORD *)v55 + 3) = v54[3];
        *((_OWORD *)v55 + 4) = v54[4];
        *((_OWORD *)v55 + 5) = v54[5];
        *((_OWORD *)v55 + 6) = v54[6];
        v55 += 16;
        *((_OWORD *)v55 - 1) = v54[7];
        v54 += 8;
        --v26;
      }
      while ( v26 );
      *(_OWORD *)v55 = *v54;
      *((_OWORD *)v55 + 1) = v54[1];
      *((_DWORD *)v55 + 8) = *((_DWORD *)v54 + 8);
      a3 = (ULONG64)v31;
LABEL_310:
      v72 = 1;
      goto LABEL_420;
    }
    goto LABEL_363;
  }
  if ( v6 > 0xAF )
  {
    switch ( v6 )
    {
      case 0xB0u:
        if ( v7 )
          goto LABEL_327;
        break;
      case 0xB2u:
        if ( v7 != 4 )
          goto LABEL_327;
        break;
      case 0xB3u:
        if ( v7 != 4 )
          goto LABEL_327;
        Size = 4;
        goto LABEL_389;
      case 0xB4u:
        if ( v7 != 56 )
          goto LABEL_327;
LABEL_229:
        Size = 56;
        goto LABEL_397;
      case 0xB5u:
        if ( v7 != 56 )
          goto LABEL_327;
        goto LABEL_228;
      default:
        goto LABEL_400;
    }
    goto LABEL_396;
  }
  if ( v6 != 175 )
  {
    if ( v6 == 167 )
    {
LABEL_363:
      if ( v7 != 12 )
        goto LABEL_327;
      goto LABEL_148;
    }
    if ( v6 == 168 || v6 == 170 )
      goto LABEL_416;
    if ( v6 != 172 )
    {
      if ( v6 == 173 )
      {
        if ( v7 != 4 )
          goto LABEL_327;
        Size = 4;
        goto LABEL_390;
      }
      if ( v6 == 174 )
      {
        if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( *(_DWORD *)a3 )
        {
          switch ( *(_DWORD *)a3 )
          {
            case 1:
              v58 = 44;
              break;
            case 2:
              v58 = 48;
              break;
            case 3:
              v58 = 52;
              break;
            default:
              goto LABEL_327;
          }
        }
        else
        {
          v58 = 24;
        }
        Size = v58;
        if ( v67 != v58 )
          goto LABEL_327;
        *(_DWORD *)v31 = *(_DWORD *)a3;
        goto LABEL_397;
      }
      goto LABEL_400;
    }
    if ( v7 != 4 )
      goto LABEL_327;
LABEL_396:
    Size = 4;
    goto LABEL_397;
  }
  if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( *(_DWORD *)a3 )
  {
    switch ( *(_DWORD *)a3 )
    {
      case 1:
        Size = 44;
        break;
      case 2:
        Size = 48;
        break;
      case 3:
        Size = 52;
        break;
      default:
        goto LABEL_327;
    }
  }
  else
  {
    Size = 24;
  }
  if ( v67 == Size )
    goto LABEL_389;
LABEL_327:
  UserSetLastError(87);
  v32 = 0;
  Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>((__int64)v68);
  Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>((__int64)BugCheckParameter2);
LABEL_428:
  UserSessionSwitchLeaveCritWithNonPaged();
  return v32;
}
