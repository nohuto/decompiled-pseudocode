/*
 * XREFs of CmLoadKey @ 0x140910E98
 * Callers:
 *     CmLoadDifferencingKey @ 0x140913148 (CmLoadDifferencingKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     _tlgWriteAgg @ 0x1403BAC2C (_tlgWriteAgg.c)
 *     CmpAllocatePool @ 0x1403DCED4 (CmpAllocatePool.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     CmpLoadKeyCommon @ 0x140465264 (CmpLoadKeyCommon.c)
 *     SetFailureLocation @ 0x140465824 (SetFailureLocation.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     CmpOpenHiveFile @ 0x14090F91C (CmpOpenHiveFile.c)
 *     CmpQueryHiveRedirectionFileList @ 0x14091175C (CmpQueryHiveRedirectionFileList.c)
 *     CmpCmdHiveOpen @ 0x140911900 (CmpCmdHiveOpen.c)
 *     CmpDestroyHive @ 0x1409F4BE0 (CmpDestroyHive.c)
 *     CmpResolveHiveLoadConflict @ 0x140A82524 (CmpResolveHiveLoadConflict.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140BA9B58 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140BA9B98 (CmpReleaseHiveLoadUnloadRundown.c)
 */

__int64 __fastcall CmLoadKey(
        __int64 a1,
        const UNICODE_STRING *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        struct _KEVENT *a8,
        __int64 a9,
        char a10,
        __int64 a11,
        ULONG_PTR *a12)
{
  __int64 v15; // rdi
  unsigned __int16 *v16; // rax
  unsigned int v17; // ecx
  char v18; // r14
  struct _PRIVILEGE_SET *Pool; // rax
  int v20; // ebx
  __int64 v21; // rax
  int v22; // edx
  int v23; // eax
  int v24; // ebx
  __int64 v25; // rsi
  char v26; // r13
  int KeyCommon; // eax
  __int64 v28; // r8
  char v29; // al
  unsigned __int8 *v30; // rdx
  unsigned int v31; // r9d
  unsigned int i; // edx
  __int64 v34; // r8
  int v35; // r11d
  unsigned int v36; // r8d
  __int64 v37; // rcx
  char v38; // al
  int v39; // r9d
  int v40; // r10d
  int v41; // edx
  int v42; // r9d
  int v43; // r10d
  NTSTATUS v44; // ebx
  int Conflict; // ebx
  UNICODE_STRING *p_Destination; // rax
  void *v47; // rcx
  NTSTATUS v48; // eax
  int Object; // [rsp+20h] [rbp-E0h]
  char v50[4]; // [rsp+60h] [rbp-A0h] BYREF
  char v51; // [rsp+64h] [rbp-9Ch] BYREF
  __int16 v52; // [rsp+68h] [rbp-98h] BYREF
  __int64 v53; // [rsp+70h] [rbp-90h] BYREF
  PVOID v54; // [rsp+78h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+88h] [rbp-78h] BYREF
  __int64 v57; // [rsp+90h] [rbp-70h] BYREF
  ULONG_PTR *v58; // [rsp+98h] [rbp-68h]
  struct _KEVENT *v59; // [rsp+A0h] [rbp-60h]
  __int64 v60; // [rsp+A8h] [rbp-58h]
  __int64 v61; // [rsp+B0h] [rbp-50h]
  __int64 v62; // [rsp+B8h] [rbp-48h]
  UNICODE_STRING Destination; // [rsp+C0h] [rbp-40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v65[2]; // [rsp+100h] [rbp+0h] BYREF
  PPRIVILEGE_SET *v66; // [rsp+120h] [rbp+20h]
  __int64 v67; // [rsp+128h] [rbp+28h]
  PVOID *v68; // [rsp+130h] [rbp+30h]
  __int64 v69; // [rsp+138h] [rbp+38h]
  char *v70; // [rsp+140h] [rbp+40h]
  __int64 v71; // [rsp+148h] [rbp+48h]
  char *v72; // [rsp+150h] [rbp+50h]
  __int64 v73; // [rsp+158h] [rbp+58h]
  PVOID *v74; // [rsp+160h] [rbp+60h]
  __int64 v75; // [rsp+168h] [rbp+68h]
  __int64 v76; // [rsp+170h] [rbp+70h]
  __int64 v77; // [rsp+178h] [rbp+78h]
  __int64 v78; // [rsp+180h] [rbp+80h]
  __int64 v79; // [rsp+188h] [rbp+88h]
  __int64 v80; // [rsp+190h] [rbp+90h]
  __int64 v81; // [rsp+198h] [rbp+98h]
  __int64 v82; // [rsp+1A0h] [rbp+A0h]
  __int64 v83; // [rsp+1A8h] [rbp+A8h]
  __int64 v84; // [rsp+1B0h] [rbp+B0h]
  __int64 v85; // [rsp+1B8h] [rbp+B8h]
  __int64 v86; // [rsp+1C0h] [rbp+C0h]
  int v87; // [rsp+1C8h] [rbp+C8h]
  int v88; // [rsp+1CCh] [rbp+CCh]
  __int64 *v89; // [rsp+1D0h] [rbp+D0h]
  __int64 v90; // [rsp+1D8h] [rbp+D8h]
  _BYTE v91[32]; // [rsp+1E0h] [rbp+E0h] BYREF
  PPRIVILEGE_SET *p_Privileges; // [rsp+200h] [rbp+100h]
  __int64 v93; // [rsp+208h] [rbp+108h]
  __int64 *v94; // [rsp+210h] [rbp+110h]
  __int64 v95; // [rsp+218h] [rbp+118h]
  __int64 *v96; // [rsp+220h] [rbp+120h]
  __int64 v97; // [rsp+228h] [rbp+128h]

  v60 = a5;
  v57 = a6;
  v59 = a8;
  v15 = 0LL;
  v61 = a9;
  v62 = a11;
  v58 = a12;
  v16 = *(unsigned __int16 **)(a1 + 16);
  v51 = 0;
  Destination = 0LL;
  v53 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  Handle = 0LL;
  LODWORD(v54) = 0;
  v17 = *v16;
  if ( (unsigned __int16)v17 >= 2u )
  {
    for ( i = v17 >> 1; i; *(_WORD *)v34 -= 2 )
    {
      v34 = *(_QWORD *)(a1 + 16);
      if ( *(_WORD *)(*(_QWORD *)(v34 + 8) + 2LL * --i) != 92 )
        break;
    }
  }
  v18 = 1;
  if ( **(_WORD **)(a1 + 16) < 2u )
  {
    v24 = -1073741811;
    goto LABEL_78;
  }
  Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL);
  Privileges = Pool;
  if ( !Pool )
  {
    v24 = -1073741670;
    goto LABEL_78;
  }
  Destination.Buffer = (wchar_t *)Pool;
  Destination.MaximumLength = 260;
  if ( (unsigned __int8)CmpQueryHiveRedirectionFileList(*(PUNICODE_STRING *)(a1 + 16), &Destination) )
  {
    p_Destination = &Destination;
    if ( Destination.Length == 2 )
      p_Destination = (UNICODE_STRING *)a2;
    a2 = p_Destination;
  }
  if ( !(unsigned __int8)CmpAcquireHiveLoadUnloadRundown() )
  {
    v24 = -1073741431;
    goto LABEL_21;
  }
  v20 = ((a3 & 0x2000) != 0 ? 3 : 0) | 8;
  if ( (a3 & 0x4000) == 0 )
    v20 = (a3 & 0x2000) != 0 ? 3 : 0;
  v21 = CmpAllocatePool(0x100uLL);
  v15 = v21;
  if ( !v21 )
  {
    v24 = -1073741670;
    goto LABEL_20;
  }
  v50[0] = 1;
  v22 = v20 | 4;
  if ( !v57 )
    v22 = v20;
  v23 = CmpCmdHiveOpen(
          (int)a2,
          ((a3 & 0xFFFFF223 | (2 * (a3 & 0x480 | (2 * (a3 & 0x20 | ((a3 & 4) << 6)))))) << 19) | 0x1190001,
          v22,
          v61,
          (__int64)&v51,
          v21);
  v24 = v23;
  if ( v23 < 0 )
  {
    if ( v23 != -1073741757 )
    {
      SetFailureLocation(v15, 0, 31, v23, 16);
      v25 = v53;
      goto LABEL_18;
    }
    if ( (int)CmpOpenHiveFile(a2, 0, &Handle, (int *)&v54, 8u, (void *)v61, 0LL, 0LL, 0LL, v15) < 0 )
    {
      Object = 32;
    }
    else
    {
      v54 = 0LL;
      v44 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v54, 0LL);
      ZwClose(Handle);
      if ( v44 < 0 )
      {
        Object = 48;
      }
      else
      {
        Conflict = CmpResolveHiveLoadConflict(a1, (_DWORD)v54, a3, v60, (__int64)v59, v15, a10, v62, (__int64)v58);
        ObfDereferenceObject(v54);
        if ( Conflict >= 0 )
        {
          v25 = v53;
          goto LABEL_17;
        }
        Object = 64;
      }
    }
    v24 = -1073741757;
    SetFailureLocation(v15, 0, 31, -1073741757, Object);
    v25 = v53;
    goto LABEL_18;
  }
  v25 = v53;
  if ( (a3 & 0x2000) != 0 )
  {
    v47 = *(void **)(v53 + 1544);
    Handle = 0LL;
    v48 = ObReferenceObjectByHandle(v47, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Handle, 0LL);
    v24 = v48;
    if ( v48 < 0 )
    {
      SetFailureLocation(v15, 0, 31, v48, 80);
      goto LABEL_18;
    }
    v26 = a10;
    v24 = CmpResolveHiveLoadConflict(a1, (_DWORD)Handle, a3, v60, (__int64)v59, v15, a10, v62, (__int64)v58);
    ObfDereferenceObject(Handle);
    if ( v24 < 0 )
    {
      if ( v24 == -1073741275 )
        goto LABEL_14;
      SetFailureLocation(v15, 0, 31, v24, 96);
LABEL_18:
      if ( v25 )
      {
        CmpAttachToRegistryProcess(&ApcState);
        CmpDestroyHive(v25);
        CmpDetachFromRegistryProcess(&ApcState);
      }
      goto LABEL_20;
    }
LABEL_17:
    v24 = 0;
    goto LABEL_18;
  }
  v26 = a10;
