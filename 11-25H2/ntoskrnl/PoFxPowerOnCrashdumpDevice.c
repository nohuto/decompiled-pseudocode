/*
 * XREFs of PoFxPowerOnCrashdumpDevice @ 0x1405CBBC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PoFxPowerOnCrashdumpDevice(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  if ( a1 )
  {
    if ( *(_QWORD *)(a1 + 632) )
    {
      v5[0] = *(_QWORD *)(a1 + 72);
      v5[1] = a2;
      if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(v5) )
        return (unsigned int)-1073741823;
      return v2;
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
}
