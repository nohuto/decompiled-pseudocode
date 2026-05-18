/*
 * XREFs of sub_1800C01D4 @ 0x1800C01D4
 * Callers:
 *     sub_1800C0A74 @ 0x1800C0A74 (sub_1800C0A74.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_1800C12F8 @ 0x1800C12F8 (sub_1800C12F8.c)
 */

__int64 __fastcall sub_1800C01D4(__int64 a1, int a2, int a3, unsigned int a4, int a5, unsigned int a6)
{
  int v6; // edi
  _DWORD *v8; // rax
  int v9; // eax
  _DWORD v11[4]; // [rsp+20h] [rbp-28h] BYREF

  v6 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a3;
  *(_DWORD *)(a1 + 12) = 1;
  *(_DWORD *)(a1 + 16) = sub_1800C12F8(a4, a6);
  v8 = v11;
  do
    *v8++ = v6++;
  while ( v6 < 4 );
  *(_DWORD *)(a1 + 20) = v11[a5];
  if ( (unsigned int)(a5 - 2) <= 1 )
  {
    v9 = *(_DWORD *)(a1 + 28) | 0x10000;
    *(_DWORD *)(a1 + 28) = v9;
    if ( a5 == 3 )
      *(_DWORD *)(a1 + 28) = v9 | 0x20000;
  }
  if ( (a6 & 1) != 0 )
    *(_DWORD *)(a1 + 24) |= 8u;
  return a1;
}
