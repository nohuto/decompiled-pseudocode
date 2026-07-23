/*
 * XREFs of ExpQuerySystemMemoryNumaInformation @ 0x1407C5E90
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpQuerySystemMemoryNumaInformation(
        __int64 *a1,
        unsigned int a2,
        _OWORD *a3,
        unsigned int a4,
        _DWORD *a5)
{
  int v6; // ecx
  __int64 v8; // [rsp+38h] [rbp-60h]
  __int128 v9; // [rsp+50h] [rbp-48h]

  if ( a1
    && a2 >= 0xC
    && (v8 = *a1, (unsigned int)*a1 == 1)
    && !*((_DWORD *)a1 + 2)
    && HIDWORD(v8) < (unsigned __int16)KeNumberNodes
    && (a3 || !a4) )
  {
    if ( a4 >= 0x10 )
    {
      *(_QWORD *)&v9 = 0x1000000001LL;
      v6 = guard_dispatch_icall_no_overrides(50LL, 24LL);
      if ( v6 >= 0 )
      {
        v6 = guard_dispatch_icall_no_overrides(1LL, HIDWORD(v8));
        if ( v6 >= 0 )
        {
          HIDWORD(v9) = ((unsigned __int128)0x1000000001uLL >> 96) | 1;
          DWORD2(v9) = 0;
          *a3 = v9;
          if ( a5 )
            *a5 = 16;
          return 0;
        }
      }
    }
    else
    {
      v6 = -1073741789;
      if ( a5 )
        *a5 = 16;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
