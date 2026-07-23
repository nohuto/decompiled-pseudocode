/*
 * XREFs of CmpGetSecurityCacheEntryForKcbStack @ 0x14086D420
 * Callers:
 *     CmpCheckKcbStackAccess @ 0x1406F6094 (CmpCheckKcbStackAccess.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x14086C810 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpCheckKeyOwnerForPca @ 0x14086C930 (CmpCheckKeyOwnerForPca.c)
 *     CmpNotifyTriggerCheck @ 0x14086CF78 (CmpNotifyTriggerCheck.c)
 *     CmSetValueKey @ 0x14086F460 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1408713A8 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x14090B2FC (CmpCreateChild.c)
 * Callees:
 *     CmpTransUowIsEqual @ 0x1406F90AC (CmpTransUowIsEqual.c)
 */

__int64 __fastcall CmpGetSecurityCacheEntryForKcbStack(__int64 a1, __int64 a2, _WORD *a3)
{
  unsigned __int16 v3; // ax
  __int64 v4; // rdi
  unsigned __int16 v8; // si
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v13; // rax
  bool IsEqual; // al
  __int64 v15; // rbp
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  bool v20; // al
  __int64 v21; // rcx
  __int64 v22; // rdx

  v3 = *(_WORD *)(a1 + 2);
  v4 = 0LL;
  if ( (v3 & 0x8000u) == 0 )
  {
    do
    {
      v8 = v3;
      if ( v3 >= 2u )
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * v3 - 16);
      else
        v9 = *(_QWORD *)(a1 + 8LL * v3 + 8);
      if ( *(_WORD *)(v9 + 66) && *(_BYTE *)(v9 + 65) == 1 )
        break;
      if ( *(_DWORD *)(v9 + 40) != -1 )
      {
        v10 = *(_QWORD *)(v9 + 240);
        if ( !v10
          || a2
          && (a2 == v10
           || ((v13 = *(_QWORD *)(a2 + 56)) == 0 || (v21 = *(_QWORD *)(v10 + 56)) == 0
             ? (IsEqual = CmpTransUowIsEqual((const void *)(a2 + 88), (const void *)(v10 + 88)))
             : (IsEqual = v13 == v21),
               IsEqual)) )
        {
          v4 = v9;
          if ( *(_WORD *)(v9 + 66) )
          {
            if ( *(_BYTE *)(v9 + 65) )
              break;
          }
        }
      }
      v3 = v8 - 1;
    }
    while ( (__int16)(v8 - 1) >= 0 );
  }
  if ( a3 )
    *a3 = *(_WORD *)(v4 + 66);
  v11 = *(_QWORD *)(v4 + 88);
  if ( a2 )
  {
    v15 = v4 + 208;
    v16 = *(_QWORD *)(v4 + 216);
    if ( v4 + 208 != v16 )
      goto LABEL_30;
LABEL_22:
    v17 = 0LL;
    while ( v17 )
    {
      v18 = *(_QWORD *)(v17 + 56);
      if ( v18 )
      {
        if ( v18 == a2
          || ((v19 = *(_QWORD *)(v18 + 56)) == 0 || (v22 = *(_QWORD *)(a2 + 56)) == 0
            ? (v20 = CmpTransUowIsEqual((const void *)(v18 + 88), (const void *)(a2 + 88)))
            : (v20 = v19 == v22),
              v20) )
        {
          if ( *(_DWORD *)(v17 + 68) == 9 )
            return *(_QWORD *)(v17 + 88);
        }
      }
      if ( !v16 )
        v16 = *(_QWORD *)(v15 + 8);
      if ( v15 == v16 )
        goto LABEL_22;
LABEL_30:
      v17 = v16 - 32;
      v16 = *(_QWORD *)(v16 + 8);
    }
  }
  return v11;
}
