/*
 * XREFs of PpmEstimateIdleDuration @ 0x1404BC1F4
 * Callers:
 *     PpmComputeIdleDurationHint @ 0x1404BC138 (PpmComputeIdleDurationHint.c)
 *     PpmIdleSelectStates @ 0x1404E1498 (PpmIdleSelectStates.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     PpmGetIdleConstrainedMask @ 0x1404AD2F4 (PpmGetIdleConstrainedMask.c)
 *     KeEstimateClockTickDuration @ 0x1404C560C (KeEstimateClockTickDuration.c)
 *     Feature_PpmDynamicHintAdjust__private_IsEnabledNoReportingNoInline @ 0x1405CB1C0 (Feature_PpmDynamicHintAdjust__private_IsEnabledNoReportingNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

unsigned __int64 *__fastcall PpmEstimateIdleDuration(
        __int64 a1,
        int a2,
        char a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7,
        __int64 a8,
        int *a9,
        unsigned int a10)
{
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rax
  unsigned __int64 v17; // rdi
  int v18; // edx
  int v19; // eax
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rsi
  int v23; // ebx
  __int64 v24; // rcx
  ULONG v25; // eax
  unsigned __int64 v26; // r13
  int IsEnabledNoReportingNoInline; // eax
  unsigned int v28; // r9d
  unsigned int v29; // r8d
  unsigned int v30; // r9d
  int v31; // ebx
  unsigned __int64 v32; // rbx
  __int64 Prcb; // rax
  unsigned __int64 v34; // rcx
  unsigned __int64 *result; // rax
  unsigned int v36; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v37; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 *v38[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v39; // [rsp+60h] [rbp-A0h]
  int v40; // [rsp+62h] [rbp-9Eh]
  __int16 v41; // [rsp+66h] [rbp-9Ah]
  unsigned __int64 *v42; // [rsp+68h] [rbp-98h]
  unsigned __int64 *v43; // [rsp+70h] [rbp-90h]
  __int64 v44; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v45[33]; // [rsp+88h] [rbp-78h] BYREF

  v43 = a6;
  v40 = 0;
  v41 = 0;
  v42 = a7;
  memset_0(v45, 0, 0x100uLL);
  v16 = *(_QWORD *)(a1 + 34880);
  v17 = -1LL;
  v37 = 0LL;
  v36 = 0;
  LOBYTE(v18) = *(_BYTE *)(v16 + 716);
  v19 = 0;
  *a9 = 0;
  if ( *(_BYTE *)(a1 + 33) )
  {
    v19 = 8;
    *a9 = 8;
  }
  if ( a2 )
    *a9 = v19 | 4;
  LOBYTE(v15) = a3;
  LOBYTE(v14) = a2 != 0;
  KeEstimateClockTickDuration(a1, v18, v14, v15, a2 == 2, a4, (__int64)&v37, a8);
  v22 = v37;
  v23 = 1;
  if ( v37 >= a5 )
    v22 = a5;
  v37 = v22;
  if ( !a2 )
  {
    v21 = *(unsigned int *)(a1 + 11684);
    if ( (_DWORD)v21 )
    {
      v24 = (unsigned int)(v21 + 1);
      v25 = KeMaximumIncrement / (unsigned int)v24;
      if ( !(KeMaximumIncrement / (unsigned int)v24) )
        v25 = 1;
      v17 = v25;
      v26 = v25;
      IsEnabledNoReportingNoInline = Feature_PpmDynamicHintAdjust__private_IsEnabledNoReportingNoInline(
                                       v24,
                                       KeMaximumIncrement % (unsigned int)v24);
      v21 = 0LL;
      if ( IsEnabledNoReportingNoInline && PpmIdleDynamicHintAdjustEnabled )
      {
        v28 = *(_DWORD *)(a1 + 11684);
        v21 = v28 + PpmIdleMaxUnexpectedInterrupt;
        v29 = *(_DWORD *)(a1 + 34368) - *(_DWORD *)(a1 + 11680);
        if ( v29 > (unsigned int)v21 )
        {
          v23 = 4097;
          v20 = (KeMaximumIncrement - a10) % v29;
          v17 = (KeMaximumIncrement - a10) / v29;
        }
        else
        {
          if ( v29 >= v28 )
            v29 = *(_DWORD *)(a1 + 11684);
          HIDWORD(v20) = 0;
          v30 = v28 - v29 + 1;
          LODWORD(v20) = a10 % v30;
          v21 = a10 / v30;
          if ( v21 > v17 )
            v17 = (unsigned int)v21;
          v23 = v26 < a10 / v30 ? 4097 : 1;
        }
      }
    }
  }
  if ( v22 <= v17 )
  {
    v17 = v22;
  }
  else
  {
    if ( (unsigned int)Feature_PpmDynamicHintAdjust__private_IsEnabledNoReportingNoInline(v21, v20) )
      v31 = *a9 | v23;
    else
      v31 = *a9 | 1;
    *a9 = v31;
  }
  v44 = 2097153LL;
  memset_0(v45, 0, 0x100uLL);
  if ( PpmIdleDurationExpirationTimeout )
  {
    if ( *(_BYTE *)(a1 + 33) )
    {
      if ( PpmGetIdleConstrainedMask((unsigned __int16 *)&v44) )
      {
        v38[1] = (unsigned __int16 *)v45[0];
        v39 = 0;
        v38[0] = (unsigned __int16 *)&v44;
        v32 = 0LL;
        if ( !(unsigned int)KeEnumerateNextProcessor(&v36, v38) )
        {
          do
          {
            Prcb = KeGetPrcb(v36);
            v34 = *(_QWORD *)(Prcb + 34928);
            if ( v34 != -1LL && v34 > v32 )
              v32 = *(_QWORD *)(Prcb + 34928);
          }
          while ( !(unsigned int)KeEnumerateNextProcessor(&v36, v38) );
          if ( v32 && a4 + v37 > v32 )
          {
            *a9 |= 0x2000u;
            if ( v32 > a4 )
              v22 = (unsigned int)(v32 - a4);
            else
              v22 = 1LL;
            if ( v22 < v17 )
              v17 = v22;
          }
        }
      }
    }
  }
  *v42 = v22;
  result = v43;
  *v43 = v17;
  return result;
}
