/*
 * XREFs of sub_14002CE38 @ 0x14002CE38
 * Callers:
 *     sub_14002D0A0 @ 0x14002D0A0 (sub_14002D0A0.c)
 *     sub_140049798 @ 0x140049798 (sub_140049798.c)
 * Callees:
 *     sub_140008FEC @ 0x140008FEC (sub_140008FEC.c)
 *     sub_14002CEF0 @ 0x14002CEF0 (sub_14002CEF0.c)
 */

_QWORD *sub_14002CE38()
{
  int **v0; // rdx
  int v1; // r9d
  int v2; // r10d
  int v3; // r8d
  int v4; // ecx
  int **i; // rcx
  _QWORD *result; // rax
  _QWORD *v7; // rbx

  v0 = (int **)sub_140008FEC(&off_1400179C8);
  if ( v0 )
  {
    v1 = 0;
    v2 = 384;
    do
    {
      v3 = **v0;
      if ( (v3 & 0x200) != 0 )
      {
        v4 = 0;
        if ( (v3 & v2) != 0 )
          LOBYTE(v4) = (v2 & v3) == 256;
        else
          LOBYTE(v4) = *((_BYTE *)v0 + 31) != 0;
        _InterlockedXor(*v0, v1 & 0xFFFFFFBF | (v4 << 6) ^ **v0 & 0x40);
      }
      v0 = (int **)sub_140008FEC(v0 + 7);
    }
    while ( v0 );
  }
  for ( i = &off_1400179C8; ; i = (int **)(v7 + 7) )
  {
    result = sub_140008FEC(i);
    v7 = result;
    if ( !result )
      break;
    sub_14002CEF0(*result, result);
  }
  return result;
}
