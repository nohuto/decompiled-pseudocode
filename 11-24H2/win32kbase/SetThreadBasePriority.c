/*
 * XREFs of SetThreadBasePriority @ 0x14014E590
 * Callers:
 *     NtUserRegisterManipulationThread @ 0x14016F960 (NtUserRegisterManipulationThread.c)
 *     ?DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ @ 0x14019C7D0 (-DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ.c)
 *     IVWorkerThread @ 0x140217C48 (IVWorkerThread.c)
 *     ?SetThreadPriority@CInputThreadBase@@QEAAXXZ @ 0x140220034 (-SetThreadPriority@CInputThreadBase@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall SetThreadBasePriority(PETHREAD Thread, int a2)
{
  _QWORD SystemInformation[2]; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+34h] [rbp-14h]

  v7 = 0;
  SystemInformation[0] = PsGetThreadProcessId(Thread);
  SystemInformation[1] = PsGetThreadId(Thread);
  v6 = a2;
  return ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, SystemInformation, 0x18uLL) >= 0;
}
