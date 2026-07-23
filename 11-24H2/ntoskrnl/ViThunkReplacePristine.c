/*
 * XREFs of ViThunkReplacePristine @ 0x140B99D44
 * Callers:
 *     ViThunkRecoverPristines @ 0x140B99A00 (ViThunkRecoverPristines.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViThunkReplacePristine(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // edx

  v3 = 0;
  while ( *a1 )
  {
    if ( *a3 == a1[1] )
    {
      v3 = 1;
      *a3 = a1[2];
      return v3;
    }
    a1 += 7;
  }
  return v3;
}
