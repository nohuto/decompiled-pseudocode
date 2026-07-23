/*
 * XREFs of SepAdtOpenObjectAuditAlarm @ 0x140862A14
 * Callers:
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14084CBA0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeAuditHandleCreation @ 0x140862770 (SeAuditHandleCreation.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14088DEB0 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     NtOpenObjectAuditAlarm @ 0x140911F00 (NtOpenObjectAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A07A00 (SepAccessCheckAndAuditAlarm.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x140A6FBA0 (SeOpenObjectAuditAlarmForNonObObject.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x1403C288C (SepAdtLogAuditRecord.c)
 *     PsGetCurrentThreadProcess @ 0x14046B080 (PsGetCurrentThreadProcess.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x1404A65E4 (SepCheckAndCopySelfRelativeSD.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SepSDContainsAttributeACE @ 0x140795224 (SepSDContainsAttributeACE.c)
 *     SepAuditFailed @ 0x14084D220 (SepAuditFailed.c)
 *     SepAdtAuditThisEventWithContext @ 0x14084EED0 (SepAdtAuditThisEventWithContext.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x140860D60 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ObNormalizeHandleValue @ 0x140861E80 (ObNormalizeHandleValue.c)
 *     SepSecurityDescriptorStrictLength @ 0x140861EB8 (SepSecurityDescriptorStrictLength.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

bool __fastcall SepAdtOpenObjectAuditAlarm(
        __int16 a1,
        const int *a2,
        unsigned __int64 *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        __int16 *a6,
        _QWORD *a7,
        _QWORD *a8,
        unsigned int a9,
        unsigned int a10,
        int *a11,
        unsigned __int8 a12,
        __int64 a13,
        int a14,
        __int64 a15,
        unsigned int a16,
        _DWORD *a17,
        __int128 *a18,
        __int64 a19)
{
  __int16 *v19; // r15
  __int64 v22; // rbx
  __int128 *v24; // rax
  _KPROCESS *CurrentThreadProcess; // rax
  signed int AllocatedFullProcessImageName; // edi
  __int64 *v27; // rax
  __int64 v28; // r8
  __int64 v29; // rax
  int v30; // ecx
  unsigned __int8 v31; // r9
  const int *v32; // rdx
  __int64 v33; // r11
  int v34; // ecx
  int v35; // ecx
  __int64 v36; // rax
  __int64 v37; // rbx
  PVOID v38; // r13
  int v39; // ecx
  unsigned int v40; // r12d
  char *Pool2; // rax
  char *v42; // rbx
  unsigned int v43; // eax
  int v44; // r14d
  __int64 v45; // rcx
  unsigned int v46; // ecx
  unsigned int v47; // ecx
  unsigned __int16 *v48; // rdx
  int v49; // ecx
  int v50; // ecx
  PVOID v51; // rbx
  PVOID v52; // r14
  int v53; // r8d
  unsigned int v54; // edx
  __int64 v55; // rax
  unsigned __int16 v56; // r12
  _WORD *v57; // r8
  int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // rax
  char *v61; // rax
  _OWORD *v62; // r9
  __int64 v63; // r8
  unsigned int v64; // edx
  _DWORD *v65; // r10
  __int64 v66; // rcx
  int v67; // eax
  __int64 v68; // rcx
  int v69; // eax
  __int16 v70; // [rsp+28h] [rbp-E0h] BYREF
  char v71; // [rsp+2Ah] [rbp-DEh] BYREF
  int v72; // [rsp+2Ch] [rbp-DCh]
  size_t Size; // [rsp+30h] [rbp-D8h] BYREF
  void *Src; // [rsp+38h] [rbp-D0h]
  PVOID v75; // [rsp+40h] [rbp-C8h]
  PVOID v76; // [rsp+48h] [rbp-C0h] BYREF
  PVOID v77; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD *v78; // [rsp+58h] [rbp-B0h]
  __int16 *v79; // [rsp+60h] [rbp-A8h] BYREF
  PVOID P; // [rsp+68h] [rbp-A0h]
  PVOID v81; // [rsp+70h] [rbp-98h] BYREF
  __int64 v82; // [rsp+78h] [rbp-90h]
  unsigned __int64 *v83; // [rsp+80h] [rbp-88h]
  __int128 *v84; // [rsp+88h] [rbp-80h]
  __int16 *v85; // [rsp+90h] [rbp-78h]
  struct _SECURITY_SUBJECT_CONTEXT v86; // [rsp+98h] [rbp-70h] BYREF
  int v87; // [rsp+B8h] [rbp-50h] BYREF
  int v88; // [rsp+BCh] [rbp-4Ch]
  unsigned int v89; // [rsp+C0h] [rbp-48h]
  __int16 v90; // [rsp+C8h] [rbp-40h]
  __int16 v91; // [rsp+CAh] [rbp-3Eh]
  int v92; // [rsp+D0h] [rbp-38h]
  _DWORD v93[5]; // [rsp+D4h] [rbp-34h]
  __int64 v94; // [rsp+E8h] [rbp-20h]
  int v95; // [rsp+F0h] [rbp-18h]
  int v96; // [rsp+F4h] [rbp-14h]
  const int *v97; // [rsp+108h] [rbp+0h]
  int v98; // [rsp+110h] [rbp+8h]
  int v99; // [rsp+114h] [rbp+Ch]
  __int64 v100; // [rsp+118h] [rbp+10h]
  int v101; // [rsp+130h] [rbp+28h]
  int v102; // [rsp+134h] [rbp+2Ch]
  const int *v103; // [rsp+148h] [rbp+40h]
  int v104; // [rsp+150h] [rbp+48h]
  int v105; // [rsp+154h] [rbp+4Ch]
  unsigned __int16 *v106; // [rsp+168h] [rbp+60h]
  int v107; // [rsp+170h] [rbp+68h]
  int v108; // [rsp+174h] [rbp+6Ch]
  unsigned __int16 *v109; // [rsp+188h] [rbp+80h]
  int v110; // [rsp+190h] [rbp+88h]
  int v111; // [rsp+194h] [rbp+8Ch]
  unsigned __int64 v112; // [rsp+198h] [rbp+90h]
  int v113; // [rsp+1B0h] [rbp+A8h]
  int v114; // [rsp+1B4h] [rbp+ACh]
  __int128 *v115; // [rsp+1C8h] [rbp+C0h]
  int v116; // [rsp+1D0h] [rbp+C8h]
  int v117; // [rsp+1D4h] [rbp+CCh]
  __int64 v118; // [rsp+1D8h] [rbp+D0h]
  __int64 v119; // [rsp+1E0h] [rbp+D8h]
  __int128 v120; // [rsp+4D8h] [rbp+3D0h] BYREF

  v19 = a6;
  v83 = a3;
  LOWORD(v72) = a1;
  v85 = a6;
  v79 = a6;
  v78 = a8;
  v82 = a19;
  memset_0(&v87, 0, 0x418uLL);
  v86.ClientToken = a7;
  v22 = 0LL;
  P = 0LL;
  v81 = 0LL;
  *(_QWORD *)&v86.ImpersonationLevel = 0LL;
  v86.ProcessAuditId = 0LL;
  Size = 0LL;
  Src = 0LL;
  v76 = 0LL;
  v75 = 0LL;
  v77 = 0LL;
  v71 = 0;
  v70 = 0;
  v120 = 0LL;
  v86.PrimaryToken = a8;
  if ( !SepAdtAuditThisEventWithContext(124LL, a12, a12 == 0, &v86) )
    return 1;
  v24 = &v120;
  if ( a18 )
    v24 = a18;
  v84 = v24;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64 *)&v81);
  if ( AllocatedFullProcessImageName < 0 )
    goto LABEL_44;
  if ( a7 )
  {
    v22 = a7[3];
    v27 = (__int64 *)a7[19];
  }
  else
  {
    v27 = (__int64 *)v78[19];
  }
  v28 = *v27;
  v29 = v78[3];
  v30 = 8;
  v88 = 4656;
  v90 = v72;
  v31 = a12;
  if ( a14 == 2 )
    v30 = 3;
  v91 = 8;
  v87 = v30;
  if ( !a12 )
    v91 = 16;
  v32 = &SeSubsystemName;
  v33 = 4LL;
  if ( a2 )
    v32 = a2;
  v92 = 4;
  v34 = *(unsigned __int8 *)(v28 + 1);
  v94 = v28;
  v95 = 1;
  v97 = v32;
  v98 = 5;
  v93[0] = 4 * v34 + 8;
  v35 = *(unsigned __int16 *)v32 + 16;
  v100 = v22;
  v96 = v35;
  v99 = 8;
  if ( !a7 )
    v100 = v29;
  v101 = 1;
  v102 = v35;
  v103 = v32;
  v89 = 4;
  if ( !a4 )
  {
    AllocatedFullProcessImageName = -1073741811;
    goto LABEL_44;
  }
  v105 = *a4 + 16;
  v104 = 1;
  v106 = a4;
  if ( a5 )
  {
    if ( (_WORD)v72 == 117 || (v107 = 1, (_WORD)v72 == 129) )
      v107 = 2;
    v58 = *a5;
    v109 = a5;
    v108 = v58 + 16;
  }
  v110 = 11;
  v111 = 8;
  if ( v83 )
    v112 = ObNormalizeHandleValue(*v83);
  else
    v112 = 0LL;
  v115 = v84;
  v36 = a10;
  v113 = 13;
  v114 = 16;
  v116 = 7;
  v117 = v33;
  v119 = v33;
  if ( !v31 )
    v36 = a9;
  v37 = v82;
  v118 = v36;
  v89 = 9;
  if ( !v82 || (v59 = *(_QWORD *)(v82 + 72)) == 0 )
  {
    v38 = Src;
LABEL_24:
    v39 = 0;
    goto LABEL_25;
  }
  AllocatedFullProcessImageName = SepCheckAndCopySelfRelativeSD(
                                    *(__int16 **)(v59 + 56),
                                    &v76,
                                    (ULONG *)&Size,
                                    (_BYTE *)&v70 + 1);
  if ( AllocatedFullProcessImageName < 0 )
  {
    v51 = v76;
    goto LABEL_45;
  }
  AllocatedFullProcessImageName = SepCheckAndCopySelfRelativeSD(
                                    *(__int16 **)(*(_QWORD *)(v37 + 72) + 64LL),
                                    &v77,
                                    (ULONG *)&Size + 1,
                                    &v71);
  if ( AllocatedFullProcessImageName < 0 )
  {
    v51 = v76;
    v52 = v77;
    goto LABEL_46;
  }
  v38 = v76;
  v75 = v77;
  Src = v76;
  if ( !v76 && !v77 )
    goto LABEL_24;
  v39 = 8;
LABEL_25:
  v40 = HIDWORD(Size) - v39 + Size + 152;
  Pool2 = (char *)ExAllocatePool2(0x100uLL, v40, 0x70416553u);
  v42 = Pool2;
  if ( !Pool2 )
  {
    AllocatedFullProcessImageName = -1073741670;
    goto LABEL_44;
  }
  memset_0(Pool2, 0, v40);
  v43 = a10;
  *((_DWORD *)v42 + 34) = a12;
  if ( !a12 )
    v43 = a9;
  *((_DWORD *)v42 + 33) = 4;
  *(_DWORD *)v42 = v43 & 0xFDFFFFFF;
  if ( v82 )
  {
    v60 = *(_QWORD *)(v82 + 72);
    if ( v60 )
    {
      *(_OWORD *)(v42 + 4) = *(_OWORD *)(v60 + 88);
      *(_OWORD *)(v42 + 20) = *(_OWORD *)(v60 + 104);
      *(_OWORD *)(v42 + 36) = *(_OWORD *)(v60 + 120);
      *(_OWORD *)(v42 + 52) = *(_OWORD *)(v60 + 136);
      *(_OWORD *)(v42 + 68) = *(_OWORD *)(v60 + 152);
      *(_OWORD *)(v42 + 84) = *(_OWORD *)(v60 + 168);
      *(_OWORD *)(v42 + 100) = *(_OWORD *)(v60 + 184);
      *(_OWORD *)(v42 + 116) = *(_OWORD *)(v60 + 200);
    }
  }
  v44 = Size;
  if ( v38 )
    memmove(v42 + 144, v38, (unsigned int)Size);
  if ( v75 )
    memmove(&v42[v44 + 144], v75, HIDWORD(Size));
  v93[8 * v89 - 1] = 29;
  v93[8 * v89] = v40;
  *(&v94 + 4 * v89++) = (__int64)v42;
  v93[8 * v89 - 1] = 10;
  v45 = a10;
  v93[8 * v89] = 4;
  if ( !a12 )
    v45 = a9;
  *(_QWORD *)&v93[8 * v89 + 1] = v45;
  v46 = ++v89;
  if ( a11 )
  {
    v53 = *a11;
    if ( *a11 )
    {
      v93[8 * v46 - 1] = 8;
      v93[8 * v89] = 12 * v53 + 8;
      *(&v94 + 4 * v89) = (__int64)a11;
      v46 = v89;
    }
  }
  v47 = v46 + 1;
  v89 = v47;
  if ( !a16 )
    goto LABEL_37;
  v54 = 0;
  v55 = 0LL;
  v56 = 2 - (a12 != 0);
  v57 = (_WORD *)(a15 + 2);
  do
  {
    if ( !v54 || (v56 & *v57) != 0 )
      v55 = (unsigned int)(v55 + 1);
    ++v54;
    v57 += 24;
  }
  while ( v54 < a16 );
  if ( !(_DWORD)v55 )
  {
LABEL_37:
    v48 = (unsigned __int16 *)v81;
    v93[8 * v47 - 1] = 27;
    v93[8 * v89] = 4;
    *(_QWORD *)&v93[8 * v89++ + 1] = *((unsigned int *)v78 + 32);
    v93[8 * v89 - 1] = 11;
    v93[8 * v89] = 8;
    *(_QWORD *)&v93[8 * v89++ + 1] = a13;
    v93[8 * v89 - 1] = 2;
    v93[8 * v89] = *v48 + 16;
    v49 = (unsigned __int16)v72;
    *(&v94 + 4 * v89++) = (__int64)v48;
    v50 = v49 - 117;
    if ( (!v50 || v50 == 12) && v19 && v88 == 4656 && SepSDContainsAttributeACE(v19) )
    {
      v67 = SepCheckAndCopySelfRelativeSD(v19, (PVOID *)&v79, (ULONG *)&Size, &v70);
      v19 = v79;
      AllocatedFullProcessImageName = v67;
      if ( v67 < 0 )
      {
LABEL_41:
        if ( P )
          ExFreePoolWithTag(P, 0);
        goto LABEL_43;
      }
      v68 = (__int64)v79;
      v93[8 * v89 - 1] = 31;
      v69 = SepSecurityDescriptorStrictLength(v68);
      v93[8 * v89] = v69;
      *(&v94 + 4 * v89) = (__int64)v19;
      *(_QWORD *)&v93[8 * v89 + 1] = 32LL;
      *(_QWORD *)&v93[8 * v89 + 3] = 0LL;
    }
    ++v89;
    SepAdtLogAuditRecord(&v87);
    goto LABEL_41;
  }
  v61 = (char *)ExAllocatePool2(0x100uLL, 24 * v55, 0x70416553u);
  P = v61;
  if ( v61 )
  {
    v62 = (_OWORD *)(a15 + 4);
    v63 = 0LL;
    v64 = 0;
    v65 = a17;
    do
    {
      if ( !v64 || (v56 & *((_WORD *)v62 - 1)) != 0 )
      {
        v66 = 3 * v63;
        *(_OWORD *)&v61[8 * v66] = *v62;
        *(_WORD *)&v61[8 * v66 + 18] = *((_WORD *)v62 - 2);
        if ( v64 )
        {
          *(_WORD *)&v61[24 * v63 + 16] = 0;
          if ( a17 && a12 )
            *(_DWORD *)&v61[24 * v63 + 20] = *v65;
        }
        else
        {
          *(_WORD *)&v61[24 * v63 + 16] = 1;
          *(_DWORD *)&v61[24 * v63 + 20] = 0;
        }
        v63 = (unsigned int)(v63 + 1);
      }
      ++v64;
      v62 += 3;
      ++v65;
    }
    while ( v64 < a16 );
    v93[8 * v89 - 1] = 9;
    v93[8 * v89] = 24 * v63;
    *(&v94 + 4 * v89) = (__int64)v61;
    v19 = v85;
    *(_QWORD *)&v93[8 * v89 + 3] = 4LL;
    v47 = v89 + 1;
    v88 = 4661;
    ++v89;
    goto LABEL_37;
  }
  AllocatedFullProcessImageName = -1073741670;
LABEL_43:
  ExFreePoolWithTag(v42, 0);
LABEL_44:
  v51 = Src;
LABEL_45:
  v52 = v75;
LABEL_46:
  if ( v81 )
    ExFreePoolWithTag(v81, 0);
  if ( (_BYTE)v70 && v19 )
    ExFreePoolWithTag(v19, 0);
  if ( HIBYTE(v70) && v51 )
    ExFreePoolWithTag(v51, 0);
  if ( v71 && v52 )
    ExFreePoolWithTag(v52, 0);
  if ( AllocatedFullProcessImageName < 0 )
    SepAuditFailed(AllocatedFullProcessImageName);
  return AllocatedFullProcessImageName >= 0;
}
