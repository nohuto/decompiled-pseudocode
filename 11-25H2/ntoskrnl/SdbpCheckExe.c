/*
 * XREFs of SdbpCheckExe @ 0x140A0B0F0
 * Callers:
 *     SdbpSearchDB @ 0x140A0B1E4 (SdbpSearchDB.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 *     SdbpCheckForMatch @ 0x140A0B70C (SdbpCheckForMatch.c)
 */

__int64 __fastcall SdbpCheckExe(int a1, int a2, int a3, _DWORD *a4, __int64 a5, int a6, int *a7, void *a8)
{
  unsigned int v9; // ebx
  int v11; // edi
  __int64 v12; // rdx
  int v13; // eax
  int v15; // [rsp+30h] [rbp-18h] BYREF
  int v16[5]; // [rsp+34h] [rbp-14h] BYREF

  v15 = 2;
  v9 = 0;
  v16[0] = 0;
  if ( (unsigned int)SdbpCheckForMatch(a1, a2, a3, a5, (__int64)&v15, (__int64)v16) )
  {
    v11 = v15;
    if ( (a6 != 1 || v15 == 2) && (a6 != 2 || v15 != 2) )
    {
      if ( v15 == 1 )
      {
        memset_0(a8, 0, 0x80uLL);
        *a4 = 0;
      }
      v12 = (unsigned int)*a4;
      if ( (unsigned int)v12 < 0x10 )
      {
        v13 = v16[0];
        *((_DWORD *)a8 + 2 * v12) = a3;
        *((_DWORD *)a8 + 2 * v12 + 1) = v13;
        *a4 = v12 + 1;
        v9 = 1;
        if ( a7 )
          *a7 = v11;
      }
      else
      {
        AslLogCallPrintf(1LL);
        ++*a4;
        return 0;
      }
    }
  }
  return v9;
}
