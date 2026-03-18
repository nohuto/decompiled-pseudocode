/*
 * XREFs of InternalRegisterClassEx @ 0x1400B54C0
 * Callers:
 *     _RegisterClassEx @ 0x1400B4534 (_RegisterClassEx.c)
 *     RegisterDefaultClass @ 0x140239260 (RegisterDefaultClass.c)
 *     RegisterIconTitleClass @ 0x140239490 (RegisterIconTitleClass.c)
 * Callees:
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x140046994 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z @ 0x14008BA08 (-ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x1400B4A08 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1400B4D18 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x1400B52DC (-ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z @ 0x1400B53E0 (--4-$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z.c)
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1400B6250 (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 *     ?ClassAllocString@@YAPEAXQEAUtagDESKTOP@@KK@Z @ 0x1400B62EC (-ClassAllocString@@YAPEAXQEAUtagDESKTOP@@KK@Z.c)
 *     ??$InitLookAsideRef@UtagCLS@@@@YAEPEAUtagCLS@@@Z @ 0x1400B6438 (--$InitLookAsideRef@UtagCLS@@@@YAEPEAUtagCLS@@@Z.c)
 *     ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1400B6B48 (-ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z.c)
 *     _InnerGetClassPtr @ 0x140178A28 (_InnerGetClassPtr.c)
 *     ??4?$SharedPointerFieldlpszAnsiClassName@D@tagCLS@@QEAAPEADPEAD@Z @ 0x14019A670 (--4-$SharedPointerFieldlpszAnsiClassName@D@tagCLS@@QEAAPEADPEAD@Z.c)
 *     MapClientToServerPfn @ 0x14019D504 (MapClientToServerPfn.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z @ 0x1401BDA48 (-ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCLS@@PEAU_HEAD@@@Z @ 0x1401C1F64 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagC.c)
 *     AllocateUnicodeString @ 0x1401E85D0 (AllocateUnicodeString.c)
 */

