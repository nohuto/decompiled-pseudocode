/*
 * XREFs of KiShouldRearmClockTimer @ 0x140276050
 * Callers:
 *     KiSetClockTimer @ 0x140274458 (KiSetClockTimer.c)
 *     KiCancelClockTimer @ 0x1403E9910 (KiCancelClockTimer.c)
 *     KiRestoreClockTickRate @ 0x1404C7BF0 (KiRestoreClockTickRate.c)
 *     KePrepareClockTimerForIdle @ 0x1405B52DC (KePrepareClockTimerForIdle.c)
 * Callees:
 *     KiGetClockTimerEarliestDeadline @ 0x1402773B0 (KiGetClockTimerEarliestDeadline.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

char __fastcall KiShouldRearmClockTimer(__int64 a1, LARGE_INTEGER a2, char a3)
{
  LARGE_INTEGER InterruptTimePrecise; // r14
  LARGE_INTEGER v6; // rdi
  __int64 v7; // rsi
  LARGE_INTEGER v8; // r15
  int v9; // eax
  LARGE_INTEGER v10; // rdx
  unsigned int v11; // r11d
  bool v12; // cc
  char v14; // [rsp+30h] [rbp-D0h] BYREF
  char v15; // [rsp+31h] [rbp-CFh] BYREF
  int v16; // [rsp+34h] [rbp-CCh] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp-C8h] BYREF
  LARGE_INTEGER v18; // [rsp+40h] [rbp-C0h] BYREF
  LARGE_INTEGER v19; // [rsp+48h] [rbp-B8h] BYREF
  LARGE_INTEGER v20; // [rsp+50h] [rbp-B0h] BYREF
  LONGLONG v21; // [rsp+58h] [rbp-A8h] BYREF
  char v22[32]; // [rsp+60h] [rbp-A0h] BYREF
  LARGE_INTEGER *v23; // [rsp+80h] [rbp-80h]
  int v24; // [rsp+88h] [rbp-78h]
  int v25; // [rsp+8Ch] [rbp-74h]
  char *v26; // [rsp+90h] [rbp-70h]
  int v27; // [rsp+98h] [rbp-68h]
  int v28; // [rsp+9Ch] [rbp-64h]
  LARGE_INTEGER *v29; // [rsp+A0h] [rbp-60h]
  int v30; // [rsp+A8h] [rbp-58h]
  int v31; // [rsp+ACh] [rbp-54h]
  int *v32; // [rsp+B0h] [rbp-50h]
  int v33; // [rsp+B8h] [rbp-48h]
  int v34; // [rsp+BCh] [rbp-44h]
  LARGE_INTEGER *v35; // [rsp+C0h] [rbp-40h]
  int v36; // [rsp+C8h] [rbp-38h]
  int v37; // [rsp+CCh] [rbp-34h]
  LONGLONG *v38; // [rsp+D0h] [rbp-30h]
  int v39; // [rsp+D8h] [rbp-28h]
  int v40; // [rsp+DCh] [rbp-24h]
  LARGE_INTEGER *p_PerformanceCounter; // [rsp+E0h] [rbp-20h]
  int v42; // [rsp+E8h] [rbp-18h]
  int v43; // [rsp+ECh] [rbp-14h]
  char *v44; // [rsp+F0h] [rbp-10h]
  int v45; // [rsp+F8h] [rbp-8h]
  int v46; // [rsp+FCh] [rbp-4h]

  InterruptTimePrecise = a2;
  if ( !*(_BYTE *)(a1 + 38408) )
    return 1;
  if ( !KiClockTimerReducePreciseTimeQueries )
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  LOBYTE(a2.LowPart) = a3;
  v6 = *(LARGE_INTEGER *)(a1 + 38272);
  v7 = (unsigned int)KeMinimumIncrement;
  v8.QuadPart = (unsigned int)KeMinimumIncrement + InterruptTimePrecise.QuadPart;
  v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD))KiGetClockTimerEarliestDeadline)(a1, (LARGE_INTEGER)a2.QuadPart);
  v10 = *(LARGE_INTEGER *)(a1 + 16LL * v9 + 38296);
  if ( *(_DWORD *)(a1 + 16LL * v9 + 38304) >= v11 )
    v7 = *(unsigned int *)(a1 + 16LL * v9 + 38304);
  if ( v8.QuadPart > (unsigned __int64)(v10.QuadPart + v7) )
  {
    v12 = v6.QuadPart <= (unsigned __int64)v8.QuadPart;
  }
  else
  {
    if ( v6.QuadPart < (unsigned __int64)v10.QuadPart )
      return 1;
    v12 = v6.QuadPart <= (unsigned __int64)(v10.QuadPart + v7);
  }
  if ( !v12 )
    return 1;
  if ( (unsigned int)dword_140E07080 > 5 )
  {
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v40 = 0;
    v43 = 0;
    v46 = 0;
    v23 = &v18;
    v14 = *(_BYTE *)(a1 + 33);
    v26 = &v14;
    v29 = &v19;
    v32 = &v16;
    v35 = &v20;
    v38 = &v21;
    p_PerformanceCounter = &PerformanceCounter;
    v44 = &v15;
    v24 = 8;
    v30 = 8;
    v16 = v9;
    v20 = v10;
    v36 = 8;
    v21 = v10.QuadPart + v7;
    v39 = 8;
    v42 = 8;
    v18 = InterruptTimePrecise;
    v27 = 1;
    v19 = v8;
    v33 = 4;
    PerformanceCounter = v6;
    v15 = a3;
    v45 = 1;
    tlgWriteTransfer_EtwWriteTransfer(&dword_140E07080, byte_140047325, 0LL, 0LL, 10, v22);
  }
  return 0;
}
