/*
 * XREFs of sub_14002A850 @ 0x14002A850
 * Callers:
 *     sub_14002A400 @ 0x14002A400 (sub_14002A400.c)
 * Callees:
 *     sub_140010680 @ 0x140010680 (sub_140010680.c)
 */

__int64 __fastcall sub_14002A850(char *a1)
{
  __int64 v2; // rdx
  unsigned int v3; // r9d
  __int64 v4; // r8
  double v5; // xmm0_8
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 result; // rax

  sub_140010680(a1, 0, 0x98uLL);
  *((_DWORD *)a1 + 1) = dword_140019840[0] / 0x3E8u;
  v2 = 0LL;
  v3 = dword_140019868;
  while ( (unsigned int)v2 < v3 )
  {
    if ( (*((_DWORD *)&unk_14001986C + 3 * v2 + 1) & 1) != 0 )
    {
      v4 = *((unsigned int *)&unk_14001986C + 3 * v2);
      v5 = *((float *)&unk_14001986C + 3 * v2 + 2);
      if ( *((_WORD *)&unk_14001986C + 6 * v2 + 3) )
      {
        if ( *((_WORD *)&unk_14001986C + 6 * v2 + 3) == 1 )
        {
          v7 = *((unsigned int *)a1 + 2);
          if ( (_DWORD)v7 == 4 )
            goto LABEL_16;
          *(_DWORD *)&a1[4 * v7 + 12] = v4;
          *(double *)&a1[8 * v7 + 88] = v5;
          *((_DWORD *)a1 + 2) = v7 + 1;
        }
        else if ( *((_WORD *)&unk_14001986C + 6 * v2 + 3) == 2 )
        {
          v6 = *((unsigned int *)a1 + 7);
          if ( (_DWORD)v6 == 4 )
            goto LABEL_16;
          *(_DWORD *)&a1[4 * v6 + 32] = v4;
          *(double *)&a1[8 * v6 + 120] = v5;
          *((_DWORD *)a1 + 7) = v6 + 1;
        }
      }
      else
      {
        if ( (unsigned int)v4 >= 5 )
          goto LABEL_16;
        *(double *)&a1[8 * v4 + 48] = v5;
      }
    }
    v2 = (unsigned int)(v2 + 1);
  }
  if ( *((_DWORD *)a1 + 2) )
    *(_DWORD *)a1 |= 1u;
LABEL_16:
  result = *(unsigned int *)a1;
  if ( (result & 1) == 0 )
  {
    result = sub_140010680(a1, 0, 0x98uLL);
    *((_DWORD *)a1 + 2) = 1;
    *((_DWORD *)a1 + 3) = 1593;
  }
  return result;
}
