/*
 * XREFs of sub_140002C60 @ 0x140002C60
 * Callers:
 *     sub_140002BB0 @ 0x140002BB0 (sub_140002BB0.c)
 *     sub_1400468E0 @ 0x1400468E0 (sub_1400468E0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140002C60(unsigned __int64 *a1, unsigned int a2, int a3, char a4)
{
  __int64 v4; // r8
  unsigned __int64 v5; // rax

  if ( a3 == 64 )
    v4 = -1LL;
  else
    v4 = ((1LL << a3) - 1) << a4;
  if ( a1 )
    v5 = *a1;
  else
    v5 = __readmsr(a2);
  return (v4 & v5) >> a4;
}
