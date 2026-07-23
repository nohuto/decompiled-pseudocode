/*
 * XREFs of CmRetrieveExtraParameter @ 0x1409EAC74
 * Callers:
 *     VrpPostOpenOrCreate @ 0x140AEB874 (VrpPostOpenOrCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmRetrieveExtraParameter(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  _QWORD *i; // rax
  __int64 v5; // rdx

  for ( i = (_QWORD *)*a1; ; i = (_QWORD *)*i )
  {
    if ( i == a1 )
      return 3221225524LL;
    v5 = i[2] - VRP_ORIGINAL_KEY_NAME_PARAMETER_GUID;
    if ( !v5 )
      v5 = i[3] - *((_QWORD *)&VRP_ORIGINAL_KEY_NAME_PARAMETER_GUID + 1);
    if ( !v5 )
      break;
  }
  *a3 = i + 6;
  return 0LL;
}
