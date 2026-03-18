/*
 * XREFs of Controller_DetectFrameMicroframeBoundary @ 0x1400402E8
 * Callers:
 *     Controller_Start @ 0x14000B894 (Controller_Start.c)
 *     Controller_TimeSyncStartTrackingWorker @ 0x140042EF0 (Controller_TimeSyncStartTrackingWorker.c)
 * Callees:
 *     DynamicLock_Acquire @ 0x1400087C0 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x140008E60 (DynamicLock_Release.c)
 *     XilRegister_ReadUlong @ 0x1400099C0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x14000B858 (XilRegister_WriteUlong.c)
 *     Controller_GetFrameNumber @ 0x140015B50 (Controller_GetFrameNumber.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_DetectFrameMicroframeBoundary(__int64 a1)
{
  unsigned int v1; // r14d
  unsigned int i; // r15d
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  LARGE_INTEGER v7; // rdi
  int FrameNumber; // eax
  int v9; // r12d
  LARGE_INTEGER v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rax
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  unsigned int *v15; // rbx
  int Ulong; // eax
  __int64 v17; // rcx
  int v19; // [rsp+30h] [rbp-38h] BYREF
  int v20; // [rsp+34h] [rbp-34h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-28h] BYREF
  int v23; // [rsp+50h] [rbp-18h]
  unsigned int v24; // [rsp+54h] [rbp-14h]
  int v25; // [rsp+58h] [rbp-10h]
  int v26; // [rsp+5Ch] [rbp-Ch]
  KIRQL NewIrql; // [rsp+B0h] [rbp+48h]
  unsigned int v28; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int v29; // [rsp+C0h] [rbp+58h] BYREF
  int v30; // [rsp+C8h] [rbp+60h] BYREF

  v1 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  v29 = 0;
  v30 = 0;
  v28 = 0;
  v19 = 0;
  NewIrql = KeGetCurrentIrql();
  KeQueryPerformanceCounter(&PerformanceFrequency);
  for ( i = 1; i <= 2; ++i )
  {
    if ( i == 2 )
      NewIrql = KfRaiseIrql(2u);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( i == 1 )
      v5 = 100 * PerformanceFrequency.QuadPart;
    else
      v5 = 10 * PerformanceFrequency.QuadPart;
    v6 = v5 / 1000;
    Controller_GetFrameNumber(a1, 0, &v29, &v30);
    do
    {
      v7 = KeQueryPerformanceCounter(0LL);
      FrameNumber = Controller_GetFrameNumber(a1, 0, &v28, &v19);
      v9 = v19;
      v20 = FrameNumber;
    }
    while ( v7.QuadPart - PerformanceCounter.QuadPart <= v6 && v29 == v28 && v30 == v19 );
    v10 = KeQueryPerformanceCounter(0LL);
    v11 = 1000000 * (v10.QuadPart - v7.QuadPart) / PerformanceFrequency.QuadPart;
    if ( i == 2 )
      KeLowerIrql(NewIrql);
    if ( (v29 != v28 || v30 != v9) && v11 <= 10 )
    {
      v24 = v28;
      v12 = *(_QWORD *)(a1 + 128);
      v22[0] = a1 + 1072;
      v23 = v20;
      v13 = *(_QWORD **)(v12 + 40);
      v26 = 0;
      v22[1] = v10.QuadPart;
      v25 = v9;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), _QWORD *))(WdfFunctions_01033 + 1144))(
        WdfDriverGlobals,
        *v13,
        Interrupter_SetBusEdgeInformationRoutineWithIsrSync,
        v22);
      return v1;
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), __int64))(WdfFunctions_01033 + 1144))(
    WdfDriverGlobals,
    **(_QWORD **)(*(_QWORD *)(a1 + 128) + 40LL),
    Interrupter_ClearBusEdgeInformationRoutineWithIsrSync,
    a1 + 1072);
  DynamicLock_Acquire(*(_QWORD *)(a1 + 1080));
  v14 = *(_QWORD *)(a1 + 88);
  v15 = *(unsigned int **)(v14 + 32);
  Ulong = XilRegister_ReadUlong(v14, v15);
  XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), v15, Ulong & 0xFFFFFBFF);
  v17 = *(_QWORD *)(a1 + 1080);
  *(_BYTE *)(a1 + 1072) = 0;
  DynamicLock_Release(v17);
  return (unsigned int)-1073741823;
}
