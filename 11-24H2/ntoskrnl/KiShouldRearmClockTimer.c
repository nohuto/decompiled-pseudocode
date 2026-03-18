/*
 * XREFs of KiShouldRearmClockTimer @ 0x14029F97C
 * Callers:
 *     KeUpdatePendingQosRequest @ 0x14029E99C (KeUpdatePendingQosRequest.c)
 *     KiSetClockTimer @ 0x14029F85C (KiSetClockTimer.c)
 *     KiCancelClockTimer @ 0x140469F60 (KiCancelClockTimer.c)
 *     KiRestoreClockTickRate @ 0x1404C89B0 (KiRestoreClockTickRate.c)
 *     KePrepareClockTimerForIdle @ 0x1405B911C (KePrepareClockTimerForIdle.c)
 * Callees:
 *     KiGetClockTimerEarliestDeadline @ 0x1402A0600 (KiGetClockTimerEarliestDeadline.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

char __fastcall KiShouldRearmClockTimer(__int64 a1, __int64 a2, char a3)
{
  __int64 InterruptTimePrecise; // r14
  unsigned __int64 v6; // rdi
  __int64 v7; // rsi
  unsigned __int64 v8; // r15
  int ClockTimerEarliestDeadline; // eax
  unsigned __int64 v10; // rdx
  unsigned int v11; // r11d
  bool v12; // cc
  char v14; // [rsp+30h] [rbp-D0h] BYREF
  char v15; // [rsp+31h] [rbp-CFh] BYREF
  int v16; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A8h] BYREF
  char v22[32]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v23; // [rsp+80h] [rbp-80h]
  int v24; // [rsp+88h] [rbp-78h]
  int v25; // [rsp+8Ch] [rbp-74h]
  char *v26; // [rsp+90h] [rbp-70h]
  int v27; // [rsp+98h] [rbp-68h]
  int v28; // [rsp+9Ch] [rbp-64h]
  unsigned __int64 *v29; // [rsp+A0h] [rbp-60h]
  int v30; // [rsp+A8h] [rbp-58h]
  int v31; // [rsp+ACh] [rbp-54h]
  int *v32; // [rsp+B0h] [rbp-50h]
  int v33; // [rsp+B8h] [rbp-48h]
  int v34; // [rsp+BCh] [rbp-44h]
  __int64 *v35; // [rsp+C0h] [rbp-40h]
  int v36; // [rsp+C8h] [rbp-38h]
  int v37; // [rsp+CCh] [rbp-34h]
  __int64 *v38; // [rsp+D0h] [rbp-30h]
  int v39; // [rsp+D8h] [rbp-28h]
  int v40; // [rsp+DCh] [rbp-24h]
  unsigned __int64 *v41; // [rsp+E0h] [rbp-20h]
  int v42; // [rsp+E8h] [rbp-18h]
  int v43; // [rsp+ECh] [rbp-14h]
  char *v44; // [rsp+F0h] [rbp-10h]
  int v45; // [rsp+F8h] [rbp-8h]
  int v46; // [rsp+FCh] [rbp-4h]

  InterruptTimePrecise = a2;
  if ( !*(_BYTE *)(a1 + 38408) )
    return 1;
  if ( !KiClockTimerReducePreciseTimeQueries )
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v17);
  LOBYTE(a2) = a3;
  v6 = *(_QWORD *)(a1 + 38272);
  v7 = (unsigned int)KeMinimumIncrement;
  v8 = (unsigned int)KeMinimumIncrement + InterruptTimePrecise;
  ClockTimerEarliestDeadline = KiGetClockTimerEarliestDeadline(a1, a2);
  v10 = *(_QWORD *)(a1 + 16LL * ClockTimerEarliestDeadline + 38296);
  if ( *(_DWORD *)(a1 + 16LL * ClockTimerEarliestDeadline + 38304) >= v11 )
    v7 = *(unsigned int *)(a1 + 16LL * ClockTimerEarliestDeadline + 38304);
  if ( v8 > v10 + v7 )
  {
    v12 = v6 <= v8;
  }
  else
  {
    if ( v6 < v10 )
      return 1;
    v12 = v6 <= v10 + v7;
  }
  if ( !v12 )
    return 1;
  if ( (unsigned int)dword_140E070B8 > 5 )
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
    v35 = (__int64 *)&v20;
    v38 = &v21;
    v41 = &v17;
    v44 = &v15;
    v24 = 8;
    v30 = 8;
    v16 = ClockTimerEarliestDeadline;
    v20 = v10;
    v36 = 8;
    v21 = v10 + v7;
    v39 = 8;
    v42 = 8;
    v18 = InterruptTimePrecise;
    v27 = 1;
    v19 = v8;
    v33 = 4;
    v17 = v6;
    v15 = a3;
    v45 = 1;
    tlgWriteTransfer_EtwWriteTransfer(&dword_140E070B8, &dword_1400477AC, 0LL, 0LL, 10, v22);
  }
  return 0;
}
