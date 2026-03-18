/*
 * XREFs of SepSidInSidAndAttributes @ 0x1409B2B94
 * Callers:
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x1409B29B4 (SepRemoveDisabledGroupsAndPrivileges.c)
 *     SepFilterToken @ 0x140AD2664 (SepFilterToken.c)
 * Callees:
 *     memcmp @ 0x1406BFF10 (memcmp.c)
 */

char __fastcall SepSidInSidAndAttributes(unsigned __int8 **a1, unsigned int a2, __int64 a3, _BYTE *a4)
{
  unsigned __int8 **v6; // rbx
  unsigned int v7; // edi
  unsigned int v8; // ebp
  unsigned __int8 *v9; // rdx

  v6 = a1;
  if ( a1 )
  {
    v7 = 0;
    v8 = 4 * (unsigned __int8)a4[1] + 8;
    while ( v7 < a2 )
    {
      v9 = *v6;
      if ( *a4 == **v6 && v8 == 4 * v9[1] + 8 && !memcmp(a4, v9, v8) )
        return 1;
      v6 += 2;
      ++v7;
    }
  }
  return 0;
}
