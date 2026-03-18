/*
 * XREFs of InternalRegisterClassEx @ 0x1C00A9170
 * Callers:
 *     RegisterIconTitleClass @ 0x1C00A711C (RegisterIconTitleClass.c)
 *     RegisterDefaultClass @ 0x1C00A9B8C (RegisterDefaultClass.c)
 *     _RegisterClassEx @ 0x1C013A408 (_RegisterClassEx.c)
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0083C40 (-Allocate@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     AllocateUnicodeString @ 0x1C008F36C (AllocateUnicodeString.c)
 *     MapClientToServerPfn @ 0x1C00A9DA0 (MapClientToServerPfn.c)
 *     ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1C00AA3A4 (-ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     ??$UserAllocateIsolatedType@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C00E08E4 (--$UserAllocateIsolatedType@V-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAPEAXXZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C013A370 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C013A390 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C01BD7A0 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z @ 0x1C01BD8C8 (-ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x1C01BD908 (-ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z.c)
 */

__int64 __fastcall InternalRegisterClassEx(__int64 a1, unsigned __int16 a2, __int16 a3, _DWORD *a4)
{
  __int64 v7; // r12
  __int64 v8; // r14
  int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // r10
  __int64 *v12; // rbx
  __int64 *v13; // rax
  __int64 v14; // r9
  __int64 *v15; // rcx
  _WORD *v16; // rdx
  __int64 v17; // rsi
  unsigned int v18; // r14d
  struct tagCLS *v19; // rbx
  char *Heap; // rax
  struct tagCLS **v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // r8
  BOOL v25; // r14d
  __int64 *v26; // r13
  __int64 v27; // rbx
  __int64 v28; // r12
  __int64 v29; // r14
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  __int64 v32; // r8
  bool v33; // zf
  int v34; // eax
  _QWORD *v35; // rbx
  int v36; // eax
  _QWORD *v37; // rbx
  int v38; // eax
  __int64 *v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  int v43; // r13d
  unsigned __int16 v44; // ax
  __int64 v45; // rax
  int v46; // r14d
  unsigned __int16 v47; // ax
  const WCHAR *v48; // rdx
  unsigned int v49; // ebx
  char *v50; // rax
  __int64 v51; // r8
  const WCHAR *v52; // rdx
  __int64 v53; // rbx
  __int64 v55; // rax
  int v56; // r8d
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rdx
  PWSTR Buffer; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  unsigned int v64; // r9d
  _DWORD *v65; // r8
  __int64 v66; // rcx
  __int64 v67; // rcx
  _QWORD v68[2]; // [rsp+20h] [rbp-F8h] BYREF
  int v69; // [rsp+30h] [rbp-E8h]
  int v70; // [rsp+34h] [rbp-E4h]
  struct tagDESKTOP *v71; // [rsp+38h] [rbp-E0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-D0h] BYREF
  _QWORD v73[2]; // [rsp+60h] [rbp-B8h] BYREF
  _QWORD *v74; // [rsp+70h] [rbp-A8h]
  struct _STRING v75; // [rsp+78h] [rbp-A0h] BYREF
  _QWORD v76[2]; // [rsp+90h] [rbp-88h] BYREF
  _QWORD v77[2]; // [rsp+A0h] [rbp-78h] BYREF
  _QWORD v78[2]; // [rsp+B0h] [rbp-68h] BYREF
  struct _UNICODE_STRING v79; // [rsp+C0h] [rbp-58h] BYREF
  BOOL v81; // [rsp+130h] [rbp+18h]

  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v68);
  DestinationString = 0LL;
  v75 = 0LL;
  v69 = 0;
  v7 = gptiCurrent;
  v73[0] = gptiCurrent;
  v8 = *(_QWORD *)(a1 + 24);
  v9 = a3 & 1;
  v70 = v9;
  if ( (a3 & 1) == 0 && v8 == hModuleWin && *(_WORD *)(gptiCurrent + 632LL) >= 0x400u )
  {
LABEL_111:
    v58 = 87LL;
    goto LABEL_91;
  }
  v10 = *(_QWORD *)(a1 + 80);
  if ( (v10 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    LOWORD(v10) = UserFindAtom(*(_QWORD *)(a1 + 80));
    v9 = v70;
  }
  if ( a4 )
    *a4 = 0;
  if ( !(_WORD)v10 || v9 )
    goto LABEL_16;
  v11 = *(_QWORD *)(gptiCurrent + 424LL);
  v12 = (__int64 *)(v11 + 352);
  v13 = *(__int64 **)(v11 + 352);
  if ( v13 )
  {
    while ( 1 )
    {
      v14 = v13[1];
      if ( *(_WORD *)v14 == (_WORD)v10
        && (!v8 || WORD1(*(_QWORD *)(v14 + 64)) == WORD1(v8))
        && (*(_WORD *)(v14 + 6) & 4) == 0 )
      {
        break;
      }
      v12 = v13;
      v13 = (__int64 *)*v13;
      if ( !v13 )
        goto LABEL_12;
    }
    if ( (unsigned int)PsGetWin32KFilterSet() != 5 )
      goto LABEL_90;
    if ( !a4 )
      goto LABEL_114;
LABEL_113:
    *a4 = 1;
LABEL_114:
    v53 = *v12;
LABEL_74:
    SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v68);
    return v53;
  }
