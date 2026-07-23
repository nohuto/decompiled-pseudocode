/*
 * XREFs of PcReadCounter @ 0x140557CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PcReadCounter(__int64 *a1)
{
  unsigned __int8 v1; // al
  __int64 v3; // rcx
  __int16 v4; // dx
  bool v5; // cf
  int v6; // eax
  unsigned __int16 v7; // bx
  int v8; // r9d
  unsigned __int8 v9; // al
  int v10; // r8d
  unsigned __int8 v11; // al
  int v12; // ecx
  unsigned __int16 v13; // bx
  int v14; // r9d
  unsigned __int8 v15; // al
  int v16; // r8d
  unsigned __int8 v17; // al
  int v18; // ecx
  unsigned int v19; // edx
  __int64 result; // rax

  v1 = *((_BYTE *)a1 + 16);
  v3 = *a1;
  v4 = v1 & 3;
  v5 = v1 < 4u;
  v6 = 16776960;
  if ( v5 )
  {
    v7 = v3 + 1 + 2 * v4;
    do
    {
      v8 = v6 & 0xFFFF00;
      __outbyte(*a1 + 12, 0);
      v9 = __inbyte(v7);
      v10 = v9;
      v11 = __inbyte(v7);
      v12 = v11 << 8;
      v6 = v12 | v10;
    }
    while ( v12 != v8 );
  }
  else
  {
    v13 = v3 + 2 + 4 * v4;
    do
    {
      v14 = v6 & 0xFFFF00;
      __outbyte(*a1 + 24, 0);
      v15 = __inbyte(v13);
      v16 = v15;
      v17 = __inbyte(v13);
      v18 = v17 << 8;
      v6 = v18 | v16;
    }
    while ( v18 != v14 );
  }
  v19 = (unsigned __int16)(v6 + 1);
  result = 2 * v19;
  if ( !*((_BYTE *)a1 + 21) )
    return v19;
  return result;
}
