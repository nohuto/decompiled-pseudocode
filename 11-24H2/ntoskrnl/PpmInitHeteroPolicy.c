/*
 * XREFs of PpmInitHeteroPolicy @ 0x140C318AC
 * Callers:
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 PpmInitHeteroPolicy()
{
  char *v0; // rdx
  __int64 v1; // r9
  unsigned int v2; // r8d
  char v3; // cl
  char v4; // cl
  char v5; // cl
  __int64 result; // rax

  v0 = (char *)&unk_140F06CC3;
  v1 = 2LL;
  do
  {
    v2 = 0;
    do
    {
      v3 = v2 != 0 ? 80 : 90;
      *(v0 - 488) = v3;
      *v0 = v3;
      v4 = -(v2++ != 0);
      v5 = (v4 & 0x14) + 30;
      *(v0 - 616) = v5;
      *(v0 - 128) = v5;
      ++v0;
    }
    while ( v2 < 0x40 );
    --v1;
  }
  while ( v1 );
  word_140F06B6E = -1;
  word_140F06D56 = -1;
  dword_140F06B68 = 5;
  dword_140F06D50 = 5;
  dword_140F06B64 = 5;
  dword_140F06D4C = 5;
  result = 4LL;
  dword_140F06B74 = 4;
  dword_140F06D5C = 4;
  byte_140F06A59 = 3;
  byte_140F06C41 = 3;
  word_140F06B5B = 12850;
  word_140F06D43 = 12850;
  dword_140F06B78 = 3;
  dword_140F06D60 = 3;
  qword_140F06B7C = 3LL;
  qword_140F06D64 = 3LL;
  dword_140F06B84 = 0;
  dword_140F06D6C = 0;
  dword_140F06B88 = 1;
  dword_140F06D70 = 1;
  return result;
}
