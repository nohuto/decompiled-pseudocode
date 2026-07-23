/*
 * XREFs of SeComputeAutoInheritByObjectTypeEx @ 0x14041D070
 * Callers:
 *     SeComputeAutoInheritByObjectType @ 0x14041D040 (SeComputeAutoInheritByObjectType.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ObpAssignSecurity @ 0x140854270 (ObpAssignSecurity.c)
 * Callees:
 *     RtlFindAceByType @ 0x140404D90 (RtlFindAceByType.c)
 */

__int64 __fastcall SeComputeAutoInheritByObjectTypeEx(__int64 a1, __int64 a2, __int64 a3, int *a4, _DWORD *Index)
{
  _DWORD *v5; // rbx
  char v7; // r8
  int v8; // edi
  int v9; // r15d
  int v12; // edx
  __int64 result; // rax
  __int16 v14; // ax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r10
  unsigned int i; // ecx
  _BYTE *v19; // rcx
  __int16 v20; // ax
  ACL *v21; // rcx
  __int64 v22; // rax
  _BYTE *AceByType; // rax

  v5 = Index;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( Index )
  {
    if ( *Index != 8 )
      return 3221225485LL;
    Index[1] = -1;
  }
  v12 = *(_DWORD *)(a1 + 216);
  if ( v12 )
    v8 = ((*(_DWORD *)(a1 + 216) & 6) << 8) | ((*(_DWORD *)(a1 + 216) & 1) << 8);
  if ( (*(_BYTE *)(a1 + 67) & 2) != 0 )
  {
    v9 = *(_DWORD *)(a1 + 220);
    v7 = 1;
  }
  if ( v12 )
  {
    if ( a2 )
    {
      v14 = *(_WORD *)(a2 + 2);
      if ( (v14 & 0x10) != 0 )
      {
        if ( v14 >= 0 )
        {
          v16 = *(_QWORD *)(a2 + 24);
LABEL_18:
          if ( v16 )
          {
            v17 = v16 + 8;
            for ( i = 0; i < *(unsigned __int16 *)(v16 + 4); ++i )
            {
              if ( *(_BYTE *)v17 == 17 )
              {
                *(_DWORD *)(v17 + 4) |= v12;
                v8 = 0;
                goto LABEL_10;
              }
              v17 += *(unsigned __int16 *)(v17 + 2);
            }
          }
          goto LABEL_10;
        }
        v15 = *(unsigned int *)(a2 + 12);
        if ( (_DWORD)v15 )
        {
          v16 = a2 + v15;
          goto LABEL_18;
        }
      }
    }
  }
LABEL_10:
  if ( v7 )
  {
    if ( a2 )
    {
      LODWORD(Index) = 0;
      while ( 1 )
      {
        v20 = *(_WORD *)(a2 + 2);
        if ( (v20 & 0x10) != 0 )
        {
          if ( v20 >= 0 )
          {
            v21 = *(ACL **)(a2 + 24);
          }
          else
          {
            v22 = *(unsigned int *)(a2 + 12);
            v21 = (_DWORD)v22 ? (ACL *)(a2 + v22) : 0LL;
          }
        }
        else
        {
          v21 = 0LL;
        }
        AceByType = RtlFindAceByType(v21, 0x11u, (PULONG)&Index);
        if ( AceByType )
        {
          if ( (AceByType[1] & 8) == 0 )
            break;
        }
        LODWORD(Index) = (_DWORD)Index + 1;
        if ( !AceByType )
          goto LABEL_46;
      }
      *((_DWORD *)AceByType + 1) &= v9;
    }
    else
    {
LABEL_46:
      if ( v5 )
      {
        v5[1] = v9;
        v8 |= 0x800u;
      }
    }
  }
  if ( a3 )
  {
    v19 = (_BYTE *)(a2 + 2);
    if ( (!a2 || (*v19 & 4) == 0) && _bittest16((const signed __int16 *)(a3 + 2), 0xAu) )
      v8 |= 1u;
    if ( (!a2 || (*v19 & 0x10) == 0) && (*(_WORD *)(a3 + 2) & 0x800) != 0 )
      v8 |= 2u;
  }
  result = 0LL;
  *a4 = v8;
  return result;
}
