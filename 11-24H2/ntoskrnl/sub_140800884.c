/*
 * XREFs of sub_140800884 @ 0x140800884
 * Callers:
 *     ntoskrnl_20 @ 0x140972DB0 (ntoskrnl_20.c)
 * Callees:
 *     sub_1408008D0 @ 0x1408008D0 (sub_1408008D0.c)
 */

__int64 __fastcall sub_140800884(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_1408008D0(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