LABEL_12:
  if ( (*(_DWORD *)(a1 + 4) & 0x4000) == 0 || (v12 = (__int64 *)(v11 + 360), (v15 = *(__int64 **)(v11 + 360)) == 0LL) )
  {
LABEL_16:
    if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) != 0 )
      v17 = 0LL;
    else
      v17 = *(_QWORD *)(gptiCurrent + 456LL);
    v71 = (struct tagDESKTOP *)v17;
    v18 = *(_DWORD *)(a1 + 16) + 88;
    if ( *(_DWORD *)(a1 + 16) >= 0xFFFFFFA8 )
      goto LABEL_111;
    if ( v17 )
    {
      if ( *gpUserTypeIsolation )
      {
        v19 = (struct tagCLS *)NSInstrumentation::CTypeIsolation<36864,144>::Allocate((__int64)*gpUserTypeIsolation);
        if ( v19 )
        {
          Heap = (char *)RtlAllocateHeap(*(PVOID *)(v17 + 136), 0, v18);
          *((_QWORD *)v19 + 1) = Heap;
          if ( Heap )
          {
            *((_QWORD *)v19 + 2) = &Heap[-*(_QWORD *)(v17 + 16)];
          }
          else
          {
            UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<36864,144>>(v19);
            v19 = 0LL;
          }
LABEL_24:
          if ( v19 )
          {
            if ( !gpStackRefLookAside )
              KeBugCheck(4u);
            v21 = (struct tagCLS **)Win32AllocateFromPagedLookasideList(gpStackRefLookAside);
            *((_QWORD *)v19 + 16) = v21;
            if ( v21 )
            {
              *v21 = v19;
              *(_DWORD *)(*((_QWORD *)v19 + 16) + 8LL) = 0;
              *(_BYTE *)(*((_QWORD *)v19 + 16) + 12LL) = 0;
            }
            else
            {
              ClassFree((struct tagDESKTOP *)v17, v19);
              v19 = 0LL;
            }
          }
          if ( v19 != *(struct tagCLS **)v68[0] )
          {
            if ( v68[0] != gSmartObjNullRef && !--*(_DWORD *)(v68[0] + 8LL) )
            {
              if ( *(_BYTE *)(v68[0] + 12LL) )
                Win32FreeToPagedLookasideList(gpStackRefLookAside, v68[0]);
            }
            if ( v19 )
            {
              v68[0] = *((_QWORD *)v19 + 16);
              ++*(_DWORD *)(v68[0] + 8LL);
            }
            else
            {
              v68[0] = gSmartObjNullRef;
            }
          }
          if ( !*(_QWORD *)v68[0] )
            goto LABEL_92;
          LockObjectAssignment(*(_QWORD *)v68[0] + 32LL, v17);
          *(_QWORD *)(*(_QWORD *)v68[0] + 56LL) = *(_QWORD *)v68[0];
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v68[0] + 8LL) + 8LL) = *(_DWORD *)(a1 + 4);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v68[0] + 8LL) + 32LL) = *(_QWORD *)(a1 + 8);
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v68[0] + 8LL) + 12LL) = *(_DWORD *)(a1 + 16);
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v68[0] + 8LL) + 80LL) = *(_DWORD *)(a1 + 20);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v68[0] + 8LL) + 64LL) = *(_QWORD *)(a1 + 24);
          *(_OWORD *)(*(_QWORD *)v68[0] + 80LL) = *(_OWORD *)(a1 + 32);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v68[0] + 8LL) + 72LL) = *(_QWORD *)(a1 + 48);
          v22 = *(_QWORD *)v68[0];
          *(_OWORD *)(v22 + 96) = *(_OWORD *)(a1 + 56);
          *(_QWORD *)(v22 + 112) = *(_QWORD *)(a1 + 72);
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v68[0] + 8LL) + 84LL) = *(_DWORD *)(a1 + 88);
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)v68[0] + 8LL) + 6LL) = a3;
          v23 = a2;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)v68[0] + 8LL) + 4LL) = a2;
          if ( a2 )
          {
            v55 = *(_QWORD *)(*(_QWORD *)v68[0] + 8LL);
            if ( *(_DWORD *)(a1 + 92) == 1 )
              v56 = *(_DWORD *)(v55 + 84);
            else
              v56 = *(_DWORD *)(v55 + 80);
            v23 = (a2 & 0x2FFFu) - 666;
            *(_WORD *)(gpsi + 2LL * (unsigned int)v23 + 328) = v56 + 328;
          }
          if ( (*(_WORD *)(*(_QWORD *)(*(_QWORD *)v68[0] + 8LL) + 6LL) & 1) == 0 )
          {
            v24 = MapClientToServerPfn(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v68[0] + 8LL) + 32LL));
            if ( v24 )
            {
              v64 = 0;
              *(_WORD *)(*(_QWORD *)(*(_QWORD *)v68[0] + 8LL) + 6LL) |= 1u;
              *(_WORD *)(*(_QWORD *)(*(_QWORD *)v68[0] + 8LL) + 6LL) &= ~2u;
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v68[0] + 8LL) + 32LL) = v24;
              v23 = (unsigned __int64)&unk_1C0309480;
              while ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v68[0] + 8LL) + 32LL) != *(_QWORD *)v23 )
              {
                ++v64;
                v23 += 48LL;
                if ( v64 >= 8 )
                  goto LABEL_36;
              }
              v23 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)v68[0] + 8LL) + 80LL);
              v65 = (_DWORD *)((char *)&unk_1C0309488 + 48 * v64);
              if ( (int)v23 >= *v65 )
              {
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v68[0] + 8LL) + 84LL) = *v65;
                v23 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v68[0] + 8LL) + 80LL) - *v65);
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v68[0] + 8LL) + 80LL) = v23;
              }
            }
          }
