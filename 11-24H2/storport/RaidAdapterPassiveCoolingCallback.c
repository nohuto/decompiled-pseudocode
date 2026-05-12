/*
 * XREFs of RaidAdapterPassiveCoolingCallback @ 0x140077860
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterSetMaxOperationalPower @ 0x140077AE8 (RaidAdapterSetMaxOperationalPower.c)
 */

__int64 __fastcall RaidAdapterPassiveCoolingCallback(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  LOBYTE(a3) = 1;
  return RaidAdapterSetMaxOperationalPower(a1, &v4, a3);
}
