/*
 * XREFs of CmpGetSecurityDescriptorForKcbStack @ 0x140870ED0
 * Callers:
 *     CmpCreateTombstone @ 0x14065C944 (CmpCreateTombstone.c)
 * Callees:
 *     CmpTransUowIsEqual @ 0x1406EF5FC (CmpTransUowIsEqual.c)
 *     CmEqualTrans @ 0x140871010 (CmEqualTrans.c)
 */

__int64 __fastcall CmpGetSecurityDescriptorForKcbStack(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  __int64 v3; // rsi
  unsigned __int16 v6; // di
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rax
  bool IsEqual; // al
  __int64 v16; // rdx

  v2 = *(_WORD *)(a1 + 2);
  v3 = 0LL;
  if ( (v2 & 0x8000u) == 0 )
  {
    do
    {
      v6 = v2;
      if ( v2 >= 2u )
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * v2 - 16);
      else
        v7 = *(_QWORD *)(a1 + 8LL * v2 + 8);
      if ( *(_WORD *)(v7 + 66) && *(_BYTE *)(v7 + 65) == 1 )
        break;
      if ( *(_DWORD *)(v7 + 40) != -1 && (!*(_QWORD *)(v7 + 240) || (unsigned __int8)CmEqualTrans(a2)) )
      {
        v3 = v7;
        if ( *(_WORD *)(v7 + 66) )
        {
          if ( *(_BYTE *)(v7 + 65) )
            break;
        }
      }
      v2 = v6 - 1;
    }
    while ( (__int16)(v6 - 1) >= 0 );
  }
  v8 = *(_QWORD *)(v3 + 88);
  if ( a2 )
  {
    v10 = v3 + 208;
    v11 = *(_QWORD *)(v3 + 216);
    if ( v3 + 208 != v11 )
      goto LABEL_25;
LABEL_17:
    v12 = 0LL;
    while ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 56);
      if ( v13 )
      {
        if ( v13 == a2
          || ((v14 = *(_QWORD *)(v13 + 56)) == 0 || (v16 = *(_QWORD *)(a2 + 56)) == 0
            ? (IsEqual = CmpTransUowIsEqual((const void *)(v13 + 88), (const void *)(a2 + 88)))
            : (IsEqual = v14 == v16),
              IsEqual) )
        {
          if ( *(_DWORD *)(v12 + 68) == 9 )
            return *(_QWORD *)(v12 + 88) + 32LL;
        }
      }
      if ( !v11 )
        v11 = *(_QWORD *)(v10 + 8);
      if ( v10 == v11 )
        goto LABEL_17;
LABEL_25:
      v12 = v11 - 32;
      v11 = *(_QWORD *)(v11 + 8);
    }
  }
  return v8 + 32;
}
