/*
 * XREFs of StorDlrmSetLinkToDesiredSpeed @ 0x140139C04
 * Callers:
 *     DlrmHandlePowerStateAction @ 0x140138D50 (DlrmHandlePowerStateAction.c)
 *     DlrmHandleScaleAction @ 0x140138E3C (DlrmHandleScaleAction.c)
 * Callees:
 *     StorLogDLRMSetLinkToDesiredSpeed @ 0x14013A43C (StorLogDLRMSetLinkToDesiredSpeed.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall StorDlrmSetLinkToDesiredSpeed(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int16 a5,
        char a6)
{
  unsigned __int64 v6; // rdi
  int v8; // r13d
  LARGE_INTEGER v11; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  int v13; // eax
  int v14; // r14d
  int v15; // eax
  unsigned int v16; // r15d
  LARGE_INTEGER v17; // rax
  unsigned __int64 v18; // r8
  __int64 v19; // r9
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp-10h] BYREF
  int v22; // [rsp+80h] [rbp+30h] BYREF

  v6 = 0LL;
  v22 = 6;
  a6 = 0;
  PerformanceFrequency.QuadPart = 1LL;
  v8 = a3;
  v11.QuadPart = 0LL;
  if ( !a1 || !a2 )
    return (unsigned int)-1073741811;
  if ( StorEtwLoggingEnabled )
  {
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v11 = PerformanceCounter;
  }
  switch ( a4 )
  {
    case 0:
      goto LABEL_43;
    case 1:
      v13 = 5000;
      break;
    case 2:
      v13 = 8000;
      break;
    case 3:
      v13 = 16000;
      break;
    case 4:
      v13 = 32000;
      break;
    case 5:
      v13 = 64000;
      break;
    default:
LABEL_43:
      v15 = -1073741811;
      v16 = -1073741811;
      goto LABEL_44;
  }
  LOBYTE(a3) = 1;
  v14 = 0;
  v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *, int *))(a2 + 32))(
          *(_QWORD *)(a2 + 8),
          v13 * (unsigned int)a5,
          a3,
          &a6,
          &v22);
  v16 = v15;
  if ( v15 < 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 272));
LABEL_44:
    StorLogDLRMSetLinkToDesiredSpeed(a1, a4, a3, v22, a6, 0LL, v8, v15);
    return v16;
  }
  v15 = -1073741436;
  if ( a6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 276));
    v14 = -1073741436;
  }
  if ( v22 != a4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 280));
    goto LABEL_44;
  }
  v15 = v14;
  if ( v14 < 0 )
    goto LABEL_44;
  if ( StorEtwLoggingEnabled )
  {
    if ( UseQPCTime )
      v17 = KeQueryPerformanceCounter(&PerformanceFrequency);
    else
      v17.QuadPart = KeQueryUnbiasedInterruptTime();
    if ( v17.QuadPart <= 0 || v17.QuadPart >= v11.QuadPart )
      v18 = v17.QuadPart - v11.QuadPart;
    else
      v18 = v17.QuadPart - v11.QuadPart - 1;
    if ( UseQPCTime )
    {
      if ( PerformanceFrequency.QuadPart && v18 )
      {
        v19 = v18 / PerformanceFrequency.QuadPart;
        v18 = 1000 * (v18 % PerformanceFrequency.QuadPart);
        v6 = 10000 * (v18 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
           + 10000 * (1000 * v19 + v18 / PerformanceFrequency.QuadPart);
      }
    }
    else
    {
      v6 = v18;
    }
    StorLogDLRMSetLinkToDesiredSpeed(a1, a4, v18, v22, a6, v6, v8, v14);
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 240), v6);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 232));
    if ( v6 > *(_QWORD *)(a1 + 248) )
      _InterlockedExchange64((volatile __int64 *)(a1 + 248), v6);
    if ( v6 < *(_QWORD *)(a1 + 256) )
      _InterlockedExchange64((volatile __int64 *)(a1 + 256), v6);
  }
  return v16;
}
