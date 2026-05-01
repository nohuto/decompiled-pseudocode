/*
 * XREFs of ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x180004950
 * Callers:
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETTINGS_CONTEXT@@@Z @ 0x1800243C0 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETT.c)
 * Callees:
 *     ?RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18000433C (-RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180004FEC (-RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z.c)
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180005180 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     ?RmpGpuMonitorDisableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18008E730 (-RmpGpuMonitorDisableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18008E878 (-RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     memcmp_0 @ 0x1800A77F6 (memcmp_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RmpActivityHostApplyEnforcementSettings(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_ENFORCEMENT_SETTINGS *a2,
        int a3)
{
  char *v4; // r15
  char v5; // di
  char *v6; // r13
  struct _RM_ACTIVITY_HOST *v7; // r14
  DWORD v8; // esi
  _QWORD *Value; // rdi
  __int64 *v10; // rax
  __int64 v11; // rcx
  bool v12; // zf
  unsigned int v13; // ecx
  __int64 v14; // rcx
  unsigned __int8 v15; // dl
  __int64 v16; // rax
  __int64 *v17; // r10
  struct _RM_ACTIVITY_HOST *v18; // r9
  __int64 v19; // r14
  __int64 v20; // r11
  int v21; // edi
  int v22; // edi
  DWORD v23; // esi
  _QWORD *v24; // rdi
  DWORD CurrentThreadId; // eax
  DWORD v26; // ecx
  __int64 *v27; // rax
  __int64 v28; // rcx
  char v29; // al
  int v30; // edi
  int v31; // esi
  unsigned __int64 v32; // r8
  char v33; // cl
  unsigned __int8 v34; // cl
  int v36; // eax
  struct _RM_ACTIVITY_HOST *v37; // rcx
  char v38; // [rsp+60h] [rbp-A0h] BYREF
  bool v39; // [rsp+61h] [rbp-9Fh] BYREF
  char v40; // [rsp+62h] [rbp-9Eh] BYREF
  int v41; // [rsp+64h] [rbp-9Ch] BYREF
  struct _RM_ACTIVITY_HOST *v42; // [rsp+68h] [rbp-98h]
  __int64 v43; // [rsp+70h] [rbp-90h] BYREF
  __int64 v44; // [rsp+78h] [rbp-88h] BYREF
  __int64 v45; // [rsp+80h] [rbp-80h] BYREF
  __int64 v46; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-60h] BYREF
  void *v49; // [rsp+B0h] [rbp-50h]
  int v50; // [rsp+B8h] [rbp-48h]
  int v51; // [rsp+BCh] [rbp-44h]
  int *v52; // [rsp+C0h] [rbp-40h]
  __int64 v53; // [rsp+C8h] [rbp-38h]
  __int64 *v54; // [rsp+D0h] [rbp-30h]
  __int64 v55; // [rsp+D8h] [rbp-28h]
  __int64 *v56; // [rsp+E0h] [rbp-20h]
  __int64 v57; // [rsp+E8h] [rbp-18h]
  __int64 *v58; // [rsp+F0h] [rbp-10h]
  __int64 v59; // [rsp+F8h] [rbp-8h]
  __int64 *v60; // [rsp+100h] [rbp+0h]
  __int64 v61; // [rsp+108h] [rbp+8h]
  char *v62; // [rsp+110h] [rbp+10h]
  __int64 v63; // [rsp+118h] [rbp+18h]
  bool *v64; // [rsp+120h] [rbp+20h]
  __int64 v65; // [rsp+128h] [rbp+28h]
  char *v66; // [rsp+130h] [rbp+30h]
  __int64 v67; // [rsp+138h] [rbp+38h]

  v41 = a3;
  v4 = (char *)a1 + 1192;
  v42 = a1;
  v5 = a3;
  v6 = (char *)a1 + 64;
  v7 = a1;
  if ( !memcmp_0(a2, (char *)a1 + 1192, 0x20uLL) && (v5 & 3) == 0 )
    return 0LL;
  if ( (v4[28] & 1) != 0 )
  {
    if ( (*((_BYTE *)a2 + 28) & 1) == 0 )
      RmpGpuMonitorDisableForHost(v7);
  }
  else if ( (*((_BYTE *)a2 + 28) & 1) != 0 )
  {
    RmpGpuMonitorEnableForHost(v7);
  }
  v8 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v8) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(v6);
  *((_DWORD *)v6 + 2) = GetCurrentThreadId();
  v4[28] ^= (*((_BYTE *)a2 + 28) ^ v4[28]) & 1;
  if ( HampLockTrackerId != -1 )
  {
    v10 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v11 = *v10;
    if ( (*v10 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v12 = v10[2]-- == 1;
    if ( v12 )
      *v10 = v11 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)v6 + 2) = 0;
  RtlReleaseSRWLockExclusive(v6);
  v13 = *((unsigned __int8 *)a2 + 28);
  if ( (((unsigned __int8)v4[28] ^ (unsigned __int8)v13) & 4) != 0 )
  {
    v36 = RmpQoSEnableDisableForHost(v7, (v13 >> 2) & 1);
    v22 = v36;
    if ( v36 == -1073741822 )
    {
      v4[28] ^= (*((_BYTE *)a2 + 28) ^ v4[28]) & 4;
    }
    else if ( v36 < 0 )
    {
      goto LABEL_38;
    }
  }
  v14 = *((_QWORD *)a2 + 2);
  if ( *((_QWORD *)v4 + 2) != v14
    || *((_QWORD *)v4 + 1) != *((_QWORD *)a2 + 1)
    || *(_QWORD *)v4 != *(_QWORD *)a2
    || *((_DWORD *)v4 + 6) != *((_DWORD *)a2 + 6)
    || (v15 = *((_BYTE *)a2 + 28), (((unsigned __int8)v4[28] ^ v15) & 2) != 0)
    || (v29 = v41, (v41 & 1) != 0) )
  {
    v16 = *((_QWORD *)v7 + 6);
    v17 = &v43;
    v18 = v7;
    v43 = *((_QWORD *)a2 + 2);
    v19 = *(_QWORD *)(v16 + 40);
    if ( !v14 )
      v17 = 0LL;
    v20 = *((_QWORD *)v18 + 4);
    v21 = *((_DWORD *)v18 + 156);
    v44 = *((_QWORD *)a2 + 1);
    v45 = *(_QWORD *)a2;
    v22 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, __int64, int, __int64 *, __int64 *, __int64 *, _QWORD))(*(_QWORD *)v19 + 32LL))(
            v19,
            (__int64)v18 + 88,
            (__int64)v18 + 552,
            *((unsigned int *)v18 + 155),
            v21,
            v20,
            *((_BYTE *)v18 + 656) != 0 ? 4 : 0,
            v17,
            &v45,
            &v44,
            0LL);
    if ( v22 < 0 )
      goto LABEL_38;
    v23 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v24 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v23) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
      *v24 |= 2uLL;
      ++v24[2];
    }
    RtlAcquireSRWLockExclusive(v6);
    CurrentThreadId = GetCurrentThreadId();
    v26 = HampLockTrackerId;
    *((_DWORD *)v6 + 2) = CurrentThreadId;
    *(_QWORD *)v4 = *(_QWORD *)a2;
    *((_QWORD *)v4 + 1) = *((_QWORD *)a2 + 1);
    *((_QWORD *)v4 + 2) = *((_QWORD *)a2 + 2);
    if ( v26 != -1 )
    {
      v27 = (__int64 *)TlsGetValue(v26);
      v28 = *v27;
      if ( (*v27 & 2) == 0 )
        NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
      v12 = v27[2]-- == 1;
      if ( v12 )
        *v27 = v28 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    *((_DWORD *)v6 + 2) = 0;
    RtlReleaseSRWLockExclusive(v6);
    if ( *((_DWORD *)v4 + 6) == *((_DWORD *)a2 + 6) && (((unsigned __int8)v4[28] ^ *((_BYTE *)a2 + 28)) & 2) == 0 )
    {
      v7 = v42;
    }
    else
    {
      v7 = v42;
      v22 = RmpActivityHostApplyExecutionSpeed(v42, a2);
      if ( v22 < 0 )
        goto LABEL_38;
    }
    v15 = *((_BYTE *)a2 + 28);
    v29 = v41;
  }
  v30 = v29 & 2;
  v31 = v30;
  if ( *((int *)a2 + 6) >= 2 && (v15 & 2) != 0 && (v29 & 2) != 0 )
  {
    RmHamHostActOnProcesses(v7, 0x2000u, 1u, RmpEnforcementApplyForegroundBoost, (void *)1);
    v31 = v41 & 2;
  }
  v32 = *((unsigned __int8 *)a2 + 28);
  v33 = v4[28];
  if ( (((unsigned __int8)v33 ^ (unsigned __int8)v32) & 0x70) != 0 || v30 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)v7 + 6) + 508LL) & 0x10) != 0 )
    {
      v37 = 0LL;
      if ( v7 != (struct _RM_ACTIVITY_HOST *)-64LL )
        v37 = v7;
      RmHamHostActOnProcesses(
        v37,
        0x2000u,
        1u,
        (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))HampSystemSetBamWindowStateProcess,
        (void *)((v32 >> 4) & 7));
    }
    v33 = v4[28] ^ (*((_BYTE *)a2 + 28) ^ v4[28]) & 0x70;
    v4[28] = v33;
  }
  if ( ((v33 & 8) != 0) != ((*((_BYTE *)a2 + 28) & 8) != 0) || v31 )
  {
    if ( (*((_BYTE *)a2 + 28) & 8) != 0 )
    {
      v22 = RmHamHostActOnProcesses(
              v7,
              0x2000u,
              1u,
              (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpActivityHostSetStoreHighMemoryPriorityProcessCallback,
              0LL);
      if ( v22 < 0 )
        goto LABEL_38;
    }
    v4[28] ^= (*((_BYTE *)a2 + 28) ^ v4[28]) & 8;
  }
  v22 = 0;
LABEL_38:
  if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 8) != 0 && (qword_1800E72C8 & 8) == qword_1800E72C8 )
  {
    v34 = v4[28];
    v41 = v22;
    v38 = (v34 >> 4) & 7;
    v40 = v4[24];
    v45 = *((_QWORD *)v4 + 1);
    v44 = *(_QWORD *)v4;
    v43 = *((_QWORD *)v4 + 2);
    v46 = *((_QWORD *)v6 - 4);
    v66 = &v38;
    v64 = &v39;
    v62 = &v40;
    v60 = &v45;
    v58 = &v44;
    v56 = &v43;
    v54 = &v46;
    v52 = &v41;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800E72B8;
    v39 = (v34 & 2) != 0;
    v67 = 1LL;
    v65 = 1LL;
    v63 = 1LL;
    v61 = 8LL;
    v59 = 8LL;
    v57 = 8LL;
    v55 = 8LL;
    v53 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 8LL;
    UserData.Size = *(unsigned __int16 *)off_1800E72B8;
    v49 = &unk_1800D75E5;
    UserData.Reserved = 2;
    v50 = 151;
    v51 = 1;
    LODWORD(v42) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
  }
  return (unsigned int)v22;
}
