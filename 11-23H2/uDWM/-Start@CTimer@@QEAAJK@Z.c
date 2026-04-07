/*
 * XREFs of ?Start@CTimer@@QEAAJK@Z @ 0x180011A38
 * Callers:
 *     ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x1800118F4 (-_SetTimer@CAnimationClock@@AEAAJK@Z.c)
 * Callees:
 *     ?_OnTimerCallback@CTimer@@AEAAXXZ @ 0x18000A07C (-_OnTimerCallback@CTimer@@AEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTimer::Start(CTimer *this, unsigned int a2)
{
  __int64 v2; // rsi
  signed int v4; // ebx
  PTP_TIMER ThreadpoolTimer; // rax
  signed int LastError; // eax
  _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF
  char *v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  v4 = 0;
  v9 = (char *)this + 16;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( (_DWORD)v2 )
  {
    if ( *((_QWORD *)this + 7) )
      goto LABEL_15;
    ThreadpoolTimer = CreateThreadpoolTimer((PTP_TIMER_CALLBACK)CTimer::s_TimerTickProc, this, 0LL);
    *((_QWORD *)this + 7) = ThreadpoolTimer;
    if ( ThreadpoolTimer )
      goto LABEL_15;
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    if ( v4 >= 0 )
    {
LABEL_15:
      if ( IsThreadpoolTimerSet(*((PTP_TIMER *)this + 7)) )
      {
        v4 = -2147019873;
      }
      else
      {
        pftDueTime = (_FILETIME)(-10000 * v2);
        SetThreadpoolTimer(*((PTP_TIMER *)this + 7), &pftDueTime, 0, 0);
      }
    }
  }
  else
  {
    CTimer::_OnTimerCallback(this);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return (unsigned int)v4;
}
