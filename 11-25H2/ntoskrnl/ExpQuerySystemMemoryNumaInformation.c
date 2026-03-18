/*
 * XREFs of ExpQuerySystemMemoryNumaInformation @ 0x1407B6260
 * Callers:
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpQuerySystemMemoryNumaInformation(
        __int64 a1,
        unsigned int a2,
        _OWORD *a3,
        unsigned int a4,
        _DWORD *a5)
{
  int v6; // ecx
  __int128 v8; // [rsp+50h] [rbp-48h]

  if ( a1
    && a2 >= 0xC
    && (unsigned int)*(_QWORD *)a1 == 1
    && __PAIR64__(*(_DWORD *)(a1 + 8), HIDWORD(*(_QWORD *)a1)) < (unsigned __int16)KeNumberNodes
    && (a3 || !a4) )
  {
    if ( a4 >= 0x10 )
    {
      *(_QWORD *)&v8 = 0x1000000001LL;
      v6 = guard_dispatch_icall_no_overrides(50LL);
      if ( v6 >= 0 )
      {
        v6 = guard_dispatch_icall_no_overrides(1LL);
        if ( v6 >= 0 )
        {
          HIDWORD(v8) = ((unsigned __int128)0x1000000001uLL >> 96) | 1;
          DWORD2(v8) = 0;
          *a3 = v8;
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
