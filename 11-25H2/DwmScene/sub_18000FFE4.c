/*
 * XREFs of sub_18000FFE4 @ 0x18000FFE4
 * Callers:
 *     sub_18000D2EC @ 0x18000D2EC (sub_18000D2EC.c)
 *     sub_18000D360 @ 0x18000D360 (sub_18000D360.c)
 *     sub_18000E340 @ 0x18000E340 (sub_18000E340.c)
 *     sub_180051A28 @ 0x180051A28 (sub_180051A28.c)
 *     sub_18007F118 @ 0x18007F118 (sub_18007F118.c)
 *     sub_18007F7D4 @ 0x18007F7D4 (sub_18007F7D4.c)
 *     sub_1800C3B90 @ 0x1800C3B90 (sub_1800C3B90.c)
 *     sub_1800C53F0 @ 0x1800C53F0 (sub_1800C53F0.c)
 *     sub_1800C5900 @ 0x1800C5900 (sub_1800C5900.c)
 *     sub_1800C5F38 @ 0x1800C5F38 (sub_1800C5F38.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x18000BF5A (_o__invalid_parameter_noinfo.c)
 *     memset @ 0x18000C088 (memset.c)
 *     memcpy @ 0x18000CD49 (memcpy.c)
 */

__int64 __fastcall sub_18000FFE4(void *a1, size_t a2, const void *a3, size_t a4)
{
  unsigned int *v8; // rax
  unsigned int v9; // ebx

  if ( !a4 )
    return 0LL;
  if ( !a1 )
    goto LABEL_4;
  if ( a3 && a2 >= a4 )
  {
    memcpy(a1, a3, a4);
    return 0LL;
  }
  memset(a1, 0, a2);
  if ( !a3 )
  {
LABEL_4:
    v8 = (unsigned int *)o__errno();
    v9 = 22;
LABEL_5:
    *v8 = v9;
    o__invalid_parameter_noinfo();
    return v9;
  }
  if ( a2 < a4 )
  {
    v8 = (unsigned int *)o__errno();
    v9 = 34;
    goto LABEL_5;
  }
  return 22LL;
}
