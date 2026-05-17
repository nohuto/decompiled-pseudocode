/*
 * XREFs of LdrGetFileNameFromLoadAsDataTable @ 0x1801130E0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpGetLoadAsEntry @ 0x18002037C (LdrpGetLoadAsEntry.c)
 */

__int64 __fastcall LdrGetFileNameFromLoadAsDataTable(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _OWORD v6[3]; // [rsp+20h] [rbp-38h] BYREF

  memset(v6, 0, sizeof(v6));
  if ( !a1 || !a2 )
    return 3221225485LL;
  result = LdrpGetLoadAsEntry(a1, v6, a3, a4);
  if ( (int)result >= 0 )
  {
    if ( *((_QWORD *)&v6[0] + 1) )
      *a2 = *((_QWORD *)&v6[0] + 1);
    else
      return 3221225473LL;
  }
  return result;
}
