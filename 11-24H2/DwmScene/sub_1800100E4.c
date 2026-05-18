/*
 * XREFs of sub_1800100E4 @ 0x1800100E4
 * Callers:
 *     sub_18000D3D4 @ 0x18000D3D4 (sub_18000D3D4.c)
 *     sub_18000D448 @ 0x18000D448 (sub_18000D448.c)
 *     sub_18000E440 @ 0x18000E440 (sub_18000E440.c)
 *     sub_180051B88 @ 0x180051B88 (sub_180051B88.c)
 *     sub_18007F278 @ 0x18007F278 (sub_18007F278.c)
 *     sub_18007F934 @ 0x18007F934 (sub_18007F934.c)
 *     sub_1800C3CF0 @ 0x1800C3CF0 (sub_1800C3CF0.c)
 *     sub_1800C5550 @ 0x1800C5550 (sub_1800C5550.c)
 *     sub_1800C5A60 @ 0x1800C5A60 (sub_1800C5A60.c)
 *     sub_1800C6098 @ 0x1800C6098 (sub_1800C6098.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x18000C3BA (_o__invalid_parameter_noinfo.c)
 *     memset @ 0x18000C4E8 (memset.c)
 *     memcpy @ 0x18000CE31 (memcpy.c)
 */

__int64 __fastcall sub_1800100E4(void *a1, size_t a2, const void *a3, size_t a4)
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
