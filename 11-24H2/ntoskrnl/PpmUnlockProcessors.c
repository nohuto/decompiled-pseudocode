/*
 * XREFs of PpmUnlockProcessors @ 0x140371990
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140371030 (PpmIdleExecuteTransition.c)
 *     PpmIdleSelectStates @ 0x1404E1498 (PpmIdleSelectStates.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     HalRequestIpi @ 0x140371AA0 (HalRequestIpi.c)
 *     KeRemoveProcessorAffinityEx @ 0x1403A4D10 (KeRemoveProcessorAffinityEx.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x1403D7B30 (KeInterlockedClearProcessorAffinityEx.c)
 *     PpmIdleUnlockProcessor @ 0x1405CC460 (PpmIdleUnlockProcessor.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall PpmUnlockProcessors(__int64 a1, unsigned __int16 *a2)
{
  __int64 result; // rax
  unsigned int Number; // r12d
  __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  unsigned int v8; // ecx
  unsigned __int16 i; // cx
  unsigned __int64 v10; // rdx
  unsigned int v11; // ebp
  __int64 Prcb; // rax
  __int64 v13; // r14
  __int64 v14; // [rsp+30h] [rbp-148h] BYREF
  _QWORD v15[33]; // [rsp+38h] [rbp-140h] BYREF

  memset_0(v15, 0, 0x100uLL);
  v14 = 2097153LL;
  result = (__int64)memset_0(v15, 0, 0x100uLL);
  Number = KeGetPcr()->Prcb.Number;
  LOWORD(v6) = 0;
  v7 = *((_QWORD *)a2 + 1);
LABEL_2:
  if ( a2 )
    v8 = *a2;
  else
    v8 = (unsigned __int16)v6 + 1;
  while ( 1 )
  {
    if ( v7 )
    {
      _BitScanForward64(&v10, v7);
      v7 &= ~(1LL << v10);
      v11 = *((_DWORD *)qword_140F22998 + 64 * (unsigned __int16)v6 + (unsigned __int8)v10);
      Prcb = KeGetPrcb(v11);
      v13 = *(_QWORD *)(Prcb + 34880);
      if ( (unsigned __int8)PpmIdleUnlockProcessor(Prcb + 34956) == 6 )
        KeAddProcessorAffinityEx((unsigned __int16 *)&v14, v11);
      KeInterlockedClearProcessorAffinityEx(v13 + 72, Number);
      result = KeRemoveProcessorAffinityEx(a1, v11);
      goto LABEL_2;
    }
    v6 = (unsigned __int16)(v6 + 1);
    if ( (unsigned int)v6 >= v8 )
      break;
    v7 = *(_QWORD *)&a2[4 * v6 + 4];
  }
  for ( i = 0; i < (unsigned __int16)v14; ++i )
  {
    result = i;
    if ( v15[i] )
      return HalRequestIpi(0LL, &v14);
  }
  return result;
}
