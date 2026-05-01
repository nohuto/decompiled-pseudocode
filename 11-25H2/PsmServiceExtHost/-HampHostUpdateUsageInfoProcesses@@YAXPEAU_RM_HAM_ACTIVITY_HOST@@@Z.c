/*
 * XREFs of ?HampHostUpdateUsageInfoProcesses@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000A89C
 * Callers:
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z @ 0x1800080E8 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180009594 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 * Callees:
 *     ?HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180009DF0 (-HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001834C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18001E78C (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029F10 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     CempLockAcquireExclusive @ 0x18002B8B0 (CempLockAcquireExclusive.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

void __fastcall HampHostUpdateUsageInfoProcesses(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  DWORD v2; // esi
  _QWORD *Value; // rbx
  __int64 v4; // rax
  _FILETIME v5; // rbx
  char v6; // r14
  DWORD v7; // ecx
  unsigned __int64 v8; // rsi
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v12; // rax
  char v13; // [rsp+30h] [rbp-49h] BYREF
  _FILETIME SystemTimeAsFileTime; // [rsp+38h] [rbp-41h] BYREF
  _FILETIME v15; // [rsp+40h] [rbp-39h] BYREF
  __int64 v16; // [rsp+48h] [rbp-31h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-19h] BYREF
  void *v19; // [rsp+70h] [rbp-9h]
  int v20; // [rsp+78h] [rbp-1h]
  int v21; // [rsp+7Ch] [rbp+3h]
  __int64 *v22; // [rsp+80h] [rbp+7h]
  int v23; // [rsp+88h] [rbp+Fh]
  int v24; // [rsp+8Ch] [rbp+13h]
  _FILETIME *v25; // [rsp+90h] [rbp+17h]
  int v26; // [rsp+98h] [rbp+1Fh]
  int v27; // [rsp+9Ch] [rbp+23h]
  char *v28; // [rsp+A0h] [rbp+27h]
  int v29; // [rsp+A8h] [rbp+2Fh]
  int v30; // [rsp+ACh] [rbp+33h]

  SystemTimeAsFileTime = 0LL;
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v15 = SystemTimeAsFileTime;
  RmpAcquireGlobalLock();
  RmHamHostReference(a1);
  RmpReleaseGlobalLock();
  v2 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  CempLockAcquireExclusive(a1);
  v4 = *((_QWORD *)a1 + 83);
  v5 = v15;
  if ( (v4 & 0x2000000000000LL) != 0 )
  {
    v6 = 0;
    *((_FILETIME *)a1 + 129) = v15;
  }
  else
  {
    *((_FILETIME *)a1 + 128) = v15;
    v6 = 1;
  }
  v7 = HampLockTrackerId;
  v8 = ((v4 | 0x1000000000000000uLL) >> 59) & 1;
  *((_QWORD *)a1 + 83) = v4 | 0x1800000000000000LL;
  if ( v7 != -1 )
  {
    v9 = (__int64 *)TlsGetValue(v7);
    v10 = *v9;
    if ( (*v9 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( v9[2]-- == 1 )
      *v9 = v10 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)a1 + 2) = 0;
  RtlReleaseSRWLockExclusive(a1);
  if ( (_DWORD)v8 )
    RmHamHostDereference(a1);
  HampPkgPushUpdate(*(struct _HAM_PACKAGE **)(*((_QWORD *)a1 + 99) + 88LL));
  if ( (unsigned int)dword_1800E72B0 > 5 )
  {
    v12 = *((_QWORD *)a1 - 4);
    v30 = 0;
    v27 = 0;
    v24 = 0;
    EventDescriptor.Keyword = 0LL;
    v16 = v12;
    v28 = &v13;
    v25 = &v15;
    v22 = &v16;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_1800E72B8;
    v26 = 8;
    v23 = 8;
    v13 = v6;
    v15 = v5;
    v29 = 1;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800E72B8;
    v19 = &unk_1800D31EC;
    UserData.Reserved = 2;
    v20 = 67;
    v21 = 1;
    SystemTimeAsFileTime.dwLowDateTime = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
}
