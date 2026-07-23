/*
 * XREFs of MiFindDefragmentSlabEntriesHelper @ 0x140688D90
 * Callers:
 *     <none>
 * Callees:
 *     MiCheckSlabEntryForDefrag @ 0x1406879D4 (MiCheckSlabEntryForDefrag.c)
 */

__int64 __fastcall MiFindDefragmentSlabEntriesHelper(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 i; // rbx
  _QWORD **v6; // rax
  unsigned __int64 v7; // rcx
  _QWORD *v8; // rcx

  v3 = *(_QWORD *)(a2 + 8);
  if ( (v3 & 1) != 0 )
  {
    if ( v3 == 1 )
      i = 0LL;
    else
      i = v3 ^ (a2 | 1);
  }
  else
  {
    i = *(_QWORD *)(a2 + 8);
  }
  while ( i )
  {
    if ( (unsigned int)MiCheckSlabEntryForDefrag(a3, (_DWORD *)i) )
      return 1LL;
    v6 = *(_QWORD ***)(i + 8);
    v7 = i;
    if ( v6 )
    {
      v8 = *v6;
      for ( i = *(_QWORD *)(i + 8); v8; v8 = (_QWORD *)*v8 )
        i = (unsigned __int64)v8;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v7 )
          break;
        v7 = i;
      }
    }
  }
  return 0LL;
}
