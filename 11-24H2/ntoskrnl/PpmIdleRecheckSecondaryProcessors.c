/*
 * XREFs of PpmIdleRecheckSecondaryProcessors @ 0x1405CC234
 * Callers:
 *     PpmIdleSelectStates @ 0x1404E1498 (PpmIdleSelectStates.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 */

char __fastcall PpmIdleRecheckSecondaryProcessors(__int64 a1)
{
  char v1; // bl
  struct _KPRCB *Prcb; // rax
  unsigned int AsLong_high; // eax
  unsigned __int16 *v5[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+32h] [rbp-16h]
  __int16 v8; // [rsp+36h] [rbp-12h]
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0;
  v8 = 0;
  v6 = 0;
  v9 = 0;
  v1 = 1;
  v5[1] = *(unsigned __int16 **)(a1 + 8);
  v5[0] = (unsigned __int16 *)a1;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v9, v5) )
  {
    Prcb = (struct _KPRCB *)KeGetPrcb(v9);
    if ( Prcb != KeGetCurrentPrcb() )
    {
      AsLong_high = HIBYTE(Prcb->PowerState.Synchronization.AsLong);
      if ( AsLong_high != 3 && AsLong_high - 4 > 1 )
        return 0;
    }
  }
  return v1;
}
