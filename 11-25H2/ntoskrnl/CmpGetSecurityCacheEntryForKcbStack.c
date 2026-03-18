/*
 * XREFs of CmpGetSecurityCacheEntryForKcbStack @ 0x14086FF30
 * Callers:
 *     CmpCheckKcbStackAccess @ 0x1406EC908 (CmpCheckKcbStackAccess.c)
 *     CmSetValueKey @ 0x140869F98 (CmSetValueKey.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x14086E650 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpCheckKeyOwnerForPca @ 0x14086E770 (CmpCheckKeyOwnerForPca.c)
 *     CmpNotifyTriggerCheck @ 0x14086FE0C (CmpNotifyTriggerCheck.c)
 *     CmpCreateChild @ 0x1408884FC (CmpCreateChild.c)
 *     CmpSnapshotKcbStackSecurity @ 0x140AB7F68 (CmpSnapshotKcbStackSecurity.c)
 * Callees:
 *     CmpTransUowIsEqual @ 0x1406EF5FC (CmpTransUowIsEqual.c)
 *     CmEqualTrans @ 0x140871010 (CmEqualTrans.c)
 */

__int64 __fastcall CmpGetSecurityCacheEntryForKcbStack(__int64 a1, __int64 a2, _WORD *a3)
{
  unsigned __int16 v3; // di
  __int64 i; // rsi
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  bool IsEqual; // al
  __int64 v17; // rdx

  v3 = *(_WORD *)(a1 + 2);
  for ( i = 0LL; (v3 & 0x8000u) == 0; --v3 )
  {
    if ( v3 >= 2u )
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * v3 - 16);
    else
      v8 = *(_QWORD *)(a1 + 8LL * v3 + 8);
    if ( *(_WORD *)(v8 + 66) && *(_BYTE *)(v8 + 65) == 1 )
      break;
    if ( *(_DWORD *)(v8 + 40) != -1 && (!*(_QWORD *)(v8 + 240) || (unsigned __int8)CmEqualTrans(a2)) )
    {
      i = v8;
      if ( *(_WORD *)(v8 + 66) )
      {
        if ( *(_BYTE *)(v8 + 65) )
          break;
      }
    }
  }
  if ( a3 )
    *a3 = *(_WORD *)(i + 66);
  v9 = *(_QWORD *)(i + 88);
  if ( a2 )
  {
    v11 = i + 208;
    v12 = *(_QWORD *)(v11 + 8);
    if ( v11 != v12 )
      goto LABEL_26;
LABEL_18:
    v13 = 0LL;
    while ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 56);
      if ( v14 )
      {
        if ( v14 == a2
          || ((v15 = *(_QWORD *)(v14 + 56)) == 0 || (v17 = *(_QWORD *)(a2 + 56)) == 0
            ? (IsEqual = CmpTransUowIsEqual((const void *)(v14 + 88), (const void *)(a2 + 88)))
            : (IsEqual = v15 == v17),
              IsEqual) )
        {
          if ( *(_DWORD *)(v13 + 68) == 9 )
            return *(_QWORD *)(v13 + 88);
        }
      }
      if ( !v12 )
        v12 = *(_QWORD *)(v11 + 8);
      if ( v11 == v12 )
        goto LABEL_18;
LABEL_26:
      v13 = v12 - 32;
      v12 = *(_QWORD *)(v12 + 8);
    }
  }
  return v9;
}
