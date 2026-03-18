/*
 * XREFs of PpmInitHeteroPolicy @ 0x140C207AC
 * Callers:
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
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

  v0 = (char *)&unk_140F068A3;
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
  word_140F0674E = -1;
  word_140F06936 = -1;
  dword_140F06748 = 5;
  dword_140F06930 = 5;
  dword_140F06744 = 5;
  dword_140F0692C = 5;
  result = 4LL;
  dword_140F06754 = 4;
  dword_140F0693C = 4;
  byte_140F06639 = 3;
  byte_140F06821 = 3;
  word_140F0673B = 12850;
  word_140F06923 = 12850;
  dword_140F06758 = 3;
  dword_140F06940 = 3;
  qword_140F0675C = 3LL;
  qword_140F06944 = 3LL;
  dword_140F06764 = 0;
  dword_140F0694C = 0;
  dword_140F06768 = 1;
  dword_140F06950 = 1;
  return result;
}