__int64 __fastcall InternalRegisterClassEx(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  __int64 v7; // rdi
  int v8; // r13d
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagTHREADINFO *v11; // r14
  struct tagDESKTOP *v12; // r8
  int v13; // eax
  __int64 v14; // rcx
  unsigned __int16 Atom; // r15
  __int64 *v16; // r15
  struct tagDESKTOP *v17; // r15
  PVOID *v18; // rax
  PVOID *v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int16 v24; // bx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r9
  unsigned int v28; // r8d
  _QWORD *v29; // rdx
  __int64 v30; // r8
  int v31; // edx
  unsigned int v32; // r12d
  __int64 v33; // rcx
  unsigned __int16 v34; // ax
  __int64 v35; // rcx
  unsigned __int16 v36; // ax
  unsigned int v37; // r8d
  const WCHAR *v38; // rdx
  int v39; // ebx
  void *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v49; // rbx
  __int64 v50[2]; // [rsp+20h] [rbp-B8h] BYREF
  PCWSTR SourceString; // [rsp+30h] [rbp-A8h] BYREF
  struct tagDESKTOP *ClassPtr; // [rsp+38h] [rbp-A0h]
  int v53; // [rsp+40h] [rbp-98h]
  int v54; // [rsp+44h] [rbp-94h]
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-90h] BYREF
  _STRING v56; // [rsp+58h] [rbp-80h] BYREF
  __int128 v57; // [rsp+68h] [rbp-70h] BYREF
  __int128 v58; // [rsp+80h] [rbp-58h] BYREF
  char v59[72]; // [rsp+90h] [rbp-48h] BYREF
  __int16 v60; // [rsp+E8h] [rbp+10h]
  int v61; // [rsp+F0h] [rbp+18h]

  v60 = a2;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v50, a2);
  DestinationString = 0LL;
  v56 = 0LL;
  v7 = 0LL;
  v54 = 0;
  v8 = 0;
  v11 = PtiCurrent(v10, v9);
  v12 = *(struct tagDESKTOP **)(a1 + 24);
  ClassPtr = v12;
  v13 = a3 & 1;
  v53 = v13;
  if ( (a3 & 1) == 0 && v12 == hModuleWin && *((_WORD *)v11 + 336) >= 0x400u )
    goto LABEL_87;
  v14 = *(_QWORD *)(a1 + 80);
  if ( (v14 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    Atom = UserFindAtom(v14);
    v12 = ClassPtr;
    v13 = v53;
  }
  else
  {
    Atom = *(_WORD *)(a1 + 80);
  }
  if ( a4 )
    *a4 = 0;
  if ( Atom && !v13 )
  {
    SourceString = (PCWSTR)*((_QWORD *)v11 + 58);
    ClassPtr = (struct tagDESKTOP *)InnerGetClassPtr(Atom, SourceString + 176, v12);
    if ( ClassPtr )
    {
      if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
      {
        if ( a4 )
          *a4 = 1;
        v7 = *(_QWORD *)ClassPtr;
        goto LABEL_84;
      }
      goto LABEL_22;
    }
    if ( (*(_DWORD *)(a1 + 4) & 0x4000) != 0 )
    {
      v16 = (__int64 *)InnerGetClassPtr(Atom, SourceString + 180, 0LL);
      if ( v16 )
      {
        if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
        {
          if ( a4 )
            *a4 = 1;
          v7 = *v16;
          goto LABEL_84;
        }
LABEL_22:
        UserSetLastError(1410);
LABEL_84:
        SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>((__int64)v50);
        return v7;
      }
    }
  }
  v17 = 0LL;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)v11 + 132, 0, 0) & 4) == 0 )
    v17 = (struct tagDESKTOP *)*((_QWORD *)v11 + 62);
  ClassPtr = v17;
  if ( *(_DWORD *)(a1 + 16) >= 0xFFFFFFA8 )
  {
LABEL_87:
    UserSetLastError(87);
    SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>((__int64)v50);
    return 0LL;
  }
  v18 = (PVOID *)ClassAlloc(v17, *(_DWORD *)(a1 + 16) + 88, (unsigned int)v12);
  v19 = v18;
  if ( v18 && !(unsigned __int8)InitLookAsideRef<tagCLS>(v18) )
  {
    ClassFree((PVOID *)v17, v19);
    v19 = 0LL;
  }
  SmartObjStackRefBase<tagCLS>::operator=(v50, (__int64)v19);
  if ( !*(_QWORD *)v50[0] )
    goto LABEL_84;
  LockObjectAssignment(*(_QWORD *)v50[0] + 32LL, v17);
  *(_QWORD *)(*(_QWORD *)v50[0] + 56LL) = *(_QWORD *)v50[0];
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 8LL) = *(_DWORD *)(a1 + 4);
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 32LL) = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 12LL) = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 80LL) = *(_DWORD *)(a1 + 20);
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 64LL) = *(_QWORD *)(a1 + 24);
  *(_OWORD *)(*(_QWORD *)v50[0] + 80LL) = *(_OWORD *)(a1 + 32);
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 72LL) = *(_QWORD *)(a1 + 48);
  v20 = *(_QWORD *)v50[0];
  *(_OWORD *)(v20 + 96) = *(_OWORD *)(a1 + 56);
  *(_QWORD *)(v20 + 112) = *(_QWORD *)(a1 + 72);
  v21 = *(_QWORD *)(*(_QWORD *)v50[0] + 8LL);
  *(_DWORD *)(v21 + 84) = *(_DWORD *)(a1 + 88);
  *(_WORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 6LL) = a3;
  *(_WORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 4LL) = v60;
  if ( v60 )
  {
    v22 = *(_QWORD *)v50[0];
    v23 = *(_QWORD *)(*(_QWORD *)v50[0] + 8LL);
    if ( *(_DWORD *)(a1 + 92) == 1 )
    {
      v61 = *(_DWORD *)(v23 + 84);
    }
    else
    {
      v22 = *(unsigned int *)(v23 + 80);
      LOWORD(v61) = *(_DWORD *)(v23 + 80);
    }
    v24 = v61 + *(_WORD *)(W32GetUserSessionState(v22, v21) + 71436);
    *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v26, v25) + 19928) + 2LL * ((v60 & 0x2FFFu) - 666) + 328) = v24;
  }
  if ( (*(_WORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 6LL) & 1) == 0 )
  {
    v27 = MapClientToServerPfn(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 32LL));
    if ( v27 )
    {
      v28 = 0;
      *(_WORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 6LL) |= 1u;
      *(_WORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 6LL) &= ~2u;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 32LL) = v27;
      v29 = &unk_14034CD00;
      while ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 32LL) != *v29 )
      {
        ++v28;
        v29 += 6;
        if ( v28 >= 5 )
          goto LABEL_43;
      }
      v30 = 6LL * v28;
      v31 = dword_14034CD08[2 * v30];
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 80LL) >= v31 )
      {
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 84LL) = v31;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 80LL) -= dword_14034CD08[2 * v30];
      }
    }
  }
