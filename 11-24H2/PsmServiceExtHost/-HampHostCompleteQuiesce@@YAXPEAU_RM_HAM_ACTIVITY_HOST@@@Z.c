/*
 * XREFs of ?HampHostCompleteQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003AA5C
 * Callers:
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18003A570 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18003C4EC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

void __fastcall HampHostCompleteQuiesce(struct _RM_HAM_ACTIVITY_HOST *a1, __int64 a2, int a3, int a4)
{
  char *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  char *v8; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 8) != 0 && (qword_1800E82C8 & 8) == qword_1800E82C8 )
  {
    v5 = (char *)a1 - 32;
    v6 = 32LL;
    if ( a1 )
      v6 = (__int64)v5;
    v7 = *(_QWORD *)v6;
    v8 = (char *)a1 + 24;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
      v6,
      (unsigned int)&unk_1800D399A,
      a3,
      a4,
      (__int64)&v8,
      (__int64)&v7);
  }
  *((_QWORD *)a1 + 83) |= 0x400000000000uLL;
  RtlWakeAllConditionVariable((char *)a1 + 696);
}
