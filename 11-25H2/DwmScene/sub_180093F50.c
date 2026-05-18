/*
 * XREFs of sub_180093F50 @ 0x180093F50
 * Callers:
 *     sub_180094AD0 @ 0x180094AD0 (sub_180094AD0.c)
 * Callees:
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180093F50(__int64 a1, __int64 a2)
{
  char v4; // cl
  unsigned int v5; // esi
  _QWORD *v6; // rdi
  __int64 *v7; // rdx
  __int64 result; // rax

  v4 = 0;
  v5 = 0;
  v6 = (_QWORD *)(a1 + 8);
  do
  {
    if ( *(_BYTE *)(a1 + 440) || v6[16] != *v6 )
    {
      sub_18001244C((__int64 *)(16LL * v5 + a1 + 136), (_QWORD *)(16LL * v5 + a1 + 8));
      v4 = 1;
    }
    ++v5;
    v6 += 2;
  }
  while ( v5 < 8 );
  v7 = (__int64 *)(a1 + 392);
  if ( *(_BYTE *)(a1 + 440) || (result = *v7, *(_QWORD *)(a1 + 408) != *v7) )
  {
    sub_18001244C((__int64 *)(a1 + 408), v7);
LABEL_11:
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 176LL))(a2, a1 + 136, a1 + 408);
    goto LABEL_12;
  }
  if ( v4 )
    goto LABEL_11;
LABEL_12:
  *(_BYTE *)(a1 + 440) = 0;
  return result;
}
