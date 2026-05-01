/*
 * XREFs of ?HampAppTraceWaitForLicenseWorkerForHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003C684
 * Callers:
 *     ?HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180025E50 (-HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026410 (-HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckWaitForLicenseForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002A5E0 (-HampAppCheckWaitForLicenseForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18003C56C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

void __fastcall HampAppTraceWaitForLicenseWorkerForHost(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  const wchar_t *v8; // [rsp+50h] [rbp+18h] BYREF

  if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 0x40) != 0 && (qword_1800E72C8 & 0x40) == qword_1800E72C8 )
  {
    v5 = (char *)a1 - 32;
    v6 = 32LL;
    if ( a1 )
      v6 = (__int64)v5;
    v7 = *(_QWORD *)v6;
    v8 = (const wchar_t *)((char *)a1 + 24);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
      v6,
      byte_1800D5F75,
      (__int64)a1,
      a4,
      &v8,
      (__int64)&v7);
  }
}
