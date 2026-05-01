/*
 * XREFs of ?RmpGpuMonitorIsGpuBusy@@YAKPEAU_RM_GPU_MONITOR@@@Z @ 0x18008E98C
 * Callers:
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18008EA90 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x18005575C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 */

_BOOL8 __fastcall RmpGpuMonitorIsGpuBusy(struct _RM_GPU_MONITOR *a1)
{
  BOOL v2; // ebx
  unsigned __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int8 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // [rsp+40h] [rbp-10h] BYREF
  __int64 v14; // [rsp+48h] [rbp-8h] BYREF
  bool v15; // [rsp+78h] [rbp+28h] BYREF
  char v16; // [rsp+80h] [rbp+30h] BYREF
  int v17; // [rsp+88h] [rbp+38h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  if ( (int)MemUtilQueryGpuUtilization(&v14) < 0
    || (RtlQueryUnbiasedInterruptTime(&v13), v3 = v13 - *((_QWORD *)a1 + 3), v13 == *((_QWORD *)a1 + 3)) )
  {
    v2 = 1;
  }
  else
  {
    v4 = v14;
    v5 = v14;
    *((_QWORD *)a1 + 3) = v13;
    v6 = v5 - *((_QWORD *)a1 + 2);
    *((_QWORD *)a1 + 2) = v4;
    v7 = 100 * v6 / v3;
    v8 = 100;
    if ( v7 < 0x64 )
      v8 = v7;
    v2 = v8 > *((_BYTE *)a1 + 48);
  }
  if ( (unsigned int)dword_1800E7278 > 5 && tlgKeywordOn((__int64)&dword_1800E7278, 1LL) )
  {
    v15 = v2;
    v16 = v10;
    v17 = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v9,
      (__int64)&unk_1800D8D0E,
      v10,
      v11,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15);
  }
  return v2;
}
