/*
 * XREFs of BgpConsoleClearScreenEx @ 0x140BB2A28
 * Callers:
 *     BgpConsoleClearScreen @ 0x140BB29F0 (BgpConsoleClearScreen.c)
 *     BgpConsoleInitialize @ 0x140BB30B0 (BgpConsoleInitialize.c)
 * Callees:
 *     BgpClearScreen @ 0x140698EA8 (BgpClearScreen.c)
 */

__int64 BgpConsoleClearScreenEx()
{
  __int64 v0; // rcx
  int v1; // r8d
  _DWORD *v2; // r9
  __int64 v3; // r10
  unsigned int v4; // eax
  __int64 v5; // r11
  unsigned int i; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx

  v0 = qword_140EEFD00;
  *(_DWORD *)(qword_140EEFD00 + 68) = 0;
  *(_DWORD *)(v0 + 72) = 0;
  v1 = BgpClearScreen(*(_DWORD *)(v0 + 16));
  if ( v1 >= 0 )
  {
    v2 = (_DWORD *)qword_140EEFD00;
    v3 = 0LL;
    v4 = *(_DWORD *)(qword_140EEFD00 + 4);
    v5 = 80LL;
    do
    {
      for ( i = 0; i < v4; v4 = v2[1] )
      {
        v7 = i++;
        v8 = 3 * (v3 + v7);
        LOWORD(v2[v8 + 22]) = 32;
        v2[3 * v3 + 21 + 3 * v7] = v2[4];
        v2[v8 + 20] = v2[3];
      }
      v3 += 25LL;
      --v5;
    }
    while ( v5 );
  }
  return (unsigned int)v1;
}
