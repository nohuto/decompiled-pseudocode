/*
 * XREFs of NtUserRegisterClassExWOW @ 0x14029A770
 * Callers:
 *     <none>
 * Callees:
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x14003D210 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x14003E628 (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     _RegisterClassEx @ 0x1400B4534 (_RegisterClassEx.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ??$ManualLock@X@?$Win32RawLockedItemBase@G$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEAX@Z@Z @ 0x140116D40 (--$ManualLock@X@-$Win32RawLockedItemBase@G$1-Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEA.c)
 *     RegisterDefaultClass @ 0x140239260 (RegisterDefaultClass.c)
 *     RegisterIconTitleClass @ 0x140239490 (RegisterIconTitleClass.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     memmove @ 0x140340480 (memmove.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall NtUserRegisterClassExWOW(
        void *a1,
        ULONG64 a2,
        ULONG64 a3,
        void *a4,
        unsigned __int16 a5,
        unsigned int a6)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // r8
  __int64 v13; // rcx
  unsigned __int16 v14; // di
  _WORD *v15; // rax
  int v16; // ebx
  wchar_t *v17; // r14
  int v18; // r15d
  unsigned __int64 v19; // r12
  ULONG64 v20; // rdx
  ULONG64 v21; // rdx
  unsigned __int64 *v22; // rcx
  ULONG_PTR v23; // rax
  void *v24; // r13
  char *v25; // r8
  ULONG_PTR v26; // rax
  void *v27; // r13
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r9
  ULONG_PTR v30; // rcx
  __int16 Atom; // r15
  unsigned int v32; // ebx
  unsigned __int16 *v33; // r14
  int v34; // eax
  int v35; // eax
  int v37; // [rsp+20h] [rbp-1A8h]
  int v38; // [rsp+24h] [rbp-1A4h]
  int v39; // [rsp+28h] [rbp-1A0h]
  wchar_t *Str1_8; // [rsp+40h] [rbp-188h]
  ULONG_PTR v41; // [rsp+58h] [rbp-170h]
  unsigned __int64 v42; // [rsp+70h] [rbp-158h]
  struct tagTHREADINFO *v43; // [rsp+78h] [rbp-150h]
  __int128 v44; // [rsp+80h] [rbp-148h] BYREF
  ULONG64 v45; // [rsp+90h] [rbp-138h]
  ULONG_PTR v46[3]; // [rsp+98h] [rbp-130h] BYREF
  ULONG_PTR BugCheckParameter2[3]; // [rsp+B0h] [rbp-118h] BYREF
  __int128 v48; // [rsp+C8h] [rbp-100h] BYREF
  ULONG64 v49; // [rsp+D8h] [rbp-F0h]
  __int128 v50; // [rsp+E0h] [rbp-E8h] BYREF
  __int128 v51; // [rsp+F0h] [rbp-D8h]
  __int128 v52; // [rsp+100h] [rbp-C8h]
  __int128 v53; // [rsp+110h] [rbp-B8h]
  __int128 v54; // [rsp+120h] [rbp-A8h]
  ULONG_PTR v55; // [rsp+130h] [rbp-98h]
  __int64 v56; // [rsp+138h] [rbp-90h]
  __int128 v57; // [rsp+140h] [rbp-88h]
  _OWORD v58[5]; // [rsp+158h] [rbp-70h] BYREF

  v57 = 0LL;
  memset_0(&v50, 0, 0x60uLL);
  v48 = 0LL;
  v49 = 0LL;
  EnterCrit(0LL, 0LL);
  v12 = PtiCurrent(v10, v9);
  v43 = v12;
  if ( (a6 & 0xFFFFFF3D) != 0 )
  {
    UserSetLastError(1004);
    v14 = 0;
    goto LABEL_81;
  }
  v14 = 0;
  if ( !a5 )
  {
LABEL_8:
    if ( (*(_DWORD *)(*((_QWORD *)v12 + 58) + 12LL) & 0x10000000) == 0 && !(unsigned int)RegisterIconTitleClass(v11, a5) )
      goto LABEL_81;
    tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)BugCheckParameter2);
    tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)v46);
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v16 = *(_DWORD *)a2;
    v38 = *(_DWORD *)a2;
    v17 = *(wchar_t **)(a2 + 8);
    Str1_8 = v17;
    if ( a3 >= MmUserProbeAddress )
      a3 = MmUserProbeAddress;
    v18 = *(_DWORD *)a3;
    v39 = *(_DWORD *)a3;
    v19 = *(_QWORD *)(a3 + 8);
    v41 = v19;
    v44 = 0LL;
    v45 = 0LL;
    RtlCopyFromUser(&v44, a4, 0x18uLL);
    v48 = v44;
    v49 = v45;
    v20 = v45;
    if ( v45 >= MmUserProbeAddress )
      v20 = MmUserProbeAddress;
    v37 = *(_DWORD *)v20;
    LODWORD(v57) = *(_DWORD *)v20;
    v42 = *(_QWORD *)(v20 + 8);
    *((_QWORD *)&v57 + 1) = v42;
    memset_0(v58, 0, sizeof(v58));
    RtlCopyFromUser(v58, a1, 0x50uLL);
    v50 = v58[0];
    v51 = v58[1];
    v52 = v58[2];
    v53 = v58[3];
    v54 = v58[4];
    if ( ((unsigned __int64)v17 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( ((unsigned __int8)v17 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v21 = (ULONG64)v17 + (unsigned __int16)v16 + 2;
      if ( v21 <= (unsigned __int64)v17 || (v22 = (unsigned __int64 *)MmUserProbeAddress, v21 >= MmUserProbeAddress) )
        ExRaiseAccessViolation();
      if ( (unsigned __int16)v16 > HIWORD(v38) || (v16 & 1) != 0 )
      {
        if ( (v16 & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10451);
        ExRaiseAccessViolation();
      }
    }
    else
    {
      v22 = (unsigned __int64 *)MmUserProbeAddress;
    }
    if ( ((unsigned __int64)v17 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (unsigned __int16)(v16 + 2) < (unsigned __int16)v16 )
        ExRaiseStatus(-1073741675);
      v23 = Win32AllocPoolWithQuotaZInit((unsigned __int16)(v16 + 2), 2020897621LL);
      v24 = (void *)v23;
      Str1_8 = (wchar_t *)v23;
      if ( !v23 )
        ExRaiseStatus(-1073741801);
      Win32RawLockedItemBase<unsigned short,&void Win32FreePool(void *),1,1,1>::ManualLock<void>(
        BugCheckParameter2,
        v23,
        (__int64)Win32FreePool);
      memmove(v24, v17, (unsigned __int16)v16);
      *((_WORD *)v24 + ((unsigned __int64)(unsigned __int16)v16 >> 1)) = 0;
      v22 = (unsigned __int64 *)MmUserProbeAddress;
    }
    if ( (v19 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (v19 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v25 = (char *)(v19 + (unsigned __int16)v18 + 2LL);
      if ( (unsigned __int64)v25 <= v19 || (unsigned __int64)v25 >= *v22 )
        ExRaiseAccessViolation();
      if ( (unsigned __int16)v18 > HIWORD(v39) || (v18 & 1) != 0 )
      {
        if ( (v18 & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10473);
        ExRaiseAccessViolation();
      }
    }
    if ( (v19 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (unsigned __int16)(v18 + 2) < (unsigned __int16)v18 )
        ExRaiseStatus(-1073741675);
      v26 = Win32AllocPoolWithQuotaZInit((unsigned __int16)(v18 + 2), 2020897621LL);
      v27 = (void *)v26;
      v41 = v26;
      if ( !v26 )
        ExRaiseStatus(-1073741801);
      Win32RawLockedItemBase<unsigned short,&void Win32FreePool(void *),1,1,1>::ManualLock<void>(
        v46,
        v26,
        (__int64)Win32FreePool);
      memmove(v27, (const void *)v19, (unsigned __int16)v18);
      *((_WORD *)v27 + ((unsigned __int64)(unsigned __int16)v18 >> 1)) = 0;
      v22 = (unsigned __int64 *)MmUserProbeAddress;
    }
    v28 = v42;
    if ( (v42 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (v42 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v29 = v42 + (unsigned __int16)v37 + 2LL;
      if ( v29 <= v42 || v29 >= *v22 )
        ExRaiseAccessViolation();
      if ( (unsigned __int16)v37 > HIWORD(v37) || (v37 & 1) != 0 )
      {
        if ( (v37 & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10495);
        ExRaiseAccessViolation();
      }
    }
    *(_QWORD *)&v54 = Str1_8;
    v55 = v41;
    *((_QWORD *)&v53 + 1) = v42;
    if ( (*(_DWORD *)(*((_QWORD *)v43 + 58) + 12LL) & 0x2000) == 0 && !(unsigned int)RegisterDefaultClass(Str1_8) )
    {
LABEL_65:
      Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)v46);
      Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
      goto LABEL_81;
    }
    v30 = v55;
    if ( (v55 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      Atom = UserFindAtom(v55);
    else
      Atom = v55;
    v56 = 0LL;
    if ( Atom )
    {
      v32 = 0;
      v33 = (unsigned __int16 *)&unk_14034CCF6;
      while ( 1 )
      {
        v30 = *(_QWORD *)(W32GetUserSessionState(v30, v28) + 19928);
        if ( Atom == *(_WORD *)(v30 + 2LL * ((*(_DWORD *)(v33 - 3) >> 3) & 0x1F) + 868) )
        {
          v34 = *v33;
          if ( (_WORD)v34 )
            break;
        }
        ++v32;
        v33 += 24;
        if ( v32 >= 5 )
          goto LABEL_80;
      }
      a6 |= v34;
      if ( (a6 & 0x200) != 0 && SDWORD1(v51) < gDefaultServerClasses[12 * v32 + 6] )
      {
        UserSetLastError(5);
        UserSetLastError(0);
        goto LABEL_65;
      }
      v35 = gDefaultServerClasses[12 * v32 + 6];
      if ( SDWORD1(v51) >= v35 )
      {
        LODWORD(v56) = gDefaultServerClasses[12 * v32 + 6];
        DWORD1(v51) -= v35;
      }
    }
LABEL_80:
    v14 = RegisterClassEx((__int64)&v50, &v48, a5, a6);
    goto LABEL_65;
  }
  v13 = 666LL;
  if ( (unsigned __int16)(a5 - 666) <= 0x1Eu )
  {
    LODWORD(v11) = 0;
    v15 = &unk_14034CCF4;
    while ( *v15 != a5 )
    {
      v11 = (unsigned int)(v11 + 1);
      v15 += 24;
      if ( (unsigned int)v11 >= 5 )
        goto LABEL_8;
    }
    UserSetLastError(87);
  }
LABEL_81:
  UserSessionSwitchLeaveCrit(v13);
  return v14;
}
