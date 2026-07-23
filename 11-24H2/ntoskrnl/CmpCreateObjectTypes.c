/*
 * XREFs of CmpCreateObjectTypes @ 0x140C48DC4
 * Callers:
 *     CmInitSystem1 @ 0x140C47010 (CmInitSystem1.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObCreateObjectType @ 0x1406F96E0 (ObCreateObjectType.c)
 */

__int64 CmpCreateObjectTypes()
{
  __int16 v1; // [rsp+20h] [rbp-39h] BYREF
  char v2; // [rsp+22h] [rbp-37h]
  char v3; // [rsp+23h] [rbp-36h]
  int v4; // [rsp+24h] [rbp-35h]
  int v5; // [rsp+28h] [rbp-31h]
  int v6; // [rsp+2Ch] [rbp-2Dh]
  int v7; // [rsp+30h] [rbp-29h]
  int v8; // [rsp+34h] [rbp-25h]
  int v9; // [rsp+38h] [rbp-21h]
  int v10; // [rsp+3Ch] [rbp-1Dh]
  int v11; // [rsp+44h] [rbp-15h]
  int v12; // [rsp+48h] [rbp-11h]
  __int64 v13; // [rsp+50h] [rbp-9h]
  __int64 v14; // [rsp+58h] [rbp-1h]
  _KAFFINITY_EX *(__fastcall *v15)(__int64, __int64, __int64, unsigned __int64); // [rsp+60h] [rbp+7h]
  _KAFFINITY_EX *(__fastcall *v16)(__int64); // [rsp+68h] [rbp+Fh]
  __int64 (__fastcall *v17)(__int64, POBJECT_TYPE *, struct _ACCESS_STATE *, unsigned __int8, int, const UNICODE_STRING *, __m128i *, __int64, __int64, __int64, __int64 *); // [rsp+70h] [rbp+17h]
  __int64 (__fastcall *v18)(ULONG_PTR *, int, DWORD *, void *, ULONG *, __int64, int, __int64); // [rsp+78h] [rbp+1Fh]
  __int64 (__fastcall *v19)(__int64, __int64, __int64, unsigned int, _DWORD *); // [rsp+80h] [rbp+27h]

  memset_0(&v1, 0, 0x78uLL);
  v13 = 0LL;
  v14 = 0LL;
  v3 |= 1u;
  v1 = 120;
  v9 = 983103;
  v10 = 983103;
  v5 = 48;
  v6 = 131097;
  v2 = v2 & 0xE2 | 0xD;
  v15 = CmpCloseKeyObject;
  v16 = CmpDeleteKeyObject;
  v17 = CmpParseKey;
  v18 = CmpSecurityMethod;
  v19 = CmpQueryKeyName;
  v7 = 131078;
  v8 = 131129;
  v12 = 112;
  v11 = 1;
  v4 = 256;
  return ObCreateObjectType((const UNICODE_STRING *)&CmpKeyTypeNameString, &v1, 0LL, (__int64)&CmKeyObjectType);
}
