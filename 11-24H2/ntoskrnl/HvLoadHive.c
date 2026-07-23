/*
 * XREFs of HvLoadHive @ 0x140969B4C
 * Callers:
 *     HvHiveStartFileBacked @ 0x140967C74 (HvHiveStartFileBacked.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     SetFailureLocation @ 0x14045B110 (SetFailureLocation.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     HvpAdjustHiveFreeDisplay @ 0x140882DB0 (HvpAdjustHiveFreeDisplay.c)
 *     HvpGetHiveHeader @ 0x14096A16C (HvpGetHiveHeader.c)
 *     CmpInitializeActualFileSizes @ 0x14096A314 (CmpInitializeActualFileSizes.c)
 *     HvpInitMap @ 0x14096A47C (HvpInitMap.c)
 *     CmpTraceHiveMountBaseFileMounted @ 0x14096A720 (CmpTraceHiveMountBaseFileMounted.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14096A820 (HvpRemapAndEnlistHiveBins.c)
 *     HvpMapHiveImageFromViewMap @ 0x14096B20C (HvpMapHiveImageFromViewMap.c)
 *     HvpViewMapStart @ 0x14096B2F8 (HvpViewMapStart.c)
 *     CmpFileFlush @ 0x14096B41C (CmpFileFlush.c)
 *     HvAnalyzeLogFiles @ 0x14096B918 (HvAnalyzeLogFiles.c)
 *     HvpMapHiveImageFromFile @ 0x14096BEA4 (HvpMapHiveImageFromFile.c)
 *     HvpPerformLogFileRecovery @ 0x140AAB57C (HvpPerformLogFileRecovery.c)
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
  int v25; // eax
  int v27; // eax
  int v28; // r9d
  int v29; // r12d
  int v30; // ebx
  _DWORD *v31; // rax
  int v32; // ecx
  bool v33; // zf
  int v34; // r9d
  ULONG v35; // r8d
  int v36; // [rsp+20h] [rbp-E0h]
  int v37; // [rsp+20h] [rbp-E0h]
  __int64 v38; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v39; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+58h] [rbp-A8h] BYREF
  int v41; // [rsp+60h] [rbp-A0h]
  __int128 v42; // [rsp+68h] [rbp-98h] BYREF
  __int128 v43; // [rsp+78h] [rbp-88h]
  __int128 v44; // [rsp+88h] [rbp-78h]
  PPRIVILEGE_SET Privileges[2]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v46; // [rsp+A8h] [rbp-58h] BYREF
  PPRIVILEGE_SET v47[3]; // [rsp+B8h] [rbp-48h]
  _BYTE v48[60]; // [rsp+D0h] [rbp-30h] BYREF
  int v49; // [rsp+10Ch] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR v50[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 *v51; // [rsp+150h] [rbp+50h]
  __int64 v52; // [rsp+158h] [rbp+58h]
  __int64 *v53; // [rsp+160h] [rbp+60h]
  __int64 v54; // [rsp+168h] [rbp+68h]
  __int64 *v55; // [rsp+170h] [rbp+70h]
  __int64 v56; // [rsp+178h] [rbp+78h]

  v40 = 0LL;
  v39 = 0;
  v38 = 0LL;
  v41 = a3;
  v5 = 0LL;
  v6 = 0;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  v46 = 0LL;
  *(_OWORD *)v47 = 0LL;
  memset_0(v48, 0, 0x5CuLL);
  if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x8001) == 0 )
  {
    v27 = CmpFileFlush(BugCheckParameter2, 0LL);
    if ( v27 < 0 )
      SetFailureLocation(a4, 0, 6, v27, 8);
  }
  HiveHeader = HvpGetHiveHeader(BugCheckParameter2, &v38, &v40);
  v10 = 2LL;
  v11 = HiveHeader;
  switch ( HiveHeader )
  {
    case 2:
      v37 = 0;
      v34 = -1073741670;
LABEL_70:
      v17 = v34;
LABEL_73:
      SetFailureLocation(a4, 0, 6, v34, v37);
      v12 = v38;
      goto LABEL_27;
    case 7:
      v17 = -1073741491;
      v37 = 8;
LABEL_72:
      v34 = v17;
      goto LABEL_73;
    case 0:
      v17 = -1073741476;
      v37 = 16;
      goto LABEL_72;
  }
  if ( (unsigned int)(HiveHeader - 4) > 1 )
  {
    v12 = v38;
    goto LABEL_7;
  }
  if ( !*(_DWORD *)(BugCheckParameter2 + 168) )
  {
    v34 = -1073741492;
    v37 = 32;
    goto LABEL_70;
  }
  v12 = v38;
  if ( HiveHeader == 5 )
  {
    v29 = *(_DWORD *)(v38 + 8);
  }
  else
  {
    if ( HiveHeader != 4 )
      goto LABEL_7;
    v29 = 0;
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 168) == 1 )
  {
    Privileges[0] = (PPRIVILEGE_SET)BugCheckParameter2;
    *((_QWORD *)&v42 + 1) = HvpRecoverDataReadRoutine;
    v30 = 1;
    DWORD1(v46) = 1;
    *(_QWORD *)&v43 = Privileges;
    LODWORD(v42) = 1;
  }
  else
  {
    v30 = 2;
    v31 = (_DWORD *)&v46 + 1;
    v32 = 4;
    do
    {
      *(_QWORD *)(v31 - 5) = BugCheckParameter2;
      *v31 = v32++;
      v31 += 6;
      --v10;
    }
    while ( v10 );
    LODWORD(v42) = 4;
    *((_QWORD *)&v42 + 1) = HvpRecoverDataReadRoutine;
    *(_QWORD *)&v44 = HvpRecoverDataReadRoutine;
    *((_QWORD *)&v44 + 1) = (char *)&v46 + 8;
    *(_QWORD *)&v43 = Privileges;
    DWORD2(v43) = 5;
  }
  v33 = v11 == 4;
  if ( v11 == 4 )
  {
    LOBYTE(v10) = 1;
    v5 = guard_dispatch_icall_no_overrides(4096LL, v10);
    if ( !v5 )
    {
      v28 = -1073741670;
      v36 = 48;
LABEL_92:
      v17 = v28;
      goto LABEL_45;
    }
    v33 = 1;
  }
  LOBYTE(v9) = v33;
  inited = HvAnalyzeLogFiles((unsigned int)&v40, v29, v9, (unsigned int)&v42, v30, (__int64)v48, v5);
  v17 = inited;
  if ( inited < 0 )
  {
    v36 = 56;
    goto LABEL_44;
  }
  if ( v11 == 4 )
  {
    *(_WORD *)(BugCheckParameter2 + 208) |= 0x40u;
    v12 = v5;
    v5 = 0LL;
  }
  if ( (unsigned int)dword_140E09F58 > 5 && tlgKeywordOn((__int64)&dword_140E09F58, 0x200000000000LL) )
  {
    v51 = &v38;
    v52 = v35;
    v53 = &v40;
    LODWORD(v38) = v11;
    v40 = 0x1000000LL;
    v54 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09F58, (unsigned __int8 *)&word_140056166, 0LL, 0LL, v35, v50);
  }
  v6 = 0;
LABEL_7:
  v13 = v12;
  *(_QWORD *)(BugCheckParameter2 + 64) = v12;
  v12 = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 220) = *(_DWORD *)(v13 + 24) - 4096 + (*(_DWORD *)(v13 + 20) << 12);
  inited = CmpInitializeActualFileSizes(BugCheckParameter2, &v39);
  v16 = 0LL;
  v17 = inited;
  if ( inited < 0 )
  {
    v36 = 128;
    goto LABEL_44;
  }
  v18 = v39;
  v19 = *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL);
  if ( v39 < (int)v19 + 4096 && (v41 & 0x20000) == 0 && (BYTE2(NlsMbOemCodePageTag) || (CmpBootType & 6) != 0) )
  {
    if ( (unsigned int)dword_140E09F58 > 5 && tlgKeywordOn((__int64)&dword_140E09F58, 0x200000000000LL) )
    {
      v52 = 4LL;
      LODWORD(v38) = v19 + 4096;
      v39 = v18;
      v51 = &v38;
      v54 = 4LL;
      v53 = (__int64 *)&v39;
      v40 = 0x1000000LL;
      v55 = &v40;
      v56 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E09F58,
        (unsigned __int8 *)&byte_1400561B7,
        0LL,
        v16,
        5u,
        v50);
    }
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL) = (v18 - 4096) & 0xFFFFF000;
  }
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL) - 1) > 0x7FFFDFFF )
  {
    v28 = -1073741492;
    v36 = 112;
    goto LABEL_92;
  }
  inited = HvpInitMap(BugCheckParameter2, v15, v19, v16);
  v17 = inited;
  if ( inited < 0 )
  {
    v36 = 132;
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
      v36 = 140;
      goto LABEL_44;
    }
  }
  else
  {
    inited = HvpMapHiveImageFromFile(BugCheckParameter2);
    v17 = inited;
    if ( inited < 0 )
    {
      v36 = 144;
LABEL_44:
      v28 = inited;
LABEL_45:
      SetFailureLocation(a4, 0, 6, v28, v36);
      goto LABEL_27;
    }
  }
  CmpTraceHiveMountBaseFileMounted(
    *(_QWORD *)(BugCheckParameter2 + 1544),
    *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL));
  if ( v49 )
  {
    inited = HvpPerformLogFileRecovery(BugCheckParameter2, a4);
    v17 = inited;
    if ( inited < 0 )
    {
      v36 = 160;
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
    v36 = 176;
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
    v36 = 192;
    goto LABEL_44;
  }
LABEL_23:
  v25 = *(_DWORD *)(BugCheckParameter2 + 160);
  if ( (v25 & 0x20000) == 0 )
    *(_DWORD *)(BugCheckParameter2 + 160) = v25 | 0x10000;
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4092LL) = 0;
  if ( v11 == 4 || v6 )
    v17 = 1073741833;
  else
    v17 = 0;
LABEL_27:
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v47[0] )
    CmSiFreeMemory(v47[0]);
  if ( v5 )
    guard_dispatch_icall_no_overrides(v5, *(unsigned int *)(BugCheckParameter2 + 132));
  if ( v12 )
    guard_dispatch_icall_no_overrides(v12, *(unsigned int *)(BugCheckParameter2 + 132));
  return v17;
}
