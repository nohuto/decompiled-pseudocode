/*
 * XREFs of sub_180001174 @ 0x180001174
 * Callers:
 *     sub_1800200A0 @ 0x1800200A0 (sub_1800200A0.c)
 * Callees:
 *     sub_180001548 @ 0x180001548 (sub_180001548.c)
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180001174(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6,
        _QWORD *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  v10 = -1LL;
  if ( *a9 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( *(_BYTE *)(*a9 + v11) );
  }
  if ( *a8 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *(_BYTE *)(*a8 + v12) );
  }
  if ( *a7 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *(_BYTE *)(*a7 + v13) );
  }
  if ( *a5 )
  {
    do
      ++v10;
    while ( *(_BYTE *)(*a5 + v10) );
  }
  return sub_180001548(&dword_1801B9188, a2, 0LL);
}
