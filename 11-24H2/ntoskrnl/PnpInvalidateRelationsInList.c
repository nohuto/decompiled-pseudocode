/*
 * XREFs of PnpInvalidateRelationsInList @ 0x1409BCC04
 * Callers:
 *     PnpProcessCompletedEject @ 0x140721780 (PnpProcessCompletedEject.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1409BBF7C (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x140467508 (PnpRequestDeviceAction.c)
 *     PipClearDevNodeFlags @ 0x1408B8F2C (PipClearDevNodeFlags.c)
 *     IopFreeRelationList @ 0x1409BAF04 (IopFreeRelationList.c)
 *     IopAllocateRelationList @ 0x1409BBBBC (IopAllocateRelationList.c)
 *     IopAddRelationToList @ 0x140A54B0C (IopAddRelationToList.c)
 *     IopSetRelationsTag @ 0x140A83EAC (IopSetRelationsTag.c)
 */

__int64 __fastcall PnpInvalidateRelationsInList(_QWORD *a1, unsigned int a2, char a3, char a4)
{
  void **RelationList; // rsi
  _DWORD *v10; // rdx
  unsigned int i; // r8d
  unsigned int v12; // ebp
  _DWORD *v13; // rdx
  _QWORD *v14; // rbx
  __int64 v15; // r8
  int v16; // eax
  char v17; // cl
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rbx
  unsigned int j; // ebx
  _DWORD *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // eax
  unsigned int v26; // edx

  RelationList = (void **)IopAllocateRelationList(a2);
  if ( !RelationList )
    return 3221225626LL;
  v10 = (_DWORD *)*a1;
  for ( i = 0; i < *(_DWORD *)*a1; v10 = (_DWORD *)*a1 )
  {
    v24 = i++;
    v10[6 * v24 + 8] &= ~1u;
  }
  v10[2] = 0;
  v12 = 0;
LABEL_5:
  while ( 2 )
  {
    v13 = (_DWORD *)*a1;
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0;
    if ( v12 < *(_DWORD *)*a1 )
    {
      if ( v13 )
      {
        v14 = *(_QWORD **)&v13[6 * v12 + 4];
        v16 = v13[6 * v12 + 8] & 1;
        v15 = (unsigned int)v13[6 * v12 + 6];
        v17 = 1;
      }
      else
      {
        v17 = 0;
      }
      ++v12;
      if ( v17 )
      {
        if ( a3 && (_DWORD)v15 || v16 )
          continue;
        while ( 1 )
        {
          if ( (unsigned int)IopSetRelationsTag(a1, v14, v15) )
          {
            if ( v14 )
              IopAddRelationToList(RelationList, v14, 2LL, 0LL);
            goto LABEL_5;
          }
          v18 = v14[39];
          v19 = *(_QWORD *)(v18 + 40);
          if ( a4 )
          {
            PipClearDevNodeFlags(*(_QWORD *)(v18 + 40), 0x80000);
            v25 = *(_DWORD *)(v19 + 396);
            if ( (v25 & 0x10) != 0 )
            {
              if ( (v25 & 0x2000) != 0 && *(_DWORD *)(v19 + 404) == 47 )
              {
                v26 = 3;
              }
              else
              {
                if ( a2 != 4 )
                  goto LABEL_14;
                v26 = 12;
              }
              PnpRequestDeviceAction(v14, v26, 1, 0LL, 0LL, 0LL, 0LL);
            }
          }
LABEL_14:
          v20 = *(_QWORD *)(v19 + 16);
          if ( !v20 )
            goto LABEL_5;
          v14 = *(_QWORD **)(v20 + 32);
        }
      }
    }
    break;
  }
  for ( j = 0; ; ++j )
  {
    v22 = *RelationList;
    if ( j >= *(_DWORD *)*RelationList || !v22 )
      break;
    v23 = j;
    PnpRequestDeviceAction(*(PVOID *)&v22[6 * v23 + 4], 9u, 0, 0LL, 0LL, 0LL, 0LL);
  }
  IopFreeRelationList(RelationList);
  return 0LL;
}
