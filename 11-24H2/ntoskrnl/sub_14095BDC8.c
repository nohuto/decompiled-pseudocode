/*
 * XREFs of sub_14095BDC8 @ 0x14095BDC8
 * Callers:
 *     ntoskrnl_20 @ 0x14095B5C0 (ntoskrnl_20.c)
 *     sub_14095B7DC @ 0x14095B7DC (sub_14095B7DC.c)
 *     ExpGetKernelDataProtection @ 0x14095B830 (ExpGetKernelDataProtection.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     sub_14095B930 @ 0x14095B930 (sub_14095B930.c)
 *     sub_14095BA10 @ 0x14095BA10 (sub_14095BA10.c)
 *     sub_14095BB10 @ 0x14095BB10 (sub_14095BB10.c)
 *     sub_14095BBF0 @ 0x14095BBF0 (sub_14095BBF0.c)
 *     sub_14095BCF0 @ 0x14095BCF0 (sub_14095BCF0.c)
 *     sub_14095C2E0 @ 0x14095C2E0 (sub_14095C2E0.c)
 */

__int64 __fastcall sub_14095BDC8(__int64 *a1)
{
  unsigned __int8 *v1; // r15
  unsigned __int8 *v2; // rsi
  unsigned __int64 v3; // r14
  __int64 v4; // r12
  unsigned int v5; // edi
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 (__fastcall *v8)(char, unsigned __int64, unsigned __int64, unsigned __int64, int, __int64, unsigned int); // rax
  int v9; // ecx
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rax
  __int64 (__fastcall *v15)(unsigned __int64, __int64, unsigned __int64, unsigned __int64, int, __int64, unsigned int); // rax
  int v16; // ecx
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdx
  int v20; // eax
  unsigned int v21; // ebx
  int v22; // ecx
  int v23; // eax
  __int64 result; // rax
  __int64 v26; // [rsp+48h] [rbp-18h] BYREF
  __int64 v27; // [rsp+50h] [rbp-10h]

  v1 = (unsigned __int8 *)&unk_140FD8D2E;
  v2 = (unsigned __int8 *)&unk_140FD8D0E;
  v27 = *a1;
  v3 = 30LL;
  v4 = 16LL;
  v5 = BYTE3(v27) | ((BYTE2(v27) | ((BYTE1(v27) | ((unsigned __int8)v27 << 8)) << 8)) << 8);
  v26 = qword_140FD8290;
  v6 = HIBYTE(v27) | ((BYTE6(v27) | ((BYTE5(v27) | (BYTE4(v27) << 8)) << 8)) << 8);
  do
  {
    v7 = v1[1];
    if ( (unsigned __int8)v7 < 0x1Fu )
    {
      v8 = (__int64 (__fastcall *)(char, unsigned __int64, unsigned __int64, unsigned __int64, int, __int64, unsigned int))off_140FD84C0[v7];
      v9 = v2[1];
      v10 = *v2;
      v11 = *(v2 - 1);
      v12 = *(v2 - 2);
      if ( (char *)v8 == (char *)sub_14095BCF0 )
      {
        v13 = sub_14095BCF0(v3 + 1, v12, v11, v10, v9, (__int64)&v26, v5);
      }
      else if ( v8 == sub_14095BBF0 )
      {
        v13 = sub_14095BBF0((unsigned __int8)v3 + 1, v12, v11, v10, v9, (__int64)&v26, v5);
      }
      else if ( v8 == sub_14095BA10 )
      {
        v13 = sub_14095BA10((unsigned __int8)v3 + 1, v12, v11, v10, v9, (__int64)&v26, v5);
      }
      else
      {
        v13 = guard_dispatch_icall_no_overrides(v3 + 1, v12);
      }
      v6 ^= v13;
    }
    v14 = *v1;
    if ( (unsigned __int8)v14 < 0x1Fu )
    {
      v15 = (__int64 (__fastcall *)(unsigned __int64, __int64, unsigned __int64, unsigned __int64, int, __int64, unsigned int))off_140FD84C0[v14];
      v16 = *(v2 - 3);
      v17 = *(v2 - 4);
      v18 = *(v2 - 5);
      v19 = *(v2 - 6);
      if ( (char *)v15 == (char *)sub_14095C2E0 )
      {
        v20 = sub_14095C2E0(v3, v19, v18, v17, v16, (__int64)&v26, v6);
      }
      else if ( (char *)v15 == (char *)sub_14095BB10 )
      {
        v20 = sub_14095BB10(v3, v19, v18, v17, v16, (__int64)&v26, v6);
      }
      else if ( v15 == sub_14095B930 )
      {
        v20 = sub_14095B930(v3, v19, v18, v17, v16, (__int64)&v26, v6);
      }
      else
      {
        v20 = guard_dispatch_icall_no_overrides(v3, v19);
      }
      v5 ^= v20;
    }
    v3 -= 2LL;
    v1 -= 2;
    v2 -= 8;
    --v4;
  }
  while ( v4 );
  v21 = ~v6;
  BYTE3(v26) = v5;
  HIBYTE(v26) = v21;
  BYTE2(v26) = BYTE1(v5);
  v22 = __ROR4__((v5 >> 8) | (v5 << 24), 8);
  BYTE1(v26) = v22;
  BYTE6(v26) = BYTE1(v21);
  v23 = __ROR4__((v21 >> 8) | (v21 << 24), 8);
  BYTE5(v26) = v23;
  BYTE4(v26) = __ROR4__(v23, 8);
  LOBYTE(v26) = __ROR4__(v22, 8);
  result = v26;
  *a1 = v26;
  return result;
}