LABEL_36:
          v25 = (a3 & 0x40) != 0;
          v81 = v25;
          v26 = (__int64 *)(*(_QWORD *)v68[0] + 88LL);
          v27 = *v26;
          if ( !*v26 )
            goto LABEL_44;
          v28 = 0LL;
          PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( (unsigned __int64)(unsigned __int16)v27 >= *(_QWORD *)(gpsi + 8LL) )
          {
LABEL_42:
            if ( !v28 && v25 )
            {
              UserSetLastError(87LL);
              v34 = 0;
              v7 = v73[0];
LABEL_45:
              if ( !v34 )
              {
LABEL_154:
                v71 = *(struct tagDESKTOP **)(*(_QWORD *)v68[0] + 32LL);
                *(_QWORD *)(*(_QWORD *)v68[0] + 32LL) = 0LL;
                ClassFree((struct tagDESKTOP *)v17, *(struct tagCLS **)v68[0]);
                UnlockObjectAssignment(&v71);
                goto LABEL_92;
              }
              v35 = (_QWORD *)(*(_QWORD *)v68[0] + 80LL);
              if ( *v35 )
              {
                LOBYTE(v23) = 3;
                v57 = HMValidateHandleNoSecure(*v35, v23);
                if ( !v57 && v25 )
                {
                  UserSetLastError(87LL);
                  v36 = 0;
LABEL_48:
                  if ( !v36 )
                  {
LABEL_153:
                    HMAssignmentUnlock(*(_QWORD *)v68[0] + 88LL);
                    goto LABEL_154;
                  }
                  v37 = (_QWORD *)(*(_QWORD *)v68[0] + 112LL);
                  if ( *v37 )
                  {
                    LOBYTE(v23) = 3;
                    v59 = HMValidateHandleNoSecure(*v37, v23);
                    if ( !v59 && v25 )
                    {
                      UserSetLastError(87LL);
                      v38 = 0;
                      goto LABEL_51;
                    }
                    *v37 = 0LL;
                    v77[0] = v37;
                    v77[1] = v59;
                    HMAssignmentLock(v77, 0LL);
                  }
                  v38 = 1;
LABEL_51:
                  if ( v38 )
                  {
                    v39 = *(__int64 **)(*(_QWORD *)v68[0] + 112LL);
                    v40 = *(_QWORD *)v68[0] + 112LL;
                    if ( v39 )
                      v41 = *v39;
                    else
                      v41 = 0LL;
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v68[0] + 8LL) + 56LL) = v41;
                    v78[0] = v40;
                    v78[1] = v39;
                    HMAssignmentLock(v78, 0LL);
                    v42 = *(_QWORD *)(a1 + 64);
                    if ( (v42 & 0xFFFFFFFFFFFF0000uLL) != 0 )
                    {
                      v43 = 1;
                      v44 = UserAddAtomEx(v42, 0LL, 2LL);
                    }
                    else
                    {
                      v44 = ValidateClassAtomForRegisterClass(*(struct tagPROCESSINFO **)(v7 + 424), v42);
                      v43 = 0;
                    }
                    if ( v44 )
                    {
                      *(_WORD *)(*(_QWORD *)(*(_QWORD *)v68[0] + 8LL) + 2LL) = v44;
                      v45 = *(_QWORD *)(a1 + 80);
                      if ( (v45 & 0xFFFFFFFFFFFF0000uLL) != 0 )
                      {
                        v46 = 1;
                        v69 = 1;
                        v47 = UserAddAtomEx(v45, 0LL, 2LL);
                      }
                      else
                      {
                        v47 = ValidateClassAtomForRegisterClass(*(struct tagPROCESSINFO **)(v7 + 424), v45);
                        v46 = 0;
                      }
                      if ( v47 )
                      {
                        **(_WORD **)(*(_QWORD *)v68[0] + 8LL) = v47;
                        v48 = *(const WCHAR **)(a1 + 64);
                        if ( ((unsigned __int64)v48 & 0xFFFFFFFFFFFF0000uLL) != 0 )
                        {
                          RtlInitUnicodeString(&DestinationString, v48);
                          v49 = DestinationString.Length + 1;
                        }
                        else
                        {
                          v49 = 7;
                        }
                        if ( v17 )
                          v50 = (char *)RtlAllocateHeap(*(PVOID *)(v17 + 136), 0, v49);
                        else
                          v50 = (char *)Win32AllocPoolZInit(v49, 1818456917LL);
                        if ( v50 )
                        {
                          if ( v17 )
                          {
                            v51 = *(_QWORD *)v68[0];
                            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v68[0] + 8LL) + 48LL) = &v50[-(*(_QWORD *)(*(_QWORD *)v68[0] + 8LL)
                                                                                            - *(_QWORD *)(*(_QWORD *)v68[0] + 16LL))];
                            *(_QWORD *)(v51 + 104) = v50;
                          }
                          else
                          {
                            *(_QWORD *)(*(_QWORD *)v68[0] + 104LL) = v50;
                            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v68[0] + 8LL) + 48LL) = 0LL;
                          }
                          if ( (*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFF0000uLL) != 0 )
                          {
                            v75.MaximumLength = v49;
                            v75.Buffer = *(PCHAR *)(*(_QWORD *)v68[0] + 104LL);
                            RtlUnicodeStringToAnsiString(&v75, &DestinationString, 0);
                          }
                          else
                          {
                            **(_BYTE **)(*(_QWORD *)v68[0] + 104LL) = 35;
                            RtlIntegerToChar(
                              *(unsigned __int16 *)(a1 + 64),
                              0xAu,
                              v49 - 1,
                              (PCHAR)(*(_QWORD *)(*(_QWORD *)v68[0] + 104LL) + 1LL));
                          }
                          v52 = *(const WCHAR **)(*(_QWORD *)v68[0] + 96LL);
                          if ( !v52 || ((unsigned __int64)v52 & 0xFFFFFFFFFFFF0000uLL) == 0 )
                          {
LABEL_70:
                            if ( v70 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v68[0] + 8LL) + 8LL) & 0x4000) != 0 )
                            {
                              **(_QWORD **)v68[0] = *(_QWORD *)(*(_QWORD *)(v7 + 424) + 360LL);
                              *(_QWORD *)(*(_QWORD *)(v7 + 424) + 360LL) = *(_QWORD *)v68[0];
                            }
                            else
                            {
                              **(_QWORD **)v68[0] = *(_QWORD *)(*(_QWORD *)(v7 + 424) + 352LL);
                              *(_QWORD *)(*(_QWORD *)(v7 + 424) + 352LL) = *(_QWORD *)v68[0];
                            }
                            v53 = *(_QWORD *)v68[0];
                            goto LABEL_74;
                          }
                          RtlInitUnicodeString(&DestinationString, v52);
                          if ( !DestinationString.Length )
                          {
                            v66 = *(_QWORD *)v68[0];
                            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v68[0] + 8LL) + 40LL) = 0LL;
                            *(_QWORD *)(v66 + 96) = 0LL;
                            goto LABEL_70;
                          }
                          v79 = 0LL;
                          if ( (unsigned int)AllocateUnicodeString(&v79, (const void **)&DestinationString) )
                          {
                            v60 = *(_QWORD *)v68[0];
                            Buffer = v79.Buffer;
                            v62 = *(_QWORD *)(*(_QWORD *)v68[0] + 8LL);
                            if ( ((unsigned __int64)v79.Buffer & 0xFFFFFFFFFFFF0000uLL) != 0 )
                              *(_QWORD *)(v62 + 40) = -1LL;
                            else
                              *(_QWORD *)(v62 + 40) = v79.Buffer;
                            *(_QWORD *)(v60 + 96) = Buffer;
                            goto LABEL_70;
                          }
                          ClassFree((struct tagDESKTOP *)v17, *(char **)(*(_QWORD *)v68[0] + 104LL));
                        }
                        if ( v46 )
                          UserDeleteAtom(**(unsigned __int16 **)(*(_QWORD *)v68[0] + 8LL));
                      }
                      if ( v43 )
                        UserDeleteAtom(*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v68[0] + 8LL) + 2LL));
                    }
                    v67 = *(_QWORD *)v68[0] + 112LL;
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v68[0] + 8LL) + 56LL) = 0LL;
                    HMAssignmentUnlock(v67);
                  }
                  HMAssignmentUnlock(*(_QWORD *)v68[0] + 80LL);
                  goto LABEL_153;
                }
                *v35 = 0LL;
                v73[0] = v35;
                v73[1] = v57;
                HMAssignmentLock(v73, 0LL);
              }
              v36 = 1;
              goto LABEL_48;
            }
            *v26 = 0LL;
            v76[0] = v26;
            v76[1] = v28;
            HMAssignmentLock(v76, 0LL);
            v7 = v73[0];
