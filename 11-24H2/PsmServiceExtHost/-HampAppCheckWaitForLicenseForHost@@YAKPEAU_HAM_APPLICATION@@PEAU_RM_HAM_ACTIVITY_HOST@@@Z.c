/*
 * XREFs of ?HampAppCheckWaitForLicenseForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002A560
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800253A0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180009F48 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800182CC (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x18001E7A4 (-HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppGetLicenseState@@YA?AW4_HAM_LICENSE_TYPE@@PEAU_HAM_APPLICATION@@@Z @ 0x18002AEB0 (-HampAppGetLicenseState@@YA-AW4_HAM_LICENSE_TYPE@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002AF80 (-RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002B028 (-RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18002BF20 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003C604 (-HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppExitLicenseWorker@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18005B3C4 (-HampAppExitLicenseWorker@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800625F8 (-HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18006A03C (-HampAppWaitForFlagChange@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     IsPackageRundownNotificationForStoreLicense2Present @ 0x180072BBC (IsPackageRundownNotificationForStoreLicense2Present.c)
 *     ?HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z @ 0x180083CA8 (-HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HampAppCheckWaitForLicenseForHost(struct _HAM_APPLICATION *a1, struct _RM_HAM_ACTIVITY_HOST *a2)
{
  __int64 v3; // rsi
  unsigned int v5; // edi
  unsigned int v6; // r13d
  unsigned int v7; // ecx
  __int64 v9; // rcx
  __int64 v10; // rax
  const wchar_t *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v16; // rax
  struct _RM_HAM_ACTIVITY_HOST *v17; // r13
  __int64 v18; // r9
  int v19; // eax
  NTSTATUS v20; // r14d
  _DWORD v21[2]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v22; // [rsp+38h] [rbp-51h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-39h] BYREF
  void *v25; // [rsp+60h] [rbp-29h]
  int v26; // [rsp+68h] [rbp-21h]
  int v27; // [rsp+6Ch] [rbp-1Dh]
  _DWORD *v28; // [rsp+70h] [rbp-19h]
  __int64 v29; // [rsp+78h] [rbp-11h]
  const wchar_t *v30; // [rsp+80h] [rbp-9h]
  int v31; // [rsp+88h] [rbp-1h]
  int v32; // [rsp+8Ch] [rbp+3h]
  __int64 *v33; // [rsp+90h] [rbp+7h]
  __int64 v34; // [rsp+98h] [rbp+Fh]

  v3 = *((_QWORD *)a2 + 83) >> 61;
  v5 = v3 & 3;
  if ( (int)HampAppGetLicenseState() >= (int)v5 )
  {
    return 0;
  }
  else
  {
    v6 = 1;
    RmReleaseEnforcementLocks((struct _RM_ACTIVITY_HOST *)(((unsigned __int64)a2 - 64) & -(__int64)(a2 != 0LL)));
    HampAppAcquireLockExclusive(a1);
    while ( 1 )
    {
      v7 = *((_DWORD *)a1 + 154);
      if ( ((v7 >> 23) & 3) >= v5 || ((v7 >> 21) & 3) < v5 )
      {
        HampAppReleaseLockExclusive(a1);
        goto LABEL_5;
      }
      if ( (v7 & 0x100000) == 0 )
        break;
      HampAppTraceWaitForLicenseWorkerForHost(a2);
      HampAppWaitForFlagChange(a1);
    }
    *((_DWORD *)a1 + 154) = v7 | 0x100000;
    HampAppReleaseLockExclusive(a1);
    if ( (unsigned __int8)IsPackageRundownNotificationForStoreLicense2Present(v15, v14) )
    {
      v16 = HampAppTryReferenceMixedHost(a1);
      v17 = v16;
      v18 = 0LL;
      if ( v16 )
        v18 = *((_QWORD *)v16 + 72);
      v19 = EnsureStoreLicenseForPackageActivation2(
              (char *)a1 + 96,
              *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 88LL) + 160LL) + 88LL),
              *((_QWORD *)a1 + 11) + 228LL,
              v18);
      v20 = 0;
      if ( v19 < 0 )
        v20 = v19;
      if ( v17 )
        RmHamHostDereference(v17);
      v6 = 1;
    }
    else
    {
      v20 = 0;
    }
    if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 8) != 0 && (qword_1800E82C8 & 8) == qword_1800E82C8 )
    {
      v21[0] = v20;
      v34 = 8LL;
      v9 = 32LL;
      if ( a2 )
        v9 = (__int64)a2 - 32;
      v10 = *(_QWORD *)v9;
      v11 = (const wchar_t *)((char *)a2 + 24);
      v22 = v10;
      v33 = &v22;
      if ( a2 == (struct _RM_HAM_ACTIVITY_HOST *)-24LL )
      {
        v11 = &word_1800C1FFC;
        v13 = 2;
      }
      else
      {
        v12 = -1LL;
        do
          ++v12;
        while ( v11[v12] );
        v13 = 2 * v12 + 2;
      }
      v31 = v13;
      v30 = v11;
      v28 = v21;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800E82B8;
      EventDescriptor.Keyword = 8LL;
      v32 = 0;
      v29 = 4LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)off_1800E82B8;
      v25 = &unk_1800D6FB8;
      UserData.Reserved = 2;
      v26 = 54;
      v27 = 1;
      v21[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    }
    if ( v20 < 0 )
      HampAppRequestLicensingActivityStops(a1, v20);
    HampAppAcquireLockExclusive(a1);
    if ( v20 >= 0 )
      *((_DWORD *)a1 + 154) ^= (*((_DWORD *)a1 + 154) ^ ((_DWORD)v3 << 23)) & 0x1800000;
    HampAppExitLicenseWorker(a1);
    HampAppReleaseLockExclusive(a1);
    HampAppCheckQueueHostWorkersPostLicensing(a1, a2);
LABEL_5:
    RmAcquireEnforcementLocks((struct _RM_ACTIVITY_HOST *)(((unsigned __int64)a2 - 64) & -(__int64)(a2 != 0LL)));
  }
  return v6;
}
