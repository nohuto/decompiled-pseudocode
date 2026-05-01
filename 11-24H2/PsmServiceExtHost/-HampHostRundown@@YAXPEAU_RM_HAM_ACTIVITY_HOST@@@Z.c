/*
 * XREFs of ?HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000D5C0
 * Callers:
 *     ?RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000CA28 (-RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180009E5C (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180009EEC (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180009F48 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     CempListEntryIsNull @ 0x18000C00C (CempListEntryIsNull.c)
 *     ?RmHamHostDereferenceUnsafe@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000D978 (-RmHamHostDereferenceUnsafe@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CempLockAcquireExclusive @ 0x18002B830 (CempLockAcquireExclusive.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18002BF20 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampDepGroupRemoveHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180034C20 (-HampDepGroupRemoveHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x180082C84 (-HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

void __fastcall HampHostRundown(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rdi
  DWORD v3; // r14d
  _QWORD *Value; // rsi
  DWORD v5; // ecx
  __int64 *v6; // rax
  __int64 v7; // rcx
  struct _HAM_HOST_DEPENDENCY *v9; // rcx
  struct _HAM_DEPENDENCY_GROUP *v10; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v11; // rcx
  const wchar_t *v12; // rdx
  char *v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rsi
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rax
  char v22; // al
  char v23; // [rsp+38h] [rbp-89h] BYREF
  char v24; // [rsp+39h] [rbp-88h] BYREF
  _DWORD v25[3]; // [rsp+3Ch] [rbp-85h] BYREF
  __int64 v26; // [rsp+48h] [rbp-79h] BYREF
  __int64 v27; // [rsp+50h] [rbp-71h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-59h] BYREF
  void *v30; // [rsp+78h] [rbp-49h]
  int v31; // [rsp+80h] [rbp-41h]
  int v32; // [rsp+84h] [rbp-3Dh]
  const wchar_t *v33; // [rsp+88h] [rbp-39h]
  int v34; // [rsp+90h] [rbp-31h]
  int v35; // [rsp+94h] [rbp-2Dh]
  __int64 *v36; // [rsp+98h] [rbp-29h]
  __int64 v37; // [rsp+A0h] [rbp-21h]
  char *v38; // [rsp+A8h] [rbp-19h]
  __int64 v39; // [rsp+B0h] [rbp-11h]
  char *v40; // [rsp+B8h] [rbp-9h]
  __int64 v41; // [rsp+C0h] [rbp-1h]
  _DWORD *v42; // [rsp+C8h] [rbp+7h]
  __int64 v43; // [rsp+D0h] [rbp+Fh]
  __int64 v44; // [rsp+D8h] [rbp+17h]
  int v45; // [rsp+E0h] [rbp+1Fh]
  int v46; // [rsp+E4h] [rbp+23h]
  __int64 *v47; // [rsp+E8h] [rbp+27h]
  __int64 v48; // [rsp+F0h] [rbp+2Fh]

  v1 = *((_QWORD *)a1 + 99);
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 8) != 0 && (qword_1800E82C8 & 8) == qword_1800E82C8 )
  {
    v12 = (const wchar_t *)((char *)a1 + 24);
    v26 = *((_QWORD *)a1 + 102);
    v13 = (char *)a1 + 488;
    v48 = 8LL;
    v14 = 552LL;
    if ( a1 )
      v14 = (__int64)v13;
    v25[0] = *((_DWORD *)a1 + 139);
    v23 = *((_BYTE *)a1 + 592);
    v24 = *((_BYTE *)a1 + 560);
    v27 = *((_QWORD *)a1 - 4);
    v47 = &v26;
    v15 = *(unsigned __int8 *)(v14 + 1);
    v44 = v14;
    v46 = 0;
    v43 = 4LL;
    v41 = 1LL;
    v45 = 4 * v15 + 8;
    v42 = v25;
    v40 = &v23;
    v38 = &v24;
    v36 = &v27;
    v39 = 1LL;
    v37 = 8LL;
    if ( a1 == (struct _RM_HAM_ACTIVITY_HOST *)-24LL )
    {
      v12 = &word_1800C1FFC;
      v17 = 2;
    }
    else
    {
      v16 = -1LL;
      do
        ++v16;
      while ( v12[v16] );
      v17 = 2 * v16 + 2;
    }
    v34 = v17;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800E82B8;
    v33 = v12;
    EventDescriptor.Keyword = 8LL;
    v35 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800E82B8;
    v30 = &unk_1800D3E9E;
    UserData.Reserved = 2;
    v31 = 81;
    v32 = 1;
    v25[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
  }
  v3 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v3) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  CempLockAcquireExclusive(a1);
  v5 = HampLockTrackerId;
  *((_QWORD *)a1 + 83) |= 0x100000000000000uLL;
  if ( v5 != -1 )
  {
    v6 = (__int64 *)TlsGetValue(v5);
    v7 = *v6;
    if ( (*v6 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( v6[2]-- == 1 )
      *v6 = v7 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)a1 + 2) = 0;
  RtlReleaseSRWLockExclusive(a1);
  v9 = (struct _HAM_HOST_DEPENDENCY *)*((_QWORD *)a1 + 89);
  if ( v9 )
    HampDepGroupInvalidateDependency(v9);
  v10 = (struct _HAM_DEPENDENCY_GROUP *)*((_QWORD *)a1 + 88);
  if ( v10 )
    HampDepGroupRemoveHost(v10, a1);
  if ( v1 )
  {
    v18 = *(_QWORD *)(v1 + 88);
    if ( a1 == *(struct _RM_HAM_ACTIVITY_HOST **)(v18 + 328) )
    {
      HampPkgAcquireLockExclusive(*(struct _HAM_PACKAGE **)(v1 + 88));
      *(_QWORD *)(v18 + 328) = 0LL;
      HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v18);
    }
    HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v1);
    if ( !(unsigned int)CempListEntryIsNull((_QWORD *)a1 + 103) )
    {
      v20 = *v19;
      if ( *(_QWORD **)(*v19 + 8LL) != v19 || (v21 = (_QWORD *)v19[1], (_QWORD *)*v21 != v19) )
        __fastfail(3u);
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
    }
    v22 = *((_BYTE *)a1 + 592);
    if ( v22 )
    {
      if ( v22 == 1 && a1 == *(struct _RM_HAM_ACTIVITY_HOST **)(v1 + 576) )
        *(_QWORD *)(v1 + 576) = 0LL;
    }
    else if ( a1 == *(struct _RM_HAM_ACTIVITY_HOST **)(v1 + 568) )
    {
      *(_QWORD *)(v1 + 568) = 0LL;
    }
    HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v1);
  }
  v11 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 100);
  if ( v11 )
    RmHamHostDereferenceUnsafe(v11);
}
