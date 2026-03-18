/*
 * XREFs of NtUserRegisterClassExWOW @ 0x1C00A8960
 * Callers:
 *     <none>
 * Callees:
 *     RegisterIconTitleClass @ 0x1C00A711C (RegisterIconTitleClass.c)
 *     RegisterDefaultClass @ 0x1C00A9B8C (RegisterDefaultClass.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     _RegisterClassEx @ 0x1C013A408 (_RegisterClassEx.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

__int64 __fastcall NtUserRegisterClassExWOW(
        __int128 *a1,
        ULONG64 a2,
        ULONG64 a3,
        ULONG64 a4,
        unsigned __int16 a5,
        unsigned int a6)
{
  __int64 v10; // r14
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // ebx
  unsigned __int64 v15; // r15
  int v16; // esi
  unsigned __int64 v17; // r12
  ULONG64 v18; // rcx
  ULONG64 v19; // r8
  ULONG64 v20; // rcx
  __int64 v21; // r13
  __int64 *ThreadWin32Thread; // rax
  wchar_t *v23; // r13
  ULONG64 v24; // rdx
  __int64 v25; // rbx
  __int64 *v26; // rax
  unsigned __int64 v27; // rdi
  ULONG64 v28; // rdx
  __int64 v29; // rcx
  __int16 Atom; // r8
  unsigned int v31; // eax
  unsigned __int16 *v32; // rdx
  unsigned __int16 v33; // di
  __int64 v34; // rbx
  __int64 *v35; // rax
  __int64 *v36; // rax
  unsigned int v38; // ecx
  _WORD *v39; // rax
  int v40; // ecx
  int v41; // ecx
  int v42; // [rsp+20h] [rbp-1A8h]
  int v43; // [rsp+24h] [rbp-1A4h]
  int v44; // [rsp+28h] [rbp-1A0h]
  int v45; // [rsp+2Ch] [rbp-19Ch]
  int v46; // [rsp+30h] [rbp-198h]
  wchar_t *Str1_8; // [rsp+48h] [rbp-180h]
  void *v48; // [rsp+58h] [rbp-170h]
  ULONG64 v49; // [rsp+60h] [rbp-168h]
  __int128 v50; // [rsp+68h] [rbp-160h] BYREF
  void (*v51)(void *); // [rsp+78h] [rbp-150h]
  __int128 v52; // [rsp+80h] [rbp-148h] BYREF
  void (*v53)(void *); // [rsp+90h] [rbp-138h]
  __int64 v54; // [rsp+A0h] [rbp-128h]
  __int128 v55; // [rsp+A8h] [rbp-120h] BYREF
  ULONG64 v56; // [rsp+B8h] [rbp-110h]
  __int128 v57; // [rsp+C0h] [rbp-108h]
  __int128 v58; // [rsp+D0h] [rbp-F8h] BYREF
  __int128 v59; // [rsp+E0h] [rbp-E8h]
  __int128 v60; // [rsp+F0h] [rbp-D8h]
  __int128 v61; // [rsp+100h] [rbp-C8h]
  __int128 v62; // [rsp+110h] [rbp-B8h]
  unsigned __int64 v63; // [rsp+120h] [rbp-A8h]
  __int64 v64; // [rsp+128h] [rbp-A0h]
  struct _KTHREAD *CurrentThread; // [rsp+130h] [rbp-98h]
  struct _KTHREAD *v66; // [rsp+138h] [rbp-90h]
  __int128 v67; // [rsp+148h] [rbp-80h]
  ULONG64 v68; // [rsp+158h] [rbp-70h]
  __int128 v69; // [rsp+160h] [rbp-68h]
  __int128 v70; // [rsp+170h] [rbp-58h]
  __int128 v71; // [rsp+180h] [rbp-48h]
  __int128 v72; // [rsp+190h] [rbp-38h]
  __int128 v73; // [rsp+1A0h] [rbp-28h]

  v57 = 0LL;
  memset_0(&v58, 0, 0x60uLL);
  v55 = 0LL;
  v56 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v10 = 0LL;
  v45 = 0;
  v44 = 0;
  EnterCrit(0LL, 0LL);
  v12 = gptiCurrent;
  v54 = gptiCurrent;
  if ( (a6 & 0xFFFFFF3D) != 0 )
  {
    UserSetLastError(1004LL);
LABEL_87:
    v33 = 0;
    goto LABEL_85;
  }
  v13 = a5;
  if ( !a5 )
  {
LABEL_3:
    if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x10000000) == 0
      && !(unsigned int)RegisterIconTitleClass() )
    {
      goto LABEL_87;
    }
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v14 = *(_DWORD *)a2;
    v43 = *(_DWORD *)a2;
    v15 = *(_QWORD *)(a2 + 8);
    Str1_8 = (wchar_t *)v15;
    if ( a3 >= MmUserProbeAddress )
      a3 = MmUserProbeAddress;
    v16 = *(_DWORD *)a3;
    v46 = *(_DWORD *)a3;
    v17 = *(_QWORD *)(a3 + 8);
    if ( a4 + 24 < a4 || a4 + 24 > MmUserProbeAddress )
      a4 = MmUserProbeAddress;
    v67 = *(_OWORD *)a4;
    v68 = *(_QWORD *)(a4 + 16);
    v55 = v67;
    v56 = v68;
    v18 = v68;
    if ( v68 >= MmUserProbeAddress )
      v18 = MmUserProbeAddress;
    v42 = *(_DWORD *)v18;
    LODWORD(v57) = *(_DWORD *)v18;
    v19 = *(_QWORD *)(v18 + 8);
    v49 = v19;
    *((_QWORD *)&v57 + 1) = v19;
    if ( a1 + 5 < a1 || (unsigned __int64)(a1 + 5) > MmUserProbeAddress )
      a1 = (__int128 *)MmUserProbeAddress;
    v69 = *a1;
    v70 = a1[1];
    v71 = a1[2];
    v72 = a1[3];
    v73 = a1[4];
    v58 = v69;
    v59 = v70;
    v60 = v71;
    v61 = v72;
    v62 = v73;
    if ( (v15 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (v15 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v20 = (unsigned __int16)v14 + v15 + 2;
      if ( v20 <= v15 || v20 >= MmUserProbeAddress )
        ExRaiseAccessViolation();
      if ( (unsigned __int16)v14 > HIWORD(v43) || (v14 & 1) != 0 )
      {
        if ( (v14 & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10147LL);
        ExRaiseAccessViolation();
      }
    }
    if ( (v15 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (unsigned __int16)(v14 + 2) < (unsigned __int16)v14 )
        ExRaiseStatus(-1073741675);
      Str1_8 = (wchar_t *)Win32AllocPoolWithQuotaZInit((unsigned __int16)(v14 + 2), 2020897621LL);
      if ( !Str1_8 )
        ExRaiseStatus(-1073741801);
      v45 = 1;
      CurrentThread = KeGetCurrentThread();
      v21 = 0LL;
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v21 = *ThreadWin32Thread;
      *(_QWORD *)&v52 = *(_QWORD *)(v21 + 16);
      *(_QWORD *)(v21 + 16) = &v52;
      v23 = Str1_8;
      *((_QWORD *)&v52 + 1) = Str1_8;
      v53 = Win32FreePool;
      memmove(Str1_8, (const void *)v15, (unsigned __int16)v14);
      Str1_8[(unsigned __int64)(unsigned __int16)v14 >> 1] = 0;
      v19 = v49;
    }
    else
    {
      v23 = (wchar_t *)v15;
    }
    if ( (v17 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (v17 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v24 = (unsigned __int16)v16 + v17 + 2;
      if ( v24 <= v17 || v24 >= MmUserProbeAddress )
        ExRaiseAccessViolation();
      if ( (unsigned __int16)v16 > HIWORD(v46) || (v16 & 1) != 0 )
      {
        if ( (v16 & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10172LL);
        ExRaiseAccessViolation();
      }
    }
    if ( (v17 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (unsigned __int16)(v16 + 2) < (unsigned __int16)v16 )
        ExRaiseStatus(-1073741675);
      v48 = (void *)Win32AllocPoolWithQuotaZInit((unsigned __int16)(v16 + 2), 2020897621LL);
      if ( !v48 )
        ExRaiseStatus(-1073741801);
      v44 = 1;
      v66 = KeGetCurrentThread();
      v25 = 0LL;
      v26 = (__int64 *)PsGetThreadWin32Thread(v66);
      if ( v26 )
        v25 = *v26;
      *(_QWORD *)&v50 = *(_QWORD *)(v25 + 16);
      *(_QWORD *)(v25 + 16) = &v50;
      v27 = (unsigned __int64)v48;
      *((_QWORD *)&v50 + 1) = v48;
      v51 = Win32FreePool;
      memmove(v48, (const void *)v17, (unsigned __int16)v16);
      *((_WORD *)v48 + ((unsigned __int64)(unsigned __int16)v16 >> 1)) = 0;
      v23 = Str1_8;
      v19 = v49;
    }
    else
    {
      v27 = v17;
    }
    if ( (v19 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (v19 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v28 = v19 + (unsigned __int16)v42 + 2LL;
      if ( v28 <= v19 || v28 >= MmUserProbeAddress )
        ExRaiseAccessViolation();
      if ( (unsigned __int16)v42 > HIWORD(v42) || (v42 & 1) != 0 )
      {
        if ( (v42 & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10197LL);
        ExRaiseAccessViolation();
      }
    }
    *(_QWORD *)&v62 = v23;
    v63 = v27;
    *((_QWORD *)&v61 + 1) = v19;
    if ( (*(_DWORD *)(*(_QWORD *)(v54 + 424) + 12LL) & 0x2000) != 0 )
      goto LABEL_70;
    if ( (unsigned int)RegisterDefaultClass(v23) )
    {
      v27 = v63;
LABEL_70:
      if ( (v27 & 0xFFFFFFFFFFFF0000uLL) != 0 )
        Atom = UserFindAtom(v27);
      else
        Atom = v63;
      v64 = 0LL;
      if ( Atom )
      {
        v31 = 0;
        v32 = (unsigned __int16 *)&unk_1C0309476;
        while ( 1 )
        {
          if ( Atom == *(_WORD *)(gpsi + 2LL * ((*(_DWORD *)(v32 - 3) >> 3) & 0x1F) + 868) )
          {
            v40 = *v32;
            if ( (_WORD)v40 )
              break;
          }
          ++v31;
          v32 += 24;
          if ( v31 >= 8 )
            goto LABEL_76;
        }
        a6 |= v40;
        if ( (a6 & 0x200) != 0 && SDWORD1(v59) < *((_DWORD *)&gDefaultServerClasses + 12 * v31 + 6) )
        {
          UserSetLastError(5LL);
          v33 = 0;
          UserSetLastError(0LL);
          goto LABEL_77;
        }
        v41 = *((_DWORD *)&gDefaultServerClasses + 12 * v31 + 6);
        if ( SDWORD1(v59) >= v41 )
        {
          LODWORD(v64) = *((_DWORD *)&gDefaultServerClasses + 12 * v31 + 6);
          DWORD1(v59) -= v41;
        }
      }
LABEL_76:
      v33 = RegisterClassEx(&v58, &v55, a5, a6);
LABEL_77:
      if ( v44 )
      {
        v34 = 0LL;
        v35 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( v35 )
          v34 = *v35;
        *(_QWORD *)(v34 + 16) = v50;
        ((void (__fastcall *)(_QWORD))v51)(*((_QWORD *)&v50 + 1));
      }
      if ( v45 )
      {
        v36 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( v36 )
          v10 = *v36;
        *(_QWORD *)(v10 + 16) = v52;
        ((void (__fastcall *)(_QWORD))v53)(*((_QWORD *)&v52 + 1));
      }
      goto LABEL_85;
    }
LABEL_94:
    v33 = 0;
    goto LABEL_77;
  }
  v29 = 666LL;
  if ( (unsigned __int16)(a5 - 666) > 0x1Eu )
    goto LABEL_94;
  v38 = 0;
  v39 = &unk_1C0309474;
  while ( *v39 != a5 )
  {
    ++v38;
    v39 += 24;
    if ( v38 >= 8 )
      goto LABEL_3;
  }
  v33 = 0;
  UserSetLastError(87LL);
LABEL_85:
  UserSessionSwitchLeaveCrit(v29, v12, v13, v11);
  return v33;
}
