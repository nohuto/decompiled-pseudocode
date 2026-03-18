/*
 * XREFs of DxgkCreateNtObjectType @ 0x1401DD064
 * Callers:
 *     ?DpiCreateNtObjectTypes@@YAJXZ @ 0x14007C438 (-DpiCreateNtObjectTypes@@YAJXZ.c)
 *     CreateDxgkSharedObjectTypes @ 0x1401DCCC0 (CreateDxgkSharedObjectTypes.c)
 * Callees:
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

__int64 __fastcall DxgkCreateNtObjectType(
        PCWSTR SourceString,
        char a2,
        __m128i *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  __m128i v9; // xmm0
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-89h] BYREF
  _WORD v12[2]; // [rsp+30h] [rbp-79h] BYREF
  int v13; // [rsp+34h] [rbp-75h]
  int v14; // [rsp+38h] [rbp-71h]
  __m128i v15; // [rsp+3Ch] [rbp-6Dh]
  __int32 v16; // [rsp+4Ch] [rbp-5Dh]
  int v17; // [rsp+50h] [rbp-59h]
  __int64 v18; // [rsp+54h] [rbp-55h]
  int v19; // [rsp+5Ch] [rbp-4Dh]
  __int64 v20; // [rsp+60h] [rbp-49h]
  __int64 v21; // [rsp+68h] [rbp-41h]
  __int64 v22; // [rsp+70h] [rbp-39h]
  __int64 v23; // [rsp+78h] [rbp-31h]
  __int64 v24; // [rsp+80h] [rbp-29h]
  __int64 v25; // [rsp+88h] [rbp-21h]
  __int64 v26; // [rsp+90h] [rbp-19h]
  __int64 v27; // [rsp+98h] [rbp-11h]
  __int64 v28; // [rsp+A0h] [rbp-9h]

  v9 = *a3;
  v12[0] = 120;
  v17 = 0;
  v28 = 0LL;
  v14 = 256;
  v13 = a9;
  v15 = v9;
  v18 = 1LL;
  v21 = a4;
  v16 = _mm_srli_si128(v9, 8).m128i_i32[1];
  v12[1] = (unsigned __int8)((a4 != 0 ? 0x10 : 0) | (2 * a2) & 0x8F) | 0xD;
  v19 = 0;
  v20 = 0LL;
  v22 = a5;
  v23 = a6;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = a7;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return ObCreateObjectType(&DestinationString, v12, 0LL, a8);
}
