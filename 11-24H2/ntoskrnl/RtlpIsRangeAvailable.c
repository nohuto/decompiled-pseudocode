/*
 * XREFs of RtlpIsRangeAvailable @ 0x140A20400
 * Callers:
 *     RtlFindRange @ 0x140A201D0 (RtlFindRange.c)
 *     RtlIsRangeAvailable @ 0x140A20350 (RtlIsRangeAvailable.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     RtlGetNextRange @ 0x140A204F0 (RtlGetNextRange.c)
 */

char __fastcall RtlpIsRangeAvailable(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int8 a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9)
{
  unsigned __int64 *v11; // rdx
  unsigned __int64 v12; // rsi
  unsigned __int64 v14; // rax
  bool v15; // cf
  unsigned __int64 *v17; // [rsp+30h] [rbp+8h] BYREF

  v11 = *(unsigned __int64 **)(a1 + 16);
  v12 = a3;
  v17 = v11;
  while ( v11 )
  {
    if ( !*(_QWORD *)(a1 + 8) )
    {
      if ( a7 )
      {
        if ( v12 < *v11 )
          return 1;
      }
      else if ( a2 > v11[1] )
      {
        return 1;
      }
    }
    v14 = *v11;
    v15 = *v11 < a2;
    if ( *v11 > a2 )
    {
      if ( v12 < v14 )
        goto LABEL_9;
      v15 = v14 < a2;
    }
    if ( (!v15 || v11[1] >= a2)
      && (!a5 || (*((_BYTE *)v11 + 33) & 1) == 0)
      && (a4 & (_BYTE)v11[4]) == 0
      && (!a6 || v11[3])
      && (!a9 || !(unsigned __int8)guard_dispatch_icall_no_overrides(a8, v11)) )
    {
      return 0;
    }
LABEL_9:
    LOBYTE(a3) = a7;
    RtlGetNextRange(a1, &v17, a3);
    v11 = v17;
  }
  return 1;
}
