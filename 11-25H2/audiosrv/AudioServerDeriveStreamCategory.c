/*
 * XREFs of AudioServerDeriveStreamCategory @ 0x180071EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AudioServerDeriveStreamCategory(__int64 a1, int a2, unsigned int a3, unsigned int *a4)
{
  struct _FILETIME v4; // rbx
  __int64 v6; // r12
  __int64 v8; // r15
  unsigned int v9; // edi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  struct _FILETIME pftDueTime; // [rsp+20h] [rbp-40h] BYREF
  _QWORD pv[2]; // [rsp+28h] [rbp-38h] BYREF
  DWORD CurrentThreadId; // [rsp+38h] [rbp-28h]
  const wchar_t *v15; // [rsp+40h] [rbp-20h]
  struct _FILETIME v16; // [rsp+48h] [rbp-18h]
  char v17; // [rsp+50h] [rbp-10h]
  __int64 v18; // [rsp+54h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v4 = g_AudioHealthMonitor;
  v6 = g_AudioSrvWatchDogTimerInMs;
  v8 = a2;
  v9 = 0;
  pv[1] = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  v16 = v4;
  CurrentThreadId = GetCurrentThreadId();
  v15 = L"AudioServerDeriveStreamCategory";
  v17 = 0;
  v18 = 0LL;
  if ( (unsigned int)v6 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v6 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v6 / 3, 0);
    }
  }
  if ( (unsigned int)v8 > 0xE || a3 >= 0x18 )
    goto LABEL_11;
  if ( (_DWORD)v8 )
  {
    if ( !a3 )
    {
      a3 = dword_1801882F0[v8];
      goto LABEL_9;
    }
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11DA,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL);
    v9 = -2147024809;
    goto LABEL_10;
  }
LABEL_9:
  *a4 = a3;
LABEL_10:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v9;
}
