/*
 * XREFs of IsImmersiveBroker @ 0x1400C5CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IsImmersiveBroker(__int64 *a1)
{
  __int64 v2; // rsi
  unsigned int v3; // edi

  if ( (a1[102] & 0x30) == 0x20 )
    return 1LL;
  v3 = 0;
  if ( *a1 )
  {
    v2 = *a1;
    if ( v2 == *(_QWORD *)(W32GetUserSessionState(a1) + 70808) )
      return 1LL;
  }
  LOBYTE(v3) = *a1 == *(_QWORD *)(W32GetUserGdiSessionState() + 40);
  return v3;
}