LABEL_14:
  if ( a7 )
    *(_DWORD *)(v25 + 4112) |= 0x2000u;
  KeyCommon = CmpLoadKeyCommon(v25, (_QWORD *)a1, a3, v60, v57, v59, v26, v58, v50[0], v51, v15);
  v24 = KeyCommon;
  v25 = 0LL;
  if ( KeyCommon >= 0 )
    goto LABEL_17;
  SetFailureLocation(v15, 0, 31, KeyCommon, 112);
LABEL_20:
  CmpReleaseHiveLoadUnloadRundown();
LABEL_21:
  CmSiFreeMemory(Privileges);
  if ( v24 >= 0 )
  {
    if ( (unsigned int)dword_140E09E08 > 5 )
    {
      if ( (qword_140E09E18 & 0x400000000008LL) == 0
        || (v29 = 1, (qword_140E09E20 & 0x400000000008LL) != qword_140E09E20) )
      {
        v29 = 0;
      }
      if ( v29 )
      {
        v57 = 0x1000000LL;
        p_Privileges = &Privileges;
        v30 = (unsigned __int8 *)&unk_140053B88;
        v97 = 8LL;
        v94 = &v53;
        v31 = 5;
        v96 = &v57;
LABEL_27:
        Privileges = (PPRIVILEGE_SET)1;
        v93 = 8LL;
        LODWORD(v53) = v24;
        v95 = 4LL;
        tlgWriteAgg((__int64)&dword_140E09E08, v30, v28, v31, (__int64)v91);
        goto LABEL_28;
      }
    }
    goto LABEL_28;
  }
  if ( v15 )
  {
    v35 = *(unsigned __int16 *)(v15 + 8);
    if ( *(_DWORD *)(v15 + 8) || *(_BYTE *)(v15 + 394) )
    {
      v36 = dword_140E09E08;
      v37 = qword_140E09E20;
      if ( (unsigned int)dword_140E09E08 > 5 )
      {
        if ( (qword_140E09E18 & 0x400000000008LL) == 0
          || (v38 = 1, (qword_140E09E20 & 0x400000000008LL) != qword_140E09E20) )
        {
          v38 = 0;
        }
        if ( v38 )
        {
          Privileges = (PPRIVILEGE_SET)1;
          v39 = *(unsigned __int16 *)(v15 + 10);
          v40 = *(unsigned __int8 *)(v15 + 394);
          v66 = &Privileges;
          v68 = (PVOID *)&v53;
          v70 = v50;
          v72 = (char *)&v52;
          v74 = &v54;
          v78 = v15 + 12;
          v82 = v15 + 108;
          v83 = (unsigned int)(12 * v39);
          v86 = v15 + 396;
          v89 = &v57;
          LOWORD(v54) = v40;
          v52 = v39;
          v79 = (unsigned int)(12 * v35);
          v80 = v15 + 10;
          v67 = 8LL;
          LODWORD(v53) = v24;
          v69 = 4LL;
          *(_WORD *)v50 = v35;
          v71 = 2LL;
          v73 = 2LL;
          v75 = 2LL;
          v76 = v15 + 8;
          v77 = 2LL;
          v81 = 2LL;
          v84 = v15 + 394;
          v85 = 2LL;
          v87 = 8 * v40;
          v88 = 0;
          v57 = 0x1000000LL;
          v90 = 8LL;
          tlgWriteAgg((__int64)&dword_140E09E08, (unsigned __int8 *)byte_1400538EF, v15 + 394, 0xEu, (__int64)v65);
          v37 = qword_140E09E20;
          v36 = dword_140E09E08;
        }
        if ( v36 > 5 )
        {
          if ( (qword_140E09E18 & 8) == 0 || (v37 & 8) != v37 )
            v18 = 0;
          if ( v18 )
          {
            v41 = *(unsigned __int16 *)(v15 + 8);
            v42 = *(unsigned __int16 *)(v15 + 10);
            v43 = *(unsigned __int8 *)(v15 + 394);
            v66 = (PPRIVILEGE_SET *)&v53;
            v68 = &v54;
            v70 = (char *)&v52;
            v72 = v50;
            v76 = v15 + 12;
            v77 = (unsigned int)(12 * v41);
            v80 = v15 + 108;
            v81 = (unsigned int)(12 * v42);
            v84 = v15 + 396;
            *(_WORD *)v50 = v43;
            LOWORD(v54) = v41;
            v52 = v42;
            v78 = v15 + 10;
            v82 = v15 + 394;
            LODWORD(v53) = v24;
            v67 = 4LL;
            v69 = 2LL;
            v71 = 2LL;
            v73 = 2LL;
            v74 = (PVOID *)(v15 + 8);
            v75 = 2LL;
            v79 = 2LL;
            v83 = 2LL;
            v85 = (unsigned int)(8 * v43);
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E09E08,
              (unsigned __int8 *)byte_140053A4F,
              0LL,
              0LL,
              0xCu,
              v65);
          }
        }
      }
      goto LABEL_29;
    }
  }
LABEL_78:
  if ( (unsigned int)dword_140E09E08 > 5 && tlgKeywordOn((__int64)&dword_140E09E08, 0x400000000000LL) )
  {
    v31 = 4;
    p_Privileges = &Privileges;
    v30 = (unsigned __int8 *)byte_1400538A9;
    v94 = &v53;
    goto LABEL_27;
  }
LABEL_28:
  if ( v15 )
LABEL_29:
    CmSiFreeMemory((PPRIVILEGE_SET)v15);
  return (unsigned int)v24;
}
