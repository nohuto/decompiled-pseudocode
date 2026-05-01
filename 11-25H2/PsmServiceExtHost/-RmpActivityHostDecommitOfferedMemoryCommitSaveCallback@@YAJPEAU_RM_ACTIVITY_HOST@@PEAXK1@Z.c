/*
 * XREFs of ?RmpActivityHostDecommitOfferedMemoryCommitSaveCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x1800889D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18003C408 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostDecommitOfferedMemoryCommitSaveCallback(
        struct _RM_ACTIVITY_HOST *a1,
        void *a2,
        int a3,
        _BYTE *a4)
{
  int v6; // eax
  NTSTATUS v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v13; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v14; // [rsp+44h] [rbp-3Ch] BYREF
  __int64 v15; // [rsp+48h] [rbp-38h] BYREF
  _OWORD ProcessInformation[2]; // [rsp+50h] [rbp-30h] BYREF

  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  LODWORD(ProcessInformation[0]) = 3;
  if ( (a4[16] & 2) != 0 )
    v6 = 3;
  else
    v6 = 5;
  DWORD1(ProcessInformation[0]) = v6;
  v7 = NtSetInformationProcess(a2, (PROCESSINFOCLASS)65, ProcessInformation, 0x20u);
  v8 = 0;
  if ( v7 < 0 )
    v8 = v7;
  if ( (unsigned int)dword_1800E7278 > 5 && tlgKeywordOn((__int64)&dword_1800E7278, 17LL) )
  {
    v15 = *((_QWORD *)a1 + 4);
    v13 = a3;
    v14 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v9,
      byte_1800D74AF,
      v10,
      v11,
      (__int64)&v14,
      (__int64)&v15,
      (__int64)&v13);
  }
  return v8;
}
