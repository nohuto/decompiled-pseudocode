/*
 * XREFs of sub_180001010 @ 0x180001010
 * Callers:
 *     sub_180020140 @ 0x180020140 (sub_180020140.c)
 *     sub_1800201E0 @ 0x1800201E0 (sub_1800201E0.c)
 *     sub_180020280 @ 0x180020280 (sub_180020280.c)
 * Callees:
 *     sub_180001548 @ 0x180001548 (sub_180001548.c)
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180001010(
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
  __int64 v10; // r8
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
