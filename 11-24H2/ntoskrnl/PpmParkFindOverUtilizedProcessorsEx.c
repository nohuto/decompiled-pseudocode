/*
 * XREFs of PpmParkFindOverUtilizedProcessorsEx @ 0x1405E0D74
 * Callers:
 *     PpmParkCalculateCoreParkingMaskEx @ 0x1405DF1A8 (PpmParkCalculateCoreParkingMaskEx.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall PpmParkFindOverUtilizedProcessorsEx(__int64 a1, unsigned int a2, unsigned __int16 *a3)
{
  size_t v6; // r8
  __int64 result; // rax
  unsigned __int16 *v8[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+32h] [rbp-16h]
  __int16 v11; // [rsp+36h] [rbp-12h]
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF

  v6 = 8LL * *a3;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  memset_0(a3 + 4, 0, v6);
  *a3 = 1;
  v8[1] = *(unsigned __int16 **)(a1 + 56);
  v9 = 0;
  v8[0] = (unsigned __int16 *)(a1 + 48);
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v12, v8);
    if ( (_DWORD)result )
      break;
    if ( *(_DWORD *)(KeGetPrcb(v12) + 35292) >= a2 )
      KeAddProcessorAffinityEx(a3, v12);
  }
  return result;
}
