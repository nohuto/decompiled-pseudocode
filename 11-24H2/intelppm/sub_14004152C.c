/*
 * XREFs of sub_14004152C @ 0x14004152C
 * Callers:
 *     sub_140042830 @ 0x140042830 (sub_140042830.c)
 * Callees:
 *     sub_14002BDAC @ 0x14002BDAC (sub_14002BDAC.c)
 */

void sub_14004152C()
{
  unsigned int *v0; // rdi
  unsigned int v1; // ebx

  v0 = (unsigned int *)qword_140019820;
  v1 = 0;
  if ( qword_140019820 && *(_DWORD *)qword_140019820 )
  {
    do
    {
      sub_14002BDAC((__int64)&v0[8 * v1 + 2 + 2 * v1]);
      ++v1;
    }
    while ( v1 < *v0 );
  }
}
