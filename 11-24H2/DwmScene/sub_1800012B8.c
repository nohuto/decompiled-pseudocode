/*
 * XREFs of sub_1800012B8 @ 0x1800012B8
 * Callers:
 *     sub_180020000 @ 0x180020000 (sub_180020000.c)
 * Callees:
 *     sub_180001548 @ 0x180001548 (sub_180001548.c)
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800012B8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8,
        _QWORD *a9)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax

  v9 = -1LL;
  if ( *a9 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *(_BYTE *)(*a9 + v10) );
  }
  if ( *a8 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( *(_BYTE *)(*a8 + v11) );
  }
  if ( *a5 )
  {
    do
      ++v9;
    while ( *(_BYTE *)(*a5 + v9) );
  }
  return sub_180001548(&dword_1801B9188, a2, 0LL);
}
