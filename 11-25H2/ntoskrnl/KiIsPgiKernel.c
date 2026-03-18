/*
 * XREFs of KiIsPgiKernel @ 0x1405BA0EC
 * Callers:
 *     KiDetermineRetpolineEnablement @ 0x1405B9F64 (KiDetermineRetpolineEnablement.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14040FE90 (RtlImageDirectoryEntryToData.c)
 */

char KiIsPgiKernel()
{
  _DWORD *v0; // r8
  _DWORD *v1; // r9
  int v2; // eax
  _DWORD *v3; // rcx
  _DWORD *v4; // rdx
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  v0 = (_DWORD *)RtlImageDirectoryEntryToData(0x140000000uLL, 1, 6u, &v6);
  if ( v0 )
  {
    v1 = &v0[7 * (v6 / 0x1CuLL)];
    while ( v0 < v1 )
    {
      v2 = v0[3];
      if ( v2 == 10 )
      {
        v3 = (_DWORD *)(0x140000000LL + (unsigned int)v0[5]);
        v4 = &v3[(unsigned __int64)(unsigned int)v0[4] >> 2];
        while ( v3 < v4 )
        {
          if ( *v3 == 1346849024 )
            return 1;
          ++v3;
        }
      }
      else if ( v2 == 13 && v0[4] >= 0x10u && *(_DWORD *)((unsigned int)v0[5] + 0x140000000LL) == 1346849024 )
      {
        return 1;
      }
      v0 += 7;
    }
  }
  return 0;
}
