/*
 * XREFs of MiLocateCachedExtent @ 0x1404C0AA8
 * Callers:
 *     MiInitializeCachedExtentWalker @ 0x1404C091C (MiInitializeCachedExtentWalker.c)
 * Callees:
 *     MiStartingOffset @ 0x1403236B0 (MiStartingOffset.c)
 */

__int64 __fastcall MiLocateCachedExtent(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  _DWORD *v5; // r11
  unsigned __int64 v6; // rdi
  int v7; // r10d
  int v8; // edx
  int v9; // r8d
  unsigned int v10; // ecx

  v4 = MiStartingOffset(a1, *(_QWORD *)(a1 + 8), 0xFFFFFFFF);
  v5 = *(_DWORD **)(a1 + 112);
  v6 = (a2 - v4) >> 12;
  v7 = 0;
  if ( v5 )
  {
    v8 = *v5 - 1;
    while ( v8 >= v7 )
    {
      v9 = (v7 + v8) >> 1;
      v10 = v5[12 * v9 + 8];
      if ( (unsigned int)v6 >= v10 )
      {
        if ( (unsigned int)v6 < v5[12 * v9 + 12] + v10 )
          return (__int64)&v5[12 * v9 + 2];
        v7 = v9 + 1;
      }
      else
      {
        if ( !v9 )
          return 0LL;
        v8 = v9 - 1;
      }
    }
  }
  return 0LL;
}