LABEL_43:
  v32 = (a3 >> 6) & 1;
  if ( !(unsigned int)ValidateAndLockCursor((struct tagCURSOR **)(*(_QWORD *)v50[0] + 88LL), v32) )
  {
LABEL_83:
    SourceString = *(PCWSTR *)(*(_QWORD *)v50[0] + 32LL);
    *(_QWORD *)(*(_QWORD *)v50[0] + 32LL) = 0LL;
    ClassFree((PVOID *)v17, *(PVOID **)v50[0]);
    DeferrableUnlockObjectAssignment<tagDESKTOP>(&SourceString, v46, v47);
    goto LABEL_84;
  }
  if ( !(unsigned int)ValidateAndLockCursor((struct tagCURSOR **)(*(_QWORD *)v50[0] + 80LL), v32) )
  {
LABEL_82:
    HMAssignmentUnlock(*(_QWORD *)v50[0] + 88LL);
    goto LABEL_83;
  }
  if ( !(unsigned int)ValidateAndLockCursor((struct tagCURSOR **)(*(_QWORD *)v50[0] + 112LL), v32) )
  {
LABEL_81:
    HMAssignmentUnlock(*(_QWORD *)v50[0] + 80LL);
    goto LABEL_82;
  }
  v58 = *(_OWORD *)LockPointer(v59, *(_QWORD *)v50[0] + 112LL, *(_QWORD *)(*(_QWORD *)v50[0] + 112LL));
  HMAssignmentLock(&v58, 0LL);
  v33 = *(_QWORD *)(a1 + 64);
  if ( (v33 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v54 = 1;
    v34 = UserAddAtomEx(v33, 0LL, 2LL);
  }
  else
  {
    v34 = ValidateClassAtomForRegisterClass(*((struct tagPROCESSINFO **)v11 + 58), *(_WORD *)(a1 + 64));
  }
  if ( !v34 )
  {
LABEL_80:
    v45 = *(_QWORD *)v50[0] + 112LL;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 56LL) = 0LL;
    HMAssignmentUnlock(v45);
    goto LABEL_81;
  }
  *(_WORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 2LL) = v34;
  v35 = *(_QWORD *)(a1 + 80);
  if ( (v35 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v8 = 1;
    v36 = UserAddAtomEx(v35, 0LL, 2LL);
  }
  else
  {
    v36 = ValidateClassAtomForRegisterClass(*((struct tagPROCESSINFO **)v11 + 58), *(_WORD *)(a1 + 80));
  }
  if ( !v36 )
  {
LABEL_78:
    if ( v54 )
      UserDeleteAtom(*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 2LL));
    goto LABEL_80;
  }
  **(_WORD **)(*(_QWORD *)v50[0] + 8LL) = v36;
  v38 = *(const WCHAR **)(a1 + 64);
  if ( ((unsigned __int64)v38 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, v38);
    v39 = DestinationString.Length + 1;
  }
  else
  {
    v39 = 7;
  }
  v40 = ClassAllocString(v17, v39, v37);
  if ( !v40 )
  {
LABEL_76:
    if ( v8 )
      UserDeleteAtom(**(unsigned __int16 **)(*(_QWORD *)v50[0] + 8LL));
    goto LABEL_78;
  }
  if ( v17 )
  {
    tagCLS::SharedPointerFieldlpszAnsiClassName<char>::operator=(*(_QWORD *)v50[0] + 104LL, v40);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)v50[0] + 104LL) = v40;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 48LL) = 0LL;
  }
  if ( (*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v56.MaximumLength = v39;
    v56.Buffer = *(PCHAR *)(*(_QWORD *)v50[0] + 104LL);
    RtlUnicodeStringToAnsiString(&v56, &DestinationString, 0);
  }
  else
  {
    **(_BYTE **)(*(_QWORD *)v50[0] + 104LL) = 35;
    RtlIntegerToChar(
      *(unsigned __int16 *)(a1 + 64),
      0xAu,
      v39 - 1,
      (PCHAR)(*(_QWORD *)(*(_QWORD *)v50[0] + 104LL) + 1LL));
  }
  SourceString = *(PCWSTR *)(*(_QWORD *)v50[0] + 96LL);
  if ( SourceString && ((unsigned __int64)SourceString & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( !DestinationString.Length )
    {
      v41 = *(_QWORD *)v50[0];
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 40LL) = 0LL;
      *(_QWORD *)(v41 + 96) = 0LL;
      goto LABEL_68;
    }
    v57 = 0LL;
    if ( (unsigned int)AllocateUnicodeString(&v57, &DestinationString) )
    {
      v42 = *(_QWORD *)v50[0];
      v43 = *((_QWORD *)&v57 + 1);
      v44 = *((_QWORD *)&v57 + 1);
      if ( (*((_QWORD *)&v57 + 1) & 0xFFFFFFFFFFFF0000uLL) != 0 )
        v44 = -1LL;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 40LL) = v44;
      *(_QWORD *)(v42 + 96) = v43;
      goto LABEL_68;
    }
    ClassFree(v17, *(char **)(*(_QWORD *)v50[0] + 104LL));
    goto LABEL_76;
  }
LABEL_68:
  if ( v53 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 8LL) & 0x4000) != 0 )
  {
    **(_QWORD **)v50[0] = *(_QWORD *)(*((_QWORD *)v11 + 58) + 360LL);
    *(_QWORD *)(*((_QWORD *)v11 + 58) + 360LL) = *(_QWORD *)v50[0];
  }
  else
  {
    **(_QWORD **)v50[0] = *(_QWORD *)(*((_QWORD *)v11 + 58) + 352LL);
    *(_QWORD *)(*((_QWORD *)v11 + 58) + 352LL) = *(_QWORD *)v50[0];
  }
  v49 = *(_QWORD *)v50[0];
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>((__int64)v50);
  return v49;
}
