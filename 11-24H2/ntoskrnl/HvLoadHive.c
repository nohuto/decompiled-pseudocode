/*
 * XREFs of HvLoadHive @ 0x14098133C
 * Callers:
 *     HvHiveStartFileBacked @ 0x14097F464 (HvHiveStartFileBacked.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     SetFailureLocation @ 0x1404649E0 (SetFailureLocation.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     HvpAdjustHiveFreeDisplay @ 0x14087EF00 (HvpAdjustHiveFreeDisplay.c)
 *     HvpGetHiveHeader @ 0x14098195C (HvpGetHiveHeader.c)
 *     CmpInitializeActualFileSizes @ 0x140981B04 (CmpInitializeActualFileSizes.c)
 *     HvpInitMap @ 0x140981C6C (HvpInitMap.c)
 *     CmpTraceHiveMountBaseFileMounted @ 0x140981F10 (CmpTraceHiveMountBaseFileMounted.c)
 *     HvpRemapAndEnlistHiveBins @ 0x140982010 (HvpRemapAndEnlistHiveBins.c)
 *     HvpMapHiveImageFromViewMap @ 0x1409829FC (HvpMapHiveImageFromViewMap.c)
 *     HvpViewMapStart @ 0x140982AE8 (HvpViewMapStart.c)
 *     CmpFileFlush @ 0x140982C0C (CmpFileFlush.c)
 *     HvAnalyzeLogFiles @ 0x140983108 (HvAnalyzeLogFiles.c)
 *     HvpMapHiveImageFromFile @ 0x140983694 (HvpMapHiveImageFromFile.c)
 *     HvpPerformLogFileRecovery @ 0x140AB060C (HvpPerformLogFileRecovery.c)
 */

