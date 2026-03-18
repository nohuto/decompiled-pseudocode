/*
 * XREFs of HvlpFastFlushPasidAddressList @ 0x140585410
 * Callers:
 *     HvlFlushPasid @ 0x1405833F0 (HvlFlushPasid.c)
 * Callees:
 *     HvlpCopyFlushVaList @ 0x14026A7D0 (HvlpCopyFlushVaList.c)
 *     HvcallFastExtended @ 0x14032C840 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

__int64 __fastcall HvlpFastFlushPasidAddressList(int a1, int a2, unsigned int a3, void *a4, char a5)
{
  __int16 v5; // bx
  unsigned int v6; // edi
  __int64 v8; // [rsp+30h] [rbp-98h]
  _DWORD v9[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v10; // [rsp+48h] [rbp-80h]
  _BYTE v11[96]; // [rsp+50h] [rbp-78h] BYREF

  v10 = 0LL;
  v5 = a3;
  v9[0] = a2;
  v9[1] = a1;
  v6 = 8 * a3 + 16;
  if ( a5 )
  {
    memmove(v11, a4, 8LL * a3);
    LODWORD(v10) = v10 | 1;
  }
  else
  {
    HvlpCopyFlushVaList(a3, (__int64 *)a4, 0, (__int64)v11);
  }
  LODWORD(v8) = 65697;
  HIDWORD(v8) = v5 & 0xFFF;
  return HvcallFastExtended(v8, (__int64)v9, v6, 0LL, 0);
}
