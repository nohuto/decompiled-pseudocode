/*
 * XREFs of GetNextNameSegment @ 0x14006CB0C
 * Callers:
 *     CreateNativeNameSpaceObject @ 0x140052F04 (CreateNativeNameSpaceObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetNextNameSegment(__int64 a1, int *a2, unsigned __int64 *a3)
{
  unsigned int v3; // r9d
  int *v4; // rbx
  unsigned int v6; // ecx
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  int v10; // [rsp+8h] [rbp+8h]

  v3 = 0;
  v4 = a2;
  if ( !a1 )
    return (unsigned int)-1073741197;
  v6 = 0;
  v10 = 1600085855;
  while ( v6 < 4 )
  {
    LOBYTE(a2) = *(_BYTE *)(v6 + a1);
    if ( !(_BYTE)a2 || (_BYTE)a2 == 46 )
      break;
    if ( (unsigned __int8)((_BYTE)a2 - 48) > 0x2Fu
      || (v7 = 0x87FFFFFE03FFLL, !_bittest64(&v7, (unsigned int)((_DWORD)a2 - 48))) )
    {
      if ( (unsigned __int8)((_BYTE)a2 - 97) > 0x19u )
        return (unsigned int)-1073741811;
    }
    *((_BYTE *)&v10 + v6++) = (_BYTE)a2;
  }
  if ( v6 )
  {
    *v4 = v10;
    v8 = a1 + v6;
    if ( *(_BYTE *)v8 == 46 )
      *a3 = v8 + 1;
    else
      *a3 = v8 & -(__int64)(*(_BYTE *)v8 != 0);
  }
  else
  {
    return (unsigned int)-1073741197;
  }
  return v3;
}
