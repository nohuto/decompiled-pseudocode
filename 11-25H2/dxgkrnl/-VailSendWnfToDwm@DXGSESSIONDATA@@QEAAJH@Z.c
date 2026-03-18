/*
 * XREFs of ?VailSendWnfToDwm@DXGSESSIONDATA@@QEAAJH@Z @ 0x140202DDC
 * Callers:
 *     ?NotifyVailSessionCallback@DXGVAILOBJECT@@SAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x140200C70 (-NotifyVailSessionCallback@DXGVAILOBJECT@@SAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

__int64 __fastcall DXGSESSIONDATA::VailSendWnfToDwm(DXGSESSIONDATA *this, int a2)
{
  __int64 v3; // rdi
  struct _KPROCESS *v4; // rcx
  HANDLE ProcessId; // rax
  NTSTATUS v6; // eax
  struct _CLIENT_ID ClientId; // [rsp+58h] [rbp+7h] BYREF
  _BYTE v9[16]; // [rsp+68h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp+27h] BYREF
  void *ProcessHandle; // [rsp+B8h] [rbp+67h] BYREF
  int v12; // [rsp+C0h] [rbp+6Fh] BYREF

  v12 = a2;
  LODWORD(v3) = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (DXGSESSIONDATA *)((char *)this + 18672), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  v4 = (struct _KPROCESS *)*((_QWORD *)this + 2340);
  if ( v4 )
  {
    ClientId.UniqueThread = 0LL;
    ProcessId = PsGetProcessId(v4);
    memset(&ObjectAttributes.Length + 1, 0, 20);
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ProcessHandle = 0LL;
    ClientId.UniqueProcess = ProcessId;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    v6 = ZwOpenProcess(&ProcessHandle, 0x2000000u, &ObjectAttributes, &ClientId);
    v3 = v6;
    if ( v6 < 0 )
    {
      WdLogSingleEntry2(2LL, ClientId.UniqueProcess, v6);
      WdLogGlobalForLineNumber = 2721;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to open process handle for process id 0x%I64x, return 0x%I64x",
        (__int64)ClientId.UniqueProcess,
        v3,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      LODWORD(v3) = ZwUpdateWnfStateData(&WNF_DX_VAIL_CHANGE_NOTIFICATION, &v12, 4LL, 0LL, ProcessHandle, 0, 0);
      ZwClose(ProcessHandle);
    }
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v9);
  return (unsigned int)v3;
}
