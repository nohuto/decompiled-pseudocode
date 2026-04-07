/*
 * XREFs of ?Start@CTimer@@QEAAJK@Z @ 0x180075CD4
 * Callers:
 *     ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x1800337C0 (-_SetTimer@CAnimationClock@@AEAAJK@Z.c)
 * Callees:
 *     ?_OnTimerCallback@CTimer@@AEAAXXZ @ 0x180075EA4 (-_OnTimerCallback@CTimer@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTimer::Start(CTimer *this, unsigned int a2)
{
  __int64 v2; // rbp
  signed int v4; // ebx
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  signed int LastError; // eax
  _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  v4 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  pftDueTime = (_FILETIME)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( (_DWORD)v2 )
  {
    if ( *((_QWORD *)this + 7) )
      goto LABEL_17;
    *((_QWORD *)this + 7) = CreateThreadpoolTimer(CTimer::s_TimerTickProc, this, 0LL);
    if ( *((_QWORD *)this + 7) )
      goto LABEL_17;
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    if ( v4 >= 0 )
    {
LABEL_17:
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
  if ( v5 )
    LeaveCriticalSection(v5);
  return (unsigned int)v4;
}
