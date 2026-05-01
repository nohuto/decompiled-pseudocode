/*
 * XREFs of ?HampProcessBoostPriority@@YAJPEAXKW4_RM_EXECUTION_SPEED@@@Z @ 0x18006B30C
 * Callers:
 *     ?HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x180006EE4 (-HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18003C100 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z @ 0x18003D0AC (-RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800557F0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 *     ?HampUtilActOnThreads@@YAJPEAXKKP6AJ000@Z0@Z @ 0x18007ED58 (-HampUtilActOnThreads@@YAJPEAXKKP6AJ000@Z0@Z.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall HampProcessBoostPriority(void *a1, NTSTATUS a2, int a3)
{
  NTSTATUS InformationProcess; // ebx
  unsigned __int8 v7; // di
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r9
  _WORD ProcessInformation[2]; // [rsp+38h] [rbp-29h] BYREF
  char v13; // [rsp+3Ch] [rbp-25h] BYREF
  NTSTATUS v14; // [rsp+40h] [rbp-21h] BYREF
  HANDLE ProcessHandle; // [rsp+48h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+58h] [rbp-9h] BYREF
  NTSTATUS *v17; // [rsp+78h] [rbp+17h]
  __int64 v18; // [rsp+80h] [rbp+1Fh]
  char *v19; // [rsp+88h] [rbp+27h]
  __int64 v20; // [rsp+90h] [rbp+2Fh]

  ProcessInformation[0] = 0;
  ProcessHandle = 0LL;
  if ( a3 < 1 )
    return 0;
  InformationProcess = RmpSystemDuplicateHandle(a1, 0x600u, &ProcessHandle);
  if ( InformationProcess < 0 )
    goto LABEL_23;
  if ( a3 >= 2 )
  {
    if ( a3 >= 3 )
      goto LABEL_18;
    v7 = 6;
  }
  else
  {
    v7 = 2;
  }
  InformationProcess = NtQueryInformationProcess(ProcessHandle, ProcessPriorityClass, ProcessInformation, 2u, 0LL);
  if ( InformationProcess < 0 )
    goto LABEL_23;
  if ( HIBYTE(ProcessInformation[0]) < v7 )
  {
    HIBYTE(ProcessInformation[0]) = v7;
    NtSetInformationProcess(ProcessHandle, ProcessPriorityClass, ProcessInformation, 2u);
    LODWORD(v8) = 4;
    if ( (unsigned int)dword_1800E72B0 > 4 && tlgKeywordOn((__int64)&dword_1800E72B0, 64LL) )
    {
      v13 = HIBYTE(ProcessInformation[0]);
      v18 = v8;
      v19 = &v13;
      v14 = a2;
      v17 = &v14;
      v20 = 1LL;
      tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1800E72B0, byte_1800D32D5, 0LL, 0LL, v8, &v16);
    }
  }
  InformationProcess = HampUtilActOnThreads(a1, 0x400u, v8, HampProcessBoostPriorityThreadCallback, 0LL);
  if ( InformationProcess < 0 )
  {
LABEL_23:
    if ( (unsigned int)dword_1800E72B0 > 4 && tlgKeywordOn((__int64)&dword_1800E72B0, 64LL) )
    {
      v14 = InformationProcess;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (__int64)&dword_1800E72B0,
        byte_1800D3314,
        v9,
        v10,
        (__int64)&v14);
    }
    goto LABEL_18;
  }
  InformationProcess = 0;
LABEL_18:
  if ( ProcessHandle )
    NtClose(ProcessHandle);
  return (unsigned int)InformationProcess;
}
