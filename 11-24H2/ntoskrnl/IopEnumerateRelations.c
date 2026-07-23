/*
 * XREFs of IopEnumerateRelations @ 0x140A4EB78
 * Callers:
 *     PnpFinalizeDeviceRemovalForReset @ 0x14071F414 (PnpFinalizeDeviceRemovalForReset.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1409BBF7C (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PipDeviceObjectListElementAt @ 0x140A4EC14 (PipDeviceObjectListElementAt.c)
 */

bool __fastcall IopEnumerateRelations(unsigned int **a1, int *a2, _QWORD *a3, _DWORD *a4, _DWORD *a5)
{
  char v5; // r10
  int v6; // edi
  int v9; // ecx
  unsigned int v10; // edx
  unsigned int v11; // r8d
  int v12; // eax
  int v14; // ecx

  v5 = 0;
  v6 = (int)a3;
  *a3 = 0LL;
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *a5 = 0;
  v9 = *a2;
  if ( !*a2 || *((_BYTE *)a1 + 8) )
  {
    v10 = a2[1];
    v11 = **a1;
    if ( v10 < v11 )
    {
      if ( v9 )
      {
        v14 = v9 - 1;
        if ( v14 )
        {
          if ( v14 != 1 )
            return v5;
          v10 = v11 + ~v10;
        }
      }
      v12 = PipDeviceObjectListElementAt((unsigned int)*a1, v10, v6, (_DWORD)a4, (__int64)a5);
      ++a2[1];
      return v12 >= 0;
    }
  }
  return v5;
}
