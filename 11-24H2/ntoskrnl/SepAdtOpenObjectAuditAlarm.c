/*
 * XREFs of SepAdtOpenObjectAuditAlarm @ 0x1408F1214
 * Callers:
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1408508E0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14088A000 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SeAuditHandleCreation @ 0x1408F0F70 (SeAuditHandleCreation.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14091DB90 (SepAccessCheckAndAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x140920280 (NtOpenObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x140A75700 (SeOpenObjectAuditAlarmForNonObObject.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x140348E4C (SepAdtLogAuditRecord.c)
 *     PsGetCurrentThreadProcess @ 0x1404709D0 (PsGetCurrentThreadProcess.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x1404AC0F8 (SepCheckAndCopySelfRelativeSD.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SepSDContainsAttributeACE @ 0x1407949C0 (SepSDContainsAttributeACE.c)
 *     SepAuditFailed @ 0x140850F60 (SepAuditFailed.c)
 *     SepAdtAuditThisEventWithContext @ 0x140852C10 (SepAdtAuditThisEventWithContext.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x1408EF560 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ObNormalizeHandleValue @ 0x1408F0680 (ObNormalizeHandleValue.c)
 *     SepSecurityDescriptorStrictLength @ 0x1408F06B8 (SepSecurityDescriptorStrictLength.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  __int64 v26; // r8
  __int64 v27; // r9
  signed int AllocatedFullProcessImageName; // edi
  __int64 *v29; // rax
  __int64 v30; // r8
  __int64 v31; // rax
  int v32; // ecx
  unsigned __int8 v33; // r9
  const int *v34; // rdx
  __int64 v35; // r11
  int v36; // ecx
  int v37; // ecx
  __int64 v38; // rax
  __int64 v39; // rbx
  PVOID v40; // r13
  int v41; // ecx
  unsigned int v42; // r12d
  char *Pool2; // rax
  char *v44; // rbx
  unsigned int v45; // eax
  int v46; // r14d
  __int64 v47; // rcx
  unsigned int v48; // ecx
  unsigned int v49; // ecx
  unsigned __int16 *v50; // rdx
  int v51; // ecx
  int v52; // ecx
  PVOID v53; // rbx
  PVOID v54; // r14
  int v55; // r8d
  unsigned int v56; // edx
  int v57; // eax
  unsigned __int16 v58; // r12
  _WORD *v59; // r8
  int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // rax
  char *v63; // rax
  _OWORD *v64; // r9
  __int64 v65; // r8
  unsigned int v66; // edx
  _DWORD *v67; // r10
  __int64 v68; // rcx
  int v69; // eax
  __int64 v70; // rcx
  int v71; // eax
  __int16 v72; // [rsp+28h] [rbp-E0h] BYREF
  char v73; // [rsp+2Ah] [rbp-DEh] BYREF
  int v74; // [rsp+2Ch] [rbp-DCh]
  size_t Size; // [rsp+30h] [rbp-D8h] BYREF
  void *Src; // [rsp+38h] [rbp-D0h]
  PVOID v77; // [rsp+40h] [rbp-C8h]
  PVOID v78; // [rsp+48h] [rbp-C0h] BYREF
  PVOID v79; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD *v80; // [rsp+58h] [rbp-B0h]
  __int16 *v81; // [rsp+60h] [rbp-A8h] BYREF
  PVOID P; // [rsp+68h] [rbp-A0h]
  PVOID v83; // [rsp+70h] [rbp-98h] BYREF
  __int64 v84; // [rsp+78h] [rbp-90h]
  unsigned __int64 *v85; // [rsp+80h] [rbp-88h]
  __int128 *v86; // [rsp+88h] [rbp-80h]
  __int16 *v87; // [rsp+90h] [rbp-78h]
  struct _SECURITY_SUBJECT_CONTEXT v88; // [rsp+98h] [rbp-70h] BYREF
  int v89; // [rsp+B8h] [rbp-50h] BYREF
  int v90; // [rsp+BCh] [rbp-4Ch]
  unsigned int v91; // [rsp+C0h] [rbp-48h]
  __int16 v92; // [rsp+C8h] [rbp-40h]
  __int16 v93; // [rsp+CAh] [rbp-3Eh]
  int v94; // [rsp+D0h] [rbp-38h]
  _DWORD v95[5]; // [rsp+D4h] [rbp-34h]
  __int64 v96; // [rsp+E8h] [rbp-20h]
  int v97; // [rsp+F0h] [rbp-18h]
  int v98; // [rsp+F4h] [rbp-14h]
  const int *v99; // [rsp+108h] [rbp+0h]
  int v100; // [rsp+110h] [rbp+8h]
  int v101; // [rsp+114h] [rbp+Ch]
  __int64 v102; // [rsp+118h] [rbp+10h]
  int v103; // [rsp+130h] [rbp+28h]
  int v104; // [rsp+134h] [rbp+2Ch]
  const int *v105; // [rsp+148h] [rbp+40h]
  int v106; // [rsp+150h] [rbp+48h]
  int v107; // [rsp+154h] [rbp+4Ch]
  unsigned __int16 *v108; // [rsp+168h] [rbp+60h]
  int v109; // [rsp+170h] [rbp+68h]
  int v110; // [rsp+174h] [rbp+6Ch]
  unsigned __int16 *v111; // [rsp+188h] [rbp+80h]
  int v112; // [rsp+190h] [rbp+88h]
  int v113; // [rsp+194h] [rbp+8Ch]
  unsigned __int64 v114; // [rsp+198h] [rbp+90h]
  int v115; // [rsp+1B0h] [rbp+A8h]
  int v116; // [rsp+1B4h] [rbp+ACh]
  __int128 *v117; // [rsp+1C8h] [rbp+C0h]
  int v118; // [rsp+1D0h] [rbp+C8h]
  int v119; // [rsp+1D4h] [rbp+CCh]
  __int64 v120; // [rsp+1D8h] [rbp+D0h]
  __int64 v121; // [rsp+1E0h] [rbp+D8h]
  __int128 v122; // [rsp+4D8h] [rbp+3D0h] BYREF

  v19 = a6;
  v85 = a3;
  LOWORD(v74) = a1;
  v87 = a6;
  v81 = a6;
  v80 = a8;
  v84 = a19;
  memset_0(&v89, 0, 0x418uLL);
  v88.ClientToken = a7;
  v22 = 0LL;
  P = 0LL;
  v83 = 0LL;
  *(_QWORD *)&v88.ImpersonationLevel = 0LL;
  v88.ProcessAuditId = 0LL;
  Size = 0LL;
  Src = 0LL;
  v78 = 0LL;
  v77 = 0LL;
  v79 = 0LL;
  v73 = 0;
  v72 = 0;
  v122 = 0LL;
  v88.PrimaryToken = a8;
  if ( !SepAdtAuditThisEventWithContext(124LL, a12, a12 == 0, &v88) )
    return 1;
  v24 = &v122;
  if ( a18 )
    v24 = a18;
  v86 = v24;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(
                                    (__int64)CurrentThreadProcess,
                                    (__int64 *)&v83,
                                    v26,
                                    v27);
  if ( AllocatedFullProcessImageName < 0 )
    goto LABEL_44;
  if ( a7 )
  {
    v22 = a7[3];
    v29 = (__int64 *)a7[19];
  }
  else
  {
    v29 = (__int64 *)v80[19];
  }
  v30 = *v29;
  v31 = v80[3];
  v32 = 8;
  v90 = 4656;
  v92 = v74;
  v33 = a12;
  if ( a14 == 2 )
    v32 = 3;
  v93 = 8;
  v89 = v32;
  if ( !a12 )
    v93 = 16;
  v34 = &SeSubsystemName;
  v35 = 4LL;
  if ( a2 )
    v34 = a2;
  v94 = 4;
  v36 = *(unsigned __int8 *)(v30 + 1);
  v96 = v30;
  v97 = 1;
  v99 = v34;
  v100 = 5;
  v95[0] = 4 * v36 + 8;
  v37 = *(unsigned __int16 *)v34 + 16;
  v102 = v22;
  v98 = v37;
  v101 = 8;
  if ( !a7 )
    v102 = v31;
  v103 = 1;
  v104 = v37;
  v105 = v34;
  v91 = 4;
  if ( !a4 )
  {
    AllocatedFullProcessImageName = -1073741811;
    goto LABEL_44;
  }
  v107 = *a4 + 16;
  v106 = 1;
  v108 = a4;
  if ( a5 )
  {
    if ( (_WORD)v74 == 117 || (v109 = 1, (_WORD)v74 == 129) )
      v109 = 2;
    v60 = *a5;
    v111 = a5;
    v110 = v60 + 16;
  }
  v112 = 11;
  v113 = 8;
  if ( v85 )
    v114 = ObNormalizeHandleValue(*v85);
  else
    v114 = 0LL;
  v117 = v86;
  v38 = a10;
  v115 = 13;
  v116 = 16;
  v118 = 7;
  v119 = v35;
  v121 = v35;
  if ( !v33 )
    v38 = a9;
  v39 = v84;
  v120 = v38;
  v91 = 9;
  if ( !v84 || (v61 = *(_QWORD *)(v84 + 72)) == 0 )
  {
    v40 = Src;
LABEL_24:
    v41 = 0;
    goto LABEL_25;
  }
  AllocatedFullProcessImageName = SepCheckAndCopySelfRelativeSD(
                                    *(__int16 **)(v61 + 56),
                                    &v78,
                                    (ULONG *)&Size,
                                    (_BYTE *)&v72 + 1);
  if ( AllocatedFullProcessImageName < 0 )
  {
    v53 = v78;
    goto LABEL_45;
  }
  AllocatedFullProcessImageName = SepCheckAndCopySelfRelativeSD(
                                    *(__int16 **)(*(_QWORD *)(v39 + 72) + 64LL),
                                    &v79,
                                    (ULONG *)&Size + 1,
                                    &v73);
  if ( AllocatedFullProcessImageName < 0 )
  {
    v53 = v78;
    v54 = v79;
    goto LABEL_46;
  }
  v40 = v78;
  v77 = v79;
  Src = v78;
  if ( !v78 && !v79 )
    goto LABEL_24;
  v41 = 8;
LABEL_25:
  v42 = HIDWORD(Size) - v41 + Size + 152;
  Pool2 = (char *)ExAllocatePool2(0x100uLL);
  v44 = Pool2;
  if ( !Pool2 )
  {
    AllocatedFullProcessImageName = -1073741670;
    goto LABEL_44;
  }
  memset_0(Pool2, 0, v42);
  v45 = a10;
  *((_DWORD *)v44 + 34) = a12;
  if ( !a12 )
    v45 = a9;
  *((_DWORD *)v44 + 33) = 4;
  *(_DWORD *)v44 = v45 & 0xFDFFFFFF;
  if ( v84 )
  {
    v62 = *(_QWORD *)(v84 + 72);
    if ( v62 )
    {
      *(_OWORD *)(v44 + 4) = *(_OWORD *)(v62 + 88);
      *(_OWORD *)(v44 + 20) = *(_OWORD *)(v62 + 104);
      *(_OWORD *)(v44 + 36) = *(_OWORD *)(v62 + 120);
      *(_OWORD *)(v44 + 52) = *(_OWORD *)(v62 + 136);
      *(_OWORD *)(v44 + 68) = *(_OWORD *)(v62 + 152);
      *(_OWORD *)(v44 + 84) = *(_OWORD *)(v62 + 168);
      *(_OWORD *)(v44 + 100) = *(_OWORD *)(v62 + 184);
      *(_OWORD *)(v44 + 116) = *(_OWORD *)(v62 + 200);
    }
  }
  v46 = Size;
  if ( v40 )
    memmove(v44 + 144, v40, (unsigned int)Size);
  if ( v77 )
    memmove(&v44[v46 + 144], v77, HIDWORD(Size));
  v95[8 * v91 - 1] = 29;
  v95[8 * v91] = v42;
  *(&v96 + 4 * v91++) = (__int64)v44;
  v95[8 * v91 - 1] = 10;
  v47 = a10;
  v95[8 * v91] = 4;
  if ( !a12 )
    v47 = a9;
  *(_QWORD *)&v95[8 * v91 + 1] = v47;
  v48 = ++v91;
  if ( a11 )
  {
    v55 = *a11;
    if ( *a11 )
    {
      v95[8 * v48 - 1] = 8;
      v95[8 * v91] = 12 * v55 + 8;
      *(&v96 + 4 * v91) = (__int64)a11;
      v48 = v91;
    }
  }
  v49 = v48 + 1;
  v91 = v49;
  if ( !a16 )
    goto LABEL_37;
  v56 = 0;
  v57 = 0;
  v58 = 2 - (a12 != 0);
  v59 = (_WORD *)(a15 + 2);
  do
  {
    if ( !v56 || (v58 & *v59) != 0 )
      ++v57;
    ++v56;
    v59 += 24;
  }
  while ( v56 < a16 );
  if ( !v57 )
  {
LABEL_37:
    v50 = (unsigned __int16 *)v83;
    v95[8 * v49 - 1] = 27;
    v95[8 * v91] = 4;
    *(_QWORD *)&v95[8 * v91++ + 1] = *((unsigned int *)v80 + 32);
    v95[8 * v91 - 1] = 11;
    v95[8 * v91] = 8;
    *(_QWORD *)&v95[8 * v91++ + 1] = a13;
    v95[8 * v91 - 1] = 2;
    v95[8 * v91] = *v50 + 16;
    v51 = (unsigned __int16)v74;
    *(&v96 + 4 * v91++) = (__int64)v50;
    v52 = v51 - 117;
    if ( (!v52 || v52 == 12) && v19 && v90 == 4656 && SepSDContainsAttributeACE(v19) )
    {
      v69 = SepCheckAndCopySelfRelativeSD(v19, (PVOID *)&v81, (ULONG *)&Size, &v72);
      v19 = v81;
      AllocatedFullProcessImageName = v69;
      if ( v69 < 0 )
      {
LABEL_41:
        if ( P )
          ExFreePoolWithTag(P, 0);
        goto LABEL_43;
      }
      v70 = (__int64)v81;
      v95[8 * v91 - 1] = 31;
      v71 = SepSecurityDescriptorStrictLength(v70);
      v95[8 * v91] = v71;
      *(&v96 + 4 * v91) = (__int64)v19;
      *(_QWORD *)&v95[8 * v91 + 1] = 32LL;
      *(_QWORD *)&v95[8 * v91 + 3] = 0LL;
    }
    ++v91;
    SepAdtLogAuditRecord(&v89);
    goto LABEL_41;
  }
  v63 = (char *)ExAllocatePool2(0x100uLL);
  P = v63;
  if ( v63 )
  {
    v64 = (_OWORD *)(a15 + 4);
    v65 = 0LL;
    v66 = 0;
    v67 = a17;
    do
    {
      if ( !v66 || (v58 & *((_WORD *)v64 - 1)) != 0 )
      {
        v68 = 3 * v65;
        *(_OWORD *)&v63[8 * v68] = *v64;
        *(_WORD *)&v63[8 * v68 + 18] = *((_WORD *)v64 - 2);
        if ( v66 )
        {
          *(_WORD *)&v63[24 * v65 + 16] = 0;
          if ( a17 && a12 )
            *(_DWORD *)&v63[24 * v65 + 20] = *v67;
        }
        else
        {
          *(_WORD *)&v63[24 * v65 + 16] = 1;
          *(_DWORD *)&v63[24 * v65 + 20] = 0;
        }
        v65 = (unsigned int)(v65 + 1);
      }
      ++v66;
      v64 += 3;
      ++v67;
    }
    while ( v66 < a16 );
    v95[8 * v91 - 1] = 9;
    v95[8 * v91] = 24 * v65;
    *(&v96 + 4 * v91) = (__int64)v63;
    v19 = v87;
    *(_QWORD *)&v95[8 * v91 + 3] = 4LL;
    v49 = v91 + 1;
    v90 = 4661;
    ++v91;
    goto LABEL_37;
  }
  AllocatedFullProcessImageName = -1073741670;
LABEL_43:
  ExFreePoolWithTag(v44, 0);
LABEL_44:
  v53 = Src;
LABEL_45:
  v54 = v77;
LABEL_46:
  if ( v83 )
    ExFreePoolWithTag(v83, 0);
  if ( (_BYTE)v72 && v19 )
    ExFreePoolWithTag(v19, 0);
  if ( HIBYTE(v72) && v53 )
    ExFreePoolWithTag(v53, 0);
  if ( v73 && v54 )
    ExFreePoolWithTag(v54, 0);
  if ( AllocatedFullProcessImageName < 0 )
    SepAuditFailed(AllocatedFullProcessImageName);
  return AllocatedFullProcessImageName >= 0;
}
