/*
 * XREFs of ?HamSrvPackageGetDebugMode@@YAEPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXK@Z @ 0x180014160
 * Callers:
 *     PsmHamGetPackageDebugMode @ 0x18005D3B0 (PsmHamGetPackageDebugMode.c)
 * Callees:
 *     ?HampSessionCompareById@@YAJPEAX0@Z @ 0x180014A30 (-HampSessionCompareById@@YAJPEAX0@Z.c)
 *     ?HampUserCompareByIdentity@@YAJPEAX0@Z @ 0x180014A50 (-HampUserCompareByIdentity@@YAJPEAX0@Z.c)
 *     ?HampPkgCompareByIdentity@@YAJPEAX0@Z @ 0x180014AD0 (-HampPkgCompareByIdentity@@YAJPEAX0@Z.c)
 *     CemRcObjectDereference @ 0x180014EE0 (CemRcObjectDereference.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_BOOL8 __fastcall HamSrvPackageGetDebugMode(
        struct _HOST_ACTIVITY_MANAGER *a1,
        char *a2,
        unsigned __int8 *a3,
        unsigned int a4)
{
  unsigned __int64 v7; // r15
  DWORD v8; // ebx
  _WORD *v9; // rcx
  __int64 v10; // rdx
  __int16 v11; // ax
  _WORD *v12; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rsi
  int v15; // edi
  int v16; // eax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdi
  int v19; // ebx
  int v20; // eax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rbx
  int v23; // r15d
  int v24; // eax
  unsigned __int64 v25; // rax
  DWORD v26; // esi
  _QWORD *Value; // rdi
  bool v28; // si
  __int64 *v29; // rax
  __int64 v30; // rdx
  bool v31; // zf
  signed __int64 v32; // rax
  signed __int64 v33; // rtt
  __int64 v34; // r14
  DWORD v35; // ebx
  int v36; // eax
  const wchar_t *v37; // rcx
  int v38; // eax
  unsigned __int64 v40; // rdi
  signed __int64 v41; // rax
  bool v42; // cc
  signed __int64 v43; // rax
  int v44; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v45; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v46; // [rsp+40h] [rbp-C8h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int8 *v48; // [rsp+58h] [rbp-B0h]
  EVENT_DESCRIPTOR v49; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE TlsValue[136]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v51; // [rsp+F8h] [rbp-10h]
  _BYTE v52[132]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE DestinationSid[68]; // [rsp+18Ch] [rbp+84h] BYREF
  int v54; // [rsp+1D0h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+1D8h] [rbp+D0h] BYREF
  void *v56; // [rsp+1E8h] [rbp+E0h]
  int v57; // [rsp+1F0h] [rbp+E8h]
  int v58; // [rsp+1F4h] [rbp+ECh]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1F8h] [rbp+F0h] BYREF
  void *v60; // [rsp+208h] [rbp+100h]
  int v61; // [rsp+210h] [rbp+108h]
  int v62; // [rsp+214h] [rbp+10Ch]
  const wchar_t *v63; // [rsp+218h] [rbp+110h]
  int v64; // [rsp+220h] [rbp+118h]
  int v65; // [rsp+224h] [rbp+11Ch]
  int *v66; // [rsp+228h] [rbp+120h]
  __int64 v67; // [rsp+230h] [rbp+128h]
  unsigned __int8 *v68; // [rsp+238h] [rbp+130h]
  int v69; // [rsp+240h] [rbp+138h]
  int v70; // [rsp+244h] [rbp+13Ch]
  int *v71; // [rsp+248h] [rbp+140h]
  __int64 v72; // [rsp+250h] [rbp+148h]

  v7 = a4;
  *(_QWORD *)&EventDescriptor.Id = a2;
  v45 = a4;
  v48 = a3;
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 0x40) != 0 && (qword_1800E82C8 & 0x40) == qword_1800E82C8 )
  {
    *(_DWORD *)&v49.Level = 260;
    v55.Ptr = (ULONGLONG)off_1800E82B8;
    *(_DWORD *)&v49.Id = 184549376;
    v49.Keyword = 64LL;
    v55.Size = *(unsigned __int16 *)off_1800E82B8;
    v56 = &unk_1800D4B3D;
    v55.Reserved = 2;
    v57 = 24;
    v58 = 1;
    LODWORD(v46) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &v49, 0LL, 0LL, 2u, &v55);
  }
  v8 = HampLockTrackerId;
  v51 = 0LL;
  memset(&TlsValue[8], 0, 128);
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker == 0");
    TlsSetValue(v8, &TlsValue[8]);
  }
  memset_0(v52, 0, 0xCCuLL);
  v9 = v52;
  v10 = 65LL;
  do
  {
    if ( v10 == -2147483581 )
      break;
    v11 = *(_WORD *)((char *)v9 + a2 - v52);
    if ( !v11 )
      break;
    *v9++ = v11;
    --v10;
  }
  while ( v10 );
  v12 = v9 - 1;
  if ( v10 )
    v12 = v9;
  *v12 = 0;
  RtlCopySid(0x44u, DestinationSid, a3);
  v13 = (unsigned __int64)a1 + 392;
  v54 = v7;
  RtlAcquireSRWLockShared((char *)a1 + 408);
  v14 = *((_QWORD *)a1 + 49);
  v15 = *((_BYTE *)a1 + 400) & 1;
  if ( (*(_BYTE *)(v13 + 8) & 1) != 0 )
  {
    if ( !v14 )
      goto LABEL_77;
    v14 ^= v13;
  }
  if ( !v14 )
  {
LABEL_77:
    RtlReleaseSRWLockShared(v13 + 16);
LABEL_78:
    v28 = 0;
LABEL_53:
    v34 = -1LL;
    goto LABEL_54;
  }
  do
  {
    v16 = HampSessionCompareById((void *)v7, (void *)v14);
    if ( v16 < 0 )
    {
      v17 = *(_QWORD *)v14;
      if ( !v15 )
        goto LABEL_16;
    }
    else
    {
      if ( v16 <= 0 )
        break;
      v17 = *(_QWORD *)(v14 + 8);
      if ( !v15 )
      {
LABEL_16:
        v14 = v17;
        continue;
      }
    }
    if ( !v17 )
      goto LABEL_16;
    v14 ^= v17;
  }
  while ( v14 );
  if ( !v14 || !*(_QWORD *)(v14 + 24) )
    goto LABEL_77;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v14 + 24)) <= 1 )
    __fastfail(0xEu);
  RtlReleaseSRWLockShared(v13 + 16);
  RtlAcquireSRWLockShared(v14 + 56);
  v18 = *(_QWORD *)(v14 + 40);
  v19 = *(_BYTE *)(v14 + 48) & 1;
  if ( (*(_BYTE *)(v14 + 48) & 1) != 0 )
  {
    if ( v18 )
    {
      v18 ^= v14 + 40;
      goto LABEL_22;
    }
    goto LABEL_79;
  }
LABEL_22:
  if ( !v18 )
    goto LABEL_79;
  while ( 2 )
  {
    v20 = HampUserCompareByIdentity(DestinationSid, (void *)v18);
    if ( v20 < 0 )
    {
      v21 = *(_QWORD *)v18;
      if ( !v19 )
        goto LABEL_26;
    }
    else
    {
      if ( v20 <= 0 )
        break;
      v21 = *(_QWORD *)(v18 + 8);
      if ( !v19 )
      {
LABEL_26:
        v18 = v21;
        goto LABEL_27;
      }
    }
    if ( !v21 )
      goto LABEL_26;
    v18 ^= v21;
LABEL_27:
    if ( v18 )
      continue;
    break;
  }
  if ( !v18 || !*(_QWORD *)(v18 + 24) )
  {
LABEL_79:
    RtlReleaseSRWLockShared(v14 + 56);
    CemRcObjectDereference(v14);
    v28 = 0;
    goto LABEL_53;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v18 + 24)) <= 1 )
    __fastfail(0xEu);
  RtlReleaseSRWLockShared(v14 + 56);
  RtlAcquireSRWLockShared(v18 + 56);
  v22 = *(_QWORD *)(v18 + 40);
  v23 = *(_BYTE *)(v18 + 48) & 1;
  if ( (*(_BYTE *)(v18 + 48) & 1) != 0 )
  {
    if ( v22 )
    {
      v22 ^= v18 + 40;
      goto LABEL_32;
    }
LABEL_80:
    RtlReleaseSRWLockShared(v18 + 56);
    v22 = 0LL;
    CemRcObjectDereference(v14);
    goto LABEL_42;
  }
LABEL_32:
  if ( !v22 )
    goto LABEL_80;
  do
  {
    v24 = HampPkgCompareByIdentity(v52, (void *)v22);
    if ( v24 < 0 )
    {
      v25 = *(_QWORD *)v22;
      if ( !v23 )
        goto LABEL_36;
    }
    else
    {
      if ( v24 <= 0 )
        break;
      v25 = *(_QWORD *)(v22 + 8);
      if ( !v23 )
      {
LABEL_36:
        v22 = v25;
        continue;
      }
    }
    if ( !v25 )
      goto LABEL_36;
    v22 ^= v25;
  }
  while ( v22 );
  if ( !v22 || !*(_QWORD *)(v22 + 24) )
    goto LABEL_80;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v22 + 24)) <= 1 )
    __fastfail(0xEu);
  RtlReleaseSRWLockShared(v18 + 56);
  CemRcObjectDereference(v14);
LABEL_42:
  CemRcObjectDereference(v18);
  if ( !v22 )
    goto LABEL_78;
  v26 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v26) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 0x40uLL;
    ++Value[7];
  }
  RtlAcquireSRWLockShared(v22 + 304);
  v28 = (*(_DWORD *)(v22 + 340) & 4) != 0;
  if ( HampLockTrackerId != -1 )
  {
    v29 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v30 = *v29;
    if ( (*v29 & 0x40) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v31 = v29[7]-- == 1;
    if ( v31 )
      *v29 = v30 & 0xFFFFFFFFFFFFFFBFuLL;
  }
  RtlReleaseSRWLockShared(v22 + 304);
  _m_prefetchw((const void *)(v22 + 24));
  v32 = *(_QWORD *)(v22 + 24);
  while ( v32 - 1 > 0 )
  {
    v33 = v32;
    v32 = _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 24), v32 - 1, v32);
    if ( v33 == v32 )
      goto LABEL_53;
  }
  if ( v32 != 1 )
    __fastfail(0xEu);
  v40 = *(_QWORD *)(v22 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( *(_QWORD *)(v22 + 16) != -1LL )
  {
    RtlAcquireSRWLockExclusive(v40 + 16);
    v41 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 24), 0xFFFFFFFFFFFFFFFFuLL);
    v42 = v41 <= 1;
    v43 = v41 - 1;
    if ( v42 )
    {
      if ( v43 )
        __fastfail(0xEu);
      RtlReleaseSRWLockExclusive(v40 + 16);
      (*(void (__fastcall **)(unsigned __int64))(v40 + 24))(v22);
    }
    else
    {
      RtlReleaseSRWLockExclusive(v40 + 16);
    }
    goto LABEL_53;
  }
  v34 = -1LL;
  if ( _InterlockedDecrement64((volatile signed __int64 *)(v22 + 24)) <= -1 )
    __fastfail(0xEu);
  (*(void (__fastcall **)(unsigned __int64))(v40 + 24))(v22);
LABEL_54:
  v35 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v35, 0LL);
  }
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 8) != 0 && (qword_1800E82C8 & 8) == qword_1800E82C8 )
  {
    v71 = &v44;
    LOBYTE(v44) = v28;
    v72 = 1LL;
    v36 = v48[1];
    v68 = v48;
    v37 = *(const wchar_t **)&EventDescriptor.Id;
    v70 = 0;
    v67 = 4LL;
    v69 = 4 * v36 + 8;
    v66 = (int *)&v45;
    if ( *(_QWORD *)&EventDescriptor.Id )
    {
      do
        v31 = *(_WORD *)(*(_QWORD *)&EventDescriptor.Id + 2 * v34++ + 2) == 0;
      while ( !v31 );
      v38 = 2 * v34 + 2;
    }
    else
    {
      v37 = &word_1800C1FFC;
      v38 = 2;
    }
    v64 = v38;
    *(_DWORD *)&EventDescriptor.Level = 516;
    UserData.Ptr = (ULONGLONG)off_1800E82B8;
    v63 = v37;
    v65 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 8LL;
    UserData.Size = *(unsigned __int16 *)off_1800E82B8;
    v60 = &unk_1800D46D4;
    UserData.Reserved = 2;
    v61 = 72;
    v62 = 1;
    LODWORD(v46) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  }
  return v28;
}
