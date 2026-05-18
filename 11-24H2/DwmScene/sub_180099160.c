/*
 * XREFs of sub_180099160 @ 0x180099160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall sub_180099160(__int64 a1, __int64 a2)
{
  char result; // al

  result = *(_BYTE *)(*(_QWORD *)a1 + 124LL);
  if ( result == *(_BYTE *)(*(_QWORD *)a2 + 124LL) )
    return *(_DWORD *)(*(_QWORD *)a1 + 128LL) > *(_DWORD *)(*(_QWORD *)a2 + 128LL);
  return result;
}
