/*
 * XREFs of ?HampAppExitLicenseWorker@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18005B444
 * Callers:
 *     ?HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180025E50 (-HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026410 (-HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckWaitForLicenseForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002A5E0 (-HampAppCheckWaitForLicenseForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

void __fastcall HampAppExitLicenseWorker(struct _HAM_APPLICATION *a1)
{
  _DWORD *v1; // rbx
  char v2; // al
  const wchar_t *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  char v6; // [rsp+30h] [rbp-19h] BYREF
  unsigned int v7; // [rsp+34h] [rbp-15h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  void *v10; // [rsp+60h] [rbp+17h]
  int v11; // [rsp+68h] [rbp+1Fh]
  int v12; // [rsp+6Ch] [rbp+23h]
  const wchar_t *v13; // [rsp+70h] [rbp+27h]
  int v14; // [rsp+78h] [rbp+2Fh]
  int v15; // [rsp+7Ch] [rbp+33h]
  char *v16; // [rsp+80h] [rbp+37h]
  __int64 v17; // [rsp+88h] [rbp+3Fh]

  v1 = (_DWORD *)((char *)a1 + 616);
  if ( (unsigned int)dword_1800E72B0 > 5 )
  {
    v2 = (*v1 >> 23) & 3;
    v17 = 1LL;
    v6 = v2;
    v16 = &v6;
    v3 = (const wchar_t *)((char *)a1 + 96);
    if ( v3 )
    {
      v4 = -1LL;
      do
        ++v4;
      while ( v3[v4] );
      v5 = 2 * v4 + 2;
    }
    else
    {
      v3 = &word_1800C10AC;
      v5 = 2;
    }
    v14 = v5;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_1800E72B8;
    v13 = v3;
    v15 = 0;
    EventDescriptor.Keyword = 0LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800E72B8;
    v10 = &unk_1800D5D92;
    UserData.Reserved = 2;
    v12 = 1;
    v11 = 50;
    v7 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  *v1 &= ~0x100000u;
  RtlWakeAddressAll(v1);
}
