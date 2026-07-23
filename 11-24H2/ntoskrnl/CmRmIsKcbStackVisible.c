/*
 * XREFs of CmRmIsKcbStackVisible @ 0x140990820
 * Callers:
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 * Callees:
 *     CmpTransUowIsEqual @ 0x1406F90AC (CmpTransUowIsEqual.c)
 */

char __fastcall CmRmIsKcbStackVisible(__int64 a1, __int64 a2)
{
  __int16 i; // r8
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v8; // rax
  bool IsEqual; // al
  __int64 v10; // rcx

  for ( i = *(_WORD *)(a1 + 2); ; --i )
  {
    if ( i < 0 )
      return 1;
    v5 = i >= 2 ? *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * i - 16) : *(_QWORD *)(a1 + 8LL * i + 8);
    if ( *(_DWORD *)(v5 + 40) != -1 )
      break;
  }
  v6 = *(_QWORD *)(v5 + 240);
  if ( !v6 )
    return 1;
  if ( a2 )
  {
    if ( a2 == v6 )
      return 1;
    v8 = *(_QWORD *)(a2 + 56);
    if ( v8 && (v10 = *(_QWORD *)(v6 + 56)) != 0 )
      IsEqual = v8 == v10;
    else
      IsEqual = CmpTransUowIsEqual((const void *)(a2 + 88), (const void *)(v6 + 88));
    if ( IsEqual )
      return 1;
  }
  return 0;
}
