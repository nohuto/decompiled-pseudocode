/*
 * XREFs of ?UtilGetProcessTelemetryAppSessionGuid@@YAJPEAXPEAU_GUID@@PEAG2@Z @ 0x18000CCCC
 * Callers:
 *     DllMain @ 0x18000D354 (DllMain.c)
 * Callees:
 *     __security_check_cookie @ 0x1800021A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180003118 (memset_0.c)
 */

__int64 __fastcall UtilGetProcessTelemetryAppSessionGuid(
        HANDLE ProcessHandle,
        struct _GUID *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4)
{
  NTSTATUS InformationProcess; // ecx
  unsigned int v6; // ecx
  ULONG ReturnLength[4]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE ProcessInformation[4]; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v10; // [rsp+44h] [rbp-74h]
  __int64 v11; // [rsp+50h] [rbp-68h]
  int v12; // [rsp+78h] [rbp-40h]
  int v13; // [rsp+7Ch] [rbp-3Ch]

  gDwmInitTargetAppSessionGuid = 0LL;
  memset_0(ProcessInformation, 0, 0x60uLL);
  ReturnLength[0] = 0;
  InformationProcess = NtQueryInformationProcess(
                         ProcessHandle,
                         (PROCESSINFOCLASS)64,
                         ProcessInformation,
                         0x60u,
                         ReturnLength);
  if ( (int)(InformationProcess + 0x80000000) < 0 || InformationProcess == -2147483643 )
  {
    v6 = 0;
    gDwmInitTargetAppSessionGuid.Data1 = v10;
    gDwmInitTargetAppSessionGuid.Data2 = v12;
    gSessionId = v12;
    gDwmInitTargetAppSessionGuid.Data3 = v13;
    gBootId = v13;
    *(_QWORD *)gDwmInitTargetAppSessionGuid.Data4 = v11;
  }
  else
  {
    return InformationProcess | 0x10000000u;
  }
  return v6;
}
