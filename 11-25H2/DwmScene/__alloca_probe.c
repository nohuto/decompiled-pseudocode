/*
 * XREFs of __alloca_probe @ 0x1800D4DE0
 * Callers:
 *     sub_18000D038 @ 0x18000D038 (sub_18000D038.c)
 *     sub_18000D0E4 @ 0x18000D0E4 (sub_18000D0E4.c)
 *     sub_18000D1D0 @ 0x18000D1D0 (sub_18000D1D0.c)
 *     sub_18000FD70 @ 0x18000FD70 (sub_18000FD70.c)
 *     sub_18001C7D8 @ 0x18001C7D8 (sub_18001C7D8.c)
 *     sub_180038964 @ 0x180038964 (sub_180038964.c)
 *     sub_18005E49C @ 0x18005E49C (sub_18005E49C.c)
 *     sub_18008AAC0 @ 0x18008AAC0 (sub_18008AAC0.c)
 *     sub_18008AB8C @ 0x18008AB8C (sub_18008AB8C.c)
 *     sub_18009C4C8 @ 0x18009C4C8 (sub_18009C4C8.c)
 *     sub_1800A5E98 @ 0x1800A5E98 (sub_1800A5E98.c)
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
