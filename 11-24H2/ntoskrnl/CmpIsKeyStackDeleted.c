/*
 * XREFs of CmpIsKeyStackDeleted @ 0x140970C00
 * Callers:
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpCreateKeyBody @ 0x14083A700 (CmpCreateKeyBody.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14087ABD0 (CmpGetSymbolicLinkTarget.c)
 *     CmpCreateChild @ 0x14090B2FC (CmpCreateChild.c)
 *     CmpPromoteKey @ 0x1409708BC (CmpPromoteKey.c)
 *     CmpEnlistKeyBody @ 0x140970AE0 (CmpEnlistKeyBody.c)
 * Callees:
 *     CmpTransUowIsEqual @ 0x1406F90AC (CmpTransUowIsEqual.c)
 *     CmListGetNextElement @ 0x140BBB940 (CmListGetNextElement.c)
 */

char __fastcall CmpIsKeyStackDeleted(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  __int64 v4; // rdx
  __int64 v6; // r9
  __int64 NextElement; // rax
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rax
  bool IsEqual; // al
  __int64 v12; // rdx
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_WORD *)(a1 + 2);
  v13 = 0LL;
  while ( 1 )
  {
    if ( v2 < 0 )
      return 1;
    v4 = v2 >= 2 ? *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * v2 - 16) : *(_QWORD *)(a1 + 8LL * v2 + 8);
    if ( *(_WORD *)(v4 + 66) && *(_BYTE *)(v4 + 65) == 1 )
      return 1;
    if ( *(_DWORD *)(v4 + 40) != -1 )
      break;
    --v2;
  }
  if ( a2 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    while ( 1 )
    {
      NextElement = CmListGetNextElement(v6 + 208, &v13, 32LL);
      if ( !NextElement )
        break;
      if ( *(_DWORD *)(NextElement + 68) == 2 )
      {
        v9 = *(_QWORD *)(NextElement + 56);
        if ( !v9 )
          return 0;
        if ( v9 != v8 )
        {
          v10 = *(_QWORD *)(v9 + 56);
          if ( v10 && (v12 = *(_QWORD *)(v8 + 56)) != 0 )
            IsEqual = v10 == v12;
          else
            IsEqual = CmpTransUowIsEqual((const void *)(v9 + 88), (const void *)(v8 + 88));
          if ( !IsEqual )
            return 0;
        }
        return 1;
      }
    }
  }
  return 0;
}
