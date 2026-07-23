/*
 * XREFs of KeFindNextSetRightGroupMask @ 0x140480E28
 * Callers:
 *     KeSelectGroupFromNode @ 0x140480DC0 (KeSelectGroupFromNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFindNextSetRightGroupMask(__int64 a1, unsigned __int16 a2, _WORD *a3)
{
  __int64 v3; // rbx
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // r9
  __int64 result; // rax
  _QWORD *v8; // rdx
  __int64 i; // r8
  unsigned __int64 v10; // rdx
  __int64 v11; // r9

  v3 = a2;
  v5 = a2 & (unsigned __int64)-(__int64)(a2 < 0x20uLL);
  v6 = 31LL;
  while ( 1 )
  {
    result = v6 - v5 + 1;
    if ( v6 - v5 == -1LL )
      goto LABEL_6;
    v8 = (_QWORD *)(a1 + 8 * (v5 >> 6));
    result = ~*v8;
    for ( i = result | ((1LL << (v5 & 0x3F)) - 1); i == -1; i = ~*v8 )
    {
      if ( (unsigned __int64)++v8 > a1 + 8 * (v6 >> 6) )
        goto LABEL_6;
    }
    _BitScanForward64((unsigned __int64 *)&result, ~i);
    v10 = result + (((__int64)v8 - a1) >> 3 << 6);
    if ( v10 > v6 )
    {
LABEL_6:
      LOWORD(v10) = -1;
      goto LABEL_7;
    }
    if ( v10 != -1LL )
      break;
LABEL_7:
    if ( !v5 )
      break;
    v11 = v3 + 1;
    if ( (unsigned __int64)(v3 + 1) > 0x20 )
      v11 = 32LL;
    v6 = v11 - 1;
    v5 = 0LL;
  }
  *a3 = v10;
  return result;
}
