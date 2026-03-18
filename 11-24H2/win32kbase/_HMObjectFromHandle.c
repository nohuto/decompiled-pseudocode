/*
 * XREFs of _HMObjectFromHandle @ 0x1400CAD70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HMObjectFromHandle(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1) + 19888) + 40LL * (unsigned __int16)a1);
}
