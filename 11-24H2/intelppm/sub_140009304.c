/*
 * XREFs of sub_140009304 @ 0x140009304
 * Callers:
 *     sub_140009190 @ 0x140009190 (sub_140009190.c)
 *     sub_14002D524 @ 0x14002D524 (sub_14002D524.c)
 * Callees:
 *     sub_140002014 @ 0x140002014 (sub_140002014.c)
 *     sub_140006020 @ 0x140006020 (sub_140006020.c)
 *     sub_140008ECC @ 0x140008ECC (sub_140008ECC.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_140009304(__int64 a1, unsigned int *a2)
{
  unsigned int i; // ebx
  char *v5; // rbp
  __int64 v6; // r8
  __int64 v7; // rax

  if ( _bittest64((const signed __int64 *)(a1 + 280), 0x32u) )
  {
    for ( i = 0; i < *a2; ++i )
    {
      v5 = (char *)&a2[26 * i];
      if ( sub_140006020((__int64)(v5 + 40)) )
      {
        v7 = sub_140002014(a1, (__int64)a2 + v6 + 16);
        sub_140008ECC(a1, v5 + 40, v7);
      }
    }
    if ( qword_1400193C8 )
      qword_1400193C8();
  }
}
