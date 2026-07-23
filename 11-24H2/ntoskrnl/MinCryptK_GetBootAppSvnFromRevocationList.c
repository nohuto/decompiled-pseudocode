/*
 * XREFs of MinCryptK_GetBootAppSvnFromRevocationList @ 0x1406A0438
 * Callers:
 *     PopValidateWinresume @ 0x1407511C8 (PopValidateWinresume.c)
 * Callees:
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 */

__int64 __fastcall MinCryptK_GetBootAppSvnFromRevocationList(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r15
  unsigned int v7; // esi
  unsigned int v9; // ebp
  _DWORD *i; // rdi
  size_t v11; // r8

  v4 = 0;
  v5 = *(_QWORD *)(a1 + 200);
  v7 = *(_DWORD *)(a1 + 192) >> 5;
  v9 = -1073741275;
  if ( v7 )
  {
    for ( i = (_DWORD *)(v5 + 20); ; i += 8 )
    {
      if ( a3 == *i )
      {
        v11 = -1LL;
        do
          ++v11;
        while ( aHiberrsmExe[v11] );
        if ( !memcmp("hiberrsm.exe", (const void *)(v5 + 32LL * v4), v11) )
          break;
      }
      if ( ++v4 >= v7 )
        return v9;
    }
    v9 = 0;
    *a4 = *(_DWORD *)(v5 + 32LL * v4 + 28);
  }
  return v9;
}
