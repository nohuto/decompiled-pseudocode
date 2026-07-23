/*
 * XREFs of VerSetConditionMask @ 0x1800E53D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONGLONG __stdcall VerSetConditionMask(ULONGLONG ConditionMask, DWORD TypeMask, BYTE Condition)
{
  unsigned __int8 v3; // r8
  char v4; // al

  v3 = Condition & 7;
  if ( !TypeMask )
    return 0LL;
  v4 = 0;
  do
  {
    ++v4;
    TypeMask >>= 1;
  }
  while ( TypeMask );
  return ConditionMask | ((unsigned __int64)v3 << (3 * (v4 - 1))) | 0x8000000000000000uLL;
}
