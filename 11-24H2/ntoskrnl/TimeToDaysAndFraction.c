/*
 * XREFs of TimeToDaysAndFraction @ 0x140442640
 * Callers:
 *     RtlTimeToElapsedTimeFields @ 0x14077DBD0 (RtlTimeToElapsedTimeFields.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TimeToDaysAndFraction(__int64 *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v3; // rcx
  __int64 v5; // r9
  signed __int64 v7; // r8
  unsigned __int128 v8; // rax
  __int64 v9; // rdx
  __int64 result; // rax

  v3 = *a1;
  v5 = v3;
  if ( v3 < 0 )
    v5 = -v3;
  v7 = (unsigned __int64)(((unsigned __int64)v5 * (unsigned __int128)(unsigned __int64)Magic10000) >> 64) >> 13;
  if ( v3 < 0 )
    v7 = -v7;
  if ( v7 < 0 )
    v8 = (unsigned __int64)-v7 * (unsigned __int128)(unsigned __int64)Magic86400000;
  else
    v8 = (unsigned __int64)v7 * (unsigned __int128)(unsigned __int64)Magic86400000;
  v9 = *((_QWORD *)&v8 + 1) >> 26;
  if ( v7 < 0 )
    v9 = -v9;
  result = (unsigned int)(86400000 * v9);
  *a2 = v9;
  *a3 = v7 - result;
  return result;
}
