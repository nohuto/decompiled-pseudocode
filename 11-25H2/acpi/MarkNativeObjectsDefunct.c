/*
 * XREFs of MarkNativeObjectsDefunct @ 0x14006D934
 * Callers:
 *     NotifyObjectDestruction @ 0x14006CC48 (NotifyObjectDestruction.c)
 *     AMLIRemoveNativeObjectsFromNamespace @ 0x14006D848 (AMLIRemoveNativeObjectsFromNamespace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MarkNativeObjectsDefunct(__int64 a1, __int64 a2)
{
  __int16 v3; // ax
  __int64 *v4; // rdx
  __int64 *i; // rcx
  __int64 j; // rcx
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 k; // rdx

  if ( a1 )
  {
    v3 = *(_WORD *)(a1 + 66);
    if ( v3 == 6 || (unsigned __int16)(v3 - 11) <= 2u )
    {
      v4 = (__int64 *)(a1 + 24);
      for ( i = *(__int64 **)(a1 + 24); v4 != i; i = (__int64 *)*i )
      {
        if ( i[6] == gpNativeNameSpaceOwner )
          *((_WORD *)i + 32) |= 4u;
      }
    }
  }
  if ( a2 )
  {
    for ( j = *(_QWORD *)(a2 + 24); j; j = *(_QWORD *)(j + 56) )
    {
      if ( (*(_BYTE *)(j + 64) & 4) != 0 )
      {
        v7 = *(_QWORD *)(j + 136);
        if ( v7 )
        {
          *(_WORD *)(v7 + 64) |= 4u;
          *(_QWORD *)(j + 136) = 0LL;
          *(_WORD *)(j + 64) &= ~0x400u;
        }
      }
    }
  }
  result = gpNativeNameSpaceOwner;
  v9 = *(_QWORD *)(gpNativeNameSpaceOwner + 24);
  if ( v9 )
  {
    do
    {
      v10 = *(_QWORD *)(v9 + 56);
      for ( k = v9; k; k = *(_QWORD *)(k + 16) )
      {
        if ( (*(_BYTE *)(k + 64) & 4) != 0 )
        {
          *(_WORD *)(v9 + 64) |= 4u;
          break;
        }
      }
      v9 = v10;
    }
    while ( v10 );
  }
  return result;
}
