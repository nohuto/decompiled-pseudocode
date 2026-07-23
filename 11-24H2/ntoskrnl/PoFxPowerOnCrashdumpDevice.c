/*
 * XREFs of PoFxPowerOnCrashdumpDevice @ 0x1405CDA30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PoFxPowerOnCrashdumpDevice(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 632);
    if ( v5 )
    {
      v7[0] = *(_QWORD *)(a1 + 72);
      v7[1] = a2;
      if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(v7, v5) )
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
