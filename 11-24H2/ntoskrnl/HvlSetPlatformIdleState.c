/*
 * XREFs of HvlSetPlatformIdleState @ 0x140586A70
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140371030 (PpmIdleExecuteTransition.c)
 * Callees:
 *     HvlGetLpIndexFromProcessorIndex @ 0x140440D30 (HvlGetLpIndexFromProcessorIndex.c)
 *     HvlpSetPowerProperty @ 0x1404B88E0 (HvlpSetPowerProperty.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HvlSetPlatformIdleState(int a1)
{
  unsigned int Number; // ecx
  __int128 v4; // [rsp+20h] [rbp-228h] BYREF
  int v5; // [rsp+30h] [rbp-218h]

  DWORD1(v4) = 0;
  memset_0(&v4, 0, 0x214uLL);
  Number = KeGetPcr()->Prcb.Number;
  LODWORD(v4) = 3;
  DWORD2(v4) = HvlGetLpIndexFromProcessorIndex(Number);
  v5 = a1;
  return HvlpSetPowerProperty(&v4);
}