LABEL_44:
            v34 = 1;
            goto LABEL_45;
          }
          v29 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v27;
          v31 = (_QWORD *)HMPkheFromPhe(v29);
          v74 = v31;
          LOWORD(v27) = WORD1(v27) & 0x7FFF;
          if ( (WORD1(v27) & 0x7FFF) != *(_WORD *)(v29 + 26) && (_WORD)v27 != 0x7FFF )
          {
            if ( (_WORD)v27 || !PsGetCurrentProcessWow64Process(v31, v30, v32) )
            {
LABEL_137:
              v25 = v81;
              goto LABEL_42;
            }
            v31 = v74;
          }
          if ( (*(_BYTE *)(v29 + 25) & 1) == 0 )
          {
            v33 = *(_BYTE *)(v29 + 24) == 3;
            v25 = v81;
            if ( v33 )
              v28 = *v31;
            goto LABEL_42;
          }
          goto LABEL_137;
        }
      }
    }
    else
    {
      v19 = (struct tagCLS *)UserAllocateIsolatedType<NSInstrumentation::CTypeIsolation<36864,144>>();
      if ( !v19 )
        goto LABEL_24;
      v63 = Win32AllocPoolZInit(v18, 1818456917LL);
      *((_QWORD *)v19 + 1) = v63;
      if ( v63 )
      {
        *((_QWORD *)v19 + 2) = 0LL;
        goto LABEL_24;
      }
      UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<36864,144>>(v19);
    }
    v19 = 0LL;
    goto LABEL_24;
  }
  while ( 1 )
  {
    v16 = (_WORD *)v15[1];
    if ( *v16 == (_WORD)v10 && (v16[3] & 4) == 0 )
      break;
    v12 = v15;
    v15 = (__int64 *)*v15;
    if ( !v15 )
      goto LABEL_16;
  }
  if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
  {
    if ( !a4 )
      goto LABEL_114;
    goto LABEL_113;
  }
LABEL_90:
  v58 = 1410LL;
LABEL_91:
  UserSetLastError(v58);
LABEL_92:
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v68);
  return 0LL;
}
