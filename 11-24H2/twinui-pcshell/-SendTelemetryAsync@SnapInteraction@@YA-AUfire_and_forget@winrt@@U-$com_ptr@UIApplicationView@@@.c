/*
 * XREFs of ?SendTelemetryAsync@SnapInteraction@@YA?AUfire_and_forget@winrt@@U?$com_ptr@UIApplicationView@@@3@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z @ 0x1801A9FE4
 * Callers:
 *     ??1InteractionRecord@SnapInteraction@@QEAA@XZ @ 0x1801A9EAC (--1InteractionRecord@SnapInteraction@@QEAA@XZ.c)
 *     ?SendTotalInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801A9F8C (-SendTotalInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV-$unique_any_t@V-$unique_stora.c)
 * Callees:
 *     ??1?$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ @ 0x18004E0E8 (--1-$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ.c)
 *     SnapInteraction::SendTelemetryAsync$_InitCoro$2 @ 0x1802716BC (SnapInteraction--SendTelemetryAsync$_InitCoro$2.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall SnapInteraction::SendTelemetryAsync(__int64 *a1, __int64 a2)
{
  unsigned int v3; // eax
  char v4; // bl
  __int64 v6; // [rsp+88h] [rbp+10h] BYREF
  char v7; // [rsp+90h] [rbp+18h] BYREF
  int v8; // [rsp+98h] [rbp+20h] BYREF

  v6 = a2;
  v3 = (unsigned int)operator new(0x30uLL);
  v8 = 0;
  SnapInteraction::SendTelemetryAsync__InitCoro_2((unsigned int)&v7, (unsigned int)&v8, v3, (_DWORD)a1, (__int64)&v6);
  v4 = v7;
  winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(a1);
  return v4;
}
