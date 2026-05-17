/*
 * XREFs of RtlPrefixString @ 0x1800DEAD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x1800708F0 (RtlUpperChar.c)
 *     memcmp @ 0x1801676D0 (memcmp.c)
 */

bool __fastcall RtlPrefixString(unsigned __int16 *a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  _BYTE *v4; // rbx
  _BYTE *v5; // rsi
  _BYTE *v6; // r14
  char v8; // di

  v3 = *a1;
  v4 = (_BYTE *)*((_QWORD *)a1 + 1);
  v5 = *(_BYTE **)(a2 + 8);
  if ( *(_WORD *)a2 < (unsigned __int16)v3 )
    return 0;
  v6 = &v4[v3];
  if ( !a3 )
    return memcmp(*((const void **)a1 + 1), *(const void **)(a2 + 8), *a1) == 0;
  while ( v4 < v6 )
  {
    if ( *v4 != *v5 )
    {
      v8 = RtlUpperChar();
      if ( RtlUpperChar() != v8 )
        return 0;
    }
    ++v4;
    ++v5;
  }
  return 1;
}
