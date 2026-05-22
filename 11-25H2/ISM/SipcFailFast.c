/*
 * XREFs of SipcFailFast @ 0x18010E99C
 * Callers:
 *     ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x180062840 (-DispatchNextCallback@SipcServer@@UEAAJXZ.c)
 *     ?AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z @ 0x180062BE8 (-AddHandle@AggregateWaitHandle@@QEAAJPEAX@Z.c)
 *     ?Initialize@AggregateWaitHandle@@QEAAJXZ @ 0x180081BA4 (-Initialize@AggregateWaitHandle@@QEAAJXZ.c)
 *     ??1AlpcSection@@UEAA@XZ @ 0x18010ADEC (--1AlpcSection@@UEAA@XZ.c)
 *     ?AddRef@?$SipcObjectBase@UISIPCEndpoint@@@@UEAAKXZ @ 0x18010B710 (-AddRef@-$SipcObjectBase@UISIPCEndpoint@@@@UEAAKXZ.c)
 *     ?AttachOrUnmap@AlpcSection@@SAJPEBVAlpcPort@@PEAX_K12PEAPEAV1@@Z @ 0x18010B968 (-AttachOrUnmap@AlpcSection@@SAJPEBVAlpcPort@@PEAX_K12PEAPEAV1@@Z.c)
 *     ?CreateSection@AlpcPort@@UEAAJ_K0PEBXPEAPEAX@Z @ 0x18010C950 (-CreateSection@AlpcPort@@UEAAJ_K0PEBXPEAPEAX@Z.c)
 *     ?DecreaseSectionEventCount@SipcPort@@AEAAXI@Z @ 0x18010CB84 (-DecreaseSectionEventCount@SipcPort@@AEAAXI@Z.c)
 *     _anonymous_namespace_::GetSidFromCurrentProcessToken @ 0x18010D434 (_anonymous_namespace_--GetSidFromCurrentProcessToken.c)
 *     ?GetWaitHandle@AggregateWaitHandle@@QEBAPEAXXZ @ 0x18010D510 (-GetWaitHandle@AggregateWaitHandle@@QEBAPEAXXZ.c)
 *     ?IncreaseSectionEventCount@SipcPort@@AEAAXI@Z @ 0x18010D5B0 (-IncreaseSectionEventCount@SipcPort@@AEAAXI@Z.c)
 *     ?InitializeFromData@SipcSectionId@@QEAAJ_KPEBX@Z @ 0x18010D73C (-InitializeFromData@SipcSectionId@@QEAAJ_KPEBX@Z.c)
 *     ?Release@?$SipcObjectBase@UISIPCEndpoint@@@@UEAAKXZ @ 0x18010E330 (-Release@-$SipcObjectBase@UISIPCEndpoint@@@@UEAAKXZ.c)
 *     ?Release@?$SipcObjectBase@UISIPCServer@@@@UEAAKXZ @ 0x18010E3B0 (-Release@-$SipcObjectBase@UISIPCServer@@@@UEAAKXZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall SipcFailFast(NTSTATUS a1)
{
  HANDLE CurrentProcess; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  NTSTATUS ExitStatus; // [rsp+30h] [rbp+8h] BYREF

  ExitStatus = a1;
  if ( NtCurrentPeb()->BeingDebugged || (MEMORY[0x7FFE02D4] & 3) == 3 )
    __debugbreak();
  RtlCaptureContext(&pContextRecord);
  pContextRecord.Rip = (DWORD64)retaddr;
  pContextRecord.Rsp = (DWORD64)&ExitStatus;
  pExceptionRecord.ExceptionCode = 1073741845;
  pExceptionRecord.ExceptionFlags = 1;
  pExceptionRecord.ExceptionRecord = 0LL;
  pExceptionRecord.ExceptionAddress = retaddr;
  pExceptionRecord.NumberParameters = 1;
  pExceptionRecord.ExceptionInformation[0] = ExitStatus;
  RaiseFailFastException(&pExceptionRecord, &pContextRecord, 2u);
  CurrentProcess = GetCurrentProcess();
  return NtTerminateProcess(CurrentProcess, ExitStatus);
}