__int64 __fastcall HvLoadHive(ULONG_PTR BugCheckParameter2, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // r13
  char v6; // r12
  int HiveHeader; // eax
  int v9; // r8d
  __int64 v10; // rdx
  int v11; // r14d
  __int64 v12; // r15
  __int64 v13; // rax
  int inited; // eax
  __int64 v15; // rdx
  const GUID *v16; // r9
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  __int64 v19; // r8
  unsigned int v20; // r9d
  int v21; // edx
  int v22; // eax
  int v23; // eax
  int v24; // ecx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  int v29; // eax
  int v30; // r9d
  int v31; // r12d
  int v32; // ebx
  _DWORD *v33; // rax
  int v34; // ecx
  bool v35; // zf
  int v36; // r9d
  ULONG v37; // r8d
  int v38; // [rsp+20h] [rbp-E0h]
  int v39; // [rsp+20h] [rbp-E0h]
  __int64 v40; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v41; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v42; // [rsp+58h] [rbp-A8h] BYREF
  int v43; // [rsp+60h] [rbp-A0h]
  __int128 v44; // [rsp+68h] [rbp-98h] BYREF
  __int128 v45; // [rsp+78h] [rbp-88h]
  __int128 v46; // [rsp+88h] [rbp-78h]
  PPRIVILEGE_SET Privileges[2]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v48; // [rsp+A8h] [rbp-58h] BYREF
  PPRIVILEGE_SET v49[3]; // [rsp+B8h] [rbp-48h]
  _BYTE v50[60]; // [rsp+D0h] [rbp-30h] BYREF
  int v51; // [rsp+10Ch] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR v52[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 *v53; // [rsp+150h] [rbp+50h]
  __int64 v54; // [rsp+158h] [rbp+58h]
  __int64 *v55; // [rsp+160h] [rbp+60h]
  __int64 v56; // [rsp+168h] [rbp+68h]
  __int64 *v57; // [rsp+170h] [rbp+70h]
  __int64 v58; // [rsp+178h] [rbp+78h]

  v42 = 0LL;
  v41 = 0;
  v40 = 0LL;
  v43 = a3;
  v5 = 0LL;
  v6 = 0;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  v48 = 0LL;
  *(_OWORD *)v49 = 0LL;
  memset_0(v50, 0, 0x5CuLL);
  if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x8001) == 0 )
  {
    v29 = CmpFileFlush(BugCheckParameter2, 0LL);
    if ( v29 < 0 )
      SetFailureLocation(a4, 0, 6, v29, 8);
  }
  HiveHeader = HvpGetHiveHeader(BugCheckParameter2, &v40, &v42);
  v10 = 2LL;
  v11 = HiveHeader;
  switch ( HiveHeader )
  {
    case 2:
      v39 = 0;
      v36 = -1073741670;
LABEL_70:
      v17 = v36;
LABEL_73:
      SetFailureLocation(a4, 0, 6, v36, v39);
      v12 = v40;
      goto LABEL_27;
    case 7:
      v17 = -1073741491;
      v39 = 8;
LABEL_72:
      v36 = v17;
      goto LABEL_73;
    case 0:
      v17 = -1073741476;
      v39 = 16;
      goto LABEL_72;
  }
  if ( (unsigned int)(HiveHeader - 4) > 1 )
  {
    v12 = v40;
    goto LABEL_7;
  }
  if ( !*(_DWORD *)(BugCheckParameter2 + 168) )
  {
    v36 = -1073741492;
    v39 = 32;
    goto LABEL_70;
  }
  v12 = v40;
  if ( HiveHeader == 5 )
  {
    v31 = *(_DWORD *)(v40 + 8);
  }
  else
  {
    if ( HiveHeader != 4 )
      goto LABEL_7;
    v31 = 0;
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 168) == 1 )
  {
    Privileges[0] = (PPRIVILEGE_SET)BugCheckParameter2;
    *((_QWORD *)&v44 + 1) = HvpRecoverDataReadRoutine;
    v32 = 1;
    DWORD1(v48) = 1;
    *(_QWORD *)&v45 = Privileges;
    LODWORD(v44) = 1;
  }
  else
  {
    v32 = 2;
    v33 = (_DWORD *)&v48 + 1;
    v34 = 4;
    do
    {
      *(_QWORD *)(v33 - 5) = BugCheckParameter2;
      *v33 = v34++;
      v33 += 6;
      --v10;
    }
    while ( v10 );
    LODWORD(v44) = 4;
    *((_QWORD *)&v44 + 1) = HvpRecoverDataReadRoutine;
    *(_QWORD *)&v46 = HvpRecoverDataReadRoutine;
    *((_QWORD *)&v46 + 1) = (char *)&v48 + 8;
    *(_QWORD *)&v45 = Privileges;
    DWORD2(v45) = 5;
  }
  v35 = v11 == 4;
  if ( v11 == 4 )
  {
    LOBYTE(v10) = 1;
    v5 = guard_dispatch_icall_no_overrides(4096LL, v10, 875777347LL, 1LL);
    if ( !v5 )
    {
      v30 = -1073741670;
      v38 = 48;
LABEL_92:
      v17 = v30;
      goto LABEL_45;
    }
    v35 = 1;
  }
  LOBYTE(v9) = v35;
  inited = HvAnalyzeLogFiles((unsigned int)&v42, v31, v9, (unsigned int)&v44, v32, (__int64)v50, v5);
  v17 = inited;
  if ( inited < 0 )
  {
    v38 = 56;
    goto LABEL_44;
  }
  if ( v11 == 4 )
  {
    *(_WORD *)(BugCheckParameter2 + 208) |= 0x40u;
    v12 = v5;
    v5 = 0LL;
  }
  if ( (unsigned int)dword_140E09EE8 > 5 && tlgKeywordOn((__int64)&dword_140E09EE8, 0x200000000000LL) )
  {
    v53 = &v40;
    v54 = v37;
    v55 = &v42;
    LODWORD(v40) = v11;
    v42 = 0x1000000LL;
    v56 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E09EE8,
      (unsigned __int8 *)&dword_14005566C,
      0LL,
      0LL,
      v37,
      v52);
  }
  v6 = 0;
