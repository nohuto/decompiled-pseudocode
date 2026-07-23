/*
 * XREFs of sub_1407B9AF8 @ 0x1407B9AF8
 * Callers:
 *     sub_1407B91F4 @ 0x1407B91F4 (sub_1407B91F4.c)
 *     sub_14095B190 @ 0x14095B190 (sub_14095B190.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407B9AF8(unsigned int **a1)
{
  unsigned int *v1; // rax
  unsigned int v2; // ecx
  unsigned int v3; // r8d
  unsigned int v4; // edx
  unsigned int v5; // r10d
  unsigned int v6; // r9d

  v1 = *a1;
  v2 = 0;
  if ( v1 )
  {
    if ( v1[20481] != 3 )
      return (unsigned int)-1073741762;
    v3 = v1[20480];
    if ( v3 < 0x18 )
      return (unsigned int)-1073741762;
    v4 = *v1;
    if ( v3 < *v1 )
      return (unsigned int)-1073741762;
    if ( v4 < 0x18 )
      return (unsigned int)-1073741762;
    v5 = v1[1];
    if ( v3 < v5 )
      return (unsigned int)-1073741762;
    if ( v4 < v5 )
      return (unsigned int)-1073741762;
    v6 = v1[2];
    if ( v3 < v6 || v4 < v6 || v6 + v5 > v4 )
      return (unsigned int)-1073741762;
  }
  return v2;
}
