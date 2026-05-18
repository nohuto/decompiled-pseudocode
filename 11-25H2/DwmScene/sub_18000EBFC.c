/*
 * XREFs of sub_18000EBFC @ 0x18000EBFC
 * Callers:
 *     sub_18000D7F4 @ 0x18000D7F4 (sub_18000D7F4.c)
 * Callees:
 *     memset @ 0x18000C088 (memset.c)
 *     ??0_lambda_9a32fed5bf61b6b509b2d3f6003082a1_@@QEAA@AEBV__crt_stdio_stream@@@Z @ 0x18000CD94 (--0_lambda_9a32fed5bf61b6b509b2d3f6003082a1_@@QEAA@AEBV__crt_stdio_stream@@@Z.c)
 *     unknown_libname_78 @ 0x18000CDA4 (unknown_libname_78.c)
 *     sub_18000D68C @ 0x18000D68C (sub_18000D68C.c)
 *     sub_18000D728 @ 0x18000D728 (sub_18000D728.c)
 *     sub_18000DA9C @ 0x18000DA9C (sub_18000DA9C.c)
 *     sub_18000EE08 @ 0x18000EE08 (sub_18000EE08.c)
 *     sub_18000F0E4 @ 0x18000F0E4 (sub_18000F0E4.c)
 *     sub_18000FB6C @ 0x18000FB6C (sub_18000FB6C.c)
 *     unknown_libname_136 @ 0x18000FCA4 (unknown_libname_136.c)
 */

__int64 __fastcall sub_18000EBFC(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  const struct __crt_stdio_stream *v6; // rax
  __int64 v7; // r8
  unsigned int v8; // edi
  __int64 v9; // rbx
  int v10; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  __int128 v14; // [rsp+20h] [rbp-10h] BYREF
  void *retaddr; // [rsp+48h] [rbp+18h]
  unsigned __int64 v16; // [rsp+60h] [rbp+30h] BYREF

  *a3 = 0LL;
  v6 = (const struct __crt_stdio_stream *)sub_18000EE08(8u, 0x78uLL);
  _lambda_9a32fed5bf61b6b509b2d3f6003082a1_::_lambda_9a32fed5bf61b6b509b2d3f6003082a1_(
    (_lambda_9a32fed5bf61b6b509b2d3f6003082a1_ *)&v16,
    v6);
  if ( unknown_libname_78(&v16) )
  {
    v8 = -2147024882;
    sub_18000F0E4(retaddr, 328LL, "wil", 2147942414LL);
LABEL_7:
    sub_18000D68C((__int64 *)&v16);
    return v8;
  }
  v9 = v16;
  v14 = 0LL;
  if ( (v16 & 3) != 0 )
    sub_18000FB6C();
  v10 = sub_18000DA9C((__int64)&v14, a1, v7, v16 >> 2);
  v8 = v10;
  if ( v10 < 0 )
  {
    sub_18000F0E4(retaddr, 331LL, "wil", (unsigned int)v10);
    sub_18000D728(&v14);
    goto LABEL_7;
  }
  *(_DWORD *)v9 = 1;
  *(_QWORD *)(v9 + 8) = *a2;
  v12 = v14;
  *a2 = 0LL;
  *(_QWORD *)&v14 = 0LL;
  *(_QWORD *)(v9 + 16) = v12;
  v13 = *((_QWORD *)&v14 + 1);
  *((_QWORD *)&v14 + 1) = 0LL;
  *(_QWORD *)(v9 + 24) = v13;
  memset((void *)(v9 + 32), 0, 0x58uLL);
  *(_WORD *)(v9 + 32) = 88;
  *(_DWORD *)(v9 + 36) = 1;
  memset((void *)(v9 + 40), 0, 0x50uLL);
  *a3 = unknown_libname_136(&v16);
  sub_18000D728(&v14);
  sub_18000D68C((__int64 *)&v16);
  return 0LL;
}