LABEL_7:
  v13 = v12;
  *(_QWORD *)(BugCheckParameter2 + 64) = v12;
  v12 = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 220) = *(_DWORD *)(v13 + 24) - 4096 + (*(_DWORD *)(v13 + 20) << 12);
  inited = CmpInitializeActualFileSizes(BugCheckParameter2, &v41);
  v16 = 0LL;
  v17 = inited;
  if ( inited < 0 )
  {
    v38 = 128;
    goto LABEL_44;
  }
  v18 = v41;
  v19 = *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL);
  if ( v41 < (int)v19 + 4096 && (v43 & 0x20000) == 0 && (BYTE2(NlsMbOemCodePageTag) || (CmpBootType & 6) != 0) )
  {
    if ( (unsigned int)dword_140E09EE8 > 5 && tlgKeywordOn((__int64)&dword_140E09EE8, 0x200000000000LL) )
    {
      v54 = 4LL;
      LODWORD(v40) = v19 + 4096;
      v41 = v18;
      v53 = &v40;
      v56 = 4LL;
      v55 = (__int64 *)&v41;
      v42 = 0x1000000LL;
      v57 = &v42;
      v58 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09EE8, (unsigned __int8 *)byte_1400556BD, 0LL, v16, 5u, v52);
    }
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL) = (v18 - 4096) & 0xFFFFF000;
  }
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL) - 1) > 0x7FFFDFFF )
  {
    v30 = -1073741492;
    v38 = 112;
    goto LABEL_92;
  }
  inited = HvpInitMap(BugCheckParameter2, v15, v19, v16);
  v17 = inited;
  if ( inited < 0 )
  {
    v38 = 132;
    goto LABEL_44;
  }
  v20 = *(_DWORD *)(BugCheckParameter2 + 160);
  if ( (v20 & 0x20000) != 0 )
  {
    v21 = (v20 >> 22) & 2 | 8;
    if ( (v20 & 0x8000000) == 0 )
      v21 = (v20 >> 22) & 2;
    v22 = v21 | 1;
    if ( (v20 & 0x8001) == 0 )
      v22 = v21;
    v23 = HvpViewMapStart(
            (int)BugCheckParameter2 + 224,
            *(_QWORD *)(BugCheckParameter2 + 1544),
            *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL),
            (unsigned int)&CmpRegistryProcess,
            v22);
    v17 = v23;
    if ( v23 < 0 )
    {
      SetFailureLocation(a4, 0, 6, v23, 136);
      goto LABEL_27;
    }
    inited = HvpMapHiveImageFromViewMap(
               BugCheckParameter2,
               0LL,
               *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL));
    v17 = inited;
    if ( inited < 0 )
    {
      v38 = 140;
      goto LABEL_44;
    }
  }
  else
  {
    inited = HvpMapHiveImageFromFile(BugCheckParameter2);
    v17 = inited;
    if ( inited < 0 )
    {
      v38 = 144;
LABEL_44:
      v30 = inited;
LABEL_45:
      SetFailureLocation(a4, 0, 6, v30, v38);
      goto LABEL_27;
    }
  }
  CmpTraceHiveMountBaseFileMounted(
    *(_QWORD *)(BugCheckParameter2 + 1544),
    *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL));
  if ( v51 )
  {
    inited = HvpPerformLogFileRecovery(BugCheckParameter2, a4);
    v17 = inited;
    if ( inited < 0 )
    {
      v38 = 160;
      goto LABEL_44;
    }
    v6 = 1;
  }
  else
  {
    v24 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4LL);
    *(_DWORD *)(BugCheckParameter2 + 172) = v24;
    *(_DWORD *)(BugCheckParameter2 + 184) = v24;
    *(_DWORD *)(BugCheckParameter2 + 176) = v24;
    *(_BYTE *)(BugCheckParameter2 + 194) = 1;
  }
  inited = HvpAdjustHiveFreeDisplay(BugCheckParameter2, *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL), 0);
  v17 = inited;
  if ( inited < 0 )
  {
    v38 = 176;
    goto LABEL_44;
  }
  inited = HvpRemapAndEnlistHiveBins(BugCheckParameter2);
  v17 = inited;
  if ( inited == 1073741833 )
  {
    v6 = 1;
    goto LABEL_23;
  }
  if ( inited < 0 )
  {
    v38 = 192;
    goto LABEL_44;
  }
LABEL_23:
  v27 = *(_DWORD *)(BugCheckParameter2 + 160);
  if ( (v27 & 0x20000) == 0 )
    *(_DWORD *)(BugCheckParameter2 + 160) = v27 | 0x10000;
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4092LL) = 0;
  if ( v11 == 4 || v6 )
    v17 = 1073741833;
  else
    v17 = 0;
LABEL_27:
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v49[0] )
    CmSiFreeMemory(v49[0]);
  if ( v5 )
    guard_dispatch_icall_no_overrides(v5, *(unsigned int *)(BugCheckParameter2 + 132), v25, v26);
  if ( v12 )
    guard_dispatch_icall_no_overrides(v12, *(unsigned int *)(BugCheckParameter2 + 132), v25, v26);
  return v17;
}
