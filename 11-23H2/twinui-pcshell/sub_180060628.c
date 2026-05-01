/*
 * XREFs of sub_180060628 @ 0x180060628
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180060628(__int64 a1, __int64 a2)
{
  char v2; // of

  if ( !v2 )
    JUMPOUT(0x180060602LL);
  BYTE1(a2) = 65;
  return winrt::implements<TouchGestureSettings,ITouchGestureSettings>::AddRef(a1, a2);
}
