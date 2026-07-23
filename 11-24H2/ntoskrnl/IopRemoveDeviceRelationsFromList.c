/*
 * XREFs of IopRemoveDeviceRelationsFromList @ 0x1409BCA24
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1409BBF7C (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PipDeviceObjectListRemove @ 0x140AAD568 (PipDeviceObjectListRemove.c)
 */

__int64 __fastcall IopRemoveDeviceRelationsFromList(_DWORD **a1)
{
  int v1; // esi
  int v3; // ebx
  __int64 v4; // rdi
  _DWORD *v5; // rcx

  v1 = 0;
  v3 = **a1 - 1;
  if ( v3 >= 0 )
  {
    v4 = 6LL * v3;
    do
    {
      v5 = *a1;
      if ( *a1 && (unsigned int)v3 < *v5 )
        v1 = v5[v4 + 6];
      if ( !v1 )
        PipDeviceObjectListRemove(v5, (unsigned int)v3);
      v4 -= 6LL;
      --v3;
    }
    while ( v3 >= 0 );
  }
  return 0LL;
}
