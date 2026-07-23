/*
 * XREFs of PpmInitHeteroPolicy @ 0x140C339CC
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
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

  v0 = (char *)&unk_140F06FE3;
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
  word_140F06E8E = -1;
  word_140F07076 = -1;
  dword_140F06E88 = 5;
  dword_140F07070 = 5;
  dword_140F06E84 = 5;
  dword_140F0706C = 5;
  result = 4LL;
  dword_140F06E94 = 4;
  dword_140F0707C = 4;
  byte_140F06D79 = 3;
  byte_140F06F61 = 3;
  word_140F06E7B = 12850;
  word_140F07063 = 12850;
  dword_140F06E98 = 3;
  dword_140F07080 = 3;
  qword_140F06E9C = 3LL;
  qword_140F07084 = 3LL;
  dword_140F06EA4 = 0;
  dword_140F0708C = 0;
  dword_140F06EA8 = 1;
  dword_140F07090 = 1;
  return result;
}
