/*
 * XREFs of HsaDismissPageFault @ 0x14056FDE0
 * Callers:
 *     <none>
 * Callees:
 *     HsaIommuSendCommand @ 0x14043E74C (HsaIommuSendCommand.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall HsaDismissPageFault(__int64 *a1, unsigned int a2, __int16 a3, unsigned __int16 a4, int a5)
{
  __int64 v6; // r8
  unsigned __int64 v7; // rcx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF

  v9 = 0LL;
  LOWORD(v9) = a3;
  v6 = 0LL;
  if ( a2 == -1 )
  {
    v7 = v9;
  }
  else
  {
    v6 = 4LL;
    v7 = ((unsigned __int64)a2 << 32) ^ (v9 ^ ((unsigned __int64)a2 << 32)) & 0xFFF00000FFFFFFFFuLL;
  }
  *(_QWORD *)&v9 = v7 & 0xFFFFFFFFFFFFFFFLL | 0x7000000000000000LL;
  *((_QWORD *)&v9 + 1) = ((unsigned __int64)a4 << 32) ^ (v6 ^ ((unsigned __int64)a4 << 32)) & 0xFFFFFE00FFFFFFFFuLL;
  if ( a5 < 0 )
    *((_QWORD *)&v9 + 1) = (((unsigned __int64)a4 << 32) ^ (v6 ^ ((unsigned __int64)a4 << 32)) & 0xFFFFFE00FFFFFFFFuLL) & 0xFFFF0FFFFFFFFFFFuLL | 0x100000000000LL;
  return HsaIommuSendCommand(a1, &v9, 0);
}
