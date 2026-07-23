/*
 * XREFs of BcpGetMaxResourceProfile @ 0x14069AE80
 * Callers:
 *     BgpBcInitializeCriticalMode @ 0x140C72EA4 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     BcpGetCharacterMaxResourceProfile @ 0x14069ABF8 (BcpGetCharacterMaxResourceProfile.c)
 */

__int64 __fastcall BcpGetMaxResourceProfile(__int128 *a1, unsigned __int64 *a2)
{
  int CharacterMaxResourceProfile; // r8d
  int *v3; // rbx
  unsigned int v4; // edi
  __int64 *v7; // r9
  unsigned int v8; // ebp
  unsigned int v9; // esi
  int v10; // r12d
  unsigned __int16 *i; // r14

  CharacterMaxResourceProfile = 0;
  v3 = (int *)&qword_14000C268;
  v4 = 0;
  *(_OWORD *)a2 = 0LL;
  do
  {
    v7 = (__int64 *)*((_QWORD *)v3 - 1);
    if ( v7 != &qword_14000C400 || (dword_140EF0270 & 0x20000) == 0 )
    {
      CharacterMaxResourceProfile = 0;
      v8 = *(unsigned __int16 *)v7 >> 1;
      v9 = 0;
      v10 = *v3;
      for ( i = (unsigned __int16 *)v7[1]; v9 < v8; ++i )
      {
        CharacterMaxResourceProfile = BcpGetCharacterMaxResourceProfile(*i, v10, a1, a2);
        if ( CharacterMaxResourceProfile < 0 )
          break;
        ++v9;
      }
      if ( CharacterMaxResourceProfile < 0 )
        break;
    }
    ++v4;
    v3 += 4;
  }
  while ( v4 < 0x1A );
  return (unsigned int)CharacterMaxResourceProfile;
}
