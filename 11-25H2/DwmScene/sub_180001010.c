/*
 * XREFs of sub_180001010 @ 0x180001010
 * Callers:
 *     sub_18001FFE0 @ 0x18001FFE0 (sub_18001FFE0.c)
 *     sub_180020080 @ 0x180020080 (sub_180020080.c)
 *     sub_180020120 @ 0x180020120 (sub_180020120.c)
 * Callees:
 *     sub_180001548 @ 0x180001548 (sub_180001548.c)
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
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
  return sub_180001548(&dword_1801B8188, a2, 0LL);
}
