/*
 * XREFs of __alloca_probe @ 0x1800D4F40
 * Callers:
 *     sub_18000D120 @ 0x18000D120 (sub_18000D120.c)
 *     sub_18000D1CC @ 0x18000D1CC (sub_18000D1CC.c)
 *     sub_18000D2B8 @ 0x18000D2B8 (sub_18000D2B8.c)
 *     sub_18000FE70 @ 0x18000FE70 (sub_18000FE70.c)
 *     sub_18001C938 @ 0x18001C938 (sub_18001C938.c)
 *     sub_180038AC4 @ 0x180038AC4 (sub_180038AC4.c)
 *     sub_18005E5FC @ 0x18005E5FC (sub_18005E5FC.c)
 *     sub_18008AC20 @ 0x18008AC20 (sub_18008AC20.c)
 *     sub_18008ACEC @ 0x18008ACEC (sub_18008ACEC.c)
 *     sub_18009C628 @ 0x18009C628 (sub_18009C628.c)
 *     sub_1800A5FF8 @ 0x1800A5FF8 (sub_1800A5FF8.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall _alloca_probe()
{
  unsigned __int64 result; // rax
  char *v1; // r10
  char *StackLimit; // r11
  char v3; // [rsp+18h] [rbp+8h] BYREF

  v1 = &v3 - result;
  if ( (unsigned __int64)&v3 < result )
    v1 = 0LL;
  StackLimit = (char *)NtCurrentTeb()->NtTib.StackLimit;
  if ( v1 < StackLimit )
  {
    LOWORD(v1) = (unsigned __int16)v1 & 0xF000;
    do
    {
      StackLimit -= 4096;
      *StackLimit = 0;
    }
    while ( v1 != StackLimit );
  }
  return result;
}
