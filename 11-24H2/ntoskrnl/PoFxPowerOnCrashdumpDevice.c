/*
 * XREFs of PoFxPowerOnCrashdumpDevice @ 0x1405D0310
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PoFxPowerOnCrashdumpDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rdx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  if ( a1 )
  {
    v7 = *(_QWORD *)(a1 + 632);
    if ( v7 )
    {
      v9[0] = *(_QWORD *)(a1 + 72);
      v9[1] = a2;
      if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(v9, v7, a2, a4) )
        return (unsigned int)-1073741823;
      return v4;
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
