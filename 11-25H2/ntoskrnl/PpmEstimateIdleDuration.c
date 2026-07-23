/*
 * XREFs of PpmEstimateIdleDuration @ 0x1404B28E4
 * Callers:
 *     PpmIdleSelectStates @ 0x1404B1F28 (PpmIdleSelectStates.c)
 *     PpmComputeIdleDurationHint @ 0x1404B2830 (PpmComputeIdleDurationHint.c)
 * Callees:
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x140405FA0 (KeEnumerateNextProcessor.c)
 *     PpmGetIdleConstrainedMask @ 0x1404B1924 (PpmGetIdleConstrainedMask.c)
 *     KeEstimateClockTickDuration @ 0x1404B2C48 (KeEstimateClockTickDuration.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
        int *a9)
{
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rax
  unsigned __int64 v16; // rdi
  int v17; // edx
  int v18; // eax
  unsigned __int64 v19; // rsi
  int v20; // ecx
  ULONG v21; // eax
  unsigned __int64 v22; // rbx
  __int64 Prcb; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 *result; // rax
  unsigned int v26; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 *v28[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v29; // [rsp+60h] [rbp-A0h]
  int v30; // [rsp+62h] [rbp-9Eh]
  __int16 v31; // [rsp+66h] [rbp-9Ah]
  unsigned __int64 *v32; // [rsp+68h] [rbp-98h]
  unsigned __int64 *v33; // [rsp+70h] [rbp-90h]
  __int64 v34; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v35[33]; // [rsp+88h] [rbp-78h] BYREF

  v33 = a6;
  v32 = a7;
  v30 = 0;
  v31 = 0;
  memset_0(v35, 0, 0x100uLL);
  v15 = *(_QWORD *)(a1 + 34880);
  v16 = -1LL;
  v27 = 0LL;
  v26 = 0;
  LOBYTE(v17) = *(_BYTE *)(v15 + 716);
  v18 = 0;
  *a9 = 0;
  if ( *(_BYTE *)(a1 + 33) )
  {
    v18 = 8;
    *a9 = 8;
  }
  if ( a2 )
    *a9 = v18 | 4;
  LOBYTE(v14) = a3;
  LOBYTE(v13) = a2 != 0;
  KeEstimateClockTickDuration(a1, v17, v13, v14, a2 == 2, a4, (__int64)&v27, a8);
  v19 = v27;
  if ( v27 >= a5 )
    v19 = a5;
  v27 = v19;
  if ( !a2 )
  {
    v20 = *(_DWORD *)(a1 + 11684);
    if ( v20 )
    {
      v21 = KeMaximumIncrement / (v20 + 1);
      if ( !v21 )
        v21 = 1;
      v16 = v21;
    }
  }
  if ( v19 <= v16 )
    v16 = v19;
  else
    *a9 |= 1u;
  v34 = 2097153LL;
  memset_0(v35, 0, 0x100uLL);
  if ( PpmIdleDurationExpirationTimeout )
  {
    if ( *(_BYTE *)(a1 + 33) )
    {
      if ( PpmGetIdleConstrainedMask((unsigned __int16 *)&v34) )
      {
        v28[1] = (unsigned __int16 *)v35[0];
        v29 = 0;
        v28[0] = (unsigned __int16 *)&v34;
        v22 = 0LL;
        if ( !(unsigned int)KeEnumerateNextProcessor(&v26, v28) )
        {
          do
          {
            Prcb = KeGetPrcb(v26);
            v24 = *(_QWORD *)(Prcb + 34928);
            if ( v24 != -1LL && v24 > v22 )
              v22 = *(_QWORD *)(Prcb + 34928);
          }
          while ( !(unsigned int)KeEnumerateNextProcessor(&v26, v28) );
          if ( v22 && a4 + v27 > v22 )
          {
            *a9 |= 0x2000u;
            if ( v22 > a4 )
              v19 = (unsigned int)(v22 - a4);
            else
              v19 = 1LL;
            if ( v19 < v16 )
              v16 = v19;
          }
        }
      }
    }
  }
  *v32 = v19;
  result = v33;
  *v33 = v16;
  return result;
}
